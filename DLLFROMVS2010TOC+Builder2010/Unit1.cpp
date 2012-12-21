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
  HINSTANCE DllInstance = LoadLibrary("UnmanagedExportLibrary1.dll");
  try
  {
	  typedef void (*TTest)(void);
	  TTest Wykonaj;

	  if (!DllInstance) {
		  MessageBox(0, "Nie mo¿na za³adowaæ biblioteki DLL.", "Uwaga", 0);
		  exit(0);
	  }
	  Wykonaj = (TTest)GetProcAddress(DllInstance, "test");
	  if (Wykonaj!=NULL)
	  {
			Wykonaj();
	  }
	  else
	  {
		MessageBox(0, "Nie pobrano funkcji z biblioteki DLL.", "Uwaga", 0);
	  }
  }
  __finally {
	FreeLibrary(DllInstance);
  };
}
//---------------------------------------------------------------------------



