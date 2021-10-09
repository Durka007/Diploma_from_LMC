//---------------------------------------------------------------------------
#include <vcl.h>
#include "md5.h"
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{

DataModule2->ADOQuery19->First();
for(int i =0;i<DataModule2->ADOQuery19->RecordCount;i++ )
{
if(DataModule2->ADOQuery19->FieldByName("Fam")->AsString ==Edit1->Text)
	if(DataModule2->ADOQuery19->FieldByName("Password")->AsString == MD5(Edit2->Text))
		{
          Form3->Close();
		  Form4->Show();
        }
DataModule2->ADOQuery19->Next();
}
}
//---------------------------------------------------------------------------






