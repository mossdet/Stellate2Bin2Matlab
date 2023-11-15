//
//  TITLE:    SignalFileDef.h
//  AUTHOR:   Greg Rishea
//  DATE:     1999.05.03
//  SUMMARY:  SignalFile Interface defines and type-definitions.
//

#ifndef __SIGNALFILEDEF_H_
#define __SIGNALFILEDEF_H_

#include <winerror.h>

#ifdef __midl
// Insert 'v1_enum' data-type attribute into enum's when compiling under
// MIDL so that enum constants are transmitted as 32-bit quantities:
#define V1_ENUM [v1_enum]
#define HELPSTRING(str) [helpstring(str)]
#else
#define V1_ENUM
#define HELPSTRING(str)
#endif

// Patient Sex 
HELPSTRING("Patient sex enumeration")
typedef V1_ENUM enum
{
  PatientSex_Unknown = 0,
  PatientSex_Male =    1,
  PatientSex_Female =  2,
  PatientSex_First =   PatientSex_Unknown,
  PatientSex_Last =    PatientSex_Female
}
EPatientSex;

// Montage Channel Type
HELPSTRING("Montage channel type enumeration")
typedef V1_ENUM enum
{
  ChannelType_None =          0,
  ChannelType_EEG =           1,
  ChannelType_SEEG =          2,
  ChannelType_EMG =           3,
  ChannelType_ESP =           4,
  ChannelType_SAO2 =          5,
  ChannelType_Movement =      6,
  ChannelType_EOG =           7,
  ChannelType_EKG =           8,
  ChannelType_X1 =            9,
  ChannelType_X2 =           10,
  ChannelType_X3 =           11,
  ChannelType_X4 =           12,
  ChannelType_X5 =           13,
  ChannelType_X6 =           14,
  ChannelType_X7 =           15,
  ChannelType_X8 =           16,
  ChannelType_PhoticStim =   17,
  ChannelType_Pressure =     18,
  ChannelType_Volume =       19,
  ChannelType_Acidity =      20,
  ChannelType_Temperature =  21,
  ChannelType_Position =     22,
  ChannelType_Flow =         23,
  ChannelType_Effort =       24,
  ChannelType_Rate =         25,
  ChannelType_Length =       26,
  ChannelType_Light =        27,
  ChannelType_DigitalInput = 28,
  ChannelType_Microphone =   29,
  ChannelType_ECoG =         30,
  ChannelType_CO2 =          31,
  ChannelType_Pleth =        32,
  ChannelType_ETCO2 =        33,
  ChannelType_TCCO2 =        34,
  ChannelType_Leak =         35,
  ChannelType_PRate =        36,
  ChannelType_HRate =        37,
  ChannelType_RRate =        38,
  ChannelType_CFlow =        39,
  ChannelType_PFlow =        40,
  ChannelType_TFlow =        41,
  ChannelType_Chin =         42,
  ChannelType_Leg =          43,
  ChannelType_Pap =          44,
  ChannelType_First =        ChannelType_EEG,
  ChannelType_Last =         ChannelType_Pap
}
EChannelType;

// Montage Channel Units
HELPSTRING("Montage channel units enumeration")
typedef V1_ENUM enum
{
  ChannelUnits_None =        0,  // Undefined or unknown units
  ChannelUnits_MicroVolt =   1,  // MicroVolts
  ChannelUnits_MilliVolt =   2,  // MilliVolts
  ChannelUnits_Volt =        3,  // Volts
  ChannelUnits_Percent =     4,  // Percent units
  ChannelUnits_CMH2O =       5,  // Pressure in cm H2O
  ChannelUnits_MMHG =        6,  // Pressure in mm Hg
  ChannelUnits_CC =          7,  // in cc
  ChannelUnits_ML =          8,  // in mL
  ChannelUnits_PH =          9,  // Acidity in pH
  ChannelUnits_Celsius =    10,  // Temperature in degrees C
  ChannelUnits_Fahrenheit = 11,  // Temperature in degrees F
  ChannelUnits_BPM =        12,  // Heart/Respiration rate in beats/breaths per minute
  ChannelUnits_MM =         13,  // Length in mm
  ChannelUnits_CM =         14,  // Length in cm
  ChannelUnits_Lux =        15,  // Light intensity in Lux
  ChannelUnits_AD =         16,  // ADC counts
  ChannelUnits_LPM =        17,  // Liter per minute
  ChannelUnits_MilliLPM =   18,  // MilliLiter per minute
  ChannelUnits_TORR =       19,  // non-SI unit of pressure (1 bar = 750.06 torr)
  ChannelUnits_BRPM =       20,  // Breaths per minute
  ChannelUnits_First =      ChannelUnits_MicroVolt,
  ChannelUnits_Last =       ChannelUnits_BRPM
}
EChannelUnits;

// Group Channel Type
HELPSTRING("Group channel type enumeration")
typedef V1_ENUM enum
{
  GroupChannelType_All = -1,  // Group/Item not linked to any particular channel
  GroupChannelType_Some = 0,  // Group/Item linked to specified channel
  GroupChannelType_First = GroupChannelType_All,
  GroupChannelType_Last = GroupChannelType_Some
}
EGroupChannelType;

// IDs of Harmonie standard Event Groups
#define COM_GRPID_USERDEFINED       L"AAAAAAAA-1796-405F-8D4A-BAFC8E385163"
#define COM_GRPID_DISCONTINUITY     L"6F80B696-F252-4D4E-8B70-CCBBA0AB2374"
#define COM_GRPID_SAMPLE_SEC        L"3B105C44-0417-4B59-9B0A-5E6AC9291806"
#define COM_GRPID_CALIB_SEC         L"566C42BA-7D61-4E14-B164-A6C0E292EA63"
#define COM_GRPID_CALIB_LABEL       L"AA5870D6-55DC-41AA-BDDA-3A896B5A18CE"
#define COM_GRPID_PATIENTDISCON_SEC L"A230494C-F4D3-41A1-857C-B6D9BD4FF7DF"
#define COM_GRPID_DEBLOCK_SEC       L"5011AABC-94EA-46CE-B8CD-7BED11356389"
#define COM_GRPID_ETEST_SEC         L"E5EE3953-267C-4C38-A21B-C2E597618853"
#define COM_GRPID_PUSHBUT_SEC       L"8115D6F8-FD9B-4673-AA6D-59B7369F162F"
#define COM_GRPID_PUSHBUT_DET       L"5417524E-7EDD-4E6F-911A-224C22D744EE"
#define COM_GRPID_BIOCALIBRATION    L"10E17576-AF6F-4005-8FD9-9868D3D2B3FF"
#define COM_GRPID_ANNOTATION        L"99E65CBA-9E82-417A-90A7-B398116464A2"
#define COM_GRPID_TRACESASOBS       L"1A81FC5E-4022-44FF-9ABC-483925EF8D19"
#define COM_GRPID_HYPERVENT         L"725824B1-4822-40CA-A017-F4B7E4D06D28"
#define COM_GRPID_POSTHYPERVENT     L"20E29563-73B4-4B07-BD29-1E7B724DE98D"
#define COM_GRPID_BOOKMARKS         L"8D1996CC-55A2-41B7-9477-839A46DE2ABE"
#define COM_GRPID_SEIZURE_SEC       L"7BC1900E-1F1A-493E-9A39-EA6E7A59EC8D"
#define COM_GRPID_SEIZURE_DET       L"3043C123-5BA0-45AC-BB8A-15508A89B917"
#define COM_GRPID_STAGE             L"F4B8F3EE-8AC2-4EFC-BC86-2A55AF130A6C"
#define COM_GRPID_AVERAGESIGNAL_SEC L"F1D58108-9C73-45F7-8187-A11C040819DA"
#define COM_GRPID_TRIGGERPOINT      L"CB0077A2-C701-4514-92BD-0A3EE4D893A6"
#define COM_GRPID_RESPIRATORY       L"8D423EE8-A70A-4AE0-A56E-7D2793DF9B73"
#define COM_GRPID_DATRIGGER_DET     L"63544DA0-06A1-41FF-83D1-F29FC461A626"
#define COM_GRPID_DESATURATION      L"2C49F022-C278-4B2D-AEAB-0FCCE52B1174"
#define COM_GRPID_ECGPRE            L"74E7EEAA-8888-4125-9082-70FAF0BB3BCF"
#define COM_GRPID_NBORNSEIZ_SEC     L"CA3503F6-A310-428B-8EC1-BC9CE237A45C"
#define COM_GRPID_NBORNSEIZ_DET     L"7964574F-B07A-4C90-9E8C-D67987F2C1CD"
#define COM_GRPID_REM               L"8982DA17-8F09-485b-9DAD-2CBF2978C07E"
#define COM_GRPID_SCHEDULEDSEC      L"D6B6E847-9C5D-4431-AE2F-CAB75A0038D7"
#define COM_GRPID_SEIZONSET_SEC     L"F902F02B-C627-4CD4-8EA4-5FCA871CC3E0"
#define COM_GRPID_SEIZONSET_DET     L"75FE095C-4CB8-4EC5-95D5-D7CD26FBFC5C"
#define COM_GRPID_SPIKE_SEC         L"232B1F0E-D9CB-4307-A22D-DA11A500A484"
#define COM_GRPID_SPIKE_DET         L"6F69D0AB-5C98-496C-81F7-577C816CFF6F"
#define COM_GRPID_SPINDLE           L"1F72BEF2-C9E2-4d01-A326-5F473034FA58"
#define COM_GRPID_STATEDEP_SEC      L"C2B5B91E-AFCD-4FE5-BFF5-84CF2B74B42F"
#define COM_GRPID_STATEDEP_DET      L"BC131598-1F0C-434F-9535-E22388E3C7AE"
#define COM_GRPID_ARTIFACT          L"84ADC1B5-45A8-4264-9AB9-F4B33127019A"
#define COM_GRPID_DV_SEC            L"412A523B-F05D-4848-B5F8-05E577A2BDEB"
#define COM_GRPID_ECGARRHY          L"6BF62046-EE07-4520-A55E-4B88A10B8802"
#define COM_GRPID_AROUSAL           L"9B2D1136-3B89-485F-B0A5-9FFCB79A6FC6"
#define COM_GRPID_SNORING           L"828CD6D8-BF06-4E72-BD0F-78138997CF99"
#define COM_GRPID_PLM               L"B3B19CD2-8F54-4FEC-B4DF-93C7DA013D44"
#define COM_GRPID_BURST_ART         L"C1A71877-2798-4221-9C6A-7EAD76AE4FDE"
#define COM_GRPID_BURST_DET         L"6C1E0B28-CDDD-4db6-A4D3-750E651D0057"
#define COM_GRPID_MESSAGE_LABEL     L"39C0AF6C-042E-4677-81F6-189785DDAD6D"
#define COM_GRPID_PLM_SER           L"0635D8DA-D49B-41FF-B8C0-0470CC7CBFD7"
#define COM_GRPID_FV_LOOPS          L"1E7ADD77-96C3-4780-A979-1F5773C3CE15"
#define COM_GRPID_VALUE_ANNOT       L"2E75B7A1-7263-4420-B073-449E90234B2F"
#define COM_GRPID_ECG_HR			L"1A38008D-D05A-4b10-A4CF-DD118E40F0A6"
#define COM_GRPID_PAP				L"0D25C4DE-D234-4955-B3A1-B19DE3BBAD14"
#define COM_GRPID_BPOS				L"6C4D0382-354C-4974-8268-9F7A63DA3DF8"
#define COM_GRPID_SUPO2				L"4003A9D0-F142-4388-B423-D75431655A92"

// Standard Event Groups
HELPSTRING("Standard event groups enumeration")
typedef V1_ENUM enum
{
  Group_UserDefined      = 0,
  Group_Discontinuity    = 1,
  Group_SampleSec        = 2,
  Group_CalibSec         = 3,
  Group_CalibLabel       = 4,
  Group_PushbutSec       = 5,
  Group_PushbutDet       = 6,
  Group_Annotation       = 7,
  Group_TarcesAsObs      = 8,
  Group_HyperVent        = 9,
  Group_PostHyperVent    = 10,
  Group_BookMarks        = 11,
  Group_SeizureSec       = 12,
  Group_SeizureDet       = 13,
  Group_Stage            = 14,
  Group_AverageSignalSec = 16,
  Group_TriggerPoint     = 17,
  Group_Respiratory      = 18,
  Group_DATriggerDet     = 19,
  Group_Desaturation     = 20,
  Group_NBornSeizSec     = 21,
  Group_NBornSeizDet     = 22,
  Group_Rem              = 23,
  Group_ScheduledSec     = 24,
  Group_SeizOnsetSec     = 25,
  Group_SeizOnsetDet     = 26,
  Group_SpikeSec         = 27,
  Group_SpikeDet         = 28,
  Group_Spindle          = 29,
  Group_StateDepSec      = 30,
  Group_StateDepDet      = 31,
  Group_BioCalibration	 = 32,
  Group_Artifact         = 33,
  Group_DvSec            = 34,
  Group_EcgArrhy         = 35,
  Group_PatientdiscSec   = 36,
  Group_EtestSec         = 37,
  Group_DeblockSec       = 38,
  Group_Arousal          = 39,
  Group_Snoring          = 40,
  Group_Plm              = 41,
  Group_BurstDet         = 42,
  Group_BurstArt         = 43,
  Group_MessageLabel     = 44,
  Group_Plm_Series       = 45,
  Group_FvLoops          = 46,
  Group_ValueAnnot       = 47,
  Group_EcgPre           = 48,
  Group_EcgHR            = 49,
  Group_Bpos             = 50,
  Group_Pap              = 51,
  Group_SupO2            = 52,
  Group_First            = Group_UserDefined,
  Group_Last             = Group_SupO2
}
EGroups;

// Event Group Type
HELPSTRING("Event group type enumeration")
typedef V1_ENUM enum
{
  GroupType_None =     -1,
  GroupType_Break =     0,
  GroupType_Section =   1,
  GroupType_Detection = 2,
  GroupType_Label =     3,
  GroupType_Stage =     4,
  GroupType_Ruler =     5,
  GroupType_First =     GroupType_Break,
  GroupType_Last =      GroupType_Ruler
}
EGroupType;

// Event Group Extent
HELPSTRING("Event group extent enumeration")
typedef V1_ENUM enum
{
  GroupExtent_None =         -1,
  GroupExtent_Instantaneous = 0,
  GroupExtent_Interval =      1,
  GroupExtent_First =         GroupExtent_Instantaneous,
  GroupExtent_Last =          GroupExtent_Interval
}
EGroupExtent;

// Event Group Access
HELPSTRING("Event group access enumeration")
typedef V1_ENUM enum
{
  GroupAccess_None =                       0,  // No access
  GroupAccess_Creatable =                  1,  // Set if event belonging to group can be created by user
  GroupAccess_Editable =                   2,  // Set if event belonging to group can be edited by user
  GroupAccess_EditableCreatable =          GroupAccess_Editable | GroupAccess_Creatable,
  GroupAccess_Deletable =                  4,  // Set if event belonging to group can be deleted by user
  GroupAccess_Singleton =                  8,  // Set to allow only one event of that type per file
  GroupAccess_DeletableCreatable =         GroupAccess_Deletable | GroupAccess_Creatable,
  GroupAccess_DeletableEditable =          GroupAccess_Deletable | GroupAccess_Editable,
  GroupAccess_DeletableEditableCreatable = GroupAccess_Deletable | GroupAccess_Editable | GroupAccess_Creatable,
  GroupAccess_First =                      GroupAccess_None,      
  GroupAccess_Last =                       GroupAccess_DeletableEditableCreatable | GroupAccess_Singleton
}
EGroupAccess;

// Event or Group vibility
HELPSTRING("Group/Event visibility status")
typedef V1_ENUM enum
{
  StatusHidden = 0,
  StatusVisible = 1,
  Status_First = StatusHidden,
  Status_Last = StatusVisible
}
EVisibilityStatus;

// Event or Group change status
HELPSTRING("Group/Event change status: automatic or by user")
typedef V1_ENUM enum
{
  StatusAutomatic = 0,
  StatusManual = 1,
  ChangeStatus_First = StatusAutomatic,
  ChangeStatus_Last = StatusManual
}
EChangeStatus;

// Event names type enumeration
HELPSTRING("Event name type")
typedef V1_ENUM enum
{
  ItemNameType_Single = 0,
  ItemNameType_Multiple = 1,
  ItemNameType_MultipleFree = 2,
  ItemNameType_First = ItemNameType_Single,
  ItemNameType_Last = ItemNameType_MultipleFree
}
EItemNameType;

// Event association status enumeration
HELPSTRING("Event association status")
typedef V1_ENUM enum
{
  ItemAssocStatus_Automatic = 0,
  ItemAssocStatus_Manual = 1,
  ItemAssocStatus_Disabled = 2,
  ItemAssocStatus_First = ItemAssocStatus_Automatic,
  ItemAssocStatus_Last = ItemAssocStatus_Disabled
}
EItemAssocStatus;

// Electrode and Electrode Group definitions
HELPSTRING("Electrode Group type")
typedef V1_ENUM enum
{
  ElectrodeGroupType_Grid = 0,
  ElectrodeGroupType_Strip = 1,
  ElectrodeGroupType_Depth = 2,
  ElectrodeGroupType_Epidural = 3,
  ElectrodeGroupType_First = ElectrodeGroupType_Grid,
  ElectrodeGroupType_Last = ElectrodeGroupType_Epidural
}
EElectrodeGroupType;

// Electrode useage status
HELPSTRING("Electrode usege status")
typedef V1_ENUM enum
{
  UsageStatus_Unselected = 0,
  UsageStatus_Selected = 1,
  UsageStatus_First = UsageStatus_Unselected,
  UsageStatus_Last = UsageStatus_Selected
}
EElectrodeUsageStatus;

// Electrode name sequence direction
HELPSTRING("Electrode names sequence direction")
typedef V1_ENUM enum
{
  Sequence_RowWise = 1,
  Sequence_ColWise = 2,
  Sequence_First = Sequence_RowWise,
  Sequence_Last = Sequence_ColWise
}
EElectrodeGroupSequence;

// Electrode Group original point
HELPSTRING("Electrode Group original point")
typedef V1_ENUM enum
{
  Origin_TopLeft = 1,
  Origin_TopRight = 2,
  Origin_BottomLeft = 3,
  Origin_BottomRight = 4,
  Origin_First = Origin_TopLeft,
  Origin_Last = Origin_BottomRight
}
EElectrodeGroupOriginPoint;

// Standard Number of Record Base Samples:
#define SIGNALFILE_STD_RECORDSAMPLES 64

// Signal File Interface Error Codes:
HELPSTRING("Signal file interface error code enumeration")
typedef V1_ENUM enum
{
  SIGNALFILE_ECODE_BASE =                0x1000,  // Base error code
  SIGNALFILE_ECODE_FAIL =                0x1000,  // General failure
  SIGNALFILE_ECODE_FILENOTOPEN =         0x1001,  // No file currently open 
  SIGNALFILE_ECODE_FILEALREADYOPEN =     0x1002,  // File aleady open
  SIGNALFILE_ECODE_FILEDOESNTEXIST =     0x1003,  // File doesn't exist
  SIGNALFILE_ECODE_FILEALREADYEXISTS =   0x1004,  // File already exists
  SIGNALFILE_ECODE_FILEINVALID =         0x1005,  // File format is invalid
  SIGNALFILE_ECODE_FILEACCESSFAIL =      0x1006,  // Failure accessing file
  SIGNALFILE_ECODE_FILECREATEFAIL =      0x1007,  // Failure creating file
  SIGNALFILE_ECODE_FILEOPENFAIL =        0x1008,  // Failure opening file
  SIGNALFILE_ECODE_FILECLOSEFAIL =       0x1009,  // Failure closing file
  SIGNALFILE_ECODE_FILEPOSITIONFAIL =    0x100A,  // Failure positioning file pointer
  SIGNALFILE_ECODE_FILEREADFAIL =        0x100B,  // Failure reading from file
  SIGNALFILE_ECODE_FILEWRITEFAIL =       0x100C,  // Failure writing to file
  SIGNALFILE_ECODE_FILEFLUSHFAIL =       0x100D,  // Failure flushing file buffers
  SIGNALFILE_ECODE_FILECOPYFAIL =        0x100E,  // Failure copying file
  SIGNALFILE_ECODE_FILERENAMEFAIL =      0x100F,  // Failure renaming/moving file
  SIGNALFILE_ECODE_FILEDELETEFAIL =      0x1010,  // Failure deleting file
  SIGNALFILE_ECODE_OBJECTINVALID =       0x2000,  // Object in invalid state
  SIGNALFILE_ECODE_OBJECTREADONLY =      0x2001,  // Attempt made to modify a read-only object 
  SIGNALFILE_ECODE_OBJECTCHANGEFAIL =    0x2002,  // Attempt made to directly modify an object that belogs to the signal file
  SIGNALFILE_ECODE_SUBOBJECTCREATEFAIL = 0x3000,  // Failure creating internal sub-object
  SIGNALFILE_ECODE_SUBOBJECTINITFAIL =   0x3001,  // Failure initializing internal sub-object
  SIGNALFILE_ECODE_SUBOBJECTRESETFAIL =  0x3002,  // Failure resetting internal sub-object
  SIGNALFILE_ECODE_SUBOBJECTINVALID =    0x3004   // Internal sub-object in invalid state
}
ESignalFileErrorCode;

#define MAKE_SIGNALFILE_E_HRESULT(code) MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, (SHORT)(code))

// Signal File Interface Error HRESULTs:
HELPSTRING("Signal file interface error HRESULT enumeration")
typedef V1_ENUM enum
{
  SIGNALFILE_E_FAIL =                MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FAIL),
  SIGNALFILE_E_FILENOTOPEN =         MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILENOTOPEN),
  SIGNALFILE_E_FILEALREADYOPEN =     MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEALREADYOPEN),
  SIGNALFILE_E_FILEDOESNTEXIST =     MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEDOESNTEXIST),
  SIGNALFILE_E_FILEALREADYEXISTS =   MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEALREADYEXISTS),
  SIGNALFILE_E_FILEINVALID =         MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEINVALID),
  SIGNALFILE_E_FILEACCESSFAIL =      MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEACCESSFAIL),
  SIGNALFILE_E_FILECREATEFAIL =      MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILECREATEFAIL),
  SIGNALFILE_E_FILEOPENFAIL =        MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEOPENFAIL),
  SIGNALFILE_E_FILECLOSEFAIL =       MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILECLOSEFAIL),
  SIGNALFILE_E_FILEPOSITIONFAIL =    MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEPOSITIONFAIL),
  SIGNALFILE_E_FILEREADFAIL =        MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEREADFAIL),
  SIGNALFILE_E_FILEWRITEFAIL =       MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEWRITEFAIL),
  SIGNALFILE_E_FILEFLUSHFAIL =       MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEFLUSHFAIL),
  SIGNALFILE_E_FILECOPYFAIL =        MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILECOPYFAIL),
  SIGNALFILE_E_FILERENAMEFAIL =      MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILERENAMEFAIL),
  SIGNALFILE_E_FILEDELETEFAIL =      MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_FILEDELETEFAIL),
  SIGNALFILE_E_OBJECTINVALID  =      MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_OBJECTINVALID),
  SIGNALFILE_E_OBJECTREADONLY =      MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_OBJECTREADONLY),
  SIGNALFILE_E_SUBOBJECTCREATEFAIL = MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_SUBOBJECTCREATEFAIL),
  SIGNALFILE_E_SUBOBJECTINITFAIL =   MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_SUBOBJECTINITFAIL),
  SIGNALFILE_E_SUBOBJECTRESETFAIL =  MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_SUBOBJECTRESETFAIL),
  SIGNALFILE_E_SUBOBJECTINVALID =    MAKE_SIGNALFILE_E_HRESULT(SIGNALFILE_ECODE_SUBOBJECTINVALID)
}
ESignalFileErrorHResult;

// Signal File Interface Flags:
HELPSTRING("Signal file interface flags enumeration")
typedef V1_ENUM enum
{
  SIGNALFILE_FLAGS_READONLY =         0x00000001,
  SIGNALFILE_FLAGS_WRITEONLY =        0x00000002,
  SIGNALFILE_FLAGS_TRUNCATE =         0x00000004,
  SIGNALFILE_FLAGS_CALIBRATE =        0x00010000,
  SIGNALFILE_FLAGS_CALIBRATEASVOLTS = 0x00020000,
  SIGNALFILE_FLAGS_BASEINPUTCALIB =   0x00040000,
}
ESignalFileFlags;

// Measurement System
HELPSTRING("Measurement system enumeration")
typedef V1_ENUM enum
{
  MeasurementSystem_Default = 0,  // System specified by current system locale
  MeasurementSystem_SI =      1,  // S.I. units (Meter, Kilogram, Second)
  MeasurementSystem_US =      2,  // U.S. units (Foot, Pound, Second)
  MeasurementSystem_First =   MeasurementSystem_Default,
  MeasurementSystem_Last =    MeasurementSystem_US
}
EMeasurementSystem;

#undef V1_ENUM
#undef HELPSTRING

// Base calibration definitions
//#define SHORT_MIN (-(SHORT)((ULONG)1 << (sizeof(SHORT)*8 - 1)))
//#define SHORT_MAX ((SHORT)(((ULONG)1 << (sizeof(SHORT)*8 - 1)) - 1))

#define DEF_ADC_INPUT_MIN_CALIB   (-32768)
#define DEF_ADC_INPUT_MAX_CALIB   (32767)
#define DEF_VOLTS_INPUT_MIN_CALIB (-1.0)
#define DEF_VOLTS_INPUT_MAX_CALIB (1.0)

#endif // !__SIGNALFILEDEF_H_
