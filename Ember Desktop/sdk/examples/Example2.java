//Copyright 2007 Ember Corporation. All rights reserved.

package com.ember.workbench.exampledecoder;

import java.text.ParseException;
import java.util.Map;

import com.ember.workbench.core.EventKey;
import com.ember.workbench.core.IEvent;
import com.ember.workbench.decoder.DecodedFrame;
import com.ember.workbench.decoder.DecodedPacket;
import com.ember.workbench.decoder.DecoderException;
import com.ember.workbench.decoder.payload.CustomDecoder;
import com.ember.workbench.decoder.payload.ICustomDecoder;
import com.ember.workbench.field.Field;
import com.ember.workbench.field.FieldModel;
import com.ember.workbench.field.FieldType;
import com.ember.workbench.field.StringFieldFormatter;

/**
 * Example of a more complex decoding.
 * 
 * Express interest in events where ZigBee APS profile ID matches 0xBEEF and
 * this packet has ZigBee security turned on.
 * 
 * Protocol is:
 * Byte 0 is a bitfield "Frame Control"
 *   bit 0: flag
 *   bit 1-2: type
 *   bit 3-7: value
 *   
 * Bytes 1-16: security key
 * 
 * Byte 17: integer value "security level", present only if security key is not
 *          all zeroes. If security key is ALL zeroes, then this byte is missing.
 *          
 * Byte 18: dummy byte, not decoded, present only if flag inside frame control
 *          is true
 *          
 * Byte 19-20: 2-byte value called "Security ID", present only
 *             if flag inside the frame control is true
 * 
 */
public class Example2 implements ICustomDecoder {

  // Frame Control byte
  private static final Field frameControl
    = CustomDecoder.makeIntField("Frame Control", "frameControl", 1);
  
  // Separate bits within frame control
  private static final Field frameFlag
    = FieldModel.instance().make(null, 
                                 EventKey.FRAME_CUSTOMPAYLOAD, 
                                 "Frame Flag, signifying the flag",
                                 "Frame Flag",
                                 "flag",
                                 "Long description of the frame flag",
                                 FieldType.INT,
                                 1,
                                 Field.LITTLE_ENDIAN,
                                 0x0001,
                                 null);
  
  // Human readable names for 4 values of frame type (2 bits)
  private static String[] frameTypeNames 
    = { "Type0", "Type1", "Type2", "Type3" };
  
  private static final Field frameType
    = FieldModel.instance().make(null, 
                                 EventKey.FRAME_CUSTOMPAYLOAD, 
                                 "Frame Type, signifying the type",
                                 "Frame Type",
                                 "type",
                                 "Long description of the frame type",
                                 FieldType.INT,
                                 1,
                                 Field.LITTLE_ENDIAN,
                                 0x0006,
                                 new StringFieldFormatter(frameTypeNames));
  
  private static final Field frameValue
  = FieldModel.instance().make(null, 
                               EventKey.FRAME_CUSTOMPAYLOAD, 
                               "Frame Value, signifying the value",
                               "Frame Value",
                               "value",
                               "Long description of the frame value",
                               FieldType.INT,
                               1,
                               Field.LITTLE_ENDIAN,
                               0x00F8,
                               null);

  // 16 bytes long security key
  private static final Field securityKey
    = CustomDecoder.makeBytesField("Security Key", "securityKey", 16);

  // Security level byte
  private static final Field securityLevel
    = CustomDecoder.makeIntField("Security Level", "securityLevel", 1);

  // Security id word
  private static final Field securityID
    = CustomDecoder.makeIntField("Security ID", "securityID", 2);

  
  
  /** Returns true if this decoder is interested in the event. */
  public boolean accept(IEvent event, DecodedPacket packet) {
    try {
      // Determine the profile id
      int profileId = event.data()
                           .getInt( EventKey.FRAME_ZIGBEEAPPLICATIONSUPPORT,
                                    "profileId" );
      // Determine if ZigBee security is turned on.
      boolean hasSecurity = event.data()
                                 .getBoolean( EventKey.FRAME_ZIGBEENETWORK, 
                                              "security");
      
      return ( hasSecurity && profileId == 0xBEEF );
    } catch (Exception e) { // Exception may be thrown, as frames may not exist
      return false;
    }
  }

  /** Decoding according to the rules */
  public void decode(IEvent event, DecodedFrame frame, DecodedPacket packet) throws DecoderException {
    frame.append(frameControl); // Frame control *must* be before the bits.
                                // If you do not have frame control, then you
                                // must put frame.skip() here.
    
    // Bitfields. Flag is needed later, so we use "decode" instead of "append"
    boolean flag = frame.decodeBoolean(frameFlag);
    frame.append(frameType);
    frame.append(frameValue);
    
    byte[] securityKeyBytes = (byte[])frame.decode(securityKey);
    
    boolean isSecurityKeyZeroes = true;
    for ( int i=0; i<securityKeyBytes.length; i++ ) 
      if ( securityKeyBytes[i] != 0x00 ) {
        isSecurityKeyZeroes = false;
        break;
      }
    
    if ( !isSecurityKeyZeroes ) { // Security level is present if key is not
                                  // all zeroes
      frame.append(securityLevel);
    }
    
    if ( flag ) { // if flag bit is on, then there is more data here.
      frame.skip(1); // Skip one byte. This is the dummy byte in the protocol
      frame.append(securityID);
    }
  }

  public void setDecoderOption(String key, String value) throws ParseException {
  }

  @Override
  public Map<String, String> getDecoderOptionConstraints(String key) {
    return null;
  }

}
