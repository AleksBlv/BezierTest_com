// ---------------------------------------------------------------------------
// TESTLIBBEZ777IMPL : Implementation of TTestLibBez777Impl (CoClass: TestLibBez777, Interface: ITestLibBez777)
// ---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "TestLibBez777Impl.h"
#include "TestBezier.cpp"


// ---------------------------------------------------------------------------
// TTestLibBez777Impl
// ---------------------------------------------------------------------------
__fastcall TTestLibBez777Impl::TTestLibBez777Impl()
{
}


// ---------------------------------------------------------------------------
// TTestLibBez777Impl
// ---------------------------------------------------------------------------
__fastcall TTestLibBez777Impl::TTestLibBez777Impl(const System::_di_IInterface Controller)
                              : inherited(Controller)
{
}


// ---------------------------------------------------------------------------
// TTestLibBez777Impl
// ---------------------------------------------------------------------------
__fastcall TTestLibBez777Impl::TTestLibBez777Impl(Comobj::TComObjectFactory* Factory,
                                      const System::_di_IInterface Controller)
                              : inherited(Factory, Controller)
{
}

// ---------------------------------------------------------------------------
// TTestLibBez777Impl - Class Factory
// ---------------------------------------------------------------------------
static void createFactory()
{
  new TCppAutoObjectFactory<TTestLibBez777Impl>(Comserv::GetComServer(),
                           __classid(TTestLibBez777Impl),
                           CLSID_TestLibBez777,
                           Comobj::ciMultiInstance,
                           Comobj::tmApartment);
}
#pragma startup createFactory 32


STDMETHODIMP TTestLibBez777Impl::Run()
{
  try
  {
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
  }
  catch(Exception &e)
  {
    return Error(e.Message.c_str(), IID_ITestLibBez777);
  }
  return S_OK;
}


