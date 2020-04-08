//Copyright 2007 Ember Corporation. All rights reserved.

package com.ember.workbench.exampledecoder;

import java.text.ParseException;
import java.util.Map;

import com.ember.workbench.core.BasicEvent;
import com.ember.workbench.core.EventKey;
import com.ember.workbench.core.IEvent;
import com.ember.workbench.decoder.DecodedFrame;
import com.ember.workbench.decoder.DecodedPacket;
import com.ember.workbench.decoder.DecoderException;
import com.ember.workbench.decoder.payload.CustomDecoder;
import com.ember.workbench.decoder.payload.ICustomDecoder;
import com.ember.workbench.field.Field;
import com.ember.workbench.field.Frame;

/**
 * This example shows a decode which performs the following simple decoding:
 *    express interest in events where ZigBee APS profile ID matches 0xABCD
 *    decode first byte if payload as “event type”, which is a one-byte integer.
 *    if eventType is 0, then decode next bytes as an EUI64 for “protocolOriginator”.
 *    If eventType is 1, then decode next byte as a “key” and next two bytes as a “value”.
 *    If eventType is 2, then decode next 8 bytes as four two-byte integers, called “data0” to “data3”.
 * 
 */
public class Example1 implements ICustomDecoder {

  // Create one-byte int field for event type
  private static Field eventTypeField 
    = CustomDecoder.makeIntField("Event Type", "eventType", 1);
  
  // Create EUI64 field for protocol originator
  private static Field protocolOriginatoField
    = CustomDecoder.makeEUI64Field("Protocol Originator", "protocolOriginator");

  // Create one-byte int field for key
  private static Field keyField 
    = CustomDecoder.makeIntField("Key", "key", 1);
  
  // Create two-byte int field for value
  private static Field valueField 
    = CustomDecoder.makeIntField("Value", "value", 2);
  
  // Create two-byte int field for data0
  private static Field data0Field 
    = CustomDecoder.makeIntField("Data 0", "data0", 2);
  
  // Create two-byte int field for data1
  private static Field data1Field 
    = CustomDecoder.makeIntField("Data 1", "data1", 2);
  
  // Create two-byte int field for data2
  private static Field data2Field 
    = CustomDecoder.makeIntField("Data 2", "data2", 2);
  
  // Create two-byte int field for data3
  private static Field data3Field 
    = CustomDecoder.makeIntField("Data 3", "data3", 2);
  

  /** 
   * Returns true if the profileId will match 0xABCD
   */
  public boolean accept(IEvent event, DecodedPacket packet) {
    try {
      int profileId = event.data()
                           .getInt( EventKey.FRAME_ZIGBEEAPPLICATIONSUPPORT,
                                    "profileId" );
      return ( profileId == 0xABCD );
    } catch (Exception e) { // Exception may be thrown, as APS frame may not be there
      return false;
    }
  }

  /**
   * This method decodes the frame according to rules.
   */
  public void decode(IEvent event, DecodedFrame frame, DecodedPacket packet) throws DecoderException {
    int eventTypeValue = frame.decodeInt(eventTypeField);
    switch(eventTypeValue) {
    case 0:
      ((BasicEvent)event).setSummary("Originator event"); // Sets the summary
      frame.append(protocolOriginatoField);
      break;
    case 1:
      ((BasicEvent)event).setSummary("Key/value event"); // Sets the summary
      frame.append(keyField);
      frame.append(valueField);
      break;
    case 2: 
      ((BasicEvent)event).setSummary("Data event"); // Sets the summary
      frame.append(data0Field);
      frame.append(data1Field);
      frame.append(data2Field);
      frame.append(data3Field);
      break;
    default: // In this case, throw an exception within this frame.
      throw new DecoderException("Invalid event type",
                                 Frame.get(EventKey.FRAME_CUSTOMPAYLOAD),
                                 frame);
    }
  }

  public void setDecoderOption(String key, String value) throws ParseException {
  }

  @Override
  public Map<String, String> getDecoderOptionConstraints(String key) {
    return null;
  }
}
