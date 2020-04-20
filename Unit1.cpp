//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "cuts.h"
#include <vector>
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
vector<float> numbers;
string fileName;
int wait;
int step, multiplier;





//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	wait++;
	if (wait==3000)
	{
		ShowMessage("Чо ждём?");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	writeData("out",numbers);  //вызов функции для записи.
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if( OpenDialog1->Execute())
	{
		Edit1->Text = OpenDialog1->FileName;
		String buf;
		buf = Edit1->Text;
		fileName.assign(buf.begin(), buf.end()); //преобразование wstring в string
	}
	step=StrToInt(Edit3->Text);
	multiplier=StrToInt(Edit2->Text);
	readData(fileName, step, multiplier, numbers);   //вызов функции для чтения из файла
	Button2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
		if( OpenDialog1->Execute() )
	{
		Edit1->Text = OpenDialog1->FileName;
		String buf;
		buf = Edit1->Text;
		fileName.assign(buf.begin(), buf.end());
	}
	step=StrToInt(Edit3->Text);
	multiplier=StrToInt(Edit2->Text);
	readData(fileName, step, multiplier, numbers);
	Button2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N3Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
