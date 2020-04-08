   **** Ember Public EXI implementation ****
   
Thank you for downloading the Ember's open-source EXI implementation!
We hope you find it useful.   


1. Introduction

The purpose of this library is to show an example implementation of the EXI 
standard, as specified by the W3C (http://www.w3.org/TR/exi/).

As this library is mostly intended to be used for the ZigBee SE 2.0 standard, 
it was tested and used mostly just with the SE 2.0 XML schema. We recommend 
that you download the schema from the ZigBee website and use it. There are no 
guarantees that the library will work with any other XSD files, since there are 
known limitations in the implementation.

The link to the download section of the SE 2.0 is:
   http://zigbee.org/Standards/Downloads.aspx#821 

Library uses Apache xerces which is redistributed in the lib/ directory, 
and requires recent versions of java 1.6.

Please be aware that this library has many bugs and limitations, and is 
released without any guarantees. It is intended to be used for the purpose
of better understanding EXI.

This library has also not been validated against any other EXI implementation
for correctness or has not been certified in any way to be 100% EXI compliant.


2. EXI details

This library does not yet cover all the aspects of the EXI spec. EXI has many 
options, and only few are currently supported. The list of the supported options
is as follows:
  
  alignment: only 'bit-packed' is supported. 'byte-alignment' and 
             'pre-compression' are not supported.
  compression: only 'false' is supported.
  strict: only 'true' is supported.
  fragment: only 'false' is supported.
  preserve: only 'all false' are supported.
  selfContained: only 'false' is supported.
  schemaId: empty.
  datatypeRepresentationMap: empty.
  blockSize: compression is not supported, so field is not used.
  valueMaxLength: any value is supported, default is 0.
  valuePartitionCapacity: any value is supported, default is 0. 
  
The library specifically does not support schema-informed non-strict mode.

 
3. Examples

You can run the EXI examples out of the box, by executing:
   java -jar exi_ember_VERSION.jar
It will print out the usage arguments from the Main class.

For example, assuming you are using SE 2.0 schema sep_106049r12ZB.xsd,
you can use an example test.xml that is provided:

Execute:
   java -jar exi_ember_0.99.1.jar -encode test.xml -to x.exi -xsd sep_106049r12ZB.xsd
and file x.exi contains text representation of EXI bits.

Execute:
   java -jar exi_ember_0.99.1.jar -decode x.exi -to x.xml -xsd sep_106049r12ZB.xsd
and file x.xml will contain XML as decoded from the given EXI bits.
  

4. License

The library is released under FreeBSD license, so you may use and redistribute 
it with your products. Full text of the license is in file 'license.txt'.

