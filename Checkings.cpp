//---------------------------------------------------------------------------


#pragma hdrstop

#include "Checkings.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)


#include "IAPO2_ARM_READER.h"


AnsiString Checkings::CheckPassport(AnsiString series, AnsiString number)
{
	AnsiString report;
        _di_IAPO2_ARM_READER reader;	// ��� SOAP-��������
	try
        {
		reader = GetIAPO2_ARM_READER();
        	bool bad = reader->PassportIsBad(series, number);
		report = bad ? "Passport is bad." : "Passport isn't bad.";
        }
        catch (...)
        {
        	report = "�� ������� ���������.";
        }
        delete reader;
	return report;
}