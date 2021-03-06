// ---------------------------------------------------------------------------
// TestLibBez777Impl.h : Declaration of the TTestLibBez777Impl
// ---------------------------------------------------------------------------
#ifndef TestLibBez777ImplH
#define TestLibBez777ImplH

#include <System.Win.ComServ.hpp>
#include <axbase.h>
#include "TestBezier_TLB.h"

// ---------------------------------------------------------------------------
// TTestLibBez777Impl     Implements ITestLibBez777, default interface of TestLibBez777
// ThreadingModel : tmApartment
// Dual Interface : TRUE
// Event Support  : FALSE
// Description    : 
// ---------------------------------------------------------------------------
class DAX_COM_CLASS TTestLibBez777Impl : public TCppAutoObject<ITestLibBez777>
{
  typedef _COM_CLASS inherited;

public:
  __fastcall TTestLibBez777Impl();
  __fastcall TTestLibBez777Impl(const System::_di_IInterface Controller);
  __fastcall TTestLibBez777Impl(Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller);
  

  // ITestLibBez777
protected:
  STDMETHOD(Run());
};




#endif //TestLibBez777ImplH
