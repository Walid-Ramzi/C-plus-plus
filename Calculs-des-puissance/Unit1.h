//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TEdit *Edt_I;
	TEdit *Edt_R;
	TLabel *Resistance;
	TBitBtn *BitBtn1;
	TLabel *Label2;
	TLabel *Label1;
	TComboBox *ComboBox1;
	TButton *Button1;
	TLabel *lb1_V;
	TLabel *Label4;
	TLabel *lb1_P;
	TPanel *Panel1;
	TLabel *Label6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Edt_RKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edt_IKeyPress(TObject *Sender, System::WideChar &Key);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
