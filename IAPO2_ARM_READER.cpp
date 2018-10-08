// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : D:\YD\bms\IAPO2_ARM_READER.xml
// Version  : 1.0
// (08.10.2018 13:41:09 - $Revision:   1.0.1.0.1.81  $)
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#if !defined(__IAPO2_ARM_READER_h__)
#include "IAPO2_ARM_READER.h"
#endif



namespace NS_IAPO2_ARM_READER {

_di_IAPO2_ARM_READER GetIAPO2_ARM_READER(bool useWSDL, AnsiString addr)
{
  static const char* defWSDL= "";
  static const char* defURL = "https://apo.rgs.ru/apo2_arm_reader.dll/soap/IAPO2_ARM_READER";
  static const char* defSvc = "IAPO2_ARM_READERservice";
  static const char* defPrt = "IAPO2_ARM_READERPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  THTTPRIO* rio = new THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_IAPO2_ARM_READER service;
  rio->QueryInterface(service);
  if (!service)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types used by invoke the SOAP
// Service.
// ************************************************************************ //
static void RegTypes()
{
  /* IAPO2_ARM_READER */
  InvRegistry()->RegisterInterface(__interfaceTypeinfo(IAPO2_ARM_READER), L"urn:APO2_ARM_READER_c-IAPO2_ARM_READER", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__interfaceTypeinfo(IAPO2_ARM_READER), L"urn:APO2_ARM_READER_c-IAPO2_ARM_READER#%operationName%");
}
#pragma startup RegTypes 32

};     // IAPO2_ARM_READER

 