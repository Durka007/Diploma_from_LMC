//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"

#include "iostream"

#include <windows.h>
#include <Shellapi.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm6::ComboBox1Change(TObject *Sender)
{
clear();
int c;
c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela,a.ID_Naz_GOST  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c ";
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
	DataModule2->ADOQuery2->Open();
Comb();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormCreate(TObject *Sender)
{

m = 0;

StringGrid2->Cells[0][0] = "Ќазвание";
StringGrid2->Cells[1][0] = "«еначение";
StringGrid2->Cells[2][0] = "min";
StringGrid2->Cells[3][0] = "max";

DateTimePicker2->Date=Now();
DataModule2->ADOQuery5->First();
ComboBox1->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery5->RecordCount;i++ )
{ComboBox1->AddItem(DataModule2->ADOQuery5->FieldByName("otdel")->AsString, (TObject*)DataModule2->ADOQuery5->FieldByName("ID_otdela")->AsInteger);
DataModule2->ADOQuery5->Next(); }

DataModule2->ADOQuery10->First();
ComboBox2->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery10->RecordCount;i++ )
{ComboBox2->AddItem(DataModule2->ADOQuery10->FieldByName("Moroz")->AsString, (TObject*)DataModule2->ADOQuery10->FieldByName("ID_moroz")->AsInteger);

DataModule2->ADOQuery10->Next(); }

DataModule2->ADOQuery11->First();
ComboBox3->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery11->RecordCount;i++ )
{ComboBox3->AddItem(DataModule2->ADOQuery11->FieldByName("Prochnost")->AsString, (TObject*)DataModule2->ADOQuery11->FieldByName("ID_Prochnost")->AsInteger);
DataModule2->ADOQuery11->Next(); }

DataModule2->ADOQuery12->First();
ComboBox4->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery12->RecordCount;i++ )
{ComboBox4->AddItem(DataModule2->ADOQuery12->FieldByName("Sod_met_cha")->AsString, (TObject*)DataModule2->ADOQuery12->FieldByName("ID_Sod_met_cha")->AsInteger);
DataModule2->ADOQuery12->Next(); }

DataModule2->ADOQuery13->First();
ComboBox5->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery13->RecordCount;i++ )
{ComboBox5->AddItem(DataModule2->ADOQuery13->FieldByName("Stiraemost")->AsString, (TObject*)DataModule2->ADOQuery13->FieldByName("ID_IStiraemost")->AsInteger);
DataModule2->ADOQuery13->Next(); }

DataModule2->ADOQuery14->First();
ComboBox6->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery14->RecordCount;i++ )
{ComboBox6->AddItem(DataModule2->ADOQuery14->FieldByName("Soderjanie_slab_shastit")->AsString, (TObject*)DataModule2->ADOQuery14->FieldByName("ID_Soderjanie_slab_shastit")->AsInteger);
DataModule2->ADOQuery14->Next(); }

DataModule2->ADOQuery15->First();
ComboBox7->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery15->RecordCount;i++ )
{ComboBox7->AddItem(DataModule2->ADOQuery15->FieldByName("Soderjanie_polividnih_and_glinistih")->AsString, (TObject*)DataModule2->ADOQuery15->FieldByName("ID_Soderjanie_polividnih_and_glinistih")->AsInteger);
DataModule2->ADOQuery15->Next(); }

DataModule2->ADOQuery16->First();
ComboBox8->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery16->RecordCount;i++ )
{ComboBox8->AddItem(DataModule2->ADOQuery16->FieldByName("Activ")->AsString, (TObject*)DataModule2->ADOQuery16->FieldByName("ID_activ")->AsInteger);
DataModule2->ADOQuery16->Next(); }

DataModule2->ADOQuery17->First();
ComboBox10->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery17->RecordCount;i++ )
{ComboBox10->AddItem(DataModule2->ADOQuery17->FieldByName("Forma_zerna")->AsString, (TObject*)DataModule2->ADOQuery17->FieldByName("ID_Forma_zerna")->AsInteger);
DataModule2->ADOQuery17->Next(); }

DataModule2->ADOQuery18->First();
ComboBox11->Items->Clear();
for(int i =0;i<DataModule2->ADOQuery18->RecordCount;i++ )
{ComboBox11->AddItem(DataModule2->ADOQuery18->FieldByName("Usoihevost")->AsString, (TObject*)DataModule2->ADOQuery18->FieldByName("ID_Usoihevost")->AsInteger);
DataModule2->ADOQuery18->Next(); }
}
//---------------------------------------------------------------------------




void __fastcall TForm6::DBGrid1CellClick(TColumn *Column)
{
Comb();
 }
//---------------------------------------------------------------------------



void __fastcall TForm6::Button2Click(TObject *Sender)
{       //доработать добавление табельного номера
int w = DataModule2->ADOQuery9->Lookup("Rasev",StringGrid2->Cells[0][1],"ID_raseva_sit");
if(f ==0) {
for(int i = 1;i<k;i++)
	{

   DataModule2->ADOQuery8->SQL->Text="insert into rasev \
   (ID_probi,ID_raseva_sit,Rzult)\
	values ('"+DataModule2->ADOQuery2->FieldByName("ID_probi")->Value+"','"+w+"','"+StringGrid2->Cells[1][i]+"')" ;
	DataModule2->ADOQuery8->ExecSQL();


   }


	  }
  else {
  int p = 0;
  DataModule2->ADOQuery8->First();
  for(int i = 0;i<DataModule2->ADOQuery8->RecordCount;i++){
   if(DataModule2->ADOQuery2->FieldByName("ID_probi")->Value == DataModule2->ADOQuery8->FieldByName("ID_probi")->Value )
		{
		p = DataModule2->ADOQuery8->FieldByName("ID_raseva")->Value;
		break;
		}

		 DataModule2->ADOQuery8->Next();
															}
  for(int i = 1;i<k;i++)
		{

	   DataModule2->ADOQuery8->SQL->Text="UPDATE rasev \
	   set  Rzult = '"+StringGrid2->Cells[1][i]+"'\
	   where ID_raseva = :p" ;
	   DataModule2->ADOQuery8->Parameters->ParamByName("p")->Value = p;
	   p++;
	DataModule2->ADOQuery8->ExecSQL();
		}
	  f = 0;
	  p = 0;


  }
  if(f1 ==0) {
	DataModule2->ADOQuery1->SQL->Clear();
	   DataModule2->ADOQuery1->SQL->Add("insert into laboratoria\
	(ID_probi,ID_moroz,ID_Prochno,ID_Sod_met_cha,ID_IStiraemost,ID_Soderjanie_slab_shastit,ID_Soderjanie_polividnih_and_glinistih, \
	ID_activ,ID_Forma_zerna,ID_Usoihevost,Data_prov)\
	values ('"+DataModule2->ADOQuery2->FieldByName("ID_probi")->Value+"',");

		if(ComboBox2->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery10->Lookup("Moroz",ComboBox2->Text,"ID_moroz")+"',");


		if(ComboBox3->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery11->Lookup("Prochnost",ComboBox3->Text,"ID_Prochnost")+"',");


		if(ComboBox4->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery12->Lookup("Sod_met_cha",ComboBox4->Text,"ID_Sod_met_cha")+"',");


		if(ComboBox5->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery13->Lookup("Stiraemost",ComboBox5->Text,"ID_IStiraemost")+"',");


		if(ComboBox6->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery14->Lookup("Soderjanie_slab_shastit",ComboBox6->Text,"ID_Soderjanie_slab_shastit")+"',");


		if(ComboBox7->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery15->Lookup("Soderjanie_polividnih_and_glinistih",ComboBox7->Text,"ID_Soderjanie_polividnih_and_glinistih")+"',");


		if(ComboBox8->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery16->Lookup("Activ",ComboBox8->Text,"ID_activ")+"',");


		if(ComboBox10->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery17->Lookup("Forma_zerna",ComboBox10->Text,"ID_Forma_zerna")+"',");


		if(ComboBox10->Text == "")
		DataModule2->ADOQuery1->SQL->Add("Null,");
		else
		DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery18->Lookup("Usoihevost",ComboBox11->Text,"ID_Usoihevost")+"',");
		DataModule2->ADOQuery1->SQL->Add("'"+FormatDateTime("yyyy-MM-dd",DateTimePicker1->Date)+"')");

	  DataModule2->ADOQuery1->ExecSQL();
  }
  else
  {
   DataModule2->ADOQuery1->SQL->Clear();
   DataModule2->ADOQuery1->SQL->Add("UPDATE laboratoria set ID_moroz = ") ;
		if(ComboBox2->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery10->Lookup("Moroz",ComboBox2->Text,"ID_moroz")+"',");

   DataModule2->ADOQuery1->SQL->Add(" ID_Prochno = ") ;

		if(ComboBox3->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery11->Lookup("Prochnost",ComboBox3->Text,"ID_Prochnost")+"',");

   DataModule2->ADOQuery1->SQL->Add(" ID_Sod_met_cha = ");

		if(ComboBox4->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery12->Lookup("Sod_met_cha",ComboBox4->Text,"ID_Sod_met_cha")+"',");

   DataModule2->ADOQuery1->SQL->Add(" ID_IStiraemost = ");
		if(ComboBox5->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery13->Lookup("Stiraemost",ComboBox5->Text,"ID_IStiraemost")+"',");
   DataModule2->ADOQuery1->SQL->Add(" ID_Soderjanie_slab_shastit = ");

		if(ComboBox6->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery14->Lookup("Soderjanie_slab_shastit",ComboBox6->Text,"ID_Soderjanie_slab_shastit")+"',");

   DataModule2->ADOQuery1->SQL->Add(" ID_Soderjanie_polividnih_and_glinistih = ");

        if(ComboBox7->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery15->Lookup("Soderjanie_polividnih_and_glinistih",ComboBox7->Text,"ID_Soderjanie_polividnih_and_glinistih")+"',");

   DataModule2->ADOQuery1->SQL->Add("ID_activ = ");

		if(ComboBox8->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery16->Lookup("Activ",ComboBox8->Text,"ID_activ")+"',");

   DataModule2->ADOQuery1->SQL->Add("ID_Forma_zerna = ");

		if(ComboBox10->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null,");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery17->Lookup("Forma_zerna",ComboBox10->Text,"ID_Forma_zerna")+"',");

   DataModule2->ADOQuery1->SQL->Add("ID_Usoihevost = ");

		if(ComboBox10->Text == "")
			DataModule2->ADOQuery1->SQL->Add("Null");
		else
			DataModule2->ADOQuery1->SQL->Add("'"+DataModule2->ADOQuery18->Lookup("Usoihevost",ComboBox11->Text,"ID_Usoihevost")+"'");

	DataModule2->ADOQuery1->SQL->Add("where ID_opita =:o");
	DataModule2->ADOQuery1->Parameters->ParamByName("o")->Value = id;
	DataModule2->ADOQuery1->ExecSQL();
	f1=0;
  }
  w = 0;
  DataModule2->ADOQuery8->SQL->Text = "Select * From rasev";
  DataModule2->ADOQuery8->Open();
  DataModule2->ADOQuery1->SQL->Text="Select * From laboratoria ";
  DataModule2->ADOQuery1->Open();

 }

//---------------------------------------------------------------------------
/*int TForm6::Comb(TComboBox *combo_box)
{
 if(combo_box->Text == "")
 return(NULL);
 else
 return(NULL);
}        */

//---------------------------------------------------------------------------

void __fastcall TForm6::Timer1Timer(TObject *Sender)
{
if(DataModule2->ADOQuery2->RecordCount == 0)
{
Button2->Enabled = false;
Button3->Enabled = false;
CheckBox2->Enabled = false;}
else     {
Button3->Enabled = true;
Button2->Enabled = true;
CheckBox2->Enabled = true;}
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button3Click(TObject *Sender)
{
int x;
x = DataModule2->ADOQuery2->FieldByName("ID_probi")->Value;
DataModule2->ADOQuery1->SQL->Text = "Delete From laboratoria where ID_probi = :x";
DataModule2->ADOQuery1->Parameters->ParamByName("x")->Value = x;
DataModule2->ADOQuery1->ExecSQL();
DataModule2->ADOQuery1->SQL->Text="Select * From laboratoria ";
DataModule2->ADOQuery1->Open();
DataModule2->ADOQuery8->SQL->Text = "Delete From rasev where ID_probi = :x";
DataModule2->ADOQuery8->Parameters->ParamByName("x")->Value = x;
DataModule2->ADOQuery8->ExecSQL();
DataModule2->ADOQuery8->SQL->Text = "Select * From rasev";
DataModule2->ADOQuery8->Open();
DataModule2->ADOQuery2->SQL->Text = "Delete From registret_prob where ID_probi = :x";
DataModule2->ADOQuery2->Parameters->ParamByName("x")->Value = x;
DataModule2->ADOQuery2->ExecSQL();
clear();
int c;
c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela,a.ID_Naz_GOST  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c ";
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
	DataModule2->ADOQuery2->Open();
}
//---------------------------------------------------------------------------


void __fastcall TForm6::CheckBox2Click(TObject *Sender)
{
clear();
int c;
c = DataModule2->ADOQuery5->Lookup("otdel",ComboBox1->Text,"ID_otdela");
if(CheckBox2->Checked ==true)
{

DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela,a.ID_Naz_GOST  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c and Data_registrasii BETWEEN '"+FormatDateTime("yyyy-MM-dd",DateTimePicker1->Date)+"' And '"+FormatDateTime("yyyy-MM-dd",DateTimePicker3->Date)+"'";
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
	DataModule2->ADOQuery2->Open();
}
else
{
DataModule2->ADOQuery2->SQL->Text="SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,a.Data_registrasii ,a.ID_otdela,a.ID_Naz_GOST  \
FROM registret_prob a,naz_gost b ,raz_frakcii c \
where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_Raz_frakcii and  a.ID_otdela = :c ";
	DataModule2->ADOQuery2->Parameters->ParamByName("c")->Value = c;
	DataModule2->ADOQuery2->Open();
}
						StringGrid2->Enabled = true;
Panel1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::DBGrid1MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
 Comb();
}
//---------------------------------------------------------------------------
void TForm6::Comb()  //функци€ ввывода
{
 if(DataModule2->ADOQuery2->RecordCount != 0)
{
int x = DataModule2->ADOQuery2->FieldByName("ID_probi")->Value;
if(m != x )
{
m = DataModule2->ADOQuery2->FieldByName("ID_probi")->Value;

StringGrid2->Enabled = true;
Panel1->Enabled = true;
f = 0;
DataModule2->ADOQuery9->First();
k=1;
	clear();
	for(int i = 0;i<DataModule2->ADOQuery9->RecordCount;i++) {
	if(DataModule2->ADOQuery2->FieldByName("ID_Naz_GOST")->Value == DataModule2->ADOQuery9->FieldByName("ID_Naz_GOST")->Value){
		StringGrid2->Cells[2][k] =  DataModule2->ADOQuery9->FieldByName("min")->AsString;
		StringGrid2->Cells[3][k] =  DataModule2->ADOQuery9->FieldByName("max")->AsString;
		StringGrid2->Cells[0][k++]= DataModule2->ADOQuery9->FieldByName("Rasev")->AsAnsiString;
		 }
		DataModule2->ADOQuery9->Next();
	}

   DataModule2->ADOQuery8->First();
  for(int i = 0;i<DataModule2->ADOQuery8->RecordCount;i++){
   if(DataModule2->ADOQuery2->FieldByName("ID_probi")->Value == DataModule2->ADOQuery8->FieldByName("ID_probi")->Value )
   {
   f = 1;
	 for(int i = 1;i<k;i++)
	{
	StringGrid2->Cells[1][i] =  DataModule2->ADOQuery8->FieldByName("Rzult")->AsString;
	DataModule2->ADOQuery8->Next();
	}
	break; }
	DataModule2->ADOQuery8->Next();
  }
  StringGrid2->RowCount = k;
  StringGrid2->Height = 24*k+k+5;
   DataModule2->ADOQuery1->First();
   DataModule2->ADOQuery10->First();
   DataModule2->ADOQuery11->First();
   DataModule2->ADOQuery12->First();
   DataModule2->ADOQuery13->First();
   DataModule2->ADOQuery14->First();
   DataModule2->ADOQuery15->First();
   DataModule2->ADOQuery16->First();
   DataModule2->ADOQuery17->First();
   DataModule2->ADOQuery18->First();
   for(int i = 0;i<DataModule2->ADOQuery1->RecordCount;i++){
	if(DataModule2->ADOQuery2->FieldByName("ID_probi")->Value == DataModule2->ADOQuery1->FieldByName("ID_probi")->Value )
	  {
	  f1=1;
	  id = DataModule2->ADOQuery1->FieldByName("ID_opita")->Value;
		if(DataModule2->ADOQuery1->FieldByName("ID_moroz")->AsString != "")
			for (int j = 0;j<DataModule2->ADOQuery10->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_moroz")->Value == DataModule2->ADOQuery10->FieldByName("ID_moroz")->Value )
					{ComboBox2->Text = DataModule2->ADOQuery10->FieldByName("Moroz")->AsString;break;}
			DataModule2->ADOQuery10->Next();
			}

		if(DataModule2->ADOQuery1->FieldByName("ID_Prochno")->AsString  != "")
			for (int j = 0;j<DataModule2->ADOQuery11->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_Prochno")->Value == DataModule2->ADOQuery11->FieldByName("ID_Prochnost")->Value )
					{ComboBox3->Text = DataModule2->ADOQuery11->FieldByName("Prochnost")->AsString;break;}
			DataModule2->ADOQuery11->Next();
			}

		if(DataModule2->ADOQuery1->FieldByName("ID_Sod_met_cha")->AsString!= "")
			for (int j = 0;j<DataModule2->ADOQuery12->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_Sod_met_cha")->Value == DataModule2->ADOQuery12->FieldByName("ID_Sod_met_cha")->Value )
					{ComboBox4->Text = DataModule2->ADOQuery12->FieldByName("Sod_met_cha")->AsString;break;}
			DataModule2->ADOQuery12->Next();
			}
		if(DataModule2->ADOQuery1->FieldByName("ID_IStiraemost")->AsString != "")
			for (int j = 0;j<DataModule2->ADOQuery13->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_IStiraemost")->Value == DataModule2->ADOQuery13->FieldByName("ID_IStiraemost")->Value )
					{ComboBox5->Text = DataModule2->ADOQuery13->FieldByName("Stiraemost")->AsString; break;}
			DataModule2->ADOQuery13->Next();
			}
		if(DataModule2->ADOQuery1->FieldByName("ID_Soderjanie_slab_shastit")->AsString != "")
			for (int j = 0;j<DataModule2->ADOQuery14->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_Soderjanie_slab_shastit")->Value == DataModule2->ADOQuery14->FieldByName("ID_Soderjanie_slab_shastit")->Value )
					{ComboBox6->Text = DataModule2->ADOQuery14->FieldByName("Soderjanie_slab_shastit")->AsString;break;}
			DataModule2->ADOQuery14->Next();
			}
		if(DataModule2->ADOQuery1->FieldByName("ID_Soderjanie_polividnih_and_glinistih")->AsString != "")
			for (int j = 0;j<DataModule2->ADOQuery15->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_Soderjanie_polividnih_and_glinistih")->Value == DataModule2->ADOQuery15->FieldByName("ID_Soderjanie_polividnih_and_glinistih")->Value )
					{ComboBox7->Text = DataModule2->ADOQuery15->FieldByName("Soderjanie_polividnih_and_glinistih")->AsString;break;}
			DataModule2->ADOQuery15->Next();
			}

		if(DataModule2->ADOQuery1->FieldByName("ID_activ")->AsString != "")
			for (int j = 0;j<DataModule2->ADOQuery16->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_activ")->Value == DataModule2->ADOQuery16->FieldByName("ID_activ")->Value )
				   {	ComboBox8->Text = DataModule2->ADOQuery16->FieldByName("Activ")->AsString; break;}
			DataModule2->ADOQuery16->Next();
			}

		if(DataModule2->ADOQuery1->FieldByName("ID_Forma_zerna")->AsString  != "")
			for (int j = 0;j<DataModule2->ADOQuery17->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_Forma_zerna")->Value == DataModule2->ADOQuery17->FieldByName("ID_Forma_zerna")->Value )
					{ComboBox10->Text = DataModule2->ADOQuery17->FieldByName("Forma_zerna")->AsString;break;}
			DataModule2->ADOQuery17->Next();
			}

		if(DataModule2->ADOQuery1->FieldByName("ID_Usoihevost")->AsString != "")
			for (int j = 0;j<DataModule2->ADOQuery18->RecordCount;j++) {
				if(DataModule2->ADOQuery1->FieldByName("ID_Usoihevost")->Value == DataModule2->ADOQuery18->FieldByName("ID_Usoihevost")->Value )
				   {	ComboBox11->Text = DataModule2->ADOQuery18->FieldByName("Usoihevost")->AsString; break;}
			DataModule2->ADOQuery18->Next();
			}
		  break;
	  }
	DataModule2->ADOQuery1->Next();

	  /*	{
		 f1= 1;
		 ComboBox2->Text = DataModule2->ADOQuery1->FieldByName("Moroz")->AsString;
		 ComboBox3->Text = DataModule2->ADOQuery1->FieldByName("Prochnost")->AsString;
		 ComboBox4->Text = DataModule2->ADOQuery1->FieldByName("Sod_met_cha")->AsString;
		 ComboBox5->Text = DataModule2->ADOQuery1->FieldByName("Stiraemost")->AsString;
		 ComboBox6->Text = DataModule2->ADOQuery1->FieldByName("Soderjanie_slab_shastit")->AsString;
		 ComboBox7->Text = DataModule2->ADOQuery1->FieldByName("Soderjanie_polividnih_and_glinistih")->AsString;
		 ComboBox8->Text = DataModule2->ADOQuery1->FieldByName("Activ")->AsString;
		 ComboBox10->Text = DataModule2->ADOQuery1->FieldByName("Forma_zerna")->AsString;
		 ComboBox11->Text = DataModule2->ADOQuery1->FieldByName("Usoihevost")->AsString;
		 break;
		}*/

   }
						StringGrid2->Enabled = true;
Panel1->Enabled = true;
}

}
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Edit1Change(TObject *Sender)
{
if(Edit1->Text != ""){
DataModule2->ADOQuery2->Filtered = false;
ed =  Edit1->Text;
DataModule2->ADOQuery2->Filtered = true;
}
else
DataModule2->ADOQuery2->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
    AnsiString Ts = "0123456789\b";
    char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox2KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox2KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox3KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox3KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox4KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox4KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox5KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox5KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox6KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox6KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox7KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox7KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox8KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox8KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox10KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox10KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox11KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox11KeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Button1Click(TObject *Sender)
{
Form7->Image1->Picture->LoadFromFile("up.jpg");
Form7->Width = Form7->Image1->Width;
Form7->Height = Form7->Image1->Height+30;
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button4Click(TObject *Sender)
{
Form7->Image1->Picture->LoadFromFile("up1.jpg");
Form7->Width = Form7->Image1->Width;
Form7->Height = Form7->Image1->Height+30;
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button6Click(TObject *Sender)
{
Form7->Image1->Picture->LoadFromFile("up2.jpg");
Form7->Width = Form7->Image1->Width;
Form7->Height = Form7->Image1->Height+30;
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button9Click(TObject *Sender)
{
Form7->Image1->Picture->LoadFromFile("up3.jpg");
Form7->Width = Form7->Image1->Width;
Form7->Height = Form7->Image1->Height+30;
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button10Click(TObject *Sender)
{
Form7->Image1->Picture->LoadFromFile("up4.jpg");
Form7->Width = Form7->Image1->Width;
Form7->Height = Form7->Image1->Height+30;
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button11Click(TObject *Sender)
{
Form7->Image1->Picture->LoadFromFile("up5.jpg");
Form7->Width = Form7->Image1->Width;
Form7->Height = Form7->Image1->Height+30;
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button5Click(TObject *Sender)
{
ShellExecute(Handle,L"open", L"my-file.pdf",NULL, NULL, SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TForm6::StringGrid2SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
for(int i = 1;i<k;i++)
	{
		if (ACol == 2 && ARow == i) // будет под запретом €чейка 1:1
		{
				CanSelect = false;
		}
		if (ACol == 3 && ARow == i) // будет под запретом €чейка 1:1
		{
				CanSelect = false;
		}
	}
}
//---------------------------------------------------------------------------

