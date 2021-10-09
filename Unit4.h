//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TButton *Button2;
	TPanel *Panel1;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TEdit *Edit1;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit2;
	TComboBox *ComboBox1;
	TLabel *Label6;
	TTimer *Timer1;
	TButton *Button5;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ComboBox3Change(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall ComboBox3KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit2KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ComboBox4KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox4KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall DBGrid1CellClick(TColumn *Column);







private:	// User declarations
public:		// User declarations
int p ;
bool r;
int q;
int t1;
int t2;
int t3;
	__fastcall TForm4(TComponent* Owner);
	void TForm4::SS(const int  ñ) ;
	const int TForm4::vbr();
	void TForm4::Del(const int  c);
	void TForm4::ot();
	void TForm4::Comb();


};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
