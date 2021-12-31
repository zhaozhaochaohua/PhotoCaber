///////////////////////////////////////////////////
//  GFX100.h
//     Version 1.0.0.0
//
//     Copyright (C) 2021 FUJIFILM Corporation.
//

#ifndef _XAPIOPT_H
#include "XAPIOpt.h"
#define _XAPIOPT_H
#endif


//
// API_PARAM for GFX100
//
enum {
	GFX100_API_PARAM_CapImageSize                = 2,
	GFX100_API_PARAM_SetImageSize                = 1,
	GFX100_API_PARAM_GetImageSize                = 1,
	GFX100_API_PARAM_CapSharpness                = 2,
	GFX100_API_PARAM_SetSharpness                = 1,
	GFX100_API_PARAM_GetSharpness                = 1,
	GFX100_API_PARAM_CapColorMode                = 2,
	GFX100_API_PARAM_SetColorMode                = 1,
	GFX100_API_PARAM_GetColorMode                = 1,
	GFX100_API_PARAM_CapFilmSimulationMode       = 2,
	GFX100_API_PARAM_SetFilmSimulationMode       = 1,
	GFX100_API_PARAM_GetFilmSimulationMode       = 1,
	GFX100_API_PARAM_CapColorSpace               = 2,
	GFX100_API_PARAM_SetColorSpace               = 1,
	GFX100_API_PARAM_GetColorSpace               = 1,
	GFX100_API_PARAM_CapImageQuality             = 2,
	GFX100_API_PARAM_SetImageQuality             = 1,
	GFX100_API_PARAM_GetImageQuality             = 1,
	GFX100_API_PARAM_CapRAWCompression           = 2,
	GFX100_API_PARAM_SetRAWCompression           = 1,
	GFX100_API_PARAM_GetRAWCompression           = 1,
	GFX100_API_PARAM_CapGrainEffect              = 2,
	GFX100_API_PARAM_SetGrainEffect              = 1,
	GFX100_API_PARAM_GetGrainEffect              = 1,
	GFX100_API_PARAM_CapShadowing                = 2,
	GFX100_API_PARAM_SetShadowing                = 1,
	GFX100_API_PARAM_GetShadowing                = 1,
	GFX100_API_PARAM_CapNoiseReduction           = 2,
	GFX100_API_PARAM_SetNoiseReduction           = 1,
	GFX100_API_PARAM_GetNoiseReduction           = 1,
	GFX100_API_PARAM_CapFaceDetectionMode        = 2,
	GFX100_API_PARAM_SetFaceDetectionMode        = 1,
	GFX100_API_PARAM_GetFaceDetectionMode        = 1,
	GFX100_API_PARAM_CapEyeAFMode                = 2,
	GFX100_API_PARAM_SetEyeAFMode                = 1,
	GFX100_API_PARAM_GetEyeAFMode                = 1,
	GFX100_API_PARAM_SetMacroMode                = -1,
	GFX100_API_PARAM_GetMacroMode                = -1,
	GFX100_API_PARAM_CapFocusLimiter             = -1,
	GFX100_API_PARAM_SetFocusLimiter             = -1,
	GFX100_API_PARAM_GetFocusLimiter             = -1,
	GFX100_API_PARAM_CapHighLightTone            = 2,
	GFX100_API_PARAM_SetHighLightTone            = 1,
	GFX100_API_PARAM_GetHighLightTone            = 1,
	GFX100_API_PARAM_CapShadowTone               = 2,
	GFX100_API_PARAM_SetShadowTone               = 1,
	GFX100_API_PARAM_GetShadowTone               = 1,
	GFX100_API_PARAM_CapLongExposureNR           = 2,
	GFX100_API_PARAM_SetLongExposureNR           = 1,
	GFX100_API_PARAM_GetLongExposureNR           = 1,
	GFX100_API_PARAM_CapFullTimeManualFocus      = 2,
	GFX100_API_PARAM_SetFullTimeManualFocus      = 1,
	GFX100_API_PARAM_GetFullTimeManualFocus      = 1,
	GFX100_API_PARAM_SetFocusMode                = 1,
	GFX100_API_PARAM_GetFocusMode                = 1,
	GFX100_API_PARAM_CapAFMode                   = 3,
	GFX100_API_PARAM_SetAFMode                   = 2,
	GFX100_API_PARAM_GetAFMode                   = 2,
	GFX100_API_PARAM_CapFocusPoints              = 2,
	GFX100_API_PARAM_SetFocusPoints              = 1,
	GFX100_API_PARAM_GetFocusPoints              = 1,
	GFX100_API_PARAM_CapFocusArea                = 3,
	GFX100_API_PARAM_SetFocusArea                = 2,
	GFX100_API_PARAM_GetFocusArea                = 2,
	GFX100_API_PARAM_CapFocusMode                = 2,
	GFX100_API_PARAM_CapAFStatus                 = 2,
	GFX100_API_PARAM_GetAFStatus                 = 1,
	GFX100_API_PARAM_CapMovieAFMode              = 2,
	GFX100_API_PARAM_SetMovieAFMode              = 1,
	GFX100_API_PARAM_GetMovieAFMode              = 1,
	GFX100_API_PARAM_CapMovieFocusArea           = 3,
	GFX100_API_PARAM_SetMovieFocusArea           = 2,
	GFX100_API_PARAM_GetMovieFocusArea           = 2,
	GFX100_API_PARAM_CapShutterPriorityMode      = 3,
	GFX100_API_PARAM_SetShutterPriorityMode      = 2,
	GFX100_API_PARAM_GetShutterPriorityMode      = 2,
	GFX100_API_PARAM_CapInstantAFMode            = 2,
	GFX100_API_PARAM_SetInstantAFMode            = 1,
	GFX100_API_PARAM_GetInstantAFMode            = 1,
	GFX100_API_PARAM_CapPreAFMode                = 2,
	GFX100_API_PARAM_SetPreAFMode                = 1,
	GFX100_API_PARAM_GetPreAFMode                = 1,
	GFX100_API_PARAM_CapAFIlluminator            = 2,
	GFX100_API_PARAM_SetAFIlluminator            = 1,
	GFX100_API_PARAM_GetAFIlluminator            = 1,
	GFX100_API_PARAM_CapLensISSwitch             = 2,
	GFX100_API_PARAM_SetLensISSwitch             = 1,
	GFX100_API_PARAM_GetLensISSwitch             = 1,
	GFX100_API_PARAM_CapISMode                   = 2,
	GFX100_API_PARAM_SetISMode                   = 1,
	GFX100_API_PARAM_GetISMode                   = 1,
	GFX100_API_PARAM_CapLMOMode                  = 2,
	GFX100_API_PARAM_SetLMOMode                  = 1,
	GFX100_API_PARAM_GetLMOMode                  = 1,
	GFX100_API_PARAM_SetWhiteBalanceMode         = -1,
	GFX100_API_PARAM_GetWhiteBalanceMode         = -1,
	GFX100_API_PARAM_CapWhiteBalanceTune         = 5,
	GFX100_API_PARAM_SetWhiteBalanceTune         = 3,
	GFX100_API_PARAM_GetWhiteBalanceTune         = 3,
	GFX100_API_PARAM_CapCaptureDelay             = 2,
	GFX100_API_PARAM_SetCaptureDelay             = 1,
	GFX100_API_PARAM_GetCaptureDelay             = 1,
	GFX100_API_PARAM_CapFocusPos                 = 2,
	GFX100_API_PARAM_SetFocusPos                 = 1,
	GFX100_API_PARAM_GetFocusPos                 = 1,
	GFX100_API_PARAM_CapMFAssistMode             = 2,
	GFX100_API_PARAM_SetMFAssistMode             = 1,
	GFX100_API_PARAM_GetMFAssistMode             = 1,
	GFX100_API_PARAM_CapFocusCheckMode           = 2,
	GFX100_API_PARAM_SetFocusCheckMode           = 1,
	GFX100_API_PARAM_GetFocusCheckMode           = 1,
	GFX100_API_PARAM_CapInterlockAEAFArea        = 2,
	GFX100_API_PARAM_SetInterlockAEAFArea        = 1,
	GFX100_API_PARAM_GetInterlockAEAFArea        = 1,
	GFX100_API_PARAM_StartLiveView               = 0,
	GFX100_API_PARAM_StopLiveView                = 0,
	GFX100_API_PARAM_CapLiveViewImageQuality     = 2,
	GFX100_API_PARAM_SetLiveViewImageQuality     = 1,
	GFX100_API_PARAM_GetLiveViewImageQuality     = 1,
	GFX100_API_PARAM_CapLiveViewImageSize        = 2,
	GFX100_API_PARAM_SetLiveViewImageSize        = 1,
	GFX100_API_PARAM_GetLiveViewImageSize        = 1,
	GFX100_API_PARAM_CapThroughImageZoom         = 2,
	GFX100_API_PARAM_SetThroughImageZoom         = 1,
	GFX100_API_PARAM_GetThroughImageZoom         = 1,
	GFX100_API_PARAM_SetDateTime                 = 6,
	GFX100_API_PARAM_GetDateTime                 = 6,
	GFX100_API_PARAM_SetDateTimeDispFormat       = -1,
	GFX100_API_PARAM_GetDateTimeDispFormat       = -1,
	GFX100_API_PARAM_SetWorldClock               = -1,
	GFX100_API_PARAM_GetWorldClock               = -1,
	GFX100_API_PARAM_SetTimeDifference           = -1,
	GFX100_API_PARAM_GetTimeDifference           = -1,
	GFX100_API_PARAM_CapResetSetting             = 2,
	GFX100_API_PARAM_ResetSetting                = 1,
	GFX100_API_PARAM_SetSilentMode               = -1,
	GFX100_API_PARAM_GetSilentMode               = -1,
	GFX100_API_PARAM_SetBeep                     = -1,
	GFX100_API_PARAM_GetBeep                     = -1,
	GFX100_API_PARAM_SetFunctionLock             = 1,
	GFX100_API_PARAM_GetFunctionLock             = 1,
	GFX100_API_PARAM_CapFunctionLock             = 2,
	GFX100_API_PARAM_SetFunctionLockCategory     = 2,
	GFX100_API_PARAM_GetFunctionLockCategory     = 2,
	GFX100_API_PARAM_SetComment                  = 1,
	GFX100_API_PARAM_GetComment                  = 1,
	GFX100_API_PARAM_SetCopyright                = 2,
	GFX100_API_PARAM_GetCopyright                = 2,
	GFX100_API_PARAM_SetFilenamePrefix           = 2,
	GFX100_API_PARAM_GetFilenamePrefix           = 2,
	GFX100_API_PARAM_SetFoldernameSuffix         = 3,
	GFX100_API_PARAM_GetFoldernameSuffix         = 3,
	GFX100_API_PARAM_GetFoldernameList           = 4,
	GFX100_API_PARAM_CheckBatteryInfo            = 8,
	GFX100_API_PARAM_SetFrameNumberSequence      = -1,
	GFX100_API_PARAM_GetFrameNumberSequence      = -1,
	GFX100_API_PARAM_SetUSBMode                  = -1,
	GFX100_API_PARAM_GetUSBMode                  = -1,
	GFX100_API_PARAM_CapFormatMemoryCard         = 2,
	GFX100_API_PARAM_FormatMemoryCard            = 1,
	GFX100_API_PARAM_SetMediaRecord              = 1,
	GFX100_API_PARAM_GetMediaRecord              = 1,
	GFX100_API_PARAM_GetMediaCapacity            = 5,
	GFX100_API_PARAM_GetMediaStatus              = 2,
	GFX100_API_PARAM_GetShutterCount             = 3,
	GFX100_API_PARAM_GetShutterCountEx           = 3,
	GFX100_API_PARAM_SetSensorCleanTiming        = -1,
	GFX100_API_PARAM_GetSensorCleanTiming        = -1,
	GFX100_API_PARAM_SetPreviewTime              = -1,
	GFX100_API_PARAM_GetPreviewTime              = -1,
	GFX100_API_PARAM_SetEVFDispAutoRotate        = -1,
	GFX100_API_PARAM_GetEVFDispAutoRotate        = -1,
	GFX100_API_PARAM_SetDispMMode                = 1,
	GFX100_API_PARAM_GetDispMMode                = 1,
	GFX100_API_PARAM_CapExposurePreview          = 2,
	GFX100_API_PARAM_SetExposurePreview          = 1,
	GFX100_API_PARAM_GetExposurePreview          = 1,
	GFX100_API_PARAM_SetDispBrightness           = -1,
	GFX100_API_PARAM_GetDispBrightness           = -1,
	GFX100_API_PARAM_CapFrameGuideMode           = 2,
	GFX100_API_PARAM_SetFrameGuideMode           = 1,
	GFX100_API_PARAM_GetFrameGuideMode           = 1,
	GFX100_API_PARAM_SetFrameGuideGridInfo       = 2,
	GFX100_API_PARAM_GetFrameGuideGridInfo       = 2,
	GFX100_API_PARAM_SetAutoImageRotation        = -1,
	GFX100_API_PARAM_GetAutoImageRotation        = -1,
	GFX100_API_PARAM_CapFocusScaleUnit           = 2,
	GFX100_API_PARAM_SetFocusScaleUnit           = 1,
	GFX100_API_PARAM_GetFocusScaleUnit           = 1,
	GFX100_API_PARAM_SetCustomDispInfo           = -1,
	GFX100_API_PARAM_GetCustomDispInfo           = -1,
	GFX100_API_PARAM_CapViewMode                 = 3,
	GFX100_API_PARAM_SetViewMode                 = 2,
	GFX100_API_PARAM_GetViewMode                 = 2,
	GFX100_API_PARAM_SetDispInfoMode             = -1,
	GFX100_API_PARAM_GetDispInfoMode             = -1,
	GFX100_API_PARAM_SetDispChroma               = -1,
	GFX100_API_PARAM_GetDispChroma               = -1,
	GFX100_API_PARAM_CapCustomAutoPowerOff       = 2,
	GFX100_API_PARAM_SetCustomAutoPowerOff       = 1,
	GFX100_API_PARAM_GetCustomAutoPowerOff       = 1,
	GFX100_API_PARAM_CapCustomStudioPowerSave    = 2,
	GFX100_API_PARAM_SetCustomStudioPowerSave    = 1,
	GFX100_API_PARAM_GetCustomStudioPowerSave    = 1,
	GFX100_API_PARAM_SetFunctionButton           = -1,
	GFX100_API_PARAM_GetFunctionButton           = -1,
	GFX100_API_PARAM_SetISODialHn                = -1,
	GFX100_API_PARAM_GetISODialHn                = -1,
	GFX100_API_PARAM_CapLockButtonMode           = 2,
	GFX100_API_PARAM_SetLockButtonMode           = 1,
	GFX100_API_PARAM_GetLockButtonMode           = 1,
	GFX100_API_PARAM_SetAFLockMode               = -1,
	GFX100_API_PARAM_GetAFLockMode               = -1,
	GFX100_API_PARAM_SetMicJackMode              = -1,
	GFX100_API_PARAM_GetMicJackMode              = -1,
	GFX100_API_PARAM_SetAeAfLockKeyAssign        = -1,
	GFX100_API_PARAM_GetAeAfLockKeyAssign        = -1,
	GFX100_API_PARAM_SetCrossKeyAssign           = -1,
	GFX100_API_PARAM_GetCrossKeyAssign           = -1,
	GFX100_API_PARAM_CapWideDynamicRange         = 2,
	GFX100_API_PARAM_SetWideDynamicRange         = 1,
	GFX100_API_PARAM_GetWideDynamicRange         = 1,
	GFX100_API_PARAM_CapClarityMode              = 2,
	GFX100_API_PARAM_SetClarityMode              = 1,
	GFX100_API_PARAM_GetClarityMode              = 1,
	GFX100_API_PARAM_SetBlackImageTone           = 1,
	GFX100_API_PARAM_GetBlackImageTone           = 1,
	GFX100_API_PARAM_GetTNumber                  = -1,
	GFX100_API_PARAM_CapCropMode                 = 2,
	GFX100_API_PARAM_SetCropMode                 = 1,
	GFX100_API_PARAM_GetCropMode                 = 2,
	GFX100_API_PARAM_GetCropAreaFrameInfo        = -1,
	GFX100_API_PARAM_CapRAWOutputDepth           = 2,
	GFX100_API_PARAM_SetRAWOutputDepth           = 1,
	GFX100_API_PARAM_GetRAWOutputDepth           = 1,
	GFX100_API_PARAM_CapSmoothSkinEffect         = 2,
	GFX100_API_PARAM_SetSmoothSkinEffect         = 1,
	GFX100_API_PARAM_GetSmoothSkinEffect         = 1,
	GFX100_API_PARAM_GetDetectedFaceFrame        = 2,
	GFX100_API_PARAM_SetDetectedFaceFrame        = 1,
    GFX100_API_PARAM_SetCustomWBArea             = 2,
    GFX100_API_PARAM_GetCustomWBArea             = 2,
	GFX100_API_PARAM_CapColorChromeBlue          = 2,
	GFX100_API_PARAM_SetColorChromeBlue          = 1,
	GFX100_API_PARAM_GetColorChromeBlue          = 1,
	GFX100_API_PARAM_CapMonochromaticColor       = 4,
	GFX100_API_PARAM_SetMonochromaticColor       = 2,
	GFX100_API_PARAM_GetMonochromaticColor       = 2,
	GFX100_API_PARAM_CapFocusLimiterPos          = 4,
	GFX100_API_PARAM_SetFocusLimiterPos          = 2,
	GFX100_API_PARAM_GetFocusLimiterIndicator    = 1,
	GFX100_API_PARAM_GetFocusLimiterRange        = 2,
	GFX100_API_PARAM_CapFocusLimiterMode         = 2,
	GFX100_API_PARAM_SetFocusLimiterMode         = 1,
	GFX100_API_PARAM_GetFocusLimiterMode         = 1,
	GFX100_API_PARAM_GetCommandDialStatus        = 4,
	GFX100_API_PARAM_CapPerformanceSettings      = 2,
	GFX100_API_PARAM_SetPerformanceSettings      = 1,
	GFX100_API_PARAM_GetPerformanceSettings      = 1,
	GFX100_API_PARAM_CapMicLineSetting           = 2,
	GFX100_API_PARAM_SetMicLineSetting           = 1,
	GFX100_API_PARAM_GetMicLineSetting           = 1,
	GFX100_API_PARAM_CapCustomSettingAutoUpdate  = 2,
	GFX100_API_PARAM_SetCustomSettingAutoUpdate  = 1,
	GFX100_API_PARAM_GetCustomSettingAutoUpdate  = 1,
    GFX100_API_PARAM_CapPixelShiftSettings       = 2,
    GFX100_API_PARAM_SetPixelShiftSettings       = 1,
    GFX100_API_PARAM_GetPixelShiftSettings       = 1,
};

//
// API_CODE for GFX100
//
enum {
	GFX100_API_CODE_CapImageSize                = API_CODE_CapImageSize,
	GFX100_API_CODE_SetImageSize                = API_CODE_SetImageSize,
	GFX100_API_CODE_GetImageSize                = API_CODE_GetImageSize,
	GFX100_API_CODE_CapSharpness                = API_CODE_CapSharpness,
	GFX100_API_CODE_SetSharpness                = API_CODE_SetSharpness,
	GFX100_API_CODE_GetSharpness                = API_CODE_GetSharpness,
	GFX100_API_CODE_CapColorMode                = API_CODE_CapColorMode,
	GFX100_API_CODE_SetColorMode                = API_CODE_SetColorMode,
	GFX100_API_CODE_GetColorMode                = API_CODE_GetColorMode,
	GFX100_API_CODE_CapFilmSimulationMode       = API_CODE_CapFilmSimulationMode,
	GFX100_API_CODE_SetFilmSimulationMode       = API_CODE_SetFilmSimulationMode,
	GFX100_API_CODE_GetFilmSimulationMode       = API_CODE_GetFilmSimulationMode,
	GFX100_API_CODE_CapColorSpace               = API_CODE_CapColorSpace,
	GFX100_API_CODE_SetColorSpace               = API_CODE_SetColorSpace,
	GFX100_API_CODE_GetColorSpace               = API_CODE_GetColorSpace,
	GFX100_API_CODE_CapImageQuality             = API_CODE_CapImageQuality,
	GFX100_API_CODE_SetImageQuality             = API_CODE_SetImageQuality,
	GFX100_API_CODE_GetImageQuality             = API_CODE_GetImageQuality,
	GFX100_API_CODE_CapRAWCompression           = API_CODE_CapRAWCompression,
	GFX100_API_CODE_SetRAWCompression           = API_CODE_SetRAWCompression,
	GFX100_API_CODE_GetRAWCompression           = API_CODE_GetRAWCompression,
	GFX100_API_CODE_CapGrainEffect              = API_CODE_CapGrainEffect,
	GFX100_API_CODE_SetGrainEffect              = API_CODE_SetGrainEffect,
	GFX100_API_CODE_GetGrainEffect              = API_CODE_GetGrainEffect,
	GFX100_API_CODE_CapShadowing                = API_CODE_CapShadowing,
	GFX100_API_CODE_SetShadowing                = API_CODE_SetShadowing,
	GFX100_API_CODE_GetShadowing                = API_CODE_GetShadowing,
	GFX100_API_CODE_CapNoiseReduction           = API_CODE_CapNoiseReduction,
	GFX100_API_CODE_SetNoiseReduction           = API_CODE_SetNoiseReduction,
	GFX100_API_CODE_GetNoiseReduction           = API_CODE_GetNoiseReduction,
	GFX100_API_CODE_CapFaceDetectionMode        = API_CODE_CapFaceDetectionMode,
	GFX100_API_CODE_SetFaceDetectionMode        = API_CODE_SetFaceDetectionMode,
	GFX100_API_CODE_GetFaceDetectionMode        = API_CODE_GetFaceDetectionMode,
	GFX100_API_CODE_CapEyeAFMode                = API_CODE_CapEyeAFMode,
	GFX100_API_CODE_SetEyeAFMode                = API_CODE_SetEyeAFMode,
	GFX100_API_CODE_GetEyeAFMode                = API_CODE_GetEyeAFMode,
	GFX100_API_CODE_SetMacroMode                = API_CODE_SetMacroMode,
	GFX100_API_CODE_GetMacroMode                = API_CODE_GetMacroMode,
	GFX100_API_CODE_CapHighLightTone            = API_CODE_CapHighLightTone,
	GFX100_API_CODE_SetHighLightTone            = API_CODE_SetHighLightTone,
	GFX100_API_CODE_GetHighLightTone            = API_CODE_GetHighLightTone,
	GFX100_API_CODE_CapShadowTone               = API_CODE_CapShadowTone,
	GFX100_API_CODE_SetShadowTone               = API_CODE_SetShadowTone,
	GFX100_API_CODE_GetShadowTone               = API_CODE_GetShadowTone,
	GFX100_API_CODE_CapLongExposureNR           = API_CODE_CapLongExposureNR,
	GFX100_API_CODE_SetLongExposureNR           = API_CODE_SetLongExposureNR,
	GFX100_API_CODE_GetLongExposureNR           = API_CODE_GetLongExposureNR,
	GFX100_API_CODE_CapFullTimeManualFocus      = API_CODE_CapFullTimeManualFocus,
	GFX100_API_CODE_SetFullTimeManualFocus      = API_CODE_SetFullTimeManualFocus,
	GFX100_API_CODE_GetFullTimeManualFocus      = API_CODE_GetFullTimeManualFocus,
	GFX100_API_CODE_SetFocusMode                = API_CODE_SetFocusMode,
	GFX100_API_CODE_GetFocusMode                = API_CODE_GetFocusMode,
	GFX100_API_CODE_CapAFMode                   = API_CODE_CapAFMode,
	GFX100_API_CODE_SetAFMode                   = API_CODE_SetAFMode,
	GFX100_API_CODE_GetAFMode                   = API_CODE_GetAFMode,
	GFX100_API_CODE_CapFocusPoints              = API_CODE_CapFocusPoints,
	GFX100_API_CODE_SetFocusPoints              = API_CODE_SetFocusPoints,
	GFX100_API_CODE_GetFocusPoints              = API_CODE_GetFocusPoints,
	GFX100_API_CODE_CapFocusArea                = API_CODE_CapFocusArea,
	GFX100_API_CODE_SetFocusArea                = API_CODE_SetFocusArea,
	GFX100_API_CODE_GetFocusArea                = API_CODE_GetFocusArea,
	GFX100_API_CODE_CapFocusMode                = API_CODE_CapFocusMode,
	GFX100_API_CODE_CapAFStatus                 = API_CODE_CapAFStatus,
	GFX100_API_CODE_GetAFStatus                 = API_CODE_GetAFStatus,
	GFX100_API_CODE_CapMovieAFMode              = API_CODE_CapMovieAFMode,
	GFX100_API_CODE_SetMovieAFMode              = API_CODE_SetMovieAFMode,
	GFX100_API_CODE_GetMovieAFMode              = API_CODE_GetMovieAFMode,
	GFX100_API_CODE_CapMovieFocusArea           = API_CODE_CapMovieFocusArea,
	GFX100_API_CODE_SetMovieFocusArea           = API_CODE_SetMovieFocusArea,
	GFX100_API_CODE_GetMovieFocusArea           = API_CODE_GetMovieFocusArea,
	GFX100_API_CODE_CapShutterPriorityMode      = API_CODE_CapShutterPriorityMode,
	GFX100_API_CODE_SetShutterPriorityMode      = API_CODE_SetShutterPriorityMode,
	GFX100_API_CODE_GetShutterPriorityMode      = API_CODE_GetShutterPriorityMode,
	GFX100_API_CODE_CapInstantAFMode            = API_CODE_CapInstantAFMode,
	GFX100_API_CODE_SetInstantAFMode            = API_CODE_SetInstantAFMode,
	GFX100_API_CODE_GetInstantAFMode            = API_CODE_GetInstantAFMode,
	GFX100_API_CODE_CapPreAFMode                = API_CODE_CapPreAFMode,
	GFX100_API_CODE_SetPreAFMode                = API_CODE_SetPreAFMode,
	GFX100_API_CODE_GetPreAFMode                = API_CODE_GetPreAFMode,
	GFX100_API_CODE_CapAFIlluminator            = API_CODE_CapAFIlluminator,
	GFX100_API_CODE_SetAFIlluminator            = API_CODE_SetAFIlluminator,
	GFX100_API_CODE_GetAFIlluminator            = API_CODE_GetAFIlluminator,
	GFX100_API_CODE_CapLensISSwitch             = API_CODE_CapLensISSwitch,
	GFX100_API_CODE_SetLensISSwitch             = API_CODE_SetLensISSwitch,
	GFX100_API_CODE_GetLensISSwitch             = API_CODE_GetLensISSwitch,
	GFX100_API_CODE_CapISMode                   = API_CODE_CapISMode,
	GFX100_API_CODE_SetISMode                   = API_CODE_SetISMode,
	GFX100_API_CODE_GetISMode                   = API_CODE_GetISMode,
	GFX100_API_CODE_CapLMOMode                  = API_CODE_CapLMOMode,
	GFX100_API_CODE_SetLMOMode                  = API_CODE_SetLMOMode,
	GFX100_API_CODE_GetLMOMode                  = API_CODE_GetLMOMode,
	GFX100_API_CODE_SetWhiteBalanceMode         = API_CODE_SetWhiteBalanceMode,
	GFX100_API_CODE_GetWhiteBalanceMode         = API_CODE_GetWhiteBalanceMode,
	GFX100_API_CODE_CapWhiteBalanceTune         = API_CODE_CapWhiteBalanceTune,
	GFX100_API_CODE_SetWhiteBalanceTune         = API_CODE_SetWhiteBalanceTune,
	GFX100_API_CODE_GetWhiteBalanceTune         = API_CODE_GetWhiteBalanceTune,
	GFX100_API_CODE_CapCaptureDelay             = API_CODE_CapCaptureDelay,
	GFX100_API_CODE_SetCaptureDelay             = API_CODE_SetCaptureDelay,
	GFX100_API_CODE_GetCaptureDelay             = API_CODE_GetCaptureDelay,
	GFX100_API_CODE_CapFocusPos                 = API_CODE_CapFocusPos,
	GFX100_API_CODE_SetFocusPos                 = API_CODE_SetFocusPos,
	GFX100_API_CODE_GetFocusPos                 = API_CODE_GetFocusPos,
	GFX100_API_CODE_CapMFAssistMode             = API_CODE_CapMFAssistMode,
	GFX100_API_CODE_SetMFAssistMode             = API_CODE_SetMFAssistMode,
	GFX100_API_CODE_GetMFAssistMode             = API_CODE_GetMFAssistMode,
	GFX100_API_CODE_CapFocusCheckMode           = API_CODE_CapFocusCheckMode,
	GFX100_API_CODE_SetFocusCheckMode           = API_CODE_SetFocusCheckMode,
	GFX100_API_CODE_GetFocusCheckMode           = API_CODE_GetFocusCheckMode,
	GFX100_API_CODE_CapInterlockAEAFArea        = API_CODE_CapInterlockAEAFArea,
	GFX100_API_CODE_SetInterlockAEAFArea        = API_CODE_SetInterlockAEAFArea,
	GFX100_API_CODE_GetInterlockAEAFArea        = API_CODE_GetInterlockAEAFArea,
	GFX100_API_CODE_StartLiveView               = API_CODE_StartLiveView,
	GFX100_API_CODE_StopLiveView                = API_CODE_StopLiveView,
	GFX100_API_CODE_CapLiveViewImageQuality     = API_CODE_CapLiveViewImageQuality,
	GFX100_API_CODE_SetLiveViewImageQuality     = API_CODE_SetLiveViewImageQuality,
	GFX100_API_CODE_GetLiveViewImageQuality     = API_CODE_GetLiveViewImageQuality,
	GFX100_API_CODE_CapLiveViewImageSize        = API_CODE_CapLiveViewImageSize,
	GFX100_API_CODE_SetLiveViewImageSize        = API_CODE_SetLiveViewImageSize,
	GFX100_API_CODE_GetLiveViewImageSize        = API_CODE_GetLiveViewImageSize,
	GFX100_API_CODE_CapThroughImageZoom         = API_CODE_CapThroughImageZoom,
	GFX100_API_CODE_SetThroughImageZoom         = API_CODE_SetThroughImageZoom,
	GFX100_API_CODE_GetThroughImageZoom         = API_CODE_GetThroughImageZoom,
	GFX100_API_CODE_SetDateTime                 = API_CODE_SetDateTime,
	GFX100_API_CODE_GetDateTime                 = API_CODE_GetDateTime,
	GFX100_API_CODE_SetDateTimeDispFormat       = API_CODE_SetDateTimeDispFormat,
	GFX100_API_CODE_GetDateTimeDispFormat       = API_CODE_GetDateTimeDispFormat,
	GFX100_API_CODE_SetWorldClock               = API_CODE_SetWorldClock,
	GFX100_API_CODE_GetWorldClock               = API_CODE_GetWorldClock,
	GFX100_API_CODE_SetTimeDifference           = API_CODE_SetTimeDifference,
	GFX100_API_CODE_GetTimeDifference           = API_CODE_GetTimeDifference,
	GFX100_API_CODE_CapResetSetting             = API_CODE_CapResetSetting,
	GFX100_API_CODE_ResetSetting                = API_CODE_ResetSetting,
	GFX100_API_CODE_SetSilentMode               = API_CODE_SetSilentMode,
	GFX100_API_CODE_GetSilentMode               = API_CODE_GetSilentMode,
	GFX100_API_CODE_SetBeep                     = API_CODE_SetBeep,
	GFX100_API_CODE_GetBeep                     = API_CODE_GetBeep,
	GFX100_API_CODE_CapFunctionLock             = API_CODE_CapFunctionLock,
	GFX100_API_CODE_SetFunctionLock             = API_CODE_SetFunctionLock,
	GFX100_API_CODE_GetFunctionLock             = API_CODE_GetFunctionLock,
	GFX100_API_CODE_SetFunctionLockCategory     = API_CODE_SetFunctionLockCategory,
	GFX100_API_CODE_GetFunctionLockCategory     = API_CODE_GetFunctionLockCategory,
	GFX100_API_CODE_SetComment                  = API_CODE_SetComment,
	GFX100_API_CODE_GetComment                  = API_CODE_GetComment,
	GFX100_API_CODE_SetCopyright                = API_CODE_SetCopyright,
	GFX100_API_CODE_GetCopyright                = API_CODE_GetCopyright,
	GFX100_API_CODE_SetFilenamePrefix           = API_CODE_SetFilenamePrefix,
	GFX100_API_CODE_GetFilenamePrefix           = API_CODE_GetFilenamePrefix,
	GFX100_API_CODE_SetFoldernameSuffix         = API_CODE_SetFoldernameSuffix,
	GFX100_API_CODE_GetFoldernameSuffix         = API_CODE_GetFoldernameSuffix,
	GFX100_API_CODE_GetFoldernameList           = API_CODE_GetFoldernameList,
	GFX100_API_CODE_CheckBatteryInfo            = API_CODE_CheckBatteryInfo,
	GFX100_API_CODE_SetFrameNumberSequence      = API_CODE_SetFrameNumberSequence,
	GFX100_API_CODE_GetFrameNumberSequence      = API_CODE_GetFrameNumberSequence,
	GFX100_API_CODE_SetUSBMode                  = API_CODE_SetUSBMode,
	GFX100_API_CODE_GetUSBMode                  = API_CODE_GetUSBMode,
	GFX100_API_CODE_CapFormatMemoryCard         = API_CODE_CapFormatMemoryCard,
	GFX100_API_CODE_FormatMemoryCard            = API_CODE_FormatMemoryCard,
	GFX100_API_CODE_SetMediaRecord              = API_CODE_SDK_SetMediaRecord,
	GFX100_API_CODE_GetMediaRecord              = API_CODE_SDK_GetMediaRecord,
	GFX100_API_CODE_GetMediaCapacity            = API_CODE_GetMediaCapacity,
	GFX100_API_CODE_GetMediaStatus              = API_CODE_GetMediaStatus,
	GFX100_API_CODE_GetShutterCount             = API_CODE_GetShutterCount,
	GFX100_API_CODE_GetShutterCountEx           = API_CODE_GetShutterCountEx,
	GFX100_API_CODE_SetSensorCleanTiming        = API_CODE_SetSensorCleanTiming,
	GFX100_API_CODE_GetSensorCleanTiming        = API_CODE_GetSensorCleanTiming,
	GFX100_API_CODE_SetPreviewTime              = API_CODE_SetPreviewTime,
	GFX100_API_CODE_GetPreviewTime              = API_CODE_GetPreviewTime,
	GFX100_API_CODE_SetEVFDispAutoRotate        = API_CODE_SetEVFDispAutoRotate,
	GFX100_API_CODE_GetEVFDispAutoRotate        = API_CODE_GetEVFDispAutoRotate,
	GFX100_API_CODE_SetDispMMode                = API_CODE_SetExposurePreview,
	GFX100_API_CODE_GetDispMMode                = API_CODE_GetExposurePreview,
	GFX100_API_CODE_CapExposurePreview          = API_CODE_CapExposurePreview,
	GFX100_API_CODE_SetExposurePreview          = API_CODE_SetExposurePreview,
	GFX100_API_CODE_GetExposurePreview          = API_CODE_GetExposurePreview,
	GFX100_API_CODE_SetDispBrightness           = API_CODE_SetDispBrightness,
	GFX100_API_CODE_GetDispBrightness           = API_CODE_GetDispBrightness,
	GFX100_API_CODE_CapFrameGuideMode           = API_CODE_CapFrameGuideMode,
	GFX100_API_CODE_SetFrameGuideMode           = API_CODE_SetFrameGuideMode,
	GFX100_API_CODE_GetFrameGuideMode           = API_CODE_GetFrameGuideMode,
	GFX100_API_CODE_SetFrameGuideGridInfo       = API_CODE_SetFrameGuideGridInfo,
	GFX100_API_CODE_GetFrameGuideGridInfo       = API_CODE_GetFrameGuideGridInfo,
	GFX100_API_CODE_SetAutoImageRotation        = API_CODE_SetAutoImageRotation,
	GFX100_API_CODE_GetAutoImageRotation        = API_CODE_GetAutoImageRotation,
	GFX100_API_CODE_CapFocusScaleUnit           = API_CODE_CapFocusScaleUnit,
	GFX100_API_CODE_SetFocusScaleUnit           = API_CODE_SetFocusScaleUnit,
	GFX100_API_CODE_GetFocusScaleUnit           = API_CODE_GetFocusScaleUnit,
	GFX100_API_CODE_SetCustomDispInfo           = API_CODE_SetCustomDispInfo,
	GFX100_API_CODE_GetCustomDispInfo           = API_CODE_GetCustomDispInfo,
	GFX100_API_CODE_CapViewMode                 = API_CODE_CapViewMode,
	GFX100_API_CODE_SetViewMode                 = API_CODE_SetViewMode,
	GFX100_API_CODE_GetViewMode                 = API_CODE_GetViewMode,
	GFX100_API_CODE_SetDispInfoMode             = API_CODE_SetDispInfoMode,
	GFX100_API_CODE_GetDispInfoMode             = API_CODE_GetDispInfoMode,
	GFX100_API_CODE_SetDispChroma               = API_CODE_SetDispChroma,
	GFX100_API_CODE_GetDispChroma               = API_CODE_GetDispChroma,
	GFX100_API_CODE_CapCustomAutoPowerOff       = API_CODE_CapCustomAutoPowerOff,
	GFX100_API_CODE_SetCustomAutoPowerOff       = API_CODE_SetCustomAutoPowerOff,
	GFX100_API_CODE_GetCustomAutoPowerOff       = API_CODE_GetCustomAutoPowerOff,
	GFX100_API_CODE_CapCustomStudioPowerSave    = API_CODE_CapCustomStudioPowerSave,
	GFX100_API_CODE_SetCustomStudioPowerSave    = API_CODE_SetCustomStudioPowerSave,
	GFX100_API_CODE_GetCustomStudioPowerSave    = API_CODE_GetCustomStudioPowerSave,
	GFX100_API_CODE_SetFunctionButton           = API_CODE_SetFunctionButton,
	GFX100_API_CODE_GetFunctionButton           = API_CODE_GetFunctionButton,
	GFX100_API_CODE_SetISODialHn                = API_CODE_SetISODialHn,
	GFX100_API_CODE_GetISODialHn                = API_CODE_GetISODialHn,
	GFX100_API_CODE_CapLockButtonMode           = API_CODE_CapLockButtonMode,
	GFX100_API_CODE_SetLockButtonMode           = API_CODE_SetLockButtonMode,
	GFX100_API_CODE_GetLockButtonMode           = API_CODE_GetLockButtonMode,
	GFX100_API_CODE_SetAFLockMode               = API_CODE_SetAFLockMode,
	GFX100_API_CODE_GetAFLockMode               = API_CODE_GetAFLockMode,
	GFX100_API_CODE_SetMicJackMode              = API_CODE_SetMicJackMode,
	GFX100_API_CODE_GetMicJackMode              = API_CODE_GetMicJackMode,
	GFX100_API_CODE_SetAeAfLockKeyAssign        = API_CODE_SetAeAfLockKeyAssign,
	GFX100_API_CODE_GetAeAfLockKeyAssign        = API_CODE_GetAeAfLockKeyAssign,
	GFX100_API_CODE_SetCrossKeyAssign           = API_CODE_SetCrossKeyAssign,
	GFX100_API_CODE_GetCrossKeyAssign           = API_CODE_GetCrossKeyAssign,
	GFX100_API_CODE_CapWideDynamicRange         = API_CODE_CapWideDynamicRange,
	GFX100_API_CODE_SetWideDynamicRange         = API_CODE_SetWideDynamicRange,
	GFX100_API_CODE_GetWideDynamicRange         = API_CODE_GetWideDynamicRange,
	GFX100_API_CODE_CapClarityMode              = API_CODE_CapClarityMode,
	GFX100_API_CODE_SetClarityMode              = API_CODE_SetClarityMode,
	GFX100_API_CODE_GetClarityMode              = API_CODE_GetClarityMode,
	GFX100_API_CODE_SetBlackImageTone           = API_CODE_SetBlackImageTone,
	GFX100_API_CODE_GetBlackImageTone           = API_CODE_GetBlackImageTone,
	GFX100_API_CODE_GetTNumber                  = API_CODE_GetTNumber,
	GFX100_API_CODE_CapCropMode                 = API_CODE_CapCropMode,
	GFX100_API_CODE_SetCropMode                 = API_CODE_SetCropMode,
	GFX100_API_CODE_GetCropMode                 = API_CODE_GetCropMode,
	GFX100_API_CODE_GetCropAreaFrameInfo        = API_CODE_GetCropAreaFrameInfo,
	GFX100_API_CODE_CapRAWOutputDepth           = API_CODE_CapRAWOutputDepth,
	GFX100_API_CODE_SetRAWOutputDepth           = API_CODE_SetRAWOutputDepth,
	GFX100_API_CODE_GetRAWOutputDepth           = API_CODE_GetRAWOutputDepth,
	GFX100_API_CODE_CapSmoothSkinEffect         = API_CODE_CapSmoothSkinEffect,
	GFX100_API_CODE_SetSmoothSkinEffect         = API_CODE_SetSmoothSkinEffect,
	GFX100_API_CODE_GetSmoothSkinEffect         = API_CODE_GetSmoothSkinEffect,
	GFX100_API_CODE_GetDetectedFaceFrame        = API_CODE_GetDetectedFaceFrame,
	GFX100_API_CODE_SetDetectedFaceFrame        = API_CODE_SetDetectedFaceFrame,
	GFX100_API_CODE_SetCustomWBArea             = API_CODE_SetCustomWBArea,
	GFX100_API_CODE_GetCustomWBArea             = API_CODE_GetCustomWBArea,
	GFX100_API_CODE_CapColorChromeBlue          = API_CODE_CapColorChromeBlue,
	GFX100_API_CODE_SetColorChromeBlue          = API_CODE_SetColorChromeBlue,
	GFX100_API_CODE_GetColorChromeBlue          = API_CODE_GetColorChromeBlue,
	GFX100_API_CODE_CapMonochromaticColor       = API_CODE_CapMonochromaticColor,
	GFX100_API_CODE_SetMonochromaticColor       = API_CODE_SetMonochromaticColor,
	GFX100_API_CODE_GetMonochromaticColor       = API_CODE_GetMonochromaticColor,
	GFX100_API_CODE_CapFocusLimiterPos          = API_CODE_CapFocusLimiterPos,
	GFX100_API_CODE_SetFocusLimiterPos          = API_CODE_SetFocusLimiterPos,
	GFX100_API_CODE_GetFocusLimiterIndicator    = API_CODE_GetFocusLimiterIndicator,
	GFX100_API_CODE_GetFocusLimiterRange        = API_CODE_GetFocusLimiterRange,
	GFX100_API_CODE_CapFocusLimiterMode         = API_CODE_CapFocusLimiterMode,
	GFX100_API_CODE_SetFocusLimiterMode         = API_CODE_SetFocusLimiterMode,
	GFX100_API_CODE_GetFocusLimiterMode         = API_CODE_GetFocusLimiterMode,
	GFX100_API_CODE_GetCommandDialStatus        = API_CODE_GetCommandDialStatus,
	GFX100_API_CODE_CapPerformanceSettings      = API_CODE_CapPerformanceSettings,
	GFX100_API_CODE_SetPerformanceSettings      = API_CODE_SetPerformanceSettings,
	GFX100_API_CODE_GetPerformanceSettings      = API_CODE_GetPerformanceSettings,
	GFX100_API_CODE_CapMicLineSetting           = API_CODE_CapMicLineSetting,
	GFX100_API_CODE_SetMicLineSetting           = API_CODE_SetMicLineSetting,
	GFX100_API_CODE_GetMicLineSetting           = API_CODE_GetMicLineSetting,
	GFX100_API_CODE_CapCustomSettingAutoUpdate  = API_CODE_CapCustomSettingAutoUpdate,
	GFX100_API_CODE_SetCustomSettingAutoUpdate  = API_CODE_SetCustomSettingAutoUpdate,
	GFX100_API_CODE_GetCustomSettingAutoUpdate  = API_CODE_GetCustomSettingAutoUpdate,
    GFX100_API_CODE_CapPixelShiftSettings       = API_CODE_CapPixelShiftSettings,
    GFX100_API_CODE_SetPixelShiftSettings       = API_CODE_SetPixelShiftSettings,
    GFX100_API_CODE_GetPixelShiftSettings       = API_CODE_GetPixelShiftSettings,
};

// FocusArea - Focus Area
// typedef struct {
//    long    h;      // HORIZONTAL POSITION (at the camera orientation of absolute 0 degree) 3(left) to +3(right)
//    long    v;      // VERTICAL POSITION (at the camera orientation of absolute 0 degree) -3(bottom) to +3(top)
//    long    size;   // AREA SIZE 1(small) to 5(large)
// } SDK_FocusArea
typedef  SDK_FocusArea     GFX100_FocusArea, *PGFX100_FocusArea;


// XSDK_ISOAuto - ISO Auto Setting
// typedef struct {
//    long    defaultISO;         // DEFAULT SENSITIVITY 
//                                // 200/250/320/400/500/640/800/1000/1250/1600/2000/2500/3200/4000/5000/6400
//    long    maxISO;             // MAX. SENSITIVITY
//                                // 400/800/1600/3200/6400
//    long    minShutterSpeed;    // MIN. SHUTTER SPEED
//                                // XSDK_SHUTTER_1_8    (1/8)
//                                // XSDK_SHUTTER_1_15   (1/15)
//                                // XSDK_SHUTTER_1_30   (1/30)
//                                // XSDK_SHUTTER_1_40   (1/40)
//                                // XSDK_SHUTTER_1_60   (1/60)
//                                // XSDK_SHUTTER_1_80   (1/80)
//                                // XSDK_SHUTTER_1_100  (1/100)
//                                // XSDK_SHUTTER_1_125  (1/125)
//                                // XSDK_SHUTTER_1_160  (1/160)
//                                // XSDK_SHUTTER_1_250  (1/250)
//                                // XSDK_SHUTTER_1_320  (1/320)
//                                // XSDK_SHUTTER_1_400  (1/400)
//                                // XSDK_SHUTTER_1_500  (1/500)
//    char    pName[32];          // NAME OF SETTINGS
// } SDK_ISOAuto;
typedef  SDK_ISOAuto     GFX100_ISOAuto, *PGFX100_ISOAuto;


// FrameGuideGridInfo - Frame Guideline Grid information
// typedef struct  {
//    double  gridH[5];       // HORIZONTAL LINE POSITION in %, 0.1(top) to 100.0(bottom), 0.0=suppressed
//    double  gridV[5];       // VERTICAL LINE POSITION in %, 0.1(left) to 100.0(right), 0.0=suppressed
//    double  lineWidth;      // LINE WIDTH in %, 0.0 to 25.0
//    long    lineColorIndex; // LINE COLOR, 0:BLACK, 1:BLUE, 2:GREEN, 3:CYAN, 4:RED, 5:VIOLET, 6:YELLOW, 7:WHITE
//    long    lineAlpha;      // TRANSPARENCY in %, 0(solid), 10, 20, 30, 40, 50, 60, 70, 80, 90, 100(transparent)
// } SDK_FrameGuideGridInfo;
typedef  SDK_FrameGuideGridInfo     GFX100_FrameGuideGridInfo, *PGFX100_FrameGuideGridInfo;


//typedef struct _SDK_FOCUS_POS_CAP {
//    long lSizeFocusPosCap;
//    long lStructVer;
//    long lFocusPlsINF;
//    long lFocusPlsMOD;
//    long lFocusOverSearchPlsINF;
//    long lFocusOverSearchPlsMOD;
//    long lFocusPlsFCSDepthCap;
//    long lMinDriveStepMFDriveEndThresh;
//} SDK_FOCUS_POS_CAP, *PSDK_FOCUS_POS_CAP;
typedef  SDK_FOCUS_POS_CAP     SDK_GFX100_FOCUS_POS_CAP, *PSDK_GFX100_FOCUS_POS_CAP;
typedef  SDK_GFX100_FOCUS_POS_CAP     GFX100_FOCUS_POS_CAP, *PGFX100_FOCUS_POS_CAP;


//typedef struct _SDK_FOLDER_INFO {
//    char pFoldernameSuffix[6];
//    long lFolderNumber;
//    long lMaxFrameNumber;
//    long lStatus;
//} SDK_FOLDER_INFO, *PSDK_FOLDER_INFO;
typedef  SDK_FOLDER_INFO     GFX100_FOLDER_INFO, *PGFX100_FOLDER_INFO;


// Crop Area Frame Information
//typedef struct{
//    long    lX;
//    long    lY;
//    long    lLength_H;
//    long    lLength_V;
//    long    lColorR;
//    long    lColorG;
//    long    lColorB;
//    long    lAlpha;
//} SDK_CropAreaFrameInfo;
typedef  SDK_CropAreaFrameInfo     GFX100_CropAreaFrameInfo, *PGFX100_CropAreaFrameInfo;


// Face Frame Information
//typedef struct{
//    long    lID;
//    long    lTime;
//    long    lX;
//    long    lY;
//    long    lLength_H;
//    long    lLength_V;
//    long    lColorR;
//    long    lColorG;
//    long    lColorB;
//    long    lAlpha;
//    long    lType;
//    long    lLikeness;
//    long    lDisp;
//    long    lSelected;
//} SDK_FaceFrameInfo;
typedef  SDK_FaceFrameInfo     GFX100_FaceFrameInfo, *PGFX100_FaceFrameInfo;


// Custom White Balance Information
//typedef struct{
//    long    lX;
//    long    lY;
//    long    lSize;
//    long    lMode;
//} SDK_CustomWBArea;
typedef  SDK_CustomWBArea     GFX100_CustomWBArea, *PGFX100_CustomWBArea;

// Focus Limiter
//typedef struct _SDK_FOCUS_LIMITER_INDICATOR {
//	long	lCurrent;
//	long	lDOF_Near;
//	long	lDOF_Far;
//	long	lPos_A;
//	long	lPos_B;
//	long	lStatus;
//} SDK_FOCUS_LIMITER_INDICATOR;
typedef  SDK_FOCUS_LIMITER_INDICATOR     GFX100_FOCUS_LIMITER_INDICATOR, *PGFX100_FOCUS_LIMITER_INDICATOR;

// Focus Limiter Range
//typedef struct _SDK_FOCUS_LIMITER {
//	long	lPos_A;
//	long	lPos_B;
//} SDK_FOCUS_LIMITER;
typedef  SDK_FOCUS_LIMITER     GFX100_FOCUS_LIMITER, *PGFX100_FOCUS_LIMITER;


// Image Size
enum{
	GFX100_IMAGESIZE_S_3_2       = SDK_IMAGESIZE_S_3_2,
	GFX100_IMAGESIZE_S_16_9      = SDK_IMAGESIZE_S_16_9,
	GFX100_IMAGESIZE_S_1_1       = SDK_IMAGESIZE_S_1_1,
	GFX100_IMAGESIZE_M_3_2       = SDK_IMAGESIZE_M_3_2,
	GFX100_IMAGESIZE_M_16_9      = SDK_IMAGESIZE_M_16_9,
	GFX100_IMAGESIZE_M_1_1       = SDK_IMAGESIZE_M_1_1,
	GFX100_IMAGESIZE_L_3_2       = SDK_IMAGESIZE_L_3_2,
	GFX100_IMAGESIZE_L_16_9      = SDK_IMAGESIZE_L_16_9,
	GFX100_IMAGESIZE_L_1_1       = SDK_IMAGESIZE_L_1_1,
	GFX100_IMAGESIZE_S_4_3       = SDK_IMAGESIZE_S_4_3,
	GFX100_IMAGESIZE_S_65_24     = SDK_IMAGESIZE_S_65_24,
	GFX100_IMAGESIZE_S_5_4       = SDK_IMAGESIZE_S_5_4,
	GFX100_IMAGESIZE_S_7_6       = SDK_IMAGESIZE_S_7_6,
	GFX100_IMAGESIZE_L_4_3       = SDK_IMAGESIZE_L_4_3,
	GFX100_IMAGESIZE_L_65_24     = SDK_IMAGESIZE_L_65_24,
	GFX100_IMAGESIZE_L_5_4       = SDK_IMAGESIZE_L_5_4,
	GFX100_IMAGESIZE_L_7_6       = SDK_IMAGESIZE_L_7_6,
	GFX100_IMAGESIZE_M_4_3       = SDK_IMAGESIZE_M_4_3,
	GFX100_IMAGESIZE_M_65_24     = SDK_IMAGESIZE_M_65_24,
	GFX100_IMAGESIZE_M_5_4       = SDK_IMAGESIZE_M_5_4,
	GFX100_IMAGESIZE_M_7_6       = SDK_IMAGESIZE_M_7_6,
};

// Still Image Quality
enum{
	GFX100_IMAGEQUALITY_RAW          = SDK_IMAGEQUALITY_RAW,
	GFX100_IMAGEQUALITY_FINE         = SDK_IMAGEQUALITY_FINE,
	GFX100_IMAGEQUALITY_NORMAL       = SDK_IMAGEQUALITY_NORMAL,
	GFX100_IMAGEQUALITY_RAW_FINE     = SDK_IMAGEQUALITY_RAW_FINE,
	GFX100_IMAGEQUALITY_RAW_NORMAL   = SDK_IMAGEQUALITY_RAW_NORMAL,
	GFX100_IMAGEQUALITY_SUPERFINE    = SDK_IMAGEQUALITY_SUPERFINE,
	GFX100_IMAGEQUALITY_RAW_SUPERFINE   = SDK_IMAGEQUALITY_RAW_SUPERFINE,
};

// RAW Image Quality
enum{
	GFX100_RAWOUTPUTDEPTH_14BIT     = SDK_RAWOUTPUTDEPTH_14BIT,
	GFX100_RAWOUTPUTDEPTH_16BIT     = SDK_RAWOUTPUTDEPTH_16BIT,
};

// LiveView Image Quality
enum{
	GFX100_LIVEVIEW_QUALITY_FINE    = SDK_LIVE_QUALITY_FINE,
	GFX100_LIVEVIEW_QUALITY_NORMAL  = SDK_LIVE_QUALITY_NORMAL,
	GFX100_LIVEVIEW_QUALITY_BASIC   = SDK_LIVE_QUALITY_BASIC,
	GFX100_LIVE_QUALITY_FINE        = SDK_LIVE_QUALITY_FINE,
	GFX100_LIVE_QUALITY_NORMAL      = SDK_LIVE_QUALITY_NORMAL,
	GFX100_LIVE_QUALITY_BASIC       = SDK_LIVE_QUALITY_BASIC,
};

// LiveView Image Size
enum{
	GFX100_LIVEVIEW_SIZE_L     = SDK_LIVE_SIZE_L,
	GFX100_LIVEVIEW_SIZE_M     = SDK_LIVE_SIZE_M,
	GFX100_LIVEVIEW_SIZE_S     = SDK_LIVE_SIZE_S,
	GFX100_LIVE_SIZE_L         = SDK_LIVE_SIZE_L,
	GFX100_LIVE_SIZE_M         = SDK_LIVE_SIZE_M,
	GFX100_LIVE_SIZE_S         = SDK_LIVE_SIZE_S,
	GFX100_LIVE_SIZE_1024      = SDK_LIVE_SIZE_1024,
	GFX100_LIVE_SIZE_640       = SDK_LIVE_SIZE_640,
	GFX100_LIVE_SIZE_320       = SDK_LIVE_SIZE_320,
};

// Through Image Zoom
enum{
	GFX100_THROUGH_ZOOM_10     = SDK_THROUGH_ZOOM_10,
	GFX100_THROUGH_ZOOM_25     = SDK_THROUGH_ZOOM_25,
	GFX100_THROUGH_ZOOM_60     = SDK_THROUGH_ZOOM_60,
	GFX100_THROUGH_ZOOM_40     = SDK_THROUGH_ZOOM_40,
	GFX100_THROUGH_ZOOM_80     = SDK_THROUGH_ZOOM_80,
	GFX100_THROUGH_ZOOM_160    = SDK_THROUGH_ZOOM_160,
	GFX100_THROUGH_ZOOM_20     = SDK_THROUGH_ZOOM_20,
	GFX100_THROUGH_ZOOM_33     = SDK_THROUGH_ZOOM_33,
	GFX100_THROUGH_ZOOM_66     = SDK_THROUGH_ZOOM_66,
	GFX100_THROUGH_ZOOM_131    = SDK_THROUGH_ZOOM_131,
	GFX100_THROUGH_ZOOM_240    = SDK_THROUGH_ZOOM_240,
	GFX100_THROUGH_ZOOM_197    = SDK_THROUGH_ZOOM_197,
};

// Color Space
enum{
	GFX100_COLORSPACE_sRGB        = SDK_COLORSPACE_sRGB,
	GFX100_COLORSPACE_AdobeRGB    = SDK_COLORSPACE_AdobeRGB,
};

// White Balance
enum{
	GFX100_WB_AUTO            = SDK_WB_AUTO,  
	GFX100_WB_AUTO_WHITE_PRIORITY    = SDK_WB_AUTO_WHITE_PRIORITY,
	GFX100_WB_AUTO_AMBIENCE_PRIORITY = SDK_WB_AUTO_AMBIENCE_PRIORITY,
	GFX100_WB_DAYLIGHT        = SDK_WB_DAYLIGHT,
	GFX100_WB_INCANDESCENT    = SDK_WB_INCANDESCENT,
	GFX100_WB_UNDER_WATER     = SDK_WB_UNDER_WATER,
	GFX100_WB_FLUORESCENT1    = SDK_WB_FLUORESCENT1,
	GFX100_WB_FLUORESCENT2    = SDK_WB_FLUORESCENT2,
	GFX100_WB_FLUORESCENT3    = SDK_WB_FLUORESCENT3,
	GFX100_WB_SHADE           = SDK_WB_SHADE,
	GFX100_WB_COLORTEMP       = SDK_WB_COLORTEMP,
	GFX100_WB_CUSTOM1         = SDK_WB_CUSTOM1,
	GFX100_WB_CUSTOM2         = SDK_WB_CUSTOM2,
	GFX100_WB_CUSTOM3         = SDK_WB_CUSTOM3,
};

// Color Temperature
enum {
	GFX100_WB_COLORTEMP_2500        = SDK_WB_COLORTEMP_2500,
	GFX100_WB_COLORTEMP_2550        = SDK_WB_COLORTEMP_2550,
	GFX100_WB_COLORTEMP_2650        = SDK_WB_COLORTEMP_2650,
	GFX100_WB_COLORTEMP_2700        = SDK_WB_COLORTEMP_2700,
	GFX100_WB_COLORTEMP_2800        = SDK_WB_COLORTEMP_2800,
	GFX100_WB_COLORTEMP_2850        = SDK_WB_COLORTEMP_2850,
	GFX100_WB_COLORTEMP_2950        = SDK_WB_COLORTEMP_2950,
	GFX100_WB_COLORTEMP_3000        = SDK_WB_COLORTEMP_3000,
	GFX100_WB_COLORTEMP_3100        = SDK_WB_COLORTEMP_3100,
	GFX100_WB_COLORTEMP_3200        = SDK_WB_COLORTEMP_3200,
	GFX100_WB_COLORTEMP_3300        = SDK_WB_COLORTEMP_3300,
	GFX100_WB_COLORTEMP_3400        = SDK_WB_COLORTEMP_3400,
	GFX100_WB_COLORTEMP_3600        = SDK_WB_COLORTEMP_3600,
	GFX100_WB_COLORTEMP_3700        = SDK_WB_COLORTEMP_3700,
	GFX100_WB_COLORTEMP_3800        = SDK_WB_COLORTEMP_3800,
	GFX100_WB_COLORTEMP_4000        = SDK_WB_COLORTEMP_4000,
	GFX100_WB_COLORTEMP_4200        = SDK_WB_COLORTEMP_4200,
	GFX100_WB_COLORTEMP_4300        = SDK_WB_COLORTEMP_4300,
	GFX100_WB_COLORTEMP_4500        = SDK_WB_COLORTEMP_4500,
	GFX100_WB_COLORTEMP_4800        = SDK_WB_COLORTEMP_4800,
	GFX100_WB_COLORTEMP_5000        = SDK_WB_COLORTEMP_5000,
	GFX100_WB_COLORTEMP_5300        = SDK_WB_COLORTEMP_5300,
	GFX100_WB_COLORTEMP_5600        = SDK_WB_COLORTEMP_5600,
	GFX100_WB_COLORTEMP_5900        = SDK_WB_COLORTEMP_5900,
	GFX100_WB_COLORTEMP_6300        = SDK_WB_COLORTEMP_6300,
	GFX100_WB_COLORTEMP_6700        = SDK_WB_COLORTEMP_6700,
	GFX100_WB_COLORTEMP_7100        = SDK_WB_COLORTEMP_7100,
	GFX100_WB_COLORTEMP_7700        = SDK_WB_COLORTEMP_7700,
	GFX100_WB_COLORTEMP_8300        = SDK_WB_COLORTEMP_8300,
	GFX100_WB_COLORTEMP_9100        = SDK_WB_COLORTEMP_9100,
	GFX100_WB_COLORTEMP_10000       = SDK_WB_COLORTEMP_10000,
	GFX100_WB_COLORTEMP_CURRENT     = SDK_WB_COLORTEMP_CURRENT
};

// WB Shift
enum {
	GFX100_WB_R_SHIFT_MIN     = SDK_WB_R_SHIFT_MIN,
	GFX100_WB_R_SHIFT_MAX     = SDK_WB_R_SHIFT_MAX,
	GFX100_WB_R_SHIFT_STEP    = 1,
	GFX100_WB_B_SHIFT_MIN     = SDK_WB_B_SHIFT_MIN,
	GFX100_WB_B_SHIFT_MAX     = SDK_WB_B_SHIFT_MAX,
	GFX100_WB_B_SHIFT_STEP    = 1,
};

// Custom White balance Information
enum {
	GFX100_CUSTOM_WB_MODE_LIVEVIEW = SDK_CUSTOM_WB_MODE_LIVEVIEW,
	GFX100_CUSTOM_WB_MODE_PLAY     = SDK_CUSTOM_WB_MODE_PLAY,
};

// FILM SIMULATION
enum{
	GFX100_FILMSIMULATION_PROVIA          = SDK_FILMSIMULATION_PROVIA,
	GFX100_FILMSIMULATION_STD             = SDK_FILMSIMULATION_STD,
	GFX100_FILMSIMULATION_VELVIA          = SDK_FILMSIMULATION_VELVIA,
	GFX100_FILMSIMULATION_ASTIA           = SDK_FILMSIMULATION_ASTIA,
	GFX100_FILMSIMULATION_CLASSICCHROME   = SDK_FILMSIMULATION_CLASSIC_CHROME,
	GFX100_FILMSIMULATION_NEGHI           = SDK_FILMSIMULATION_NEGHI,
	GFX100_FILMSIMULATION_NEGSTD          = SDK_FILMSIMULATION_NEGSTD,
	GFX100_FILMSIMULATION_MONOCHRO        = SDK_FILMSIMULATION_MONOCHRO,
	GFX100_FILMSIMULATION_MONOCHRO_Y      = SDK_FILMSIMULATION_MONOCHRO_Y,
	GFX100_FILMSIMULATION_MONOCHRO_R      = SDK_FILMSIMULATION_MONOCHRO_R,
	GFX100_FILMSIMULATION_MONOCHRO_G      = SDK_FILMSIMULATION_MONOCHRO_G,
	GFX100_FILMSIMULATION_SEPIA           = SDK_FILMSIMULATION_SEPIA,
	GFX100_FILMSIMULATION_CLASSIC_CHROME  = SDK_FILMSIMULATION_CLASSIC_CHROME,
	GFX100_FILMSIMULATION_ACROS           = SDK_FILMSIMULATION_ACROS,
	GFX100_FILMSIMULATION_ACROS_Y         = SDK_FILMSIMULATION_ACROS_Y,
	GFX100_FILMSIMULATION_ACROS_R         = SDK_FILMSIMULATION_ACROS_R,
	GFX100_FILMSIMULATION_ACROS_G         = SDK_FILMSIMULATION_ACROS_G,
	GFX100_FILMSIMULATION_ETERNA          = SDK_FILMSIMULATION_ETERNA,
	GFX100_FILMSIMULATION_CLASSICNEG      = SDK_FILMSIMULATION_CLASSICNEG,
	GFX100_FILMSIMULATION_BLEACH_BYPASS   = SDK_FILMSIMULATION_BLEACH_BYPASS,
	GFX100_FILMSIMULATION_NOSTALGICNEG    = SDK_FILMSIMULATION_NOSTALGICNEG,
};

// COLOR
enum{
	GFX100_COLOR_HIGH          = SDK_COLOR_HIGH,
	GFX100_COLOR_MEDIUM_HIGH   = SDK_COLOR_MEDIUM_HIGH,
	GFX100_COLOR_STANDARD      = SDK_COLOR_STANDARD,
	GFX100_COLOR_MEDIUM_LOW    = SDK_COLOR_MEDIUM_LOW,
	GFX100_COLOR_LOW           = SDK_COLOR_LOW,
	GFX100_COLOR_P4            = SDK_COLOR_P4,
	GFX100_COLOR_P3            = SDK_COLOR_P3,
	GFX100_COLOR_P2            = SDK_COLOR_P2,
	GFX100_COLOR_P1            = SDK_COLOR_P1,
	GFX100_COLOR_0             = SDK_COLOR_0,
	GFX100_COLOR_M1            = SDK_COLOR_M1,
	GFX100_COLOR_M2            = SDK_COLOR_M2,
	GFX100_COLOR_M3            = SDK_COLOR_M3,
	GFX100_COLOR_M4            = SDK_COLOR_M4,
};

// Monochromatic Color WC
enum{ 
	GFX100_MONOCHROMATICCOLOR_WC_P180	= SDK_MONOCHROMATICCOLOR_WC_P180,
	GFX100_MONOCHROMATICCOLOR_WC_P170	= SDK_MONOCHROMATICCOLOR_WC_P170,
	GFX100_MONOCHROMATICCOLOR_WC_P160	= SDK_MONOCHROMATICCOLOR_WC_P160,
	GFX100_MONOCHROMATICCOLOR_WC_P150	= SDK_MONOCHROMATICCOLOR_WC_P150,
	GFX100_MONOCHROMATICCOLOR_WC_P140	= SDK_MONOCHROMATICCOLOR_WC_P140,
	GFX100_MONOCHROMATICCOLOR_WC_P130	= SDK_MONOCHROMATICCOLOR_WC_P130,
	GFX100_MONOCHROMATICCOLOR_WC_P120	= SDK_MONOCHROMATICCOLOR_WC_P120,
	GFX100_MONOCHROMATICCOLOR_WC_P110	= SDK_MONOCHROMATICCOLOR_WC_P110,
	GFX100_MONOCHROMATICCOLOR_WC_P100	= SDK_MONOCHROMATICCOLOR_WC_P100,
	GFX100_MONOCHROMATICCOLOR_WC_P90		= SDK_MONOCHROMATICCOLOR_WC_P90,
	GFX100_MONOCHROMATICCOLOR_WC_P80		= SDK_MONOCHROMATICCOLOR_WC_P80,
	GFX100_MONOCHROMATICCOLOR_WC_P70		= SDK_MONOCHROMATICCOLOR_WC_P70,
	GFX100_MONOCHROMATICCOLOR_WC_P60		= SDK_MONOCHROMATICCOLOR_WC_P60,
	GFX100_MONOCHROMATICCOLOR_WC_P50		= SDK_MONOCHROMATICCOLOR_WC_P50,
	GFX100_MONOCHROMATICCOLOR_WC_P40		= SDK_MONOCHROMATICCOLOR_WC_P40,
	GFX100_MONOCHROMATICCOLOR_WC_P30		= SDK_MONOCHROMATICCOLOR_WC_P30,
	GFX100_MONOCHROMATICCOLOR_WC_P20		= SDK_MONOCHROMATICCOLOR_WC_P20,
	GFX100_MONOCHROMATICCOLOR_WC_P10		= SDK_MONOCHROMATICCOLOR_WC_P10,
	GFX100_MONOCHROMATICCOLOR_WC_0		= SDK_MONOCHROMATICCOLOR_WC_0,
	GFX100_MONOCHROMATICCOLOR_WC_M10		= SDK_MONOCHROMATICCOLOR_WC_M10,
	GFX100_MONOCHROMATICCOLOR_WC_M20		= SDK_MONOCHROMATICCOLOR_WC_M20,
	GFX100_MONOCHROMATICCOLOR_WC_M30		= SDK_MONOCHROMATICCOLOR_WC_M30,
	GFX100_MONOCHROMATICCOLOR_WC_M40		= SDK_MONOCHROMATICCOLOR_WC_M40,
	GFX100_MONOCHROMATICCOLOR_WC_M50		= SDK_MONOCHROMATICCOLOR_WC_M50,
	GFX100_MONOCHROMATICCOLOR_WC_M60		= SDK_MONOCHROMATICCOLOR_WC_M60,
	GFX100_MONOCHROMATICCOLOR_WC_M70		= SDK_MONOCHROMATICCOLOR_WC_M70,
	GFX100_MONOCHROMATICCOLOR_WC_M80		= SDK_MONOCHROMATICCOLOR_WC_M80,
	GFX100_MONOCHROMATICCOLOR_WC_M90		= SDK_MONOCHROMATICCOLOR_WC_M90,
	GFX100_MONOCHROMATICCOLOR_WC_M100	= SDK_MONOCHROMATICCOLOR_WC_M100,
	GFX100_MONOCHROMATICCOLOR_WC_M110	= SDK_MONOCHROMATICCOLOR_WC_M110,
	GFX100_MONOCHROMATICCOLOR_WC_M120	= SDK_MONOCHROMATICCOLOR_WC_M120,
	GFX100_MONOCHROMATICCOLOR_WC_M130	= SDK_MONOCHROMATICCOLOR_WC_M130,
	GFX100_MONOCHROMATICCOLOR_WC_M140	= SDK_MONOCHROMATICCOLOR_WC_M140,
	GFX100_MONOCHROMATICCOLOR_WC_M150	= SDK_MONOCHROMATICCOLOR_WC_M150,
	GFX100_MONOCHROMATICCOLOR_WC_M160	= SDK_MONOCHROMATICCOLOR_WC_M160,
	GFX100_MONOCHROMATICCOLOR_WC_M170	= SDK_MONOCHROMATICCOLOR_WC_M170,
	GFX100_MONOCHROMATICCOLOR_WC_M180	= SDK_MONOCHROMATICCOLOR_WC_M180,
};

// Monochromatic Color Red Green
enum{ 
	GFX100_MONOCHROMATICCOLOR_RG_P180	= SDK_MONOCHROMATICCOLOR_RG_P180,
	GFX100_MONOCHROMATICCOLOR_RG_P170	= SDK_MONOCHROMATICCOLOR_RG_P170,
	GFX100_MONOCHROMATICCOLOR_RG_P160	= SDK_MONOCHROMATICCOLOR_RG_P160,
	GFX100_MONOCHROMATICCOLOR_RG_P150	= SDK_MONOCHROMATICCOLOR_RG_P150,
	GFX100_MONOCHROMATICCOLOR_RG_P140	= SDK_MONOCHROMATICCOLOR_RG_P140,
	GFX100_MONOCHROMATICCOLOR_RG_P130	= SDK_MONOCHROMATICCOLOR_RG_P130,
	GFX100_MONOCHROMATICCOLOR_RG_P120	= SDK_MONOCHROMATICCOLOR_RG_P120,
	GFX100_MONOCHROMATICCOLOR_RG_P110	= SDK_MONOCHROMATICCOLOR_RG_P110,
	GFX100_MONOCHROMATICCOLOR_RG_P100	= SDK_MONOCHROMATICCOLOR_RG_P100,
	GFX100_MONOCHROMATICCOLOR_RG_P90		= SDK_MONOCHROMATICCOLOR_RG_P90,
	GFX100_MONOCHROMATICCOLOR_RG_P80		= SDK_MONOCHROMATICCOLOR_RG_P80,
	GFX100_MONOCHROMATICCOLOR_RG_P70		= SDK_MONOCHROMATICCOLOR_RG_P70,
	GFX100_MONOCHROMATICCOLOR_RG_P60		= SDK_MONOCHROMATICCOLOR_RG_P60,
	GFX100_MONOCHROMATICCOLOR_RG_P50		= SDK_MONOCHROMATICCOLOR_RG_P50,
	GFX100_MONOCHROMATICCOLOR_RG_P40		= SDK_MONOCHROMATICCOLOR_RG_P40,
	GFX100_MONOCHROMATICCOLOR_RG_P30		= SDK_MONOCHROMATICCOLOR_RG_P30,
	GFX100_MONOCHROMATICCOLOR_RG_P20		= SDK_MONOCHROMATICCOLOR_RG_P20,
	GFX100_MONOCHROMATICCOLOR_RG_P10		= SDK_MONOCHROMATICCOLOR_RG_P10,
	GFX100_MONOCHROMATICCOLOR_RG_0		= SDK_MONOCHROMATICCOLOR_RG_0,
	GFX100_MONOCHROMATICCOLOR_RG_M10		= SDK_MONOCHROMATICCOLOR_RG_M10,
	GFX100_MONOCHROMATICCOLOR_RG_M20		= SDK_MONOCHROMATICCOLOR_RG_M20,
	GFX100_MONOCHROMATICCOLOR_RG_M30		= SDK_MONOCHROMATICCOLOR_RG_M30,
	GFX100_MONOCHROMATICCOLOR_RG_M40		= SDK_MONOCHROMATICCOLOR_RG_M40,
	GFX100_MONOCHROMATICCOLOR_RG_M50		= SDK_MONOCHROMATICCOLOR_RG_M50,
	GFX100_MONOCHROMATICCOLOR_RG_M60		= SDK_MONOCHROMATICCOLOR_RG_M60,
	GFX100_MONOCHROMATICCOLOR_RG_M70		= SDK_MONOCHROMATICCOLOR_RG_M70,
	GFX100_MONOCHROMATICCOLOR_RG_M80		= SDK_MONOCHROMATICCOLOR_RG_M80,
	GFX100_MONOCHROMATICCOLOR_RG_M90		= SDK_MONOCHROMATICCOLOR_RG_M90,
	GFX100_MONOCHROMATICCOLOR_RG_M100	= SDK_MONOCHROMATICCOLOR_RG_M100,
	GFX100_MONOCHROMATICCOLOR_RG_M110	= SDK_MONOCHROMATICCOLOR_RG_M110,
	GFX100_MONOCHROMATICCOLOR_RG_M120	= SDK_MONOCHROMATICCOLOR_RG_M120,
	GFX100_MONOCHROMATICCOLOR_RG_M130	= SDK_MONOCHROMATICCOLOR_RG_M130,
	GFX100_MONOCHROMATICCOLOR_RG_M140	= SDK_MONOCHROMATICCOLOR_RG_M140,
	GFX100_MONOCHROMATICCOLOR_RG_M150	= SDK_MONOCHROMATICCOLOR_RG_M150,
	GFX100_MONOCHROMATICCOLOR_RG_M160	= SDK_MONOCHROMATICCOLOR_RG_M160,
	GFX100_MONOCHROMATICCOLOR_RG_M170	= SDK_MONOCHROMATICCOLOR_RG_M170,
	GFX100_MONOCHROMATICCOLOR_RG_M180	= SDK_MONOCHROMATICCOLOR_RG_M180,
};

// SHARPNESS
enum{
	GFX100_SHARPNESSTYPE_HARD        = SDK_SHARPNESSTYPE_HARD,
	GFX100_SHARPNESSTYPE_MEDIUM_HARD = SDK_SHARPNESSTYPE_MEDIUM_HARD,
	GFX100_SHARPNESSTYPE_STANDARD    = SDK_SHARPNESSTYPE_STANDARD,
	GFX100_SHARPNESSTYPE_MEDIUM_SOFT = SDK_SHARPNESSTYPE_MEDIUM_SOFT,
	GFX100_SHARPNESSTYPE_SOFT        = SDK_SHARPNESSTYPE_SOFT,
	GFX100_SHARPNESS_P4              = SDK_SHARPNESS_P4,
	GFX100_SHARPNESS_P3              = SDK_SHARPNESS_P3,
	GFX100_SHARPNESS_P2              = SDK_SHARPNESS_P2,
	GFX100_SHARPNESS_P1              = SDK_SHARPNESS_P1,
	GFX100_SHARPNESS_0               = SDK_SHARPNESS_0,
	GFX100_SHARPNESS_M1              = SDK_SHARPNESS_M1,
	GFX100_SHARPNESS_M2              = SDK_SHARPNESS_M2,
	GFX100_SHARPNESS_M3              = SDK_SHARPNESS_M3,
	GFX100_SHARPNESS_M4              = SDK_SHARPNESS_M4,
};

// HIGHLIGHT TONE
enum{
	GFX100_HIGHLIGHT_TONE_HARD       = SDK_HIGHLIGHT_TONE_HARD,
	GFX100_HIGHLIGHT_TONE_MEDIUM_HARD= SDK_HIGHLIGHT_TONE_MEDIUM_HARD,
	GFX100_HIGHLIGHT_TONE_STANDARD   = SDK_HIGHLIGHT_TONE_STANDARD,
	GFX100_HIGHLIGHT_TONE_MEDIUM_SOFT= SDK_HIGHLIGHT_TONE_MEDIUM_SOFT,
	GFX100_HIGHLIGHT_TONE_SOFT       = SDK_HIGHLIGHT_TONE_SOFT,
	GFX100_HIGHLIGHT_TONE_P4         = SDK_HIGHLIGHT_TONE_P4,
	GFX100_HIGHLIGHT_TONE_P3_5       = SDK_HIGHLIGHT_TONE_P3_5,
	GFX100_HIGHLIGHT_TONE_P3         = SDK_HIGHLIGHT_TONE_P3,
	GFX100_HIGHLIGHT_TONE_P2_5       = SDK_HIGHLIGHT_TONE_P2_5,
	GFX100_HIGHLIGHT_TONE_P2         = SDK_HIGHLIGHT_TONE_P2,
	GFX100_HIGHLIGHT_TONE_P1_5       = SDK_HIGHLIGHT_TONE_P1_5,
	GFX100_HIGHLIGHT_TONE_P1         = SDK_HIGHLIGHT_TONE_P1,
	GFX100_HIGHLIGHT_TONE_P0_5       = SDK_HIGHLIGHT_TONE_P0_5,
	GFX100_HIGHLIGHT_TONE_0          = SDK_HIGHLIGHT_TONE_0,
	GFX100_HIGHLIGHT_TONE_M0_5       = SDK_HIGHLIGHT_TONE_M0_5,
	GFX100_HIGHLIGHT_TONE_M1         = SDK_HIGHLIGHT_TONE_M1,
	GFX100_HIGHLIGHT_TONE_M1_5       = SDK_HIGHLIGHT_TONE_M1_5,
	GFX100_HIGHLIGHT_TONE_M2         = SDK_HIGHLIGHT_TONE_M2,
};

// SHADOW TONE
enum{
	GFX100_SHADOW_TONE_HARD          = SDK_SHADOW_TONE_HARD,
	GFX100_SHADOW_TONE_MEDIUM_HARD   = SDK_SHADOW_TONE_MEDIUM_HARD,
	GFX100_SHADOW_TONE_STANDARD      = SDK_SHADOW_TONE_STANDARD,
	GFX100_SHADOW_TONE_MEDIUM_SOFT   = SDK_SHADOW_TONE_MEDIUM_SOFT,
	GFX100_SHADOW_TONE_SOFT          = SDK_SHADOW_TONE_SOFT,
	GFX100_SHADOW_TONE_P4            = SDK_SHADOW_TONE_P4,
	GFX100_SHADOW_TONE_P3_5          = SDK_SHADOW_TONE_P3_5,
	GFX100_SHADOW_TONE_P3            = SDK_SHADOW_TONE_P3,
	GFX100_SHADOW_TONE_P2_5          = SDK_SHADOW_TONE_P2_5,
	GFX100_SHADOW_TONE_P2            = SDK_SHADOW_TONE_P2,
	GFX100_SHADOW_TONE_P1_5          = SDK_SHADOW_TONE_P1_5,
	GFX100_SHADOW_TONE_P1            = SDK_SHADOW_TONE_P1,
	GFX100_SHADOW_TONE_P0_5          = SDK_SHADOW_TONE_P0_5,
	GFX100_SHADOW_TONE_0             = SDK_SHADOW_TONE_0,
	GFX100_SHADOW_TONE_M0_5          = SDK_SHADOW_TONE_M0_5,
	GFX100_SHADOW_TONE_M1            = SDK_SHADOW_TONE_M1,
	GFX100_SHADOW_TONE_M1_5          = SDK_SHADOW_TONE_M1_5,
	GFX100_SHADOW_TONE_M2            = SDK_SHADOW_TONE_M2,
};

// NOISE REDUCTION
enum{
	GFX100_NOISEREDUCTION_HIGH         = SDK_NOISEREDUCTION_HIGH,
	GFX100_NOISEREDUCTION_MEDIUM_HIGH  = SDK_NOISEREDUCTION_MEDIUM_HIGH,
	GFX100_NOISEREDUCTION_STANDARD     = SDK_NOISEREDUCTION_STANDARD,
	GFX100_NOISEREDUCTION_MEDIUM_LOW   = SDK_NOISEREDUCTION_MEDIUM_LOW,
	GFX100_NOISEREDUCTION_LOW          = SDK_NOISEREDUCTION_LOW,
	GFX100_NOISEREDUCTION_P4           = SDK_NOISEREDUCTION_P4,
	GFX100_NOISEREDUCTION_P3           = SDK_NOISEREDUCTION_P3,
	GFX100_NOISEREDUCTION_P2           = SDK_NOISEREDUCTION_P2,
	GFX100_NOISEREDUCTION_P1           = SDK_NOISEREDUCTION_P1,
	GFX100_NOISEREDUCTION_0            = SDK_NOISEREDUCTION_0,
	GFX100_NOISEREDUCTION_M1           = SDK_NOISEREDUCTION_M1,
	GFX100_NOISEREDUCTION_M2           = SDK_NOISEREDUCTION_M2,
	GFX100_NOISEREDUCTION_M3           = SDK_NOISEREDUCTION_M3,
	GFX100_NOISEREDUCTION_M4           = SDK_NOISEREDUCTION_M4,
};

// CUSTOM SETTING
enum{
	GFX100_CUSTOM_SETTING_CUSTOM1       = SDK_CUSTOM_SETTING_CUSTOM1,
	GFX100_CUSTOM_SETTING_CUSTOM2       = SDK_CUSTOM_SETTING_CUSTOM2,
	GFX100_CUSTOM_SETTING_CUSTOM3       = SDK_CUSTOM_SETTING_CUSTOM3,
	GFX100_CUSTOM_SETTING_CUSTOM4       = SDK_CUSTOM_SETTING_CUSTOM4,
	GFX100_CUSTOM_SETTING_CUSTOM5       = SDK_CUSTOM_SETTING_CUSTOM5,
	GFX100_CUSTOM_SETTING_CUSTOM6       = SDK_CUSTOM_SETTING_CUSTOM6,
	GFX100_CUSTOM_SETTING_CUSTOM7       = SDK_CUSTOM_SETTING_CUSTOM7,
};

// RAW Compression
enum{
	GFX100_RAW_COMPRESSION_OFF          = SDK_RAW_COMPRESSION_OFF,
	GFX100_RAW_COMPRESSION_LOSSLESS     = SDK_RAW_COMPRESSION_LOSSLESS,
	GFX100_RAW_COMPRESSION_LOSSY		 = SDK_RAW_COMPRESSION_LOSSY,
};

// Grain Effect
enum{
	GFX100_GRAIN_EFFECT_OFF             = SDK_GRAIN_EFFECT_OFF,
	GFX100_GRAIN_EFFECT_WEAK            = SDK_GRAIN_EFFECT_WEAK,
	GFX100_GRAIN_EFFECT_P1              = SDK_GRAIN_EFFECT_P1,
	GFX100_GRAIN_EFFECT_STRONG          = SDK_GRAIN_EFFECT_STRONG,
	GFX100_GRAIN_EFFECT_P2              = SDK_GRAIN_EFFECT_P2,
	GFX100_GRAIN_EFFECT_OFF_SMALL       = SDK_GRAIN_EFFECT_OFF_SMALL,
	GFX100_GRAIN_EFFECT_WEAK_SMALL      = SDK_GRAIN_EFFECT_WEAK_SMALL,
	GFX100_GRAIN_EFFECT_STRONG_SMALL    = SDK_GRAIN_EFFECT_STRONG_SMALL,
	GFX100_GRAIN_EFFECT_OFF_LARGE       = SDK_GRAIN_EFFECT_OFF_LARGE,
	GFX100_GRAIN_EFFECT_WEAK_LARGE      = SDK_GRAIN_EFFECT_WEAK_LARGE,
	GFX100_GRAIN_EFFECT_STRONG_LARGE    = SDK_GRAIN_EFFECT_STRONG_LARGE,
};

// Clarity Mode
enum{
	GFX100_CLARITY_P5		= SDK_CLARITY_P5,
	GFX100_CLARITY_P4		= SDK_CLARITY_P4,
	GFX100_CLARITY_P3		= SDK_CLARITY_P3,
	GFX100_CLARITY_P2		= SDK_CLARITY_P2,
	GFX100_CLARITY_P1		= SDK_CLARITY_P1,
	GFX100_CLARITY_0			= SDK_CLARITY_0 ,
	GFX100_CLARITY_M1		= SDK_CLARITY_M1,
	GFX100_CLARITY_M2		= SDK_CLARITY_M2,
	GFX100_CLARITY_M3		= SDK_CLARITY_M3,
	GFX100_CLARITY_M4		= SDK_CLARITY_M4,
	GFX100_CLARITY_M5		= SDK_CLARITY_M5,
};

// Shadowing
enum{
	GFX100_SHADOWING_0             = SDK_SHADOWING_0,
	GFX100_SHADOWING_P1            = SDK_SHADOWING_P1,
	GFX100_SHADOWING_P2            = SDK_SHADOWING_P2,
};

// ColorChrome Blue
enum{
	GFX100_COLORCHROME_BLUE_0      = SDK_COLORCHROME_BLUE_0,
	GFX100_COLORCHROME_BLUE_P1     = SDK_COLORCHROME_BLUE_P1,
	GFX100_COLORCHROME_BLUE_P2     = SDK_COLORCHROME_BLUE_P2,
};

// Smooth Skin Effect
enum{
	GFX100_SMOOTHSKIN_EFFECT_OFF        = SDK_SMOOTHSKIN_EFFECT_OFF,
	GFX100_SMOOTHSKIN_EFFECT_P1         = SDK_SMOOTHSKIN_EFFECT_P1,
	GFX100_SMOOTHSKIN_EFFECT_P2         = SDK_SMOOTHSKIN_EFFECT_P2,
};

// SELF TIMER
enum{
	GFX100_CAPTUREDELAY_10     = SDK_CAPTUREDELAY_10,
	GFX100_CAPTUREDELAY_2      = SDK_CAPTUREDELAY_2,
	GFX100_CAPTUREDELAY_OFF    = SDK_CAPTUREDELAY_OFF,
	GFX100_SELFTIMER_10        = SDK_CAPTUREDELAY_10,
	GFX100_SELFTIMER_2         = SDK_CAPTUREDELAY_2,
	GFX100_SELFTIMER_OFF       = SDK_CAPTUREDELAY_OFF,
};

// FOCUS MODE
enum{
	GFX100_FOCUSMODE_MANUAL = SDK_FOCUS_MANUAL,
	GFX100_FOCUSMODE_AFS    = SDK_FOCUS_AFS,
	GFX100_FOCUSMODE_AFC    = SDK_FOCUS_AFC,
	GFX100_FOCUS_MANUAL     = SDK_FOCUS_MANUAL,
	GFX100_FOCUS_AFS        = SDK_FOCUS_AFS,
	GFX100_FOCUS_AFC        = SDK_FOCUS_AFC
};

// Focus Limiter Pos
enum{
	GFX100_FOCUS_LIMITER_POS_A    = SDK_FOCUS_LIMITER_POS_A,
	GFX100_FOCUS_LIMITER_POS_B    = SDK_FOCUS_LIMITER_POS_B,
};

// Focus Limiter Status
enum{
	GFX100_FOCUS_LIMITER_STATUS_VALID    = SDK_FOCUS_LIMITER_STATUS_VALID,
	GFX100_FOCUS_LIMITER_STATUS_INVALID  = SDK_FOCUS_LIMITER_STATUS_INVALID,
};

// Focus Limiter Mode
enum{
	GFX100_FOCUS_LIMITER_OFF        = SDK_FOCUS_LIMITER_OFF,
	GFX100_FOCUS_LIMITER_1          = SDK_FOCUS_LIMITER_1,
	GFX100_FOCUS_LIMITER_2          = SDK_FOCUS_LIMITER_2,
	GFX100_FOCUS_LIMITER_3          = SDK_FOCUS_LIMITER_3,
};

// Focus Points
enum{
	GFX100_FOCUS_POINTS_13X7       = SDK_FOCUS_POINTS_13X7,
	GFX100_FOCUS_POINTS_25X13      = SDK_FOCUS_POINTS_25X13,
	GFX100_FOCUS_POINTS_13X9       = SDK_FOCUS_POINTS_13X9,
	GFX100_FOCUS_POINTS_25X17      = SDK_FOCUS_POINTS_25X17,
};

// AF MODE
enum{
	GFX100_AF_ALL     = SDK_AF_ALL,
	GFX100_AF_MULTI   = SDK_AF_MULTI,
	GFX100_AF_AREA    = SDK_AF_AREA,
	GFX100_AF_SINGLE  = GFX100_AF_AREA,
	GFX100_AF_ZONE    = SDK_AF_ZONE,
	GFX100_AF_WIDETRACKING = SDK_AF_WIDETRACKING,
};

// Movie Af Mode
enum{
	GFX100_MOVIE_AF_MULTI	= SDK_MOVIE_AF_MULTI,
	GFX100_MOVIE_AF_AREA	= SDK_MOVIE_AF_AREA,
};

// AF Status
enum{
	GFX100_AF_STATUS_OPERATING		= SDK_AF_STATUS_OPERATING,
	GFX100_AF_STATUS_SUCCESS		= SDK_AF_STATUS_SUCCESS,
	GFX100_AF_STATUS_FAIL			= SDK_AF_STATUS_FAIL,
	GFX100_AF_STATUS_NO_OPERATION	= SDK_AF_STATUS_NO_OPERATION,
};

// Eye AF Mode
enum{
	GFX100_EYE_AF_OFF             = SDK_EYE_AF_OFF,
	GFX100_EYE_AF_AUTO            = SDK_EYE_AF_AUTO,
	GFX100_EYE_AF_RIGHT_PRIORITY  = SDK_EYE_AF_RIGHT_PRIORITY,
	GFX100_EYE_AF_LEFT_PRIORITY   = SDK_EYE_AF_LEFT_PRIORITY,
};

// Face Frame Information
enum{
	GFX100_FRAMEINFO_FACE         = SDK_FRAMEINFO_FACE,
	GFX100_FRAMEINFO_EYE_RIGHT    = SDK_FRAMEINFO_EYE_RIGHT,
	GFX100_FRAMEINFO_EYE_LEFT     = SDK_FRAMEINFO_EYE_LEFT,
	GFX100_FACEFRAMEINFO_NON      = SDK_FACEFRAMEINFO_NON,
	GFX100_FACEFRAMEINFO_AUTO     = SDK_FACEFRAMEINFO_AUTO,
	GFX100_FACEFRAMEINFO_MANUAL   = SDK_FACEFRAMEINFO_MANUAL,
};

// MF Assist Mode
enum{
	GFX100_MF_ASSIST_STANDARD      = SDK_MF_ASSIST_STANDARD,
	GFX100_MF_ASSIST_SPLIT_BW      = SDK_MF_ASSIST_SPLIT_BW,
	GFX100_MF_ASSIST_SPLIT_COLOR   = SDK_MF_ASSIST_SPLIT_COLOR,
	GFX100_MF_ASSIST_PEAK_WHITE_L  = SDK_MF_ASSIST_PEAK_WHITE_L,
	GFX100_MF_ASSIST_PEAK_WHITE_H  = SDK_MF_ASSIST_PEAK_WHITE_H,
	GFX100_MF_ASSIST_PEAK_RED_L    = SDK_MF_ASSIST_PEAK_RED_L,
	GFX100_MF_ASSIST_PEAK_RED_H    = SDK_MF_ASSIST_PEAK_RED_H,
	GFX100_MF_ASSIST_PEAK_BLUE_L   = SDK_MF_ASSIST_PEAK_BLUE_L,
	GFX100_MF_ASSIST_PEAK_BLUE_H   = SDK_MF_ASSIST_PEAK_BLUE_H,
	GFX100_MF_ASSIST_PEAK_YELLOW_L = SDK_MF_ASSIST_PEAK_YELLOW_L,
	GFX100_MF_ASSIST_PEAK_YELLOW_H = SDK_MF_ASSIST_PEAK_YELLOW_H,
	GFX100_MF_ASSIST_MICROPRISM    = SDK_MF_ASSIST_MICROPRISM,
};

// FOCUS AREA
enum{
	GFX100_FOCUSAREA_H_MIN        = SDK_FOCUSAREA_H_MIN,
	GFX100_FOCUSAREA_H_MAX        = SDK_FOCUSAREA_H_MAX,
	GFX100_FOCUSAREA_V_MIN        = SDK_FOCUSAREA_V_MIN,
	GFX100_FOCUSAREA_V_MAX        = SDK_FOCUSAREA_V_MAX,
	GFX100_FOCUSAREA_SIZE_MIN     = SDK_FOCUSAREA_SIZE_MIN,
	GFX100_FOCUSAREA_SIZE_MAX     = SDK_FOCUSAREA_SIZE_MAX,
};

// FACE DETECTION
enum{
	GFX100_FACE_DETECTION_ON       = SDK_FACE_DETECTION_ON,
	GFX100_FACE_DETECTION_OFF      = SDK_FACE_DETECTION_OFF,
};

// MACRO
enum{
	GFX100_MACRO_MODE_OFF       = SDK_MACRO_MODE_OFF,
	GFX100_MACRO_MODE           = SDK_MACRO_MODE,
	GFX100_MACRO_MODE_ON        = SDK_MACRO_MODE_ON
};

// DRIVE MODE
enum{
	GFX100_DRIVE_MODE_S    = SDK_DRIVE_MODE_S,
	GFX100_DRIVE_MODE_CL   = 0x1000,
	GFX100_DRIVE_MODE_CH   = 0x10F0,
	GFX100_DRIVE_MODE_BKT  = 0x4000,
	GFX100_DRIVE_MODE_MOVIE= SDK_DRIVE_MODE_MOVIE,
};

// USB MODE
enum{
	GFX100_USB_PCSHOOTAUTO    = SDK_USB_PCSHOOTAUTO,
	GFX100_USB_PCSHOOT        = SDK_USB_PCSHOOT,
};

// FILE FRAME NUMBERING
enum{
	GFX100_FRAMENUMBERSEQUENCE_ON     = SDK_FRAMENUMBERSEQUENCE_ON,
	GFX100_FRAMENUMBERSEQUENCE_OFF    = SDK_FRAMENUMBERSEQUENCE_OFF,
};

// OPERATION SOUND
enum{
	GFX100_BEEP_HIGH        = SDK_BEEP_HIGH,
	GFX100_BEEP_MID         = SDK_BEEP_MID,
	GFX100_BEEP_LOW         = SDK_BEEP_LOW,
	GFX100_BEEP_OFF         = SDK_BEEP_OFF,
};

// PREVIEW TIME
enum{
	GFX100_PREVIEWTIME_CONTINUOUS  = SDK_PREVIEWTIME_CONTINUOUS,
	GFX100_PREVIEWTIME_1P5SEC      = SDK_PREVIEWTIME_1P5SEC,
	GFX100_PREVIEWTIME_0P5SEC      = SDK_PREVIEWTIME_0P5SEC,
	GFX100_PREVIEWTIME_OFF         = SDK_PREVIEWTIME_OFF,
};

// VIEW MODE
enum{
	GFX100_VIEW_MODE_EYE         = SDK_VIEW_MODE_EYE,
	GFX100_VIEW_MODE_EVF         = SDK_VIEW_MODE_EVF,
	GFX100_VIEW_MODE_LCD         = SDK_VIEW_MODE_LCD,
	GFX100_VIEW_MODE_EVF_EYE     = SDK_VIEW_MODE_EVF_EYE,
	GFX100_VIEW_MODE_LCDPOSTVIEW = SDK_VIEW_MODE_LCDPOSTVIEW,
	GFX100_VIEW_MODE_OVF         = SDK_VIEW_MODE_OVF,
	GFX100_VIEW_MODE_ERF         = SDK_VIEW_MODE_ERF,
	GFX100_VIEW_MODE_EYESENSOR_ON = SDK_VIEW_MODE_EYESENSOR_ON,
	GFX100_VIEW_MODE_EYESENSOR_OFF= SDK_VIEW_MODE_EYESENSOR_OFF,
};

// LCD DISP MODE
enum{
	GFX100_LCD_DISPINFO_MODE_INFO      = SDK_LCD_DISPINFO_MODE_INFO,
	GFX100_LCD_DISPINFO_MODE_STD       = SDK_LCD_DISPINFO_MODE_STD,
	GFX100_LCD_DISPINFO_MODE_OFF       = SDK_LCD_DISPINFO_MODE_OFF,
	GFX100_LCD_DISPINFO_MODE_CUSTOM    = SDK_LCD_DISPINFO_MODE_CUSTOM,
	GFX100_LCD_DISPINFO_MODE_DUAL      = SDK_LCD_DISPINFO_MODE_DUAL,
};

// EVF DISP MODE
enum{
	GFX100_EVF_DISPINFO_MODE_FULL_CUSTOM     = SDK_EVF_DISPINFO_MODE_FULL_CUSTOM,
	GFX100_EVF_DISPINFO_MODE_NORMAL_CUSTOM   = SDK_EVF_DISPINFO_MODE_NORMAL_CUSTOM,
	GFX100_EVF_DISPINFO_MODE_DUAL            = SDK_EVF_DISPINFO_MODE_DUAL,
	GFX100_EVF_DISPINFO_MODE_FULL_OFF        = SDK_EVF_DISPINFO_MODE_FULL_OFF,
	GFX100_EVF_DISPINFO_MODE_NORMAL_OFF      = SDK_EVF_DISPINFO_MODE_NORMAL_OFF,
};



enum{
	GFX100_DATE_FORMAT_YMD	     = SDK_DATE_FORMAT_YMD,
	GFX100_DATE_FORMAT_DMY      = SDK_DATE_FORMAT_DMY,
	GFX100_DATE_FORMAT_MDY      = SDK_DATE_FORMAT_MDY,
};

enum{
	GFX100_DISP_MMODE_MANUAL = SDK_EXPOSURE_PREVIEW_ME_MWB,
	GFX100_DISP_MMODE_AE     = SDK_EXPOSURE_PREVIEW_AE_MWB,
	GFX100_DISP_MMODE_AE_AWB = SDK_EXPOSURE_PREVIEW_AE_AWB,
	GFX100_DISP_MMODE_EXPWB  = SDK_EXPOSURE_PREVIEW_ME_MWB,
	GFX100_DISP_MMODE_WB     = SDK_EXPOSURE_PREVIEW_AE_MWB,
	GFX100_DISP_MMODE_OFF    = SDK_EXPOSURE_PREVIEW_AE_AWB,
	GFX100_EXPOSURE_PREVIEW_ME_MWB = SDK_EXPOSURE_PREVIEW_ME_MWB,
	GFX100_EXPOSURE_PREVIEW_AE_MWB = SDK_EXPOSURE_PREVIEW_AE_MWB,
	GFX100_EXPOSURE_PREVIEW_AE_AWB = SDK_EXPOSURE_PREVIEW_AE_AWB,
};

enum{
	GFX100_FRAMEGUIDE_GRID_9       = SDK_FRAMEGUIDE_GRID_9,
	GFX100_FRAMEGUIDE_GRID_24      = SDK_FRAMEGUIDE_GRID_24,
	GFX100_FRAMEGUIDE_GRID_HD      = 0x0003,
	GFX100_FRAMEGUIDE_GRID_CUSTOM  = 0x0004, 
};

enum{
	GFX100_SCALEUNIT_M     = SDK_SCALEUNIT_M,
	GFX100_SCALEUNIT_FT    = SDK_SCALEUNIT_FT,
};

enum {
	GFX100_POWERCAPACITY_EMPTY   = SDK_POWERCAPACITY_EMPTY,
	GFX100_POWERCAPACITY_END     = SDK_POWERCAPACITY_END,
	GFX100_POWERCAPACITY_PREEND  = SDK_POWERCAPACITY_PREEND,
	GFX100_POWERCAPACITY_HALF    = SDK_POWERCAPACITY_HALF,
	GFX100_POWERCAPACITY_FULL    = SDK_POWERCAPACITY_FULL,
	GFX100_POWERCAPACITY_HIGH    = SDK_POWERCAPACITY_HIGH,
	GFX100_POWERCAPACITY_PREEND5 = SDK_POWERCAPACITY_PREEND5,
	GFX100_POWERCAPACITY_20      = SDK_POWERCAPACITY_20,
	GFX100_POWERCAPACITY_40      = SDK_POWERCAPACITY_40,
	GFX100_POWERCAPACITY_60      = SDK_POWERCAPACITY_60,
	GFX100_POWERCAPACITY_80      = SDK_POWERCAPACITY_80,
	GFX100_POWERCAPACITY_100     = SDK_POWERCAPACITY_100,
	GFX100_POWERCAPACITY_DC      = SDK_POWERCAPACITY_DC,
	GFX100_POWERCAPACITY_DC_CHARGE      = SDK_POWERCAPACITY_DC_CHARGE,
};

enum{
	GFX100_AFPRIORITY_RELEASE       = SDK_AFPRIORITY_RELEASE,
	GFX100_AFPRIORITY_FOCUS         = SDK_AFPRIORITY_FOCUS,
	GFX100_INSTANT_AF_MODE_AFS        = SDK_INSTANT_AF_MODE_AFS,
	GFX100_INSTANT_AF_MODE_AFC        = SDK_INSTANT_AF_MODE_AFC,
	GFX100_LOCKBUTTON_MODE_PRESSING     = SDK_LOCKBUTTON_MODE_PRESSING,
	GFX100_LOCKBUTTON_MODE_SWITCH       = SDK_LOCKBUTTON_MODE_SWITCH,
	GFX100_AFLOCK_MODE_AF              = SDK_AFLOCK_MODE_AF,
	GFX100_AFLOCK_MODE_AEAF            = SDK_AFLOCK_MODE_AEAF,
	GFX100_MICJACK_MODE_MIC             = SDK_MICJACK_MODE_MIC,
	GFX100_MICJACK_MODE_REMOTE          = SDK_MICJACK_MODE_REMOTE,
	GFX100_AEAFLKEY_AE_AF               = SDK_AEAFLKEY_AE_AF,
	GFX100_AEAFLKEY_AF_AE               = SDK_AEAFLKEY_AF_AE,
	GFX100_CROSSKEY_FOCUSAREA           = SDK_CROSSKEY_FOCUSAREA,
	GFX100_CROSSKEY_FUNCTION            = SDK_CROSSKEY_FUNCTION,
	GFX100_IS_MODE_CONTINUOUS           = SDK_IS_MODE_CONTINUOUS,
	GFX100_IS_MODE_SHOOT                = SDK_IS_MODE_SHOOT,
	GFX100_IS_MODE_OFF                  = SDK_IS_MODE_OFF,
	GFX100_IS_MODE_S1_SHOOT             = SDK_IS_MODE_S1_SHOOT,
	GFX100_TIMEDIFF_HOME                = SDK_TIMEDIFF_HOME,
	GFX100_TIMEDIFF_LOCAL               = SDK_TIMEDIFF_LOCAL,
	GFX100_LANGUAGE_JA                  = SDK_LANGUAGE_JA,
	GFX100_LCDBRIGHTNESS_MIN           = SDK_LCDBRIGHTNESS_MIN,
	GFX100_LCDBRIGHTNESS_MAX           = SDK_LCDBRIGHTNESS_MAX,
	GFX100_EVFBRIGHTNESS_MIN           = SDK_EVFBRIGHTNESS_MIN,
	GFX100_EVFBRIGHTNESS_MAX           = SDK_EVFBRIGHTNESS_MAX,
	GFX100_COLORINDEX_BLACK             = SDK_COLORINDEX_BLACK,
	GFX100_COLORINDEX_BLUE              = SDK_COLORINDEX_BLUE,
	GFX100_COLORINDEX_GREEN             = SDK_COLORINDEX_GREEN,
	GFX100_COLORINDEX_CYAN              = SDK_COLORINDEX_CYAN,
	GFX100_COLORINDEX_RED               = SDK_COLORINDEX_RED,
	GFX100_COLORINDEX_MAGENTA           = SDK_COLORINDEX_MAGENTA,
	GFX100_COLORINDEX_YELLOW            = SDK_COLORINDEX_YELLOW,
	GFX100_COLORINDEX_WHITE             = SDK_COLORINDEX_WHITE,
	GFX100_MEDIAREC_RAWJPEG           = SDK_MEDIAREC_RAWJPEG,
	GFX100_MEDIAREC_RAW               = SDK_MEDIAREC_RAW,
	GFX100_MEDIAREC_JPEG              = SDK_MEDIAREC_JPEG,
	GFX100_MEDIAREC_OFF               = SDK_MEDIAREC_OFF,
	GFX100_SENSORCLEANING_NONE          = SDK_SENSORCLEANING_NONE,
	GFX100_SENSORCLEANING_POWERON       = SDK_SENSORCLEANING_POWERON,
	GFX100_SENSORCLEANING_POWEROFF      = SDK_SENSORCLEANING_POWEROFF,
	GFX100_SENSORCLEANING_POWERONOFF    = SDK_SENSORCLEANING_POWERONOFF,
	GFX100_FUNCTION_DRV                 = SDK_FUNCTION_DRV,
	GFX100_FUNCTION_MACRO               = SDK_FUNCTION_MACRO,
	GFX100_FUNCTION_DEPTHPREVIEW        = SDK_FUNCTION_DEPTHPREVIEW,
	GFX100_FUNCTION_ISOAUTOSETTING      = SDK_FUNCTION_ISOAUTOSETTING,
	GFX100_FUNCTION_SELFTIMER           = SDK_FUNCTION_SELFTIMER,
	GFX100_FUNCTION_IMAGESIZE           = SDK_FUNCTION_IMAGESIZE,
	GFX100_FUNCTION_IMAGEQUALITY        = SDK_FUNCTION_IMAGEQUALITY,
	GFX100_FUNCTION_DRANGE              = SDK_FUNCTION_DRANGE,
	GFX100_FUNCTION_FILMSIMULATION      = SDK_FUNCTION_FILMSIMULATION,
	GFX100_FUNCTION_WB                  = SDK_FUNCTION_WB,
	GFX100_FUNCTION_AFMODE              = SDK_FUNCTION_AFMODE,
	GFX100_FUNCTION_FOCUSAREA           = SDK_FUNCTION_FOCUSAREA,
	GFX100_FUNCTION_CUSTOMSETTING       = SDK_FUNCTION_CUSTOMSETTING,
	GFX100_FUNCTION_FACEDETECT          = SDK_FUNCTION_FACEDETECT,
	GFX100_FUNCTION_RAW                 = SDK_FUNCTION_RAW,
	GFX100_FUNCTION_APERTURE            = SDK_FUNCTION_APERTURE,
	GFX100_FUNCTION_WIRELESS            = SDK_FUNCTION_WIRELESS,
	GFX100_FUNCTION_EXPOSURE_PREVIEW    = SDK_FUNCTION_EXPOSURE_PREVIEW,
	GFX100_CUSTOMDISPINFO_FRAMEGUIDE                    = SDK_CUSTOMDISPINFO_FRAMEGUIDE,
	GFX100_CUSTOMDISPINFO_ELECTRONLEVEL                 = SDK_CUSTOMDISPINFO_ELECTRONLEVEL,
	GFX100_CUSTOMDISPINFO_AFDISTANCE                    = SDK_CUSTOMDISPINFO_AFDISTANCE,
	GFX100_CUSTOMDISPINFO_MFDISTANCE                    = SDK_CUSTOMDISPINFO_MFDISTANCE,
	GFX100_CUSTOMDISPINFO_HISTOGRAM                     = SDK_CUSTOMDISPINFO_HISTOGRAM,
	GFX100_CUSTOMDISPINFO_EXPOSUREPARAM                 = SDK_CUSTOMDISPINFO_EXPOSUREPARAM,
	GFX100_CUSTOMDISPINFO_EXPOSUREBIAS                  = SDK_CUSTOMDISPINFO_EXPOSUREBIAS,
	GFX100_CUSTOMDISPINFO_PHOTOMETRY                    = SDK_CUSTOMDISPINFO_PHOTOMETRY,
	GFX100_CUSTOMDISPINFO_FLASH                         = SDK_CUSTOMDISPINFO_FLASH,
	GFX100_CUSTOMDISPINFO_WB                            = SDK_CUSTOMDISPINFO_WB,
	GFX100_CUSTOMDISPINFO_FILMSIMULATION                = SDK_CUSTOMDISPINFO_FILMSIMULATION,
	GFX100_CUSTOMDISPINFO_DRANGE                        = SDK_CUSTOMDISPINFO_DRANGE,
	GFX100_CUSTOMDISPINFO_FRAMESREMAIN                  = SDK_CUSTOMDISPINFO_FRAMESREMAIN,
	GFX100_CUSTOMDISPINFO_IMAGESIZEQUALITY              = SDK_CUSTOMDISPINFO_IMAGESIZEQUALITY,
	GFX100_CUSTOMDISPINFO_BATTERY                       = SDK_CUSTOMDISPINFO_BATTERY,
	GFX100_CUSTOMDISPINFO_FOCUSFRAME                    = SDK_CUSTOMDISPINFO_FOCUSFRAME,
	GFX100_CUSTOMDISPINFO_SHOOTINGMODE                  = SDK_CUSTOMDISPINFO_SHOOTINGMODE,
	GFX100_CUSTOMDISPINFO_INFORMATIONBACKGROUND         = SDK_CUSTOMDISPINFO_INFORMATIONBACKGROUND,
	GFX100_CUSTOMDISPINFO_FOCUSMODE                     = SDK_CUSTOMDISPINFO_FOCUSMODE,
	GFX100_CUSTOMDISPINFO_SHUTTERTYPE                   = SDK_CUSTOMDISPINFO_SHUTTERTYPE,
	GFX100_CUSTOMDISPINFO_CONTINUOUSMODE                = SDK_CUSTOMDISPINFO_CONTINUOUSMODE,
	GFX100_CUSTOMDISPINFO_DUALISMODE                    = SDK_CUSTOMDISPINFO_DUALISMODE,
	GFX100_CUSTOMDISPINFO_MOVIEMODE                     = SDK_CUSTOMDISPINFO_MOVIEMODE,
	GFX100_CUSTOMDISPINFO_BLURWARNING                   = SDK_CUSTOMDISPINFO_BLURWARNING,
	GFX100_FUNCTIONLOCK_UNLOCK                          = SDK_FUNCTIONLOCK_FREE,
	GFX100_FUNCTIONLOCK_ALL                             = SDK_FUNCTIONLOCK_ALL,
	GFX100_FUNCTIONLOCK_CATEGORY                        = SDK_FUNCTIONLOCK_CATEGORY,
	GFX100_FUNCTIONLOCK_CATEGORY1_FOCUSMODE            = SDK_FUNCTIONLOCK_CATEGORY1_FOCUSMODE,
	GFX100_FUNCTIONLOCK_CATEGORY1_APERTURE             = SDK_FUNCTIONLOCK_CATEGORY1_APERTURE,
	GFX100_FUNCTIONLOCK_CATEGORY1_SHUTTERSPEED         = SDK_FUNCTIONLOCK_CATEGORY1_SHUTTERSPEED,
	GFX100_FUNCTIONLOCK_CATEGORY1_ISO                  = SDK_FUNCTIONLOCK_CATEGORY1_ISO,
	GFX100_FUNCTIONLOCK_CATEGORY1_EXPOSUREBIAS         = SDK_FUNCTIONLOCK_CATEGORY1_EXPOSUREBIAS,
	GFX100_FUNCTIONLOCK_CATEGORY1_DRV                  = SDK_FUNCTIONLOCK_CATEGORY1_DRV,
	GFX100_FUNCTIONLOCK_CATEGORY1_AEMODE               = SDK_FUNCTIONLOCK_CATEGORY1_AEMODE,
	GFX100_FUNCTIONLOCK_CATEGORY1_QBUTTON              = SDK_FUNCTIONLOCK_CATEGORY1_QBUTTON,
	GFX100_FUNCTIONLOCK_CATEGORY1_ISSWITCH             = SDK_FUNCTIONLOCK_CATEGORY1_ISSWITCH,
	GFX100_FUNCTIONLOCK_CATEGORY1_PROGRAMSHIFT         = SDK_FUNCTIONLOCK_CATEGORY1_PROGRAMSHIFT,
	GFX100_FUNCTIONLOCK_CATEGORY1_VIEWMODE             = SDK_FUNCTIONLOCK_CATEGORY1_VIEWMODE,
	GFX100_FUNCTIONLOCK_CATEGORY1_DISPBACK             = SDK_FUNCTIONLOCK_CATEGORY1_DISPBACK,
	GFX100_FUNCTIONLOCK_CATEGORY1_AELOCK               = SDK_FUNCTIONLOCK_CATEGORY1_AELOCK,
	GFX100_FUNCTIONLOCK_CATEGORY1_AFLOCK               = SDK_FUNCTIONLOCK_CATEGORY1_AFLOCK,
	GFX100_FUNCTIONLOCK_CATEGORY1_FOCUSASSIST          = SDK_FUNCTIONLOCK_CATEGORY1_FOCUSASSIST,
	GFX100_FUNCTIONLOCK_CATEGORY1_MOVIEREC             = SDK_FUNCTIONLOCK_CATEGORY1_MOVIEREC,
	GFX100_FUNCTIONLOCK_CATEGORY1_UP                   = SDK_FUNCTIONLOCK_CATEGORY1_UP,
	GFX100_FUNCTIONLOCK_CATEGORY1_RIGHT                = SDK_FUNCTIONLOCK_CATEGORY1_RIGHT,
	GFX100_FUNCTIONLOCK_CATEGORY1_LEFT                 = SDK_FUNCTIONLOCK_CATEGORY1_LEFT,
	GFX100_FUNCTIONLOCK_CATEGORY1_DOWN                 = SDK_FUNCTIONLOCK_CATEGORY1_DOWN,
	GFX100_FUNCTIONLOCK_CATEGORY1_FN1                  = SDK_FUNCTIONLOCK_CATEGORY1_FN1,
	GFX100_FUNCTIONLOCK_CATEGORY1_FN2                  = SDK_FUNCTIONLOCK_CATEGORY1_FN2,
	GFX100_FUNCTIONLOCK_CATEGORY1_AFMODE               = SDK_FUNCTIONLOCK_CATEGORY1_AFMODE,
	GFX100_FUNCTIONLOCK_CATEGORY1_FACEDETECT           = SDK_FUNCTIONLOCK_CATEGORY1_FACEDETECT,
	GFX100_FUNCTIONLOCK_CATEGORY1_OTHERSHOOTINGMENU    = SDK_FUNCTIONLOCK_CATEGORY1_SHOOTINGMENU,
	GFX100_FUNCTIONLOCK_CATEGORY1_SHOOTINGMENU         = SDK_FUNCTIONLOCK_CATEGORY1_SHOOTINGMENU,
	GFX100_FUNCTIONLOCK_CATEGORY1_MEDIAFORMAT          = SDK_FUNCTIONLOCK_CATEGORY1_MEDIAFORMAT,
	GFX100_FUNCTIONLOCK_CATEGORY1_ERASE                = SDK_FUNCTIONLOCK_CATEGORY1_ERASE,
	GFX100_FUNCTIONLOCK_CATEGORY1_DATETIME             = SDK_FUNCTIONLOCK_CATEGORY1_DATETIME,
	GFX100_FUNCTIONLOCK_CATEGORY1_RESET                = SDK_FUNCTIONLOCK_CATEGORY1_RESET,
	GFX100_FUNCTIONLOCK_CATEGORY1_SILENTMODE           = SDK_FUNCTIONLOCK_CATEGORY1_SILENTMODE,
	GFX100_FUNCTIONLOCK_CATEGORY1_SOUND                = SDK_FUNCTIONLOCK_CATEGORY1_SOUND,
	GFX100_FUNCTIONLOCK_CATEGORY2_SCREENDISP           = SDK_FUNCTIONLOCK_CATEGORY2_SCREENDISP,
	GFX100_FUNCTIONLOCK_CATEGORY2_MOVIEREC             = SDK_FUNCTIONLOCK_CATEGORY2_MOVIEREC,
	GFX100_FUNCTIONLOCK_CATEGORY2_COLORSPACE           = SDK_FUNCTIONLOCK_CATEGORY2_COLORSPACE,
	GFX100_FUNCTIONLOCK_CATEGORY2_OTHERSETUP           = SDK_FUNCTIONLOCK_CATEGORY2_OTHERSETUP,
	GFX100_FUNCTIONLOCK_CATEGORY2_WHITEBALANCE         = SDK_FUNCTIONLOCK_CATEGORY2_WHITEBALANCE,
	GFX100_FUNCTIONLOCK_CATEGORY2_FILMSIMULATION       = SDK_FUNCTIONLOCK_CATEGORY2_FILMSIMULATION,
	GFX100_FUNCTIONLOCK_CATEGORY2_FOCUSSTICK           = SDK_FUNCTIONLOCK_CATEGORY2_FOCUSSTICK,
	GFX100_FUNCTIONLOCK_CATEGORY2_FOCUSRANGESELECTOR   = SDK_FUNCTIONLOCK_CATEGORY2_FOCUSRANGESELECTOR,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN3                  = SDK_FUNCTIONLOCK_CATEGORY2_FN3,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN4                  = SDK_FUNCTIONLOCK_CATEGORY2_FN4,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN5                  = SDK_FUNCTIONLOCK_CATEGORY2_FN5,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN10                 = SDK_FUNCTIONLOCK_CATEGORY2_FN10,
	GFX100_FUNCTIONLOCK_CATEGORY2_RDIAL                = SDK_FUNCTIONLOCK_CATEGORY2_RDIAL,
	GFX100_FUNCTIONLOCK_CATEGORY2_AFON                 = SDK_FUNCTIONLOCK_CATEGORY2_AFON,
	GFX100_FUNCTIONLOCK_CATEGORY2_TOUCHMODE            = SDK_FUNCTIONLOCK_CATEGORY2_TOUCHMODE,
	GFX100_FUNCTIONLOCK_CATEGORY2_TFN1                 = SDK_FUNCTIONLOCK_CATEGORY2_TFN1,
	GFX100_FUNCTIONLOCK_CATEGORY2_TFN2                 = SDK_FUNCTIONLOCK_CATEGORY2_TFN2,
	GFX100_FUNCTIONLOCK_CATEGORY2_TFN3                 = SDK_FUNCTIONLOCK_CATEGORY2_TFN3,
	GFX100_FUNCTIONLOCK_CATEGORY2_TFN4                 = SDK_FUNCTIONLOCK_CATEGORY2_TFN4,
	GFX100_FUNCTIONLOCK_CATEGORY2_SUBDISP              = SDK_FUNCTIONLOCK_CATEGORY2_SUBDISP,
	GFX100_FUNCTIONLOCK_CATEGORY2_AELOCK_V             = SDK_FUNCTIONLOCK_CATEGORY2_AELOCK_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_AFON_V               = SDK_FUNCTIONLOCK_CATEGORY2_AFON_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN1_V                = SDK_FUNCTIONLOCK_CATEGORY2_FN1_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN2_V                = SDK_FUNCTIONLOCK_CATEGORY2_FN2_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN3_V                = SDK_FUNCTIONLOCK_CATEGORY2_FN3_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN4_V                = SDK_FUNCTIONLOCK_CATEGORY2_FN4_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_RDIAL_V              = SDK_FUNCTIONLOCK_CATEGORY2_RDIAL_V,
	GFX100_FUNCTIONLOCK_CATEGORY2_LEVER                = SDK_FUNCTIONLOCK_CATEGORY2_LEVER,
	GFX100_FUNCTIONLOCK_CATEGORY2_IMAGESWITCHINGLEVER  = SDK_FUNCTIONLOCK_CATEGORY2_IMAGESWITCHINGLEVER,
	GFX100_FUNCTIONLOCK_CATEGORY2_MODEDIAL				= SDK_FUNCTIONLOCK_CATEGORY2_MODEDIAL,
	GFX100_FUNCTIONLOCK_CATEGORY2_FDIAL				= SDK_FUNCTIONLOCK_CATEGORY2_FDIAL,
	GFX100_FUNCTIONLOCK_CATEGORY2_FN_DIAL				= SDK_FUNCTIONLOCK_CATEGORY2_FN_DIAL,
	GFX100_FUNCTIONLOCK_CATEGORY2_SUBDISP_LIGHT		= SDK_FUNCTIONLOCK_CATEGORY2_SUBDISP_LIGHT,
	GFX100_MEDIASIZE_1M                     = SDK_MEDIASIZE_1M,
	GFX100_MEDIASIZE_2M                     = SDK_MEDIASIZE_2M,
	GFX100_MEDIASIZE_4M                     = SDK_MEDIASIZE_4M,
	GFX100_MEDIASIZE_8M                     = SDK_MEDIASIZE_8M,
	GFX100_MEDIASIZE_16M                    = SDK_MEDIASIZE_16M,
	GFX100_MEDIASIZE_32M                    = SDK_MEDIASIZE_32M,
	GFX100_MEDIASIZE_64M                    = SDK_MEDIASIZE_64M,
	GFX100_MEDIASIZE_128M                   = SDK_MEDIASIZE_128M,
	GFX100_MEDIASIZE_256M                   = SDK_MEDIASIZE_256M,
	GFX100_MEDIASIZE_512M                   = SDK_MEDIASIZE_512M,
	GFX100_MEDIASIZE_1G                     = SDK_MEDIASIZE_1G,
	GFX100_MEDIASIZE_2G                     = SDK_MEDIASIZE_2G,
	GFX100_MEDIASIZE_4G                     = SDK_MEDIASIZE_4G,
	GFX100_MEDIASIZE_8G                     = SDK_MEDIASIZE_8G,
	GFX100_MEDIASIZE_16G                    = SDK_MEDIASIZE_16G,
	GFX100_MEDIASIZE_32G                    = SDK_MEDIASIZE_32G,
	GFX100_MEDIASIZE_32G_OVER               = SDK_MEDIASIZE_32G_OVER,
	GFX100_MEDIASTATUS_OK                    = SDK_MEDIASTATUS_OK,
	GFX100_MEDIASTATUS_WRITEPROTECTED        = SDK_MEDIASTATUS_WRITEPROTECTED,
	GFX100_MEDIASTATUS_NOCARD                = SDK_MEDIASTATUS_NOCARD,
	GFX100_MEDIASTATUS_UNFORMATTED           = SDK_MEDIASTATUS_UNFORMATTED,
	GFX100_MEDIASTATUS_ERROR                 = SDK_MEDIASTATUS_ERROR,
	GFX100_MEDIASTATUS_MAXNO                 = SDK_MEDIASTATUS_MAXNO,
	GFX100_MEDIASTATUS_FULL                  = SDK_MEDIASTATUS_FULL,
	GFX100_MEDIASTATUS_ACCESSING             = SDK_MEDIASTATUS_ACCESSING,
};

enum{
	GFX100_CROPMODE_OFF     = SDK_CROPMODE_OFF,
	GFX100_CROPMODE_35MM    = SDK_CROPMODE_35MM,
	GFX100_CROPMODE_AUTO    = SDK_CROPMODE_AUTO,
	GFX100_CROPMODE_SPORTSFINDER_125 = SDK_CROPMODE_SPORTSFINDER_125,
};

enum{
	GFX100_ON  = SDK_ON,
	GFX100_OFF = SDK_OFF,
};

enum{
	GFX100_ITEM_DIRECTION_0             = SDK_ITEM_DIRECTION_0,
	GFX100_ITEM_DIRECTION_90            = SDK_ITEM_DIRECTION_90,
	GFX100_ITEM_DIRECTION_180           = SDK_ITEM_DIRECTION_180,
	GFX100_ITEM_DIRECTION_270           = SDK_ITEM_DIRECTION_270,
	GFX100_ITEM_ISODIAL_H1              = SDK_ITEM_ISODIAL_H1,
	GFX100_ITEM_ISODIAL_H2              = SDK_ITEM_ISODIAL_H2,
	GFX100_ITEM_VIEWMODE_SHOOT          = SDK_ITEM_VIEWMODE_SHOOT,
	GFX100_ITEM_VIEWMODE_PLAYBACK       = SDK_ITEM_VIEWMODE_PLAYBACK,
	GFX100_ITEM_DISPINFO_LCD            = SDK_ITEM_DISPINFO_LCD,
	GFX100_ITEM_DISPINFO_EVF            = SDK_ITEM_DISPINFO_EVF,
	GFX100_ITEM_AFPRIORITY_AFS          = SDK_ITEM_AFPRIORITY_AFS,
	GFX100_ITEM_AFPRIORITY_AFC          = SDK_ITEM_AFPRIORITY_AFC,
	GFX100_ITEM_RESET_SHOOTMENU         = SDK_ITEM_RESET_SHOOTMENU,
	GFX100_ITEM_RESET_SETUP             = SDK_ITEM_RESET_SETUP,
	GFX100_ITEM_BRIGHTNESS_LCD          = SDK_ITEM_BRIGHTNESS_LCD,
	GFX100_ITEM_BRIGHTNESS_EVF          = SDK_ITEM_BRIGHTNESS_EVF,
	GFX100_ITEM_CHROMA_LCD              = SDK_ITEM_CHROMA_LCD,
	GFX100_ITEM_CHROMA_EVF              = SDK_ITEM_CHROMA_EVF,
	GFX100_ITEM_FUNCBUTTON_FN1          = SDK_ITEM_FUNCBUTTON_FN1,
	GFX100_ITEM_FUNCBUTTON_FN2          = SDK_ITEM_FUNCBUTTON_FN2,
	GFX100_ITEM_FUNCBUTTON_FN3          = SDK_ITEM_FUNCBUTTON_FN3,
	GFX100_ITEM_FUNCBUTTON_FN4          = SDK_ITEM_FUNCBUTTON_FN4,
	GFX100_ITEM_FUNCBUTTON_FN5          = SDK_ITEM_FUNCBUTTON_FN5,
	GFX100_ITEM_FUNCBUTTON_FN6          = SDK_ITEM_FUNCBUTTON_FN6,
	GFX100_ITEM_FILENAME_sRGB           = SDK_ITEM_FILENAME_sRGB,
	GFX100_ITEM_FILENAME_AdobeRGB       = SDK_ITEM_FILENAME_AdobeRGB,
	GFX100_ITEM_MEDIASLOT1              = SDK_ITEM_MEDIASLOT1,
	GFX100_ITEM_MEDIASLOT2              = SDK_ITEM_MEDIASLOT2,
	GFX100_ITEM_DIRECTION_CURRENT       = SDK_ITEM_DIRECTION_CURRENT,
	GFX100_ITEM_FOLDERNAME_NOCATEGORY   = SDK_ITEM_FOLDERNAME_NOCATEGORY,
	GFX100_NEW_FOLDER                   = SDK_NEW_FOLDER,
	GFX100_FOLDERNUMBER_NIL             = SDK_FOLDERNUMBER_NIL,
};

enum{
	GFX100_WIDEDYNAMICRANGE_0           = SDK_WIDEDYNAMICRANGE_0,
	GFX100_WIDEDYNAMICRANGE_P1          = SDK_WIDEDYNAMICRANGE_P1,
	GFX100_WIDEDYNAMICRANGE_P2          = SDK_WIDEDYNAMICRANGE_P2,
	GFX100_WIDEDYNAMICRANGE_P3          = SDK_WIDEDYNAMICRANGE_P3,
	GFX100_WIDEDYNAMICRANGE_AUTO        = SDK_WIDEDYNAMICRANGE_AUTO,
};

enum{
	GFX100_BLACKIMAGETONE_P90           = SDK_BLACKIMAGETONE_P90,
	GFX100_BLACKIMAGETONE_P80           = SDK_BLACKIMAGETONE_P80,
	GFX100_BLACKIMAGETONE_P70           = SDK_BLACKIMAGETONE_P70,
	GFX100_BLACKIMAGETONE_P60           = SDK_BLACKIMAGETONE_P60,
	GFX100_BLACKIMAGETONE_P50           = SDK_BLACKIMAGETONE_P50,
	GFX100_BLACKIMAGETONE_P40           = SDK_BLACKIMAGETONE_P40,
	GFX100_BLACKIMAGETONE_P30           = SDK_BLACKIMAGETONE_P30,
	GFX100_BLACKIMAGETONE_P20           = SDK_BLACKIMAGETONE_P20,
	GFX100_BLACKIMAGETONE_P10           = SDK_BLACKIMAGETONE_P10,
	GFX100_BLACKIMAGETONE_0             = SDK_BLACKIMAGETONE_0,
	GFX100_BLACKIMAGETONE_M10           = SDK_BLACKIMAGETONE_M10,
	GFX100_BLACKIMAGETONE_M20           = SDK_BLACKIMAGETONE_M20,
	GFX100_BLACKIMAGETONE_M30           = SDK_BLACKIMAGETONE_M30,
	GFX100_BLACKIMAGETONE_M40           = SDK_BLACKIMAGETONE_M40,
	GFX100_BLACKIMAGETONE_M50           = SDK_BLACKIMAGETONE_M50,
	GFX100_BLACKIMAGETONE_M60           = SDK_BLACKIMAGETONE_M60,
	GFX100_BLACKIMAGETONE_M70           = SDK_BLACKIMAGETONE_M70,
	GFX100_BLACKIMAGETONE_M80           = SDK_BLACKIMAGETONE_M80,
	GFX100_BLACKIMAGETONE_M90           = SDK_BLACKIMAGETONE_M90,
};

// Micline Setting
enum{
	GFX100_MICLINE_SETTING_MIC          = SDK_MICLINE_SETTING_MIC,
	GFX100_MICLINE_SETTING_LINE         = SDK_MICLINE_SETTING_LINE,
};

// Shuttercount Type
enum{
	GFX100_SHUTTERCOUNT_TYPE_FRONTCURTAIN = SDK_SHUTTERCOUNT_TYPE_FRONTCURTAIN,
	GFX100_SHUTTERCOUNT_TYPE_REARCURTAIN  = SDK_SHUTTERCOUNT_TYPE_REARCURTAIN,
	GFX100_SHUTTERCOUNT_TYPE_TOTAL        = SDK_SHUTTERCOUNT_TYPE_TOTAL,
};

// Performance
enum{
	GFX100_PERFORMANCE_NORMAL                    = SDK_PERFORMANCE_NORMAL,
	GFX100_PERFORMANCE_ECONOMY                   = SDK_PERFORMANCE_ECONOMY,
	GFX100_PERFORMANCE_BOOST_LOWLIGHT            = SDK_PERFORMANCE_BOOST_LOWLIGHT,
	GFX100_PERFORMANCE_BOOST_RESOLUTION_PRIORITY = SDK_PERFORMANCE_BOOST_RESOLUTION_PRIORITY,
	GFX100_PERFORMANCE_BOOST_FRAMERATE_PRIORITY  = SDK_PERFORMANCE_BOOST_FRAMERATE_PRIORITY,
	GFX100_PERFORMANCE_BOOST_AFPRIORITY_NORMAL   = SDK_PERFORMANCE_BOOST_AFPRIORITY_NORMAL,
};

// PixelShift Settings
enum{
	GFX100_PIXELSHIFT_INTERVAL_SHORTEST = SDK_PIXELSHIFT_INTERVAL_SHORTEST,
	GFX100_PIXELSHIFT_INTERVAL_1S       = SDK_PIXELSHIFT_INTERVAL_1S,
	GFX100_PIXELSHIFT_INTERVAL_2S       = SDK_PIXELSHIFT_INTERVAL_2S,
	GFX100_PIXELSHIFT_INTERVAL_5S       = SDK_PIXELSHIFT_INTERVAL_5S,
	GFX100_PIXELSHIFT_INTERVAL_15S      = SDK_PIXELSHIFT_INTERVAL_15S,
};
