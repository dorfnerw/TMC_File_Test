///////////////////////////////////////////////////////////////////////////////
// TMC_File_Test_ProjectDriver.h

#ifndef __TMC_FILE_TEST_PROJECTDRIVER_H__
#define __TMC_FILE_TEST_PROJECTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define TMC_FILE_TEST_PROJECTDRV_NAME        "TMC_FILE_TEST_PROJECT"
#define TMC_FILE_TEST_PROJECTDRV_Major       1
#define TMC_FILE_TEST_PROJECTDRV_Minor       0

#define DEVICE_CLASS CTMC_File_Test_ProjectDriver

#include "ObjDriver.h"

class CTMC_File_Test_ProjectDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl TMC_FILE_TEST_PROJECTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(TMC_FILE_TEST_PROJECTDRV)
	VxD_Service( TMC_FILE_TEST_PROJECTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __TMC_FILE_TEST_PROJECTDRIVER_H__