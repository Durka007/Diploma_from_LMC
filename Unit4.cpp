//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
AnsiString a,b,c;
a = DataModule2->ADOQuery3->Lookup("Naz_Gost",ComboBox3->Text,"ID_Naz_GOST");
b = DataModule2->ADOQuery4->Lookup("Raz_frakcii",ComboBox4->Text,"ID_Raz_frakcii");
c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
if(Button2->Caption == "Загрузить"){
	DataModule2->ADOQuery2->SQL->Text="insert into registret_prob \
	(ID_Naz_GOST,Nom_GOST,ID_Raz_frakcii,Sdal,Data_registrasii,ID_otdela)\
	values ('"+a+"','"+Edit2->Text+"','"+b+"','"+Edit1->Text+"','"+FormatDateTime("yyyy-MM-dd",DateTimePicker1->Date)+"','"+c+"')";
	DataModule2->ADOQuery2->ExecSQL();DataModule2->ADOQuery2->Close();
	SS(StrToInt(c));}

else {
	  r = 0;
	  DataModule2->ADOQuery2->SQL->Text="UPDATE registret_prob     \
	  set ID_Naz_GOST = '"+a+"', Nom_GOST ='"+Edit2->Text+"',ID_Raz_frakcii  = '"+b+"',\
	  Sdal = '"+Edit1->Text+"',Data_registrasii = '"+FormatDateTime("yyyy-MM-dd",DateTimePicker1->Date)+"'\
	  where  ID_probi = :k";
	  DataModule2->ADOQuery2->Parameters->ParamByName("k")->Value = q;
	  DataModule2->ADOQuery2->ExecSQL();
	  DataModule2->ADOQuery2->Close();
	 ot();

	}
DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c \
ORDER BY a.ID_probi Desc Limit :k";
	DataModule2->ADOQuery2->Parameters->ParamByName("k")->Value = vbr();
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
	DataModule2->ADOQuery2->Open();

}

//---------------------------------------------------------------------------


void __fastcall TForm4::ComboBox3Change(TObject *Sender)
{
DataModule2->ADOQuery3->Close();
DataModule2->ADOQuery3->SQL->Text = "Select * From naz_gost where ID_otdela = '"+DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela")+"'";
DataModule2->ADOQuery3->Open();
ComboBox4->Items->Clear();
DataModule2->ADOQuery4->First();
AnsiString c;
c = DataModule2->ADOQuery3->Lookup("Naz_Gost",ComboBox3->Text,"Nom_Gost");
Edit2->Text = c;

for(int i =0;i<DataModule2->ADOQuery4->RecordCount;i++ ) {
		if(DataModule2->ADOQuery4->FieldByName("ID_otdela")->Value == DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela") && DataModule2->ADOQuery4->FieldByName("ID_Naz_GOST")->Value == DataModule2->ADOQuery3->Lookup("Naz_Gost",ComboBox3->Text,"ID_Naz_GOST")){
		ComboBox4->AddItem(DataModule2->ADOQuery4->FieldByName("Raz_frakcii")->AsString, (TObject*)DataModule2->ADOQuery4->FieldByName("ID_Raz_frakcii")->AsInteger);
			 }
DataModule2->ADOQuery4->Next(); }

}
//---------------------------------------------------------------------------



void __fastcall TForm4::FormCreate(TObject *Sender)
{
p = 0;
ComboBox1->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery5->RecordCount;i++ )
{ComboBox1->AddItem(DataModule2->ADOQuery5->FieldByName("otdel")->AsString, (TObject*)DataModule2->ADOQuery5->FieldByName("ID_otdela")->AsInteger);
DataModule2->ADOQuery5->Next(); }


}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox1Change(TObject *Sender)
{
DataModule2->ADOQuery3->Close();
DataModule2->ADOQuery3->SQL->Text = "Select * From naz_gost where ID_otdela = '"+DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela")+"'";
DataModule2->ADOQuery3->Open();
Panel1->Visible= true;
ComboBox4->Items->Clear();
ComboBox4->Text = "";
int c;
c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
DataModule2->ADOQuery3->First();
ComboBox3->Items->Clear();
ComboBox3->Text = "";
Edit2->Text =  "";
for(int i =0;i<DataModule2->ADOQuery3->RecordCount;i++ ) {
	if (DataModule2->ADOQuery3->FieldByName("ID_otdela")->AsInteger == c) {
			ComboBox3->AddItem(DataModule2->ADOQuery3->FieldByName("Naz_Gost")->AsString, (TObject*)DataModule2->ADOQuery3->FieldByName("ID_Naz_GOST")->AsInteger);

		}
DataModule2->ADOQuery3->Next(); }
DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c \
ORDER BY a.ID_probi Desc Limit :k";
	DataModule2->ADOQuery2->Parameters->ParamByName("k")->Value = vbr();
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
	DataModule2->ADOQuery2->Open();
	ot();
    r=0;

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
if (r==1) {
Button2->Caption = "Изменить";
 DBGrid1->Enabled = false;
}
else
{
Button2->Caption = "Загрузить";
 DBGrid1->Enabled = true;
}
if(ComboBox1->Text != "" && ComboBox3->Text!= "" && ComboBox4->Text!= "" && Edit1->Text!=  "") {
Button2->Enabled = true;
}else
Button2->Enabled = false;
if(DataModule2->ADOQuery2->RecordCount == 0)
Button4->Enabled = false;
else
Button4->Enabled = true;
if(ComboBox3->Text!= "")
ComboBox4->Enabled = True;
else
ComboBox4->Enabled = False;

}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button4Click(TObject *Sender)
{
int x,c;
x = DataModule2->ADOQuery2->FieldByName("ID_probi")->Value;
c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
DataModule2->ADOQuery2->SQL->Text = "Delete From registret_prob where ID_probi = :x";
DataModule2->ADOQuery2->Parameters->ParamByName("x")->Value = x;
DataModule2->ADOQuery2->ExecSQL();
Del(c);
DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c \
ORDER BY a.ID_probi Desc Limit :k";
	DataModule2->ADOQuery2->Parameters->ParamByName("k")->Value = vbr();
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
DataModule2->ADOQuery2->Open();
}
//---------------------------------------------------------------------------

void TForm4::SS(const int  c)    //Функция для определения
{
 switch(c) {
	case 1:
	t1++;
	break;
	case 2:
	t2++;
	break;
	case 3:
	t3++;
	break;
 }
}
//---------------------------------------------------------------------------
const int TForm4::vbr()     // Функция выбора
{
   int c;
	c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
	 switch(c) {
		case 1:
		return(t1);
		break;
		case 2:
		return(t2);
		break;
		case 3:
		return(t3);
		break;
 }

}
//---------------------------------------------------------------------------
void TForm4::Del(const int  c)    //Функция для удаления
{
 switch(c) {
	  case 1:
	  t1--;
	  break;
	  case 2:
	  t2--;
	  break;
	  case 3:
	  t3--;
	  break;
 }
}
//---------------------------------------------------------------------------
void TForm4::ot()
{
  ComboBox3->Text  = "";
  ComboBox4->Text  = "";
  Edit2->Text= "";
  Edit1->Text = "";

}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button3Click(TObject *Sender)
{
ot();
Form6->Show();
Form4->Hide();

}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox3KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox3KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit2KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox4KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox4KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------
void TForm4::Comb()
{
if(DataModule2->ADOQuery2->RecordCount != 0) {
 r = 1;
 q = DataModule2->ADOQuery2->FieldByName("ID_probi")->Value;
 ComboBox3->Text = DataModule2->ADOQuery2->FieldByName("Naz_Gost")->AsString;
 Edit2->Text = DataModule2->ADOQuery2->FieldByName("Nom_GOST")->AsString;
 ComboBox4->Text = DataModule2->ADOQuery2->FieldByName("Raz_frakcii")->AsString;
 Edit1->Text = DataModule2->ADOQuery2->FieldByName("Sdal")->AsString;
 DateTimePicker1->Date  = DataModule2->ADOQuery2->FieldByName("Data_registrasii")->AsDateTime;
  DataModule2->ADOQuery3->Close();
		DataModule2->ADOQuery3->SQL->Text = "Select * From naz_gost where ID_otdela = '"+DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela")+"'";
		DataModule2->ADOQuery3->Open();
		DataModule2->ADOQuery4->First();
        for(int i =0;i<DataModule2->ADOQuery4->RecordCount;i++ ) {
		if(DataModule2->ADOQuery4->FieldByName("ID_otdela")->Value == DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela") && DataModule2->ADOQuery4->FieldByName("ID_Naz_GOST")->Value == DataModule2->ADOQuery3->Lookup("Naz_Gost",ComboBox3->Text,"ID_Naz_GOST")){
		ComboBox4->AddItem(DataModule2->ADOQuery4->FieldByName("Raz_frakcii")->AsString, (TObject*)DataModule2->ADOQuery4->FieldByName("ID_Raz_frakcii")->AsInteger);
			 }
DataModule2->ADOQuery4->Next(); }
 }

 }
 //---------------------------------------------------------------------------


void __fastcall TForm4::Button5Click(TObject *Sender)
{
ot();
r=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::DBGrid1CellClick(TColumn *Column)
{
Comb();
}
//---------------------------------------------------------------------------

