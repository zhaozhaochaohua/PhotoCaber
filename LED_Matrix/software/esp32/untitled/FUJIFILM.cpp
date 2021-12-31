//
// Created by HUA on 2021/11/4.
//
#include "iostream"
#include "FUJIFILM.h"
//#include "windows.h"
#include <windows.h>

std::string lib_dir("D:\\Workspace_2021\\AutoPhotoStation\\LED_Matrix\\software\\esp32\\untitled\\libs");
std::string api_dir = lib_dir.append("\\XAPI.dll");

FUJIFILM::FUJIFILM()
{
    hm = LoadLibrary(api_dir.c_str());
    if(hm == NULL)
    {
        std::cout<<"Can not load SDK"<<std::endl;
    }
    else
    {
        pfnInit                      = (_XSDK_Init                      )::GetProcAddress(   hm, "XSDK_Init" );
        pfnExit                      = (_XSDK_Exit                      )::GetProcAddress(   hm, "XSDK_Exit" );
        pfnDetect                    = (_XSDK_Detect                    )::GetProcAddress(   hm, "XSDK_Detect");
        pfnOpenEx                    = (_XSDK_OpenEx                    )::GetProcAddress(   hm, "XSDK_OpenEx");
        pfnClose                     = (_XSDK_Close                     )::GetProcAddress(   hm, "XSDK_Close" );
        pfnPowerOFF                  = (_XSDK_PowerOFF                  )::GetProcAddress(   hm, "XSDK_PowerOFF" );
        pfnGetErrorNumber            = (_XSDK_GetErrorNumber            )::GetProcAddress(   hm, "XSDK_GetErrorNumber" );
        pfnGetVersionString          = (_XSDK_GetVersionString          )::GetProcAddress(   hm, "XSDK_GetVersionString" );
        pfnGetDeviceInfo             = (_XSDK_GetDeviceInfo             )::GetProcAddress(   hm, "XSDK_GetDeviceInfo" );
        pfnWriteDeviceName           = (_XSDK_WriteDeviceName           )::GetProcAddress(   hm, "XSDK_WriteDeviceName" );
        pfnGetFirmwareVersion        = (_XSDK_GetFirmwareVersion        )::GetProcAddress(   hm, "XSDK_GetFirmwareVersion" );
        pfnGetLensInfo               = (_XSDK_GetLensInfo               )::GetProcAddress(   hm, "XSDK_GetLensInfo" );
        pfnGetLensVersion            = (_XSDK_GetLensVersion            )::GetProcAddress(   hm, "XSDK_GetLensVersion" );
        pfnCapPriorityMode           = (_XSDK_CapPriorityMode           )::GetProcAddress(   hm, "XSDK_CapPriorityMode" );
        pfnSetPriorityMode           = (_XSDK_SetPriorityMode           )::GetProcAddress(   hm, "XSDK_SetPriorityMode" );
        pfnGetPriorityMode           = (_XSDK_GetPriorityMode           )::GetProcAddress(   hm, "XSDK_GetPriorityMode" );
        pfnCapRelease                = (_XSDK_CapRelease                )::GetProcAddress(   hm, "XSDK_CapRelease" );
        pfnRelease                   = (_XSDK_Release                   )::GetProcAddress(   hm, "XSDK_Release" );

        pfnGetReleaseStatus          = (_XSDK_GetReleaseStatus          )::GetProcAddress(   hm, "XSDK_GetReleaseStatus");

        pfnReadImageInfo             = (_XSDK_ReadImageInfo             )::GetProcAddress(   hm, "XSDK_ReadImageInfo" );
        pfnReadImage                 = (_XSDK_ReadImage                 )::GetProcAddress(   hm, "XSDK_ReadImage" );
        pfnDeleteImage               = (_XSDK_DeleteImage               )::GetProcAddress(   hm, "XSDK_DeleteImage" );
         pfnGetBufferCapacity         = (_XSDK_GetBufferCapacity         )::GetProcAddress(   hm, "XSDK_GetBufferCapacity" );
         pfnCapAEMode                 = (_XSDK_CapAEMode                 )::GetProcAddress(   hm, "XSDK_CapAEMode" );
         pfnSetAEMode                 = (_XSDK_SetAEMode                 )::GetProcAddress(   hm, "XSDK_SetAEMode" );
         pfnGetAEMode                 = (_XSDK_GetAEMode                 )::GetProcAddress(   hm, "XSDK_GetAEMode" );
         pfnCapShutterSpeed           = (_XSDK_CapShutterSpeed           )::GetProcAddress(   hm, "XSDK_CapShutterSpeed" );
         pfnSetShutterSpeed           = (_XSDK_SetShutterSpeed           )::GetProcAddress(   hm, "XSDK_SetShutterSpeed" );
         pfnGetShutterSpeed           = (_XSDK_GetShutterSpeed           )::GetProcAddress(   hm, "XSDK_GetShutterSpeed" );
         pfnCapExposureBias           = (_XSDK_CapExposureBias           )::GetProcAddress(   hm, "XSDK_CapExposureBias" );
         pfnSetExposureBias           = (_XSDK_SetExposureBias           )::GetProcAddress(   hm, "XSDK_SetExposureBias" );
         pfnGetExposureBias           = (_XSDK_GetExposureBias           )::GetProcAddress(   hm, "XSDK_GetExposureBias" );
         pfnCapDynamicRange           = (_XSDK_CapDynamicRange           )::GetProcAddress(   hm, "XSDK_CapDynamicRange" );
         pfnSetDynamicRange           = (_XSDK_SetDynamicRange           )::GetProcAddress(   hm, "XSDK_SetDynamicRange" );
         pfnGetDynamicRange           = (_XSDK_GetDynamicRange           )::GetProcAddress(   hm, "XSDK_GetDynamicRange" );
         pfnCapSensitivity            = (_XSDK_CapSensitivity            )::GetProcAddress(   hm, "XSDK_CapSensitivity" );
         pfnSetSensitivity            = (_XSDK_SetSensitivity            )::GetProcAddress(   hm, "XSDK_SetSensitivity" );
         pfnGetSensitivity            = (_XSDK_GetSensitivity            )::GetProcAddress(   hm, "XSDK_GetSensitivity" );
         pfnCapMeteringMode           = (_XSDK_CapMeteringMode           )::GetProcAddress(   hm, "XSDK_CapMeteringMode" );
         pfnSetMeteringMode           = (_XSDK_SetMeteringMode           )::GetProcAddress(   hm, "XSDK_SetMeteringMode" );
         pfnGetMeteringMode           = (_XSDK_GetMeteringMode           )::GetProcAddress(   hm, "XSDK_GetMeteringMode" );
         pfnCapLensZoomPos            = (_XSDK_CapLensZoomPos            )::GetProcAddress(   hm, "XSDK_CapLensZoomPos" );
         pfnGetLensZoomPos            = (_XSDK_GetLensZoomPos            )::GetProcAddress(   hm, "XSDK_GetLensZoomPos" );
         pfnSetLensZoomPos            = (_XSDK_SetLensZoomPos            )::GetProcAddress(   hm, "XSDK_SetLensZoomPos" );
         pfnCapAperture               = (_XSDK_CapAperture               )::GetProcAddress(   hm, "XSDK_CapAperture" );
         pfnSetAperture               = (_XSDK_SetAperture               )::GetProcAddress(   hm, "XSDK_SetAperture" );
         pfnGetAperture               = (_XSDK_GetAperture               )::GetProcAddress(   hm, "XSDK_GetAperture" );

         pfnCapWBMode                 = (_XSDK_CapWBMode                 )::GetProcAddress(   hm, "XSDK_CapWBMode" );
         pfnSetWBMode                 = (_XSDK_SetWBMode                 )::GetProcAddress(   hm, "XSDK_SetWBMode" );
         pfnGetWBMode                 = (_XSDK_GetWBMode                 )::GetProcAddress(   hm, "XSDK_GetWBMode" );
         pfnCapWBColorTemp            = (_XSDK_CapWBColorTemp            )::GetProcAddress(   hm, "XSDK_CapWBColorTemp" );
         pfnSetWBColorTemp            = (_XSDK_SetWBColorTemp            )::GetProcAddress(   hm, "XSDK_SetWBColorTemp" );
         pfnGetWBColorTemp            = (_XSDK_GetWBColorTemp            )::GetProcAddress(   hm, "XSDK_GetWBColorTemp" );
         pfnCapMediaRecord            = (_XSDK_CapMediaRecord            )::GetProcAddress(   hm, "XSDK_CapMediaRecord" );
         pfnSetMediaRecord            = (_XSDK_SetMediaRecord            )::GetProcAddress(   hm, "XSDK_SetMediaRecord" );
         pfnGetMediaRecord            = (_XSDK_GetMediaRecord            )::GetProcAddress(   hm, "XSDK_GetMediaRecord" );

         pfnCapForceMode              = (_XSDK_CapForceMode              )::GetProcAddress(   hm, "XSDK_CapForceMode" );
         pfnSetForceMode              = (_XSDK_SetForceMode              )::GetProcAddress(   hm, "XSDK_SetForceMode" );

         pfnCapProp                   = (_XSDK_CapProp                   )::GetProcAddress(   hm, "XSDK_CapProp" );
         pfnSetProp                   = (_XSDK_SetProp                   )::GetProcAddress(   hm, "XSDK_SetProp" );
         pfnGetProp                   = (_XSDK_GetProp                   )::GetProcAddress(   hm, "XSDK_GetProp" );

    }

    dev_count = 0;
}

int FUJIFILM::init(){
    int ret = pfnInit(hm);
    if(ret == XSDK_COMPLETE) std::cout<<"SDK Init success"<<std::endl;
    else std::cout<<"Error in SDK Init"<<std::endl;
}

int FUJIFILM::exit() {
    int ret = pfnExit();
    if(ret == XSDK_COMPLETE) std::cout<<"SDK Exit success"<<std::endl;
    else std::cout<<"Error in SDK Exit"<<std::endl;
}

int FUJIFILM::detect_usb() {
    int ret = pfnDetect(XSDK_DSC_IF_USB, NULL, NULL, &dev_count);
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Device detected:\n"<<"count:\t"<<dev_count<<std::endl;
    }
    else std::cout<<"Can not detect device."<<std::endl;
}

int FUJIFILM::openEx(int id=0) {
    if(dev_count == 0) {
        std::cout<<"No device."<<std::endl;
        return XSDK_ERROR;
    } else if(dev_count-1 < id){
        std::cout<<"Id out of range."<<std::endl;
    } else{
        std::string dev = "ENUM:"+std::to_string(id);
        int ret = pfnOpenEx(const_cast<LPSTR>(dev.c_str()), &hCam, &cam_mode, NULL);
        if(ret == XSDK_COMPLETE){
            std::cout<<"Camera "<<id<<" Open success."<<std::endl;
            std::cout<<"Camera mode: "<<cam_mode<<":"<<std::endl;
            switch (cam_mode) {
                case XSDK_DSC_MODE_TETHER:
                    std::cout << "Tethered shooting." << std::endl;
                    break;
                case XSDK_DSC_MODE_RAW:
                    std::cout << "USB RAW DEV." << std::endl;
                    break;
                case XSDK_DSC_MODE_BR:
                    std::cout << "Backup/Restore." << std::endl;
                    break;
                case XSDK_DSC_MODE_WEBCAM:
                    std::cout << "Limited tethered shooting functions(only for XWebcam operations)."<< std::endl;
                    break;
                default:
                    break;
            }
        }
        else {
            std::cout << "Can not open camera." << std::endl;
        }
    }
}

int FUJIFILM::close(XSDK_HANDLE hc) {
    int ret;
    if(hc == NULL) ret = pfnClose(hCam);
    else ret = pfnClose(hc);
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Camera close OK"<<std::endl;
        Sleep(600);
    }
}

int FUJIFILM::powerOff(XSDK_HANDLE hc) {
    int ret;
    if(hc == NULL) ret = pfnPowerOFF(hCam);
    else ret = pfnPowerOFF(hc);
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Camera off."<<std::endl;
    }
}

int FUJIFILM::getVersionString() {
    int ret = pfnGetVersionString(reinterpret_cast<LPSTR>(&version_string));
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Version string:\n"<<version_string<<std::endl;
    }
    else std::cout<<"Version string get error."<<std::endl;
}

int FUJIFILM::getDeviceInfo(XSDK_HANDLE hc) {
    int ret;
    if(hc == NULL) ret = pfnGetDeviceInfo(hCam, &dev_info);
    else ret = pfnGetDeviceInfo(hc, &dev_info);

    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Device Info:"<<std::endl;
        std::cout<<"\tid: "<<dev_info.bDeviceId<<std::endl;
        std::cout<<"\tname: "<<dev_info.strDeviceName<<std::endl;
        std::cout<<"\ttype: "<<dev_info.strDeviceType<<std::endl;
        std::cout<<"\tserial No:"<<dev_info.strSerialNo<<std::endl;
        std::cout<<"\tproduct: "<<dev_info.strProduct<<std::endl;
        std::cout<<"\tfirmware: "<<dev_info.strFirmware<<std::endl;
        std::cout<<"\tmanufacturer: "<<dev_info.strManufacturer<<std::endl;
        std::cout<<"\tframwork: "<<dev_info.strFramework<<std::endl;
        std::cout<<"\tvendor: "<<dev_info.strVendor<<std::endl;
        std::cout<<"\tYNo: "<<dev_info.strYNo<<std::endl;
    } else std::cout<<"Get device info error"<<std::endl;
}

int FUJIFILM::getLensInfo(XSDK_HANDLE hc) {
    if(hc == NULL) hc = hCam;
    int ret = pfnGetLensInfo(hc, &lens_info);
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Lens Info:"<<std::endl;
        std::cout<<"\tmodel: "<<lens_info.strModel<<std::endl;
        std::cout<<"\tproduct name: "<<lens_info.strProductName<<std::endl;
        std::cout<<"\tserial No: "<<lens_info.strSerialNo<<std::endl;
        std::cout<<"\tstabilizaion switch: "<<lens_info.lISCapability<<std::endl;
        std::cout<<"\tmanual focus switch: "<<lens_info.lMFCapability<<std::endl;
        std::cout<<"\tset zoompos enabled lens: "<<lens_info.lZoomPosCapability<<std::endl;
    } else std::cout<<"Can not Get lens info"<<std::endl;
}

int FUJIFILM::capPriorityMode(XSDK_HANDLE hc) {
    int ret;
    if(hc == NULL) hc = hCam;
    ret = pfnCapPriorityMode(hc, &prio_num, prio_mode);
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"Number of priority mode: "<<prio_num<<std::endl;
    }
    else
        std::cout<<"Cannot cap priority mode."<<std::endl;
}

int FUJIFILM::capShutterSpeed(XSDK_HANDLE hc) {
    if(hc == NULL) hc = hCam;
    int ret = pfnCapShutterSpeed(hc, &ss_num, &ss, &bule);
    if(ret == XSDK_COMPLETE)
    {
        std::cout<<"shutter speed number: "<<ss_num<<std::endl;
        std::cout<<"shutter speed: "<<ss<<std::endl;
        std::cout<<"bule supported: "<<bule<<std::endl;
    } else std::cout<<"Can not cap shutter speed"<<std::endl;

}