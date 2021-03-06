//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPaintBox *MainPaintBox;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TSpinEdit *x;
	TSpinEdit *y;
	TButton *Addbutton;
	TLabel *Label4;
	TSpinEdit *radius;
	TButton *ConfirmButton;
	TButton *GetResultsbutton;
	void __fastcall AddbuttonClick(TObject *Sender);
	void __fastcall ConfirmButtonClick(TObject *Sender);
	void __fastcall GetResultsbuttonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
