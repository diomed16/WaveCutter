//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int lsdCount = 0;
int i =0;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Label4Click(TObject *Sender)
{
   lsdCount++;
   if (lsdCount>=14) {
	 Image1->Visible=true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
Image1->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
   i++;
if (i==1) Form2->Caption=("");
if (i==2) Form2->Caption=("A");
if (i==3) Form2->Caption=("Ab");
if (i==4) Form2->Caption=("Abo");
if (i==5) Form2->Caption=("Abou");
if (i==6) Form2->Caption=("About");
if (i==7) Form2->Caption=("Abou");
if (i==8) Form2->Caption=("Abo");
if (i==9) Form2->Caption=("Ab");
if (i==10) {Form2->Caption=("A"); i=0;}

}
//---------------------------------------------------------------------------
