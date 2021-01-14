///////////////////////////////////////////////////////////////////////////////
// TMC_File_Test_ProjectCtrl.h

#ifndef __TMC_FILE_TEST_PROJECTCTRL_H__
#define __TMC_FILE_TEST_PROJECTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "TMC_File_Test_ProjectW32.h"
#include "TcBase.h"
#include "TMC_File_Test_ProjectClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CTMC_File_Test_ProjectCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CTMC_File_Test_ProjectCtrl, &CLSID_TMC_File_Test_ProjectCtrl>
	, public ITMC_File_Test_ProjectCtrl
	, public ITcOCFCtrlImpl<CTMC_File_Test_ProjectCtrl, CTMC_File_Test_ProjectClassFactory>
{
public:
	CTMC_File_Test_ProjectCtrl();
	virtual ~CTMC_File_Test_ProjectCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_TMC_FILE_TEST_PROJECTCTRL)
DECLARE_NOT_AGGREGATABLE(CTMC_File_Test_ProjectCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CTMC_File_Test_ProjectCtrl)
	COM_INTERFACE_ENTRY(ITMC_File_Test_ProjectCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __TMC_FILE_TEST_PROJECTCTRL_H__
