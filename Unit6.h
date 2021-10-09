//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "SHDocVw_OCX.h"
#include <Vcl.OleCtrls.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TLabel *Label6;
	TComboBox *ComboBox1;
	TLabel *Label2;
	TEdit *Edit1;
	TButton *Button2;
	TStringGrid *StringGrid2;
	TPanel *Panel1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label12;
	TLabel *Label13;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TComboBox *ComboBox6;
	TComboBox *ComboBox7;
	TComboBox *ComboBox8;
	TComboBox *ComboBox10;
	TComboBox *ComboBox11;
	TLabel *Label1;
	TDateTimePicker *DateTimePicker2;
	TTimer *Timer1;
	TButton *Button3;
	TGroupBox *GroupBox1;
	TCheckBox *CheckBox2;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker3;
	TButton *Button1;
	TButton *Button4;
	TButton *Button6;
	TButton *Button9;
	TButton *Button10;
	TButton *Button11;
	TButton *Button5;
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall DBGrid1CellClick(TColumn *Column);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall DBGrid1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox2KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox3KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox4KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox4KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox5KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox5KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox6KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox6KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox7KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox7KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox8KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox8KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox10KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox10KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox11KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox11KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall StringGrid2SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);











private:	// User declarations
public:		// User declarations
int k;
bool f;
bool f1;
int id;
int m;
AnsiString ed;
void clear()
{
for(int j=1;j<StringGrid2->RowCount;j++)
		for(int i=0;i<StringGrid2->ColCount;i++)
						StringGrid2->Cells[i][j] = "";
						ComboBox2->Text = "";
						ComboBox3->Text = "";
						ComboBox4->Text = "";
						ComboBox5->Text = "";
						ComboBox6->Text  = "";
						ComboBox7->Text  = "";
						ComboBox8->Text  = "";
						ComboBox10->Text  = "";
						ComboBox11->Text    = "";
						StringGrid2->Enabled = false;
Panel1->Enabled = false;
}
	__fastcall TForm6(TComponent* Owner);
	void TForm6::Comb();
	int TForm6::Comb(TComboBox *combo_box);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
