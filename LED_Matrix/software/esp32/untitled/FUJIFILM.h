//
// Created by HUA on 2021/11/4.
//

#ifndef UNTITLED_FUJIFILM_H
#define UNTITLED_FUJIFILM_H

#include "XAPI.h"

class FUJIFILM {
public:
    FUJIFILM();
    long dev_count;
    XSDK_HANDLE hCam;
    long cam_mode;
    LPSTR version_string;
    XSDK_DeviceInformation dev_info;
    XSDK_LensInformation lens_info;
    long prio_num;
    long* prio_mode;
    long ss_num;
    long ss;
    long bule;

private:
    HMODULE hm;

public:
    int init();
    int exit();
    int detect_usb();
    int openEx(int id);
    int close(XSDK_HANDLE hc);
    int powerOff(XSDK_HANDLE hc);
    int getVersionString();
    int getDeviceInfo(XSDK_HANDLE hc);
    int getLensInfo(XSDK_HANDLE hc);
    int capPriorityMode(XSDK_HANDLE hc);
    int capShutterSpeed(XSDK_HANDLE hc);

    _XSDK_Init                      pfnInit;
    _XSDK_Exit                      pfnExit;
    _XSDK_Detect                    pfnDetect;
    _XSDK_OpenEx                    pfnOpenEx;
    _XSDK_Close                     pfnClose;
    _XSDK_PowerOFF                  pfnPowerOFF;
    _XSDK_GetErrorNumber            pfnGetErrorNumber;
    _XSDK_GetVersionString          pfnGetVersionString;
    _XSDK_GetDeviceInfo             pfnGetDeviceInfo;
    _XSDK_WriteDeviceName           pfnWriteDeviceName;
    _XSDK_GetFirmwareVersion        pfnGetFirmwareVersion;
    _XSDK_GetLensInfo               pfnGetLensInfo;
    _XSDK_GetLensVersion            pfnGetLensVersion;
    _XSDK_CapPriorityMode           pfnCapPriorityMode;
    _XSDK_SetPriorityMode           pfnSetPriorityMode;
    _XSDK_GetPriorityMode           pfnGetPriorityMode;
    _XSDK_CapRelease                pfnCapRelease;
    _XSDK_Release                   pfnRelease;
    _XSDK_GetReleaseStatus          pfnGetReleaseStatus;
    _XSDK_ReadImageInfo             pfnReadImageInfo;
    _XSDK_ReadImage                 pfnReadImage;
    _XSDK_DeleteImage               pfnDeleteImage;
    _XSDK_GetBufferCapacity         pfnGetBufferCapacity;
    _XSDK_CapAEMode                 pfnCapAEMode;
    _XSDK_SetAEMode                 pfnSetAEMode;
    _XSDK_GetAEMode                 pfnGetAEMode;
    _XSDK_CapShutterSpeed           pfnCapShutterSpeed;
    _XSDK_SetShutterSpeed           pfnSetShutterSpeed;
    _XSDK_GetShutterSpeed           pfnGetShutterSpeed;
    _XSDK_CapExposureBias           pfnCapExposureBias;
    _XSDK_SetExposureBias           pfnSetExposureBias;
    _XSDK_GetExposureBias           pfnGetExposureBias;
    _XSDK_CapDynamicRange           pfnCapDynamicRange;
    _XSDK_SetDynamicRange           pfnSetDynamicRange;
    _XSDK_GetDynamicRange           pfnGetDynamicRange;
    _XSDK_CapSensitivity            pfnCapSensitivity;
    _XSDK_SetSensitivity            pfnSetSensitivity;
    _XSDK_GetSensitivity            pfnGetSensitivity;
    _XSDK_CapMeteringMode           pfnCapMeteringMode;
    _XSDK_SetMeteringMode           pfnSetMeteringMode;
    _XSDK_GetMeteringMode           pfnGetMeteringMode;
    _XSDK_CapLensZoomPos            pfnCapLensZoomPos;
    _XSDK_GetLensZoomPos            pfnGetLensZoomPos;
    _XSDK_SetLensZoomPos            pfnSetLensZoomPos;
    _XSDK_CapAperture               pfnCapAperture;
    _XSDK_SetAperture               pfnSetAperture;
    _XSDK_GetAperture               pfnGetAperture;
    _XSDK_CapWBMode                 pfnCapWBMode;
    _XSDK_SetWBMode                 pfnSetWBMode;
    _XSDK_GetWBMode                 pfnGetWBMode;
    _XSDK_CapWBColorTemp            pfnCapWBColorTemp;
    _XSDK_SetWBColorTemp            pfnSetWBColorTemp;
    _XSDK_GetWBColorTemp            pfnGetWBColorTemp;
    _XSDK_CapMediaRecord            pfnCapMediaRecord;
    _XSDK_SetMediaRecord            pfnSetMediaRecord;
    _XSDK_GetMediaRecord            pfnGetMediaRecord;
    _XSDK_CapForceMode              pfnCapForceMode;
    _XSDK_SetForceMode              pfnSetForceMode;
    _XSDK_CapProp					pfnCapProp;
    _XSDK_SetProp					pfnSetProp;
    _XSDK_GetProp					pfnGetProp;


};


#endif //UNTITLED_FUJIFILM_H
