//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{


float I = StrToFloat(Edt_I->Text);
int a=1;
switch(ComboBox1->ItemIndex){
		  case 0 :break;
		  case 1 : a= 1000 ;break;
		  case 2 : a=1000000 ;
		  }
float R = StrToFloat(Edt_R ->Text)/a;
lb1_V -> Caption = FormatFloat("#00.00000" ,R*I)+" V" ;
lb1_P-> Caption= FormatFloat("#00.0000" ,R*I*I)+" W" ; ;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Edt_RKeyPress(TObject *Sender, System::WideChar &Key)
{
if (((Key<'0') | (Key>'9')) & (Key!=',')& (Key!='\b'))
Key=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edt_IKeyPress(TObject *Sender, System::WideChar &Key)
{
if (((Key<'0') | (Key>'9')) & (Key!=',') & (Key!='\b'))
Key=0;
}
//---------------------------------------------------------------------------
