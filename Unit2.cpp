//---------------------------------------------------------------------------


#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
__fastcall TDataModule2::TDataModule2(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TDataModule2::ADOQuery2FilterRecord(TDataSet *DataSet, bool &Accept)

{
AnsiString s1;
s1=ADOQuery2->FieldByName("ID_probi")->AsString.SubString(1,StrLen(Form6->ed.c_str()));
Accept=s1==Form6->ed;
}
//---------------------------------------------------------------------------

