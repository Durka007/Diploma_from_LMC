//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TADOQuery *ADOQuery5;
	TADOQuery *ADOQuery6;
	TADOQuery *ADOQuery7;
	TADOQuery *ADOQuery8;
	TADOQuery *ADOQuery9;
	TADOQuery *ADOQuery10;
	TADOQuery *ADOQuery11;
	TADOQuery *ADOQuery12;
	TADOQuery *ADOQuery13;
	TADOQuery *ADOQuery14;
	TADOQuery *ADOQuery15;
	TADOQuery *ADOQuery16;
	TADOQuery *ADOQuery17;
	TADOQuery *ADOQuery18;
	TADOQuery *ADOQuery19;
	void __fastcall ADOQuery2FilterRecord(TDataSet *DataSet, bool &Accept);
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
