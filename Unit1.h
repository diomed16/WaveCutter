//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TMainMenu *MainMenu1;
	TOpenDialog *OpenDialog1;
	TTimer *Timer1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *Help1;
	TMenuItem *N4;
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TEdit *Edit3;
	void __fastcall N4Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
