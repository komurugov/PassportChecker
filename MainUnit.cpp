//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}


#include "Checkings.h"


//---------------------------------------------------------------------------
void __fastcall TMainForm::ButtonCheckClick(TObject *Sender)
{
	MemoResults->Clear();
	MemoResults->Lines->Add(Checkings::CheckPassport(MaskEditSeries->Text, MaskEditNumber->Text));
}
//---------------------------------------------------------------------------
