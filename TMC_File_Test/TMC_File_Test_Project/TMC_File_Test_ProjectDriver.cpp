///////////////////////////////////////////////////////////////////////////////
// TMC_File_Test_ProjectDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "TMC_File_Test_ProjectDriver.h"
#include "TMC_File_Test_ProjectClassFactory.h"

DECLARE_GENERIC_DEVICE(TMC_FILE_TEST_PROJECTDRV)

IOSTATUS CTMC_File_Test_ProjectDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CTMC_File_Test_ProjectClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CTMC_File_Test_ProjectDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CTMC_File_Test_ProjectDriver::TMC_FILE_TEST_PROJECTDRV_GetVersion( )
{
	return( (TMC_FILE_TEST_PROJECTDRV_Major << 8) | TMC_FILE_TEST_PROJECTDRV_Minor );
}

