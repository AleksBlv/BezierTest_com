//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <System.Win.ComServ.hpp>
#include <tchar.h>
//---------------------------------------------------------------------------
#include "TestLibBez777Impl.h"
USEFORM("Unit1.cpp", Form1);
//---------------------------------------------------------------------------
#pragma link "System.Win.ComServ"

static Comserv::TCppActiveXModule _ax_module(true);

int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
