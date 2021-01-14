///////////////////////////////////////////////////////////////////////////////
// TMC_File_Test_ProjectServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_TMC_File_Test_Project = 0x3F000000;
#define SRVNAME_TMC_FILE_TEST_PROJECT "TMC_File_Test_Project"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_TMC_File_Test_ProjectCTestModule = {0x15743622,0xddbc,0x48fd,{0x9d,0x8b,0x46,0xf3,0xe4,0xe5,0x75,0x6f}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _TestModuleDataArea1
{
	SHORT dfe;
	SHORT werq;
	SHORT hi;
} TestModuleDataArea1, *PTestModuleDataArea1;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_TestModuleDataArea1 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>

///<AutoGeneratedContent id="EventClasses">
///</AutoGeneratedContent>
