#pragma once

#ifndef IOCTL_H
#define IOCTL_H

#ifndef CTL_CODE
#pragma message("CTL_CODE undefined. Include winioctl.h or wdm.h")
#endif

#define DEVICE_NAME_STRING			L"\\Device\\ZhaoxinSoftwareInfo" 
#define SYMBOLIC_NAME_STRING		L"\\DosDevices\\ZhaoxinSoftwareInfo"

#define EnumProc \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GetProcessNum \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GetModuleNum \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define EnumModule \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804,  METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ProcessorCallBack \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x805,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define ThreadCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x806,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define LoadImageCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x807,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define CmpCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x808,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define BugCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x809,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define BugReasonCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x80A,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define ShutdownCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x80B,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define LastShutdownCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x80C,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define PlugPlayCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x80D,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define PowerSettingCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x80E,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FsNotifyChangeCallback \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x80F,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define EnumFilterDriver \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x810,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define EnumDPCTimer\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x811,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETGPTABLE\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x812,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETSSDTABLE\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x813,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETSSDTSHADOWTABLE\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x814,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETFSDHOOKLIST\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x815,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETKBDHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x816,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETMOUSEHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x817,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETI8042PRTHOOK \
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x818,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETPARTMGRHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x819,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETDISKHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x81A,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETATAPIHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x81B,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETACPIHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x81C,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETSCSIHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x81D,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETIDTABLE\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x81E,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define MSGHOOK_GETADDR\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x81F,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETTCPIPHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x820,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETNSIPROXYHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x821,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define GETTDXHOOK\
		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x822,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif