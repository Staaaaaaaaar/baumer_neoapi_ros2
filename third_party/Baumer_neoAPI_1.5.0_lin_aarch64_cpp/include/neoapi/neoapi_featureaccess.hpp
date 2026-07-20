/**
This file is part of the NeoAPI &mdash; It was automatically generated and contains access to the features of Baumer cameras.
Copyright(c) by Baumer Optronic GmbH.All rights reserved, please see the provided licence document for full details.
*/

#ifndef _NEOAPI_FEATUREACCESS_HPP__
#define _NEOAPI_FEATUREACCESS_HPP__

#include "neoapi_common.hpp"
#include "neoapi_feature.hpp"


namespace NeoAPI {
/**
 Valid values for AcquisitionMode
 */
enum class AcquisitionMode {
    Continuous = 0,  // Frames are captured continuously until stopped with the AcquisitionStop command.
    MultiFrame,  // The number of frames specified by AcquisitionFrameCount is captured.
    SingleFrame  // One frame is captured.
};

/**
Class to control Feature AcquisitionMode
*/
class NEOAPI_CPP_DECL CAcquisitionMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CAcquisitionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CAcquisitionMode object

    */
    CAcquisitionMode(const CAcquisitionMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CAcquisitionMode() {}
    /**
    Assignment operator
    Parameter:
        object The CAcquisitionMode object to assign.

    Return: Object reference with the value set.
    */
    const CAcquisitionMode& operator = (const CAcquisitionMode& object);
    /**
    Get the current value.
    Return: The value as AcquisitionMode
    */
    operator AcquisitionMode() const;
    /**
    Set the current value.
    Parameter:
        value The AcquisitionMode value to be written.

    Return: The CAcquisitionMode object
    */
    CAcquisitionMode& operator = (AcquisitionMode value);
    /**
    Set the current value.
    Parameter:
        value The AcquisitionMode value to be written.

    Return: The CAcquisitionMode object
    */
    CAcquisitionMode& Set(AcquisitionMode value);
    /**
    Get the current value.
    Return: The value as AcquisitionMode
    */
    AcquisitionMode Get() const;
};

/**
 Valid values for AcquisitionStatusSelector
 */
enum class AcquisitionStatusSelector {
    AcquisitionActive = 0,  // Device is currently doing an acquisition of one or many frames.
    AcquisitionTransfer,  // Device is currently transferring an acquisition of one or many frames.
    AcquisitionTriggerWait,  // Device is currently waiting for a trigger for the capture of one or many frames.
    ExposureActive,  // Device is doing the exposure of a frame.
    FrameActive,  // Device is currently doing the capture of a frame.
    FrameTriggerWait  // Device is currently waiting for a frame start trigger.
};

/**
Class to control Feature AcquisitionStatusSelector
*/
class NEOAPI_CPP_DECL CAcquisitionStatusSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CAcquisitionStatusSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CAcquisitionStatusSelector object

    */
    CAcquisitionStatusSelector(const CAcquisitionStatusSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CAcquisitionStatusSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CAcquisitionStatusSelector object to assign.

    Return: Object reference with the value set.
    */
    const CAcquisitionStatusSelector& operator = (const CAcquisitionStatusSelector& object);
    /**
    Get the current value.
    Return: The value as AcquisitionStatusSelector
    */
    operator AcquisitionStatusSelector() const;
    /**
    Set the current value.
    Parameter:
        value The AcquisitionStatusSelector value to be written.

    Return: The CAcquisitionStatusSelector object
    */
    CAcquisitionStatusSelector& operator = (AcquisitionStatusSelector value);
    /**
    Set the current value.
    Parameter:
        value The AcquisitionStatusSelector value to be written.

    Return: The CAcquisitionStatusSelector object
    */
    CAcquisitionStatusSelector& Set(AcquisitionStatusSelector value);
    /**
    Get the current value.
    Return: The value as AcquisitionStatusSelector
    */
    AcquisitionStatusSelector Get() const;
};

/**
 Valid values for ApertureStatus
 */
enum class ApertureStatus {
    Busy = 0,  // The aperture controller executes a feature access/command.
    Error,  // The aperture controller encountered an error.
    NotConnected,  // The aperture controller is physically not connected.
    NotInitialized,  // The aperture controller is not initialized.
    NotSupported,  // The aperture controller is physically connected but not supported.
    Ready  // The aperture controller is ready to use.
};

/**
Class to control Feature ApertureStatus
*/
class NEOAPI_CPP_DECL CApertureStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CApertureStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CApertureStatus object

    */
    CApertureStatus(const CApertureStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CApertureStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CApertureStatus object to assign.

    Return: Object reference with the value set.
    */
    const CApertureStatus& operator = (const CApertureStatus& object);
    /**
    Get the current value.
    Return: The value as ApertureStatus
    */
    operator ApertureStatus() const;
    /**
    Set the current value.
    Parameter:
        value The ApertureStatus value to be written.

    Return: The CApertureStatus object
    */
    CApertureStatus& operator = (ApertureStatus value);
    /**
    Set the current value.
    Parameter:
        value The ApertureStatus value to be written.

    Return: The CApertureStatus object
    */
    CApertureStatus& Set(ApertureStatus value);
    /**
    Get the current value.
    Return: The value as ApertureStatus
    */
    ApertureStatus Get() const;
};

/**
 Valid values for AutoFeatureRegionMode
 */
enum class AutoFeatureRegionMode {
    Off = 0,  // All settings of the selected AutoFeature ROI are automatically equal to the selected AutoFeatureRegionReference.
    On  // The settings of the selected AutoFeature ROI are user defined. The AutoFeature is useable only if the AutoFeature ROI fits into the AutoFeatureRegionReference of the AutoFeature.
};

/**
Class to control Feature AutoFeatureRegionMode
*/
class NEOAPI_CPP_DECL CAutoFeatureRegionMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CAutoFeatureRegionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CAutoFeatureRegionMode object

    */
    CAutoFeatureRegionMode(const CAutoFeatureRegionMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CAutoFeatureRegionMode() {}
    /**
    Assignment operator
    Parameter:
        object The CAutoFeatureRegionMode object to assign.

    Return: Object reference with the value set.
    */
    const CAutoFeatureRegionMode& operator = (const CAutoFeatureRegionMode& object);
    /**
    Get the current value.
    Return: The value as AutoFeatureRegionMode
    */
    operator AutoFeatureRegionMode() const;
    /**
    Set the current value.
    Parameter:
        value The AutoFeatureRegionMode value to be written.

    Return: The CAutoFeatureRegionMode object
    */
    CAutoFeatureRegionMode& operator = (AutoFeatureRegionMode value);
    /**
    Set the current value.
    Parameter:
        value The AutoFeatureRegionMode value to be written.

    Return: The CAutoFeatureRegionMode object
    */
    CAutoFeatureRegionMode& Set(AutoFeatureRegionMode value);
    /**
    Get the current value.
    Return: The value as AutoFeatureRegionMode
    */
    AutoFeatureRegionMode Get() const;
};

/**
 Valid values for AutoFeatureRegionReference
 */
enum class AutoFeatureRegionReference {
    Region0 = 0  // The selected Auto Feature Region refers to Region 0.
};

/**
Class to control Feature AutoFeatureRegionReference
*/
class NEOAPI_CPP_DECL CAutoFeatureRegionReference : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CAutoFeatureRegionReference(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CAutoFeatureRegionReference object

    */
    CAutoFeatureRegionReference(const CAutoFeatureRegionReference& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CAutoFeatureRegionReference() {}
    /**
    Assignment operator
    Parameter:
        object The CAutoFeatureRegionReference object to assign.

    Return: Object reference with the value set.
    */
    const CAutoFeatureRegionReference& operator = (const CAutoFeatureRegionReference& object);
    /**
    Get the current value.
    Return: The value as AutoFeatureRegionReference
    */
    operator AutoFeatureRegionReference() const;
    /**
    Set the current value.
    Parameter:
        value The AutoFeatureRegionReference value to be written.

    Return: The CAutoFeatureRegionReference object
    */
    CAutoFeatureRegionReference& operator = (AutoFeatureRegionReference value);
    /**
    Set the current value.
    Parameter:
        value The AutoFeatureRegionReference value to be written.

    Return: The CAutoFeatureRegionReference object
    */
    CAutoFeatureRegionReference& Set(AutoFeatureRegionReference value);
    /**
    Get the current value.
    Return: The value as AutoFeatureRegionReference
    */
    AutoFeatureRegionReference Get() const;
};

/**
 Valid values for AutoFeatureRegionSelector
 */
enum class AutoFeatureRegionSelector {
    BalanceWhiteAuto = 0,  // Selected features will control the region for BalanceWhiteAuto and ColorTransformationAuto algorithm.
    BrightnessAuto  // Selected features will control the region for GainAuto and ExposureAuto algorithm.
};

/**
Class to control Feature AutoFeatureRegionSelector
*/
class NEOAPI_CPP_DECL CAutoFeatureRegionSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CAutoFeatureRegionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CAutoFeatureRegionSelector object

    */
    CAutoFeatureRegionSelector(const CAutoFeatureRegionSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CAutoFeatureRegionSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CAutoFeatureRegionSelector object to assign.

    Return: Object reference with the value set.
    */
    const CAutoFeatureRegionSelector& operator = (const CAutoFeatureRegionSelector& object);
    /**
    Get the current value.
    Return: The value as AutoFeatureRegionSelector
    */
    operator AutoFeatureRegionSelector() const;
    /**
    Set the current value.
    Parameter:
        value The AutoFeatureRegionSelector value to be written.

    Return: The CAutoFeatureRegionSelector object
    */
    CAutoFeatureRegionSelector& operator = (AutoFeatureRegionSelector value);
    /**
    Set the current value.
    Parameter:
        value The AutoFeatureRegionSelector value to be written.

    Return: The CAutoFeatureRegionSelector object
    */
    CAutoFeatureRegionSelector& Set(AutoFeatureRegionSelector value);
    /**
    Get the current value.
    Return: The value as AutoFeatureRegionSelector
    */
    AutoFeatureRegionSelector Get() const;
};

/**
 Valid values for BOPFShift
 */
enum class BOPFShift {
    Bits0To7 = 0,  // Uses bit 0 to bit 7.
    Bits1To8,  // Uses bit 1 to bit 8.
    Bits2To9,  // Uses bit 2 to bit 9.
    Bits3To10,  // Uses bit 3 to bit 10.
    Bits4To11  // Uses bit 4 to bit 11.
};

/**
Class to control Feature BOPFShift
*/
class NEOAPI_CPP_DECL CBOPFShift : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBOPFShift(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBOPFShift object

    */
    CBOPFShift(const CBOPFShift& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBOPFShift() {}
    /**
    Assignment operator
    Parameter:
        object The CBOPFShift object to assign.

    Return: Object reference with the value set.
    */
    const CBOPFShift& operator = (const CBOPFShift& object);
    /**
    Get the current value.
    Return: The value as BOPFShift
    */
    operator BOPFShift() const;
    /**
    Set the current value.
    Parameter:
        value The BOPFShift value to be written.

    Return: The CBOPFShift object
    */
    CBOPFShift& operator = (BOPFShift value);
    /**
    Set the current value.
    Parameter:
        value The BOPFShift value to be written.

    Return: The CBOPFShift object
    */
    CBOPFShift& Set(BOPFShift value);
    /**
    Get the current value.
    Return: The value as BOPFShift
    */
    BOPFShift Get() const;
};

/**
 Valid values for BalanceWhiteAuto
 */
enum class BalanceWhiteAuto {
    Continuous = 0,  // White balancing is constantly adjusted by the device.
    Off,  // White balancing is user controlled using BalanceRatioSelector and BalanceRatio.
    Once  // White balancing is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
};

/**
Class to control Feature BalanceWhiteAuto
*/
class NEOAPI_CPP_DECL CBalanceWhiteAuto : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBalanceWhiteAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBalanceWhiteAuto object

    */
    CBalanceWhiteAuto(const CBalanceWhiteAuto& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBalanceWhiteAuto() {}
    /**
    Assignment operator
    Parameter:
        object The CBalanceWhiteAuto object to assign.

    Return: Object reference with the value set.
    */
    const CBalanceWhiteAuto& operator = (const CBalanceWhiteAuto& object);
    /**
    Get the current value.
    Return: The value as BalanceWhiteAuto
    */
    operator BalanceWhiteAuto() const;
    /**
    Set the current value.
    Parameter:
        value The BalanceWhiteAuto value to be written.

    Return: The CBalanceWhiteAuto object
    */
    CBalanceWhiteAuto& operator = (BalanceWhiteAuto value);
    /**
    Set the current value.
    Parameter:
        value The BalanceWhiteAuto value to be written.

    Return: The CBalanceWhiteAuto object
    */
    CBalanceWhiteAuto& Set(BalanceWhiteAuto value);
    /**
    Get the current value.
    Return: The value as BalanceWhiteAuto
    */
    BalanceWhiteAuto Get() const;
};

/**
 Valid values for BalanceWhiteAutoStatus
 */
enum class BalanceWhiteAutoStatus {
    ColorGainsTooHigh = 0,  // The BalanceWhiteAuto calculation failed since at least one of the calculated color gains exceeds the maximum value.
    Initial,  // BalanceWhiteAuto has never been started.
    Start,  // BalanceWhiteAuto is waiting for statistical data.
    Success,  // The last BalanceWhiteAuto calculation succeeded.
    Underrun  // The BalanceWhiteAuto calculation failed since at least one color-channel shows invalid statistic data.
};

/**
Class to control Feature BalanceWhiteAutoStatus
*/
class NEOAPI_CPP_DECL CBalanceWhiteAutoStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBalanceWhiteAutoStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBalanceWhiteAutoStatus object

    */
    CBalanceWhiteAutoStatus(const CBalanceWhiteAutoStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBalanceWhiteAutoStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CBalanceWhiteAutoStatus object to assign.

    Return: Object reference with the value set.
    */
    const CBalanceWhiteAutoStatus& operator = (const CBalanceWhiteAutoStatus& object);
    /**
    Get the current value.
    Return: The value as BalanceWhiteAutoStatus
    */
    operator BalanceWhiteAutoStatus() const;
    /**
    Set the current value.
    Parameter:
        value The BalanceWhiteAutoStatus value to be written.

    Return: The CBalanceWhiteAutoStatus object
    */
    CBalanceWhiteAutoStatus& operator = (BalanceWhiteAutoStatus value);
    /**
    Set the current value.
    Parameter:
        value The BalanceWhiteAutoStatus value to be written.

    Return: The CBalanceWhiteAutoStatus object
    */
    CBalanceWhiteAutoStatus& Set(BalanceWhiteAutoStatus value);
    /**
    Get the current value.
    Return: The value as BalanceWhiteAutoStatus
    */
    BalanceWhiteAutoStatus Get() const;
};

/**
 Valid values for Baudrate
 */
enum class Baudrate {
    Baud115200 = 0,  // Baudrate of RS232 UART is 115200.
    Baud19200,  // Baudrate of RS232 UART is 19200.
    Baud230400,  // Baudrate of RS232 UART is 230400.
    Baud38400,  // Baudrate of RS232 UART is 38400.
    Baud460800,  // Baudrate of RS232 UART is 460800.
    Baud57600,  // Baudrate of RS232 UART is 57600.
    Baud9600,  // Baudrate of RS232 UART is 9600.
    RS232Off  // RS232 UART is off.
};

/**
Class to control Feature Baudrate
*/
class NEOAPI_CPP_DECL CBaudrate : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBaudrate(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBaudrate object

    */
    CBaudrate(const CBaudrate& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBaudrate() {}
    /**
    Assignment operator
    Parameter:
        object The CBaudrate object to assign.

    Return: Object reference with the value set.
    */
    const CBaudrate& operator = (const CBaudrate& object);
    /**
    Get the current value.
    Return: The value as Baudrate
    */
    operator Baudrate() const;
    /**
    Set the current value.
    Parameter:
        value The Baudrate value to be written.

    Return: The CBaudrate object
    */
    CBaudrate& operator = (Baudrate value);
    /**
    Set the current value.
    Parameter:
        value The Baudrate value to be written.

    Return: The CBaudrate object
    */
    CBaudrate& Set(Baudrate value);
    /**
    Get the current value.
    Return: The value as Baudrate
    */
    Baudrate Get() const;
};

/**
 Valid values for BinningHorizontalMode
 */
enum class BinningHorizontalMode {
    Average = 0,  // The response from the combined cells will be averaged, resulting in increased signal/noise ratio.
    Sum  // The response from the combined cells will be added, resulting in increased sensitivity.
};

/**
Class to control Feature BinningHorizontalMode
*/
class NEOAPI_CPP_DECL CBinningHorizontalMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBinningHorizontalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBinningHorizontalMode object

    */
    CBinningHorizontalMode(const CBinningHorizontalMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBinningHorizontalMode() {}
    /**
    Assignment operator
    Parameter:
        object The CBinningHorizontalMode object to assign.

    Return: Object reference with the value set.
    */
    const CBinningHorizontalMode& operator = (const CBinningHorizontalMode& object);
    /**
    Get the current value.
    Return: The value as BinningHorizontalMode
    */
    operator BinningHorizontalMode() const;
    /**
    Set the current value.
    Parameter:
        value The BinningHorizontalMode value to be written.

    Return: The CBinningHorizontalMode object
    */
    CBinningHorizontalMode& operator = (BinningHorizontalMode value);
    /**
    Set the current value.
    Parameter:
        value The BinningHorizontalMode value to be written.

    Return: The CBinningHorizontalMode object
    */
    CBinningHorizontalMode& Set(BinningHorizontalMode value);
    /**
    Get the current value.
    Return: The value as BinningHorizontalMode
    */
    BinningHorizontalMode Get() const;
};

/**
 Valid values for BinningSelector
 */
enum class BinningSelector {
    Region0 = 0,  // Selected feature will control the region 0 binning.
    Region1,  // Selected feature will control the region 1 binning.
    Region2,  // Selected feature will control the region 2 binning.
    Sensor  // Selected features will control the sensor binning.
};

/**
Class to control Feature BinningSelector
*/
class NEOAPI_CPP_DECL CBinningSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBinningSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBinningSelector object

    */
    CBinningSelector(const CBinningSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBinningSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CBinningSelector object to assign.

    Return: Object reference with the value set.
    */
    const CBinningSelector& operator = (const CBinningSelector& object);
    /**
    Get the current value.
    Return: The value as BinningSelector
    */
    operator BinningSelector() const;
    /**
    Set the current value.
    Parameter:
        value The BinningSelector value to be written.

    Return: The CBinningSelector object
    */
    CBinningSelector& operator = (BinningSelector value);
    /**
    Set the current value.
    Parameter:
        value The BinningSelector value to be written.

    Return: The CBinningSelector object
    */
    CBinningSelector& Set(BinningSelector value);
    /**
    Get the current value.
    Return: The value as BinningSelector
    */
    BinningSelector Get() const;
};

/**
 Valid values for BinningVerticalMode
 */
enum class BinningVerticalMode {
    Average = 0,  // The response from the combined cells will be averaged, resulting in increased signal/noise ratio.
    Sum  // The response from the combined cells will be added, resulting in increased sensitivity.
};

/**
Class to control Feature BinningVerticalMode
*/
class NEOAPI_CPP_DECL CBinningVerticalMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBinningVerticalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBinningVerticalMode object

    */
    CBinningVerticalMode(const CBinningVerticalMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBinningVerticalMode() {}
    /**
    Assignment operator
    Parameter:
        object The CBinningVerticalMode object to assign.

    Return: Object reference with the value set.
    */
    const CBinningVerticalMode& operator = (const CBinningVerticalMode& object);
    /**
    Get the current value.
    Return: The value as BinningVerticalMode
    */
    operator BinningVerticalMode() const;
    /**
    Set the current value.
    Parameter:
        value The BinningVerticalMode value to be written.

    Return: The CBinningVerticalMode object
    */
    CBinningVerticalMode& operator = (BinningVerticalMode value);
    /**
    Set the current value.
    Parameter:
        value The BinningVerticalMode value to be written.

    Return: The CBinningVerticalMode object
    */
    CBinningVerticalMode& Set(BinningVerticalMode value);
    /**
    Get the current value.
    Return: The value as BinningVerticalMode
    */
    BinningVerticalMode Get() const;
};

/**
 Valid values for BlackLevelSelector
 */
enum class BlackLevelSelector {
    All = 0,  // Black Level will be applied to all channels or taps.
    Blue,  // Black Level will be applied to the blue channel.
    Green,  // Black Level will be applied to the green channel.
    Red,  // Black Level will be applied to the red channel.
    Tap1,  // Black Level will be applied to Tap 1.
    Tap2,  // Black Level will be applied to Tap 2.
    U,  // Black Level will be applied to U channel.
    V,  // Black Level will be applied to V channel.
    Y  // Black Level will be applied to Y channel.
};

/**
Class to control Feature BlackLevelSelector
*/
class NEOAPI_CPP_DECL CBlackLevelSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBlackLevelSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBlackLevelSelector object

    */
    CBlackLevelSelector(const CBlackLevelSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBlackLevelSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CBlackLevelSelector object to assign.

    Return: Object reference with the value set.
    */
    const CBlackLevelSelector& operator = (const CBlackLevelSelector& object);
    /**
    Get the current value.
    Return: The value as BlackLevelSelector
    */
    operator BlackLevelSelector() const;
    /**
    Set the current value.
    Parameter:
        value The BlackLevelSelector value to be written.

    Return: The CBlackLevelSelector object
    */
    CBlackLevelSelector& operator = (BlackLevelSelector value);
    /**
    Set the current value.
    Parameter:
        value The BlackLevelSelector value to be written.

    Return: The CBlackLevelSelector object
    */
    CBlackLevelSelector& Set(BlackLevelSelector value);
    /**
    Get the current value.
    Return: The value as BlackLevelSelector
    */
    BlackLevelSelector Get() const;
};

/**
 Valid values for BlackSunSuppression
 */
enum class BlackSunSuppression {
    Default = 0,  // Black Sun Suppression works with default settings.
    High,  // Black Sun Suppression works with high settings.
    Low,  // Black Sun Suppression works with low settings.
    Max,  // Black Sun Suppression works with maximum settings.
    Off  // Black Sun Suppression is off.
};

/**
Class to control Feature BlackSunSuppression
*/
class NEOAPI_CPP_DECL CBlackSunSuppression : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBlackSunSuppression(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBlackSunSuppression object

    */
    CBlackSunSuppression(const CBlackSunSuppression& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBlackSunSuppression() {}
    /**
    Assignment operator
    Parameter:
        object The CBlackSunSuppression object to assign.

    Return: Object reference with the value set.
    */
    const CBlackSunSuppression& operator = (const CBlackSunSuppression& object);
    /**
    Get the current value.
    Return: The value as BlackSunSuppression
    */
    operator BlackSunSuppression() const;
    /**
    Set the current value.
    Parameter:
        value The BlackSunSuppression value to be written.

    Return: The CBlackSunSuppression object
    */
    CBlackSunSuppression& operator = (BlackSunSuppression value);
    /**
    Set the current value.
    Parameter:
        value The BlackSunSuppression value to be written.

    Return: The CBlackSunSuppression object
    */
    CBlackSunSuppression& Set(BlackSunSuppression value);
    /**
    Get the current value.
    Return: The value as BlackSunSuppression
    */
    BlackSunSuppression Get() const;
};

/**
 Valid values for BoSequencerEnable
 */
enum class BoSequencerEnable {
    Off = 0,  // Disables the sequencer
    On  // Enables the sequencer
};

/**
Class to control Feature BoSequencerEnable
*/
class NEOAPI_CPP_DECL CBoSequencerEnable : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBoSequencerEnable(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBoSequencerEnable object

    */
    CBoSequencerEnable(const CBoSequencerEnable& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBoSequencerEnable() {}
    /**
    Assignment operator
    Parameter:
        object The CBoSequencerEnable object to assign.

    Return: Object reference with the value set.
    */
    const CBoSequencerEnable& operator = (const CBoSequencerEnable& object);
    /**
    Get the current value.
    Return: The value as BoSequencerEnable
    */
    operator BoSequencerEnable() const;
    /**
    Set the current value.
    Parameter:
        value The BoSequencerEnable value to be written.

    Return: The CBoSequencerEnable object
    */
    CBoSequencerEnable& operator = (BoSequencerEnable value);
    /**
    Set the current value.
    Parameter:
        value The BoSequencerEnable value to be written.

    Return: The CBoSequencerEnable object
    */
    CBoSequencerEnable& Set(BoSequencerEnable value);
    /**
    Get the current value.
    Return: The value as BoSequencerEnable
    */
    BoSequencerEnable Get() const;
};

/**
 Valid values for BoSequencerIOSelector
 */
enum class BoSequencerIOSelector {
    SequencerOutput0 = 0,  // Sequencer Output 0 is selected.
    SequencerOutput1,  // Sequencer Output 1 is selected.
    SequencerOutput2  // Sequencer Output 2 is selected.
};

/**
Class to control Feature BoSequencerIOSelector
*/
class NEOAPI_CPP_DECL CBoSequencerIOSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBoSequencerIOSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBoSequencerIOSelector object

    */
    CBoSequencerIOSelector(const CBoSequencerIOSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBoSequencerIOSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CBoSequencerIOSelector object to assign.

    Return: Object reference with the value set.
    */
    const CBoSequencerIOSelector& operator = (const CBoSequencerIOSelector& object);
    /**
    Get the current value.
    Return: The value as BoSequencerIOSelector
    */
    operator BoSequencerIOSelector() const;
    /**
    Set the current value.
    Parameter:
        value The BoSequencerIOSelector value to be written.

    Return: The CBoSequencerIOSelector object
    */
    CBoSequencerIOSelector& operator = (BoSequencerIOSelector value);
    /**
    Set the current value.
    Parameter:
        value The BoSequencerIOSelector value to be written.

    Return: The CBoSequencerIOSelector object
    */
    CBoSequencerIOSelector& Set(BoSequencerIOSelector value);
    /**
    Get the current value.
    Return: The value as BoSequencerIOSelector
    */
    BoSequencerIOSelector Get() const;
};

/**
 Valid values for BoSequencerMode
 */
enum class BoSequencerMode {
    FreeRunning = 0,  // The running mode free running is selected.
    FreeRunningInitTrigger,  // The running mode free running init trigger is selected.
    FreeRunningInitTriggerOnce,  // The running mode free running init trigger once is selected.
    FreeRunningOnce,  // The running mode free running once is selected.
    SingleStepTrigger,  // The running mode single step trigger is selected.
    SingleStepTriggerOnce  // The running mode single step trigger once is selected.
};

/**
Class to control Feature BoSequencerMode
*/
class NEOAPI_CPP_DECL CBoSequencerMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBoSequencerMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBoSequencerMode object

    */
    CBoSequencerMode(const CBoSequencerMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBoSequencerMode() {}
    /**
    Assignment operator
    Parameter:
        object The CBoSequencerMode object to assign.

    Return: Object reference with the value set.
    */
    const CBoSequencerMode& operator = (const CBoSequencerMode& object);
    /**
    Get the current value.
    Return: The value as BoSequencerMode
    */
    operator BoSequencerMode() const;
    /**
    Set the current value.
    Parameter:
        value The BoSequencerMode value to be written.

    Return: The CBoSequencerMode object
    */
    CBoSequencerMode& operator = (BoSequencerMode value);
    /**
    Set the current value.
    Parameter:
        value The BoSequencerMode value to be written.

    Return: The CBoSequencerMode object
    */
    CBoSequencerMode& Set(BoSequencerMode value);
    /**
    Get the current value.
    Return: The value as BoSequencerMode
    */
    BoSequencerMode Get() const;
};

/**
 Valid values for BoSequencerSensorDigitizationTaps
 */
enum class BoSequencerSensorDigitizationTaps {
    Four = 0,  // 4 Taps
    One,  // 1 Tap
    OneAndThree,  // 2 Taps, One and Three
    OneAndTwo  // 2 Taps, One and Two
};

/**
Class to control Feature BoSequencerSensorDigitizationTaps
*/
class NEOAPI_CPP_DECL CBoSequencerSensorDigitizationTaps : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBoSequencerSensorDigitizationTaps(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBoSequencerSensorDigitizationTaps object

    */
    CBoSequencerSensorDigitizationTaps(const CBoSequencerSensorDigitizationTaps& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBoSequencerSensorDigitizationTaps() {}
    /**
    Assignment operator
    Parameter:
        object The CBoSequencerSensorDigitizationTaps object to assign.

    Return: Object reference with the value set.
    */
    const CBoSequencerSensorDigitizationTaps& operator = (const CBoSequencerSensorDigitizationTaps& object);
    /**
    Get the current value.
    Return: The value as BoSequencerSensorDigitizationTaps
    */
    operator BoSequencerSensorDigitizationTaps() const;
    /**
    Set the current value.
    Parameter:
        value The BoSequencerSensorDigitizationTaps value to be written.

    Return: The CBoSequencerSensorDigitizationTaps object
    */
    CBoSequencerSensorDigitizationTaps& operator = (BoSequencerSensorDigitizationTaps value);
    /**
    Set the current value.
    Parameter:
        value The BoSequencerSensorDigitizationTaps value to be written.

    Return: The CBoSequencerSensorDigitizationTaps object
    */
    CBoSequencerSensorDigitizationTaps& Set(BoSequencerSensorDigitizationTaps value);
    /**
    Get the current value.
    Return: The value as BoSequencerSensorDigitizationTaps
    */
    BoSequencerSensorDigitizationTaps Get() const;
};

/**
 Valid values for BoSequencerStart
 */
enum class BoSequencerStart {
    Off = 0,  // Disables the configured sequence.
    On  // Enables the configured sequence.
};

/**
Class to control Feature BoSequencerStart
*/
class NEOAPI_CPP_DECL CBoSequencerStart : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBoSequencerStart(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBoSequencerStart object

    */
    CBoSequencerStart(const CBoSequencerStart& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBoSequencerStart() {}
    /**
    Assignment operator
    Parameter:
        object The CBoSequencerStart object to assign.

    Return: Object reference with the value set.
    */
    const CBoSequencerStart& operator = (const CBoSequencerStart& object);
    /**
    Get the current value.
    Return: The value as BoSequencerStart
    */
    operator BoSequencerStart() const;
    /**
    Set the current value.
    Parameter:
        value The BoSequencerStart value to be written.

    Return: The CBoSequencerStart object
    */
    CBoSequencerStart& operator = (BoSequencerStart value);
    /**
    Set the current value.
    Parameter:
        value The BoSequencerStart value to be written.

    Return: The CBoSequencerStart object
    */
    CBoSequencerStart& Set(BoSequencerStart value);
    /**
    Get the current value.
    Return: The value as BoSequencerStart
    */
    BoSequencerStart Get() const;
};

/**
 Valid values for BrightnessAutoPriority
 */
enum class BrightnessAutoPriority {
    ExposureAuto = 0,  // ExposureAuto has highest priority and will be modified first.
    GainAuto  // Gain Auto has highest priority and will be modified first.
};

/**
Class to control Feature BrightnessAutoPriority
*/
class NEOAPI_CPP_DECL CBrightnessAutoPriority : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBrightnessAutoPriority(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBrightnessAutoPriority object

    */
    CBrightnessAutoPriority(const CBrightnessAutoPriority& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBrightnessAutoPriority() {}
    /**
    Assignment operator
    Parameter:
        object The CBrightnessAutoPriority object to assign.

    Return: Object reference with the value set.
    */
    const CBrightnessAutoPriority& operator = (const CBrightnessAutoPriority& object);
    /**
    Get the current value.
    Return: The value as BrightnessAutoPriority
    */
    operator BrightnessAutoPriority() const;
    /**
    Set the current value.
    Parameter:
        value The BrightnessAutoPriority value to be written.

    Return: The CBrightnessAutoPriority object
    */
    CBrightnessAutoPriority& operator = (BrightnessAutoPriority value);
    /**
    Set the current value.
    Parameter:
        value The BrightnessAutoPriority value to be written.

    Return: The CBrightnessAutoPriority object
    */
    CBrightnessAutoPriority& Set(BrightnessAutoPriority value);
    /**
    Get the current value.
    Return: The value as BrightnessAutoPriority
    */
    BrightnessAutoPriority Get() const;
};

/**
 Valid values for BrightnessCorrection
 */
enum class BrightnessCorrection {
    Off = 0,  // Brightness Correction is off.
    On  // Brightness Correction is on.
};

/**
Class to control Feature BrightnessCorrection
*/
class NEOAPI_CPP_DECL CBrightnessCorrection : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CBrightnessCorrection(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CBrightnessCorrection object

    */
    CBrightnessCorrection(const CBrightnessCorrection& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CBrightnessCorrection() {}
    /**
    Assignment operator
    Parameter:
        object The CBrightnessCorrection object to assign.

    Return: Object reference with the value set.
    */
    const CBrightnessCorrection& operator = (const CBrightnessCorrection& object);
    /**
    Get the current value.
    Return: The value as BrightnessCorrection
    */
    operator BrightnessCorrection() const;
    /**
    Set the current value.
    Parameter:
        value The BrightnessCorrection value to be written.

    Return: The CBrightnessCorrection object
    */
    CBrightnessCorrection& operator = (BrightnessCorrection value);
    /**
    Set the current value.
    Parameter:
        value The BrightnessCorrection value to be written.

    Return: The CBrightnessCorrection object
    */
    CBrightnessCorrection& Set(BrightnessCorrection value);
    /**
    Get the current value.
    Return: The value as BrightnessCorrection
    */
    BrightnessCorrection Get() const;
};

/**
 Valid values for CalibrationMatrixColorSelector
 */
enum class CalibrationMatrixColorSelector {
    Blue = 0,  // Blue calibration matrix.
    Green,  // Green calibration matrix.
    Red  // Red calibration matrix.
};

/**
Class to control Feature CalibrationMatrixColorSelector
*/
class NEOAPI_CPP_DECL CCalibrationMatrixColorSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCalibrationMatrixColorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCalibrationMatrixColorSelector object

    */
    CCalibrationMatrixColorSelector(const CCalibrationMatrixColorSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCalibrationMatrixColorSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CCalibrationMatrixColorSelector object to assign.

    Return: Object reference with the value set.
    */
    const CCalibrationMatrixColorSelector& operator = (const CCalibrationMatrixColorSelector& object);
    /**
    Get the current value.
    Return: The value as CalibrationMatrixColorSelector
    */
    operator CalibrationMatrixColorSelector() const;
    /**
    Set the current value.
    Parameter:
        value The CalibrationMatrixColorSelector value to be written.

    Return: The CCalibrationMatrixColorSelector object
    */
    CCalibrationMatrixColorSelector& operator = (CalibrationMatrixColorSelector value);
    /**
    Set the current value.
    Parameter:
        value The CalibrationMatrixColorSelector value to be written.

    Return: The CCalibrationMatrixColorSelector object
    */
    CCalibrationMatrixColorSelector& Set(CalibrationMatrixColorSelector value);
    /**
    Get the current value.
    Return: The value as CalibrationMatrixColorSelector
    */
    CalibrationMatrixColorSelector Get() const;
};

/**
 Valid values for CalibrationMatrixValueSelector
 */
enum class CalibrationMatrixValueSelector {
    Gain00 = 0,  // Gain 0,0 of the selected calibration matrix.
    Gain01,  // Gain 0,1 of the selected calibration matrix.
    Gain02,  // Gain 0,2 of the selected calibration matrix.
    Gain03,  // Gain 0,3 of the selected calibration matrix.
    Gain10,  // Gain 1,0 of the selected calibration matrix.
    Gain11,  // Gain 1,1 of the selected calibration matrix.
    Gain12,  // Gain 1,2 of the selected calibration matrix.
    Gain13,  // Gain 1.3 of the selected calibration matrix.
    Gain20,  // Gain 2.0 of the selected calibration matrix.
    Gain21,  // Gain 2.1 of the selected calibration matrix.
    Gain22,  // Gain 2.2 of the selected calibration matrix.
    Gain23  // Gain 2.3 of the selected calibration matrix.
};

/**
Class to control Feature CalibrationMatrixValueSelector
*/
class NEOAPI_CPP_DECL CCalibrationMatrixValueSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCalibrationMatrixValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCalibrationMatrixValueSelector object

    */
    CCalibrationMatrixValueSelector(const CCalibrationMatrixValueSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCalibrationMatrixValueSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CCalibrationMatrixValueSelector object to assign.

    Return: Object reference with the value set.
    */
    const CCalibrationMatrixValueSelector& operator = (const CCalibrationMatrixValueSelector& object);
    /**
    Get the current value.
    Return: The value as CalibrationMatrixValueSelector
    */
    operator CalibrationMatrixValueSelector() const;
    /**
    Set the current value.
    Parameter:
        value The CalibrationMatrixValueSelector value to be written.

    Return: The CCalibrationMatrixValueSelector object
    */
    CCalibrationMatrixValueSelector& operator = (CalibrationMatrixValueSelector value);
    /**
    Set the current value.
    Parameter:
        value The CalibrationMatrixValueSelector value to be written.

    Return: The CCalibrationMatrixValueSelector object
    */
    CCalibrationMatrixValueSelector& Set(CalibrationMatrixValueSelector value);
    /**
    Get the current value.
    Return: The value as CalibrationMatrixValueSelector
    */
    CalibrationMatrixValueSelector Get() const;
};

/**
 Valid values for ChunkSelector
 */
enum class ChunkSelector {
    Binning = 0,  // Binning AVAILABLE: Always
    BinningHorizontal,  // Binning Horizontal
    BinningVertical,  // Binning Vertical
    BlackLevel,  // Black Level
    BoSequencerEnable,  // BoSequencer Enable
    ComponentID,  // Component ID
    ComponentIDValue,  // Component ID Value
    CounterValue,  // Counter Value
    DecimationHorizontal,  // Decimation Horizontal
    DecimationVertical,  // Decimation Vertical
    DeviceTemperature,  // Device Temperature. AVAILABLE: Always
    EncoderStatusValue,  // Encoder Status Value
    EncoderValue,  // Encoder Value
    ExposureTime,  // Exposure Time
    FrameID,  // Frame ID
    Gain,  // Gain
    GroupIDValue,  // Group ID Value
    Height,  // Height
    Image,  // Image
    ImageControl,  // Image Control. AVAILABLE: Always
    LinePitch,  // Line Pitch
    LineStatusAll,  // Line Status All
    OffsetX,  // Offset X
    OffsetY,  // Offset Y
    PixelDynamicRangeMax,  // Pixel Dynamic Range Max
    PixelDynamicRangeMin,  // Pixel Dynamic Range Min
    PixelFormat,  // Pixel Format
    RegionID,  // Region ID
    RegionIDValue,  // Region ID Value
    ReverseX,  // Reverse X
    ReverseY,  // Reverse Y
    Scan3dAxisMax,  // Scan 3d Axis Max
    Scan3dAxisMin,  // Scan 3d Axis Min
    Scan3dCoordinateOffset,  // Scan 3d Coordinate Offset
    Scan3dCoordinateReferenceValue,  // Scan 3d Coordinate Reference Value
    Scan3dCoordinateScale,  // Scan 3d Coordinate Scale
    Scan3dCoordinateSystem,  // Scan 3d Coordinate System
    Scan3dCoordinateSystemReference,  // Scan 3d Coordinate System Reference
    Scan3dCoordinateTransformValue,  // Scan 3d Coordinate Transform Value
    Scan3dDistanceUnit,  // Scan 3d Distance Unit
    Scan3dInvalidDataFlag,  // Scan 3d Invalid Data Flag
    Scan3dInvalidDataValue,  // Scan 3d Invalid Data Value
    Scan3dOutputMode,  // Scan 3d Output Mode
    SequencerSetActive,  // Sequencer Set Active
    SourceID,  // Source ID
    SourceIDValue,  // Source ID Value
    StreamChannelID,  // Stream Channel ID
    TimerValue,  // Timer Value
    Timestamp,  // Timestamp
    TimestampLatchValue,  // Timestamp Latch Value
    TransferBlockID,  // Transfer Block ID
    TransferQueueCurrentBlockCount,  // Transfer Queue Current Block Count
    TransferStreamID,  // Transfer Stream ID
    TriggerControl,  // Trigger Control AVAILABLE: Always.
    TriggerID,  // Trigger ID
    Width  // Width
};

/**
Class to control Feature ChunkSelector
*/
class NEOAPI_CPP_DECL CChunkSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CChunkSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CChunkSelector object

    */
    CChunkSelector(const CChunkSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CChunkSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CChunkSelector object to assign.

    Return: Object reference with the value set.
    */
    const CChunkSelector& operator = (const CChunkSelector& object);
    /**
    Get the current value.
    Return: The value as ChunkSelector
    */
    operator ChunkSelector() const;
    /**
    Set the current value.
    Parameter:
        value The ChunkSelector value to be written.

    Return: The CChunkSelector object
    */
    CChunkSelector& operator = (ChunkSelector value);
    /**
    Set the current value.
    Parameter:
        value The ChunkSelector value to be written.

    Return: The CChunkSelector object
    */
    CChunkSelector& Set(ChunkSelector value);
    /**
    Get the current value.
    Return: The value as ChunkSelector
    */
    ChunkSelector Get() const;
};

/**
 Valid values for ClConfiguration
 */
enum class ClConfiguration {
    Base = 0,  // Standard base configuration described by the Camera Link standard.
    DualBase,  // The camera streams the data from multiple taps (that do not fit in the standard base configuration) through two Camera Link base ports. It is responsibility of the application or frame grabber to reconstruct the full image. Only one of the ports (fixed) serves as the "master" for serial communication and triggering.
    EightyBit,  // Standard 80-bit configuration with 10 taps of 8 bits or 8 taps of 10 bits, as described by the Camera Link standard.
    Full,  // Standard full configuration described by the Camera Link standard.
    Medium  // Standard medium configuration described by the Camera Link standard.
};

/**
Class to control Feature ClConfiguration
*/
class NEOAPI_CPP_DECL CClConfiguration : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CClConfiguration(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CClConfiguration object

    */
    CClConfiguration(const CClConfiguration& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CClConfiguration() {}
    /**
    Assignment operator
    Parameter:
        object The CClConfiguration object to assign.

    Return: Object reference with the value set.
    */
    const CClConfiguration& operator = (const CClConfiguration& object);
    /**
    Get the current value.
    Return: The value as ClConfiguration
    */
    operator ClConfiguration() const;
    /**
    Set the current value.
    Parameter:
        value The ClConfiguration value to be written.

    Return: The CClConfiguration object
    */
    CClConfiguration& operator = (ClConfiguration value);
    /**
    Set the current value.
    Parameter:
        value The ClConfiguration value to be written.

    Return: The CClConfiguration object
    */
    CClConfiguration& Set(ClConfiguration value);
    /**
    Get the current value.
    Return: The value as ClConfiguration
    */
    ClConfiguration Get() const;
};

/**
 Valid values for ClTimeSlotsCount
 */
enum class ClTimeSlotsCount {
    One = 0,  // One
    Three,  // Three
    Two  // Two
};

/**
Class to control Feature ClTimeSlotsCount
*/
class NEOAPI_CPP_DECL CClTimeSlotsCount : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CClTimeSlotsCount(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CClTimeSlotsCount object

    */
    CClTimeSlotsCount(const CClTimeSlotsCount& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CClTimeSlotsCount() {}
    /**
    Assignment operator
    Parameter:
        object The CClTimeSlotsCount object to assign.

    Return: Object reference with the value set.
    */
    const CClTimeSlotsCount& operator = (const CClTimeSlotsCount& object);
    /**
    Get the current value.
    Return: The value as ClTimeSlotsCount
    */
    operator ClTimeSlotsCount() const;
    /**
    Set the current value.
    Parameter:
        value The ClTimeSlotsCount value to be written.

    Return: The CClTimeSlotsCount object
    */
    CClTimeSlotsCount& operator = (ClTimeSlotsCount value);
    /**
    Set the current value.
    Parameter:
        value The ClTimeSlotsCount value to be written.

    Return: The CClTimeSlotsCount object
    */
    CClTimeSlotsCount& Set(ClTimeSlotsCount value);
    /**
    Get the current value.
    Return: The value as ClTimeSlotsCount
    */
    ClTimeSlotsCount Get() const;
};

/**
 Valid values for ColorTransformationAuto
 */
enum class ColorTransformationAuto {
    Continuous = 0,  // Color transformation is constantly adjusted by the device.
    Off,  // Color transformation is user controlled using the various Colortransformation features.
    Once  // Color transformation is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
};

/**
Class to control Feature ColorTransformationAuto
*/
class NEOAPI_CPP_DECL CColorTransformationAuto : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CColorTransformationAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CColorTransformationAuto object

    */
    CColorTransformationAuto(const CColorTransformationAuto& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CColorTransformationAuto() {}
    /**
    Assignment operator
    Parameter:
        object The CColorTransformationAuto object to assign.

    Return: Object reference with the value set.
    */
    const CColorTransformationAuto& operator = (const CColorTransformationAuto& object);
    /**
    Get the current value.
    Return: The value as ColorTransformationAuto
    */
    operator ColorTransformationAuto() const;
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationAuto value to be written.

    Return: The CColorTransformationAuto object
    */
    CColorTransformationAuto& operator = (ColorTransformationAuto value);
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationAuto value to be written.

    Return: The CColorTransformationAuto object
    */
    CColorTransformationAuto& Set(ColorTransformationAuto value);
    /**
    Get the current value.
    Return: The value as ColorTransformationAuto
    */
    ColorTransformationAuto Get() const;
};

/**
 Valid values for ColorTransformationFactoryListSelector
 */
enum class ColorTransformationFactoryListSelector {
    OptimizedMatrixFor3000K = 0,  // ColorTransformationFactoryList is connected to the color temperature of 3000K.
    OptimizedMatrixFor3200K,  // ColorTransformationFactoryList is connected to the color temperature of 3200K.
    OptimizedMatrixFor5000K,  // ColorTransformationFactoryList is connected to the color temperature of 5000K.
    OptimizedMatrixFor5600K,  // ColorTransformationFactoryList is connected to the color temperature of 5600K.
    OptimizedMatrixFor6500K  // ColorTransformationFactoryList is connected to the color temperature of 6500K.
};

/**
Class to control Feature ColorTransformationFactoryListSelector
*/
class NEOAPI_CPP_DECL CColorTransformationFactoryListSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CColorTransformationFactoryListSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CColorTransformationFactoryListSelector object

    */
    CColorTransformationFactoryListSelector(const CColorTransformationFactoryListSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CColorTransformationFactoryListSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CColorTransformationFactoryListSelector object to assign.

    Return: Object reference with the value set.
    */
    const CColorTransformationFactoryListSelector& operator = (const CColorTransformationFactoryListSelector& object);
    /**
    Get the current value.
    Return: The value as ColorTransformationFactoryListSelector
    */
    operator ColorTransformationFactoryListSelector() const;
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationFactoryListSelector value to be written.

    Return: The CColorTransformationFactoryListSelector object
    */
    CColorTransformationFactoryListSelector& operator = (ColorTransformationFactoryListSelector value);
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationFactoryListSelector value to be written.

    Return: The CColorTransformationFactoryListSelector object
    */
    CColorTransformationFactoryListSelector& Set(ColorTransformationFactoryListSelector value);
    /**
    Get the current value.
    Return: The value as ColorTransformationFactoryListSelector
    */
    ColorTransformationFactoryListSelector Get() const;
};

/**
 Valid values for ColorTransformationSelector
 */
enum class ColorTransformationSelector {
    RGBtoRGB = 0,  // RGB to RGB color transformation.
    RGBtoYUV  // RGB to YUV color transformation.
};

/**
Class to control Feature ColorTransformationSelector
*/
class NEOAPI_CPP_DECL CColorTransformationSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CColorTransformationSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CColorTransformationSelector object

    */
    CColorTransformationSelector(const CColorTransformationSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CColorTransformationSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CColorTransformationSelector object to assign.

    Return: Object reference with the value set.
    */
    const CColorTransformationSelector& operator = (const CColorTransformationSelector& object);
    /**
    Get the current value.
    Return: The value as ColorTransformationSelector
    */
    operator ColorTransformationSelector() const;
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationSelector value to be written.

    Return: The CColorTransformationSelector object
    */
    CColorTransformationSelector& operator = (ColorTransformationSelector value);
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationSelector value to be written.

    Return: The CColorTransformationSelector object
    */
    CColorTransformationSelector& Set(ColorTransformationSelector value);
    /**
    Get the current value.
    Return: The value as ColorTransformationSelector
    */
    ColorTransformationSelector Get() const;
};

/**
 Valid values for ColorTransformationValueSelector
 */
enum class ColorTransformationValueSelector {
    Gain00 = 0,  // Gain 0,0 of the transformation matrix.
    Gain01,  // Gain 0,1 of the transformation matrix.
    Gain02,  // Gain 0,2 of the transformation matrix.
    Gain10,  // Gain 1,0 of the transformation matrix.
    Gain11,  // Gain 1,1 of the transformation matrix.
    Gain12,  // Gain 1,2 of the transformation matrix.
    Gain20,  // Gain 2,0 of the transformation matrix.
    Gain21,  // Gain 2,1 of the transformation matrix.
    Gain22,  // Gain 2,2 of the transformation matrix.
    Offset0,  // Offset 0 of the transformation matrix.
    Offset1,  // Offset 1 of the transformation matrix.
    Offset2  // Offset 2 of the transformation matrix.
};

/**
Class to control Feature ColorTransformationValueSelector
*/
class NEOAPI_CPP_DECL CColorTransformationValueSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CColorTransformationValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CColorTransformationValueSelector object

    */
    CColorTransformationValueSelector(const CColorTransformationValueSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CColorTransformationValueSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CColorTransformationValueSelector object to assign.

    Return: Object reference with the value set.
    */
    const CColorTransformationValueSelector& operator = (const CColorTransformationValueSelector& object);
    /**
    Get the current value.
    Return: The value as ColorTransformationValueSelector
    */
    operator ColorTransformationValueSelector() const;
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationValueSelector value to be written.

    Return: The CColorTransformationValueSelector object
    */
    CColorTransformationValueSelector& operator = (ColorTransformationValueSelector value);
    /**
    Set the current value.
    Parameter:
        value The ColorTransformationValueSelector value to be written.

    Return: The CColorTransformationValueSelector object
    */
    CColorTransformationValueSelector& Set(ColorTransformationValueSelector value);
    /**
    Get the current value.
    Return: The value as ColorTransformationValueSelector
    */
    ColorTransformationValueSelector Get() const;
};

/**
 Valid values for ComponentSelector
 */
enum class ComponentSelector {
    Confidence = 0,  // The acquisition of confidence map of the acquired image is controlled. Confidence data may be binary (0 - invalid) or an integer where 0 is invalid and increasing value is increased confidence in the data in the corresponding pixel. If floating point representation is used the confidence image is normalized to the range [0,1], for integer representation the maximum possible integer represents maximum confidence.
    Disparity,  // The acquisition of stereo camera disparity data is controlled. Disparity is a more specific range format approximately inversely proportional to distance. Disparity is typically given in pixel units.
    Infrared,  // The acquisition of non-visible infrared light is controlled.
    Intensity,  // The acquisition of intensity (monochrome or color) of the visible reflected light is controlled.
    Multispectral,  // The acquisition of multiple spectral bands corresponding to various light wavelengths is controlled.
    PolarizedRaw,  // Acquisition of polarized light intensity. The polarizing filters are arranged in a 2-by-2 pattern: 135 degree and 0 degree on even lines, 90 degree and 45 degree on odd lines. The raw data is unprocessed. AVAILABLE: Always
    Range,  // The acquisition of range (distance) data is controlled. The data produced may be only range (2.5D) or a point cloud giving the 3D coordinates depending on the Scan3dControl features.
    Reflectance,  // The reflected intensity acquired together with Range in a Linescan3D sensor acquiring a single linescan profile for each exposure of the sensor.
    Scatter,  // The acquisition of data measuring how much light is scattered around the reflected light. In processing this is used as an additional intensity image, often together with the standard intensity or reflectance.
    Ultraviolet  // The acquisition of non-visible ultraviolet light is controlled.
};

/**
Class to control Feature ComponentSelector
*/
class NEOAPI_CPP_DECL CComponentSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CComponentSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CComponentSelector object

    */
    CComponentSelector(const CComponentSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CComponentSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CComponentSelector object to assign.

    Return: Object reference with the value set.
    */
    const CComponentSelector& operator = (const CComponentSelector& object);
    /**
    Get the current value.
    Return: The value as ComponentSelector
    */
    operator ComponentSelector() const;
    /**
    Set the current value.
    Parameter:
        value The ComponentSelector value to be written.

    Return: The CComponentSelector object
    */
    CComponentSelector& operator = (ComponentSelector value);
    /**
    Set the current value.
    Parameter:
        value The ComponentSelector value to be written.

    Return: The CComponentSelector object
    */
    CComponentSelector& Set(ComponentSelector value);
    /**
    Get the current value.
    Return: The value as ComponentSelector
    */
    ComponentSelector Get() const;
};

/**
 Valid values for CounterEventActivation
 */
enum class CounterEventActivation {
    AnyEdge = 0,  // Counts on the Falling or rising Edge of the selected signal.
    FallingEdge,  // Counts on the Falling Edge of the signal.
    RisingEdge  // Counts on the Rising Edge of the signal.
};

/**
Class to control Feature CounterEventActivation
*/
class NEOAPI_CPP_DECL CCounterEventActivation : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCounterEventActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCounterEventActivation object

    */
    CCounterEventActivation(const CCounterEventActivation& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCounterEventActivation() {}
    /**
    Assignment operator
    Parameter:
        object The CCounterEventActivation object to assign.

    Return: Object reference with the value set.
    */
    const CCounterEventActivation& operator = (const CCounterEventActivation& object);
    /**
    Get the current value.
    Return: The value as CounterEventActivation
    */
    operator CounterEventActivation() const;
    /**
    Set the current value.
    Parameter:
        value The CounterEventActivation value to be written.

    Return: The CCounterEventActivation object
    */
    CCounterEventActivation& operator = (CounterEventActivation value);
    /**
    Set the current value.
    Parameter:
        value The CounterEventActivation value to be written.

    Return: The CCounterEventActivation object
    */
    CCounterEventActivation& Set(CounterEventActivation value);
    /**
    Get the current value.
    Return: The value as CounterEventActivation
    */
    CounterEventActivation Get() const;
};

/**
 Valid values for CounterEventSource
 */
enum class CounterEventSource {
    AcquisitionEnd = 0,  // Counts the number of Acquisition End.
    AcquisitionStart,  // Counts the number of Acquisition Start.
    AcquisitionTrigger,  // Counts the number of Acquisition Trigger.
    AcquisitionTriggerMissed,  // Counts the number of missed Acquisition Start Trigger.
    Action0,  // Counts the number of assertions of the chosen action signal.
    Action1,  // Counts the number of assertions of the chosen action signal.
    Action2,  // Counts the number of assertions of the chosen action signal.
    Counter0End,  // Counts the number of Counter End.
    Counter0Start,  // Counts the number of Counter Start.
    Counter1End,  // Counts the number of Counter End.
    Counter1Start,  // Counts the number of Counter Start.
    Counter2End,  // Counts the number of Counter End.
    Counter2Start,  // Counts the number of Counter Start.
    Encoder0,  // Counts the number of Encoder output pulses.
    Encoder1,  // Counts the number of Encoder output pulses.
    Encoder2,  // Counts the number of Encoder output pulses.
    ExposureActive,  // Counts all Exposures. AVAILABLE: Always
    ExposureEnd,  // Counts the number of Exposure End.
    ExposureStart,  // Counts the number of Exposure Start.
    FrameBurstEnd,  // Counts the number of Frame Burst End.
    FrameBurstStart,  // Counts the number of Frame Burst Start.
    FrameEnd,  // Counts the number of Frame End.
    FrameStart,  // Counts the number of Frame Start.
    FrameTransferSkipped,  // Counts when a frame transfer skipped. AVAILABLE: Always
    FrameTrigger,  // Counts the number of Frame Start Trigger.
    FrameTriggerMissed,  // Counts the number of missed Frame Start Trigger.
    Line0,  // Counts the number of transitions on the chosen I/O Line.
    Line1,  // Counts the number of transitions on the chosen I/O Line.
    Line2,  // Counts the number of transitions on the chosen I/O Line.
    LineEnd,  // Counts the number of Line End.
    LineStart,  // Counts the number of Line Start.
    LineTrigger,  // Counts the number of Line Start Trigger.
    LineTriggerMissed,  // Counts the number of missed Line Start Trigger.
    LinkTrigger0,  // Counts the number of Link Triggers.
    LinkTrigger1,  // Counts the number of Link Triggers.
    LinkTrigger2,  // Counts the number of Link Triggers.
    LinkTriggerMissed0,  // Counts the number of Link Triggers missed.
    LinkTriggerMissed1,  // Counts the number of Link Triggers missed.
    LinkTriggerMissed2,  // Counts the number of Link Triggers missed.
    LogicBlock0,  // Counts the number of Logic Block output pulses.
    LogicBlock1,  // Counts the number of Logic Block output pulses.
    LogicBlock2,  // Counts the number of Logic Block output pulses.
    Off,  // Counter is stopped.
    SoftwareSignal0,  // Counts the number of Software Signal.
    SoftwareSignal1,  // Counts the number of Software Signal.
    SoftwareSignal2,  // Counts the number of Software Signal.
    Timer0End,  // Counts the number of Timer End pulses generated.
    Timer0Start,  // Counts the number of Timer Start pulses generated.
    Timer1End,  // Counts the number of Timer End pulses generated.
    Timer1Start,  // Counts the number of Timer Start pulses generated.
    Timer2End,  // Counts the number of Timer End pulses generated.
    Timer2Start,  // Counts the number of Timer Start pulses generated.
    TimestampTick,  // Counts the number of clock ticks of the Timestamp clock. Can be used to create a programmable timer.
    TriggerSkipped  // Counts when a Trigger skipped. AVAILABLE: Always
};

/**
Class to control Feature CounterEventSource
*/
class NEOAPI_CPP_DECL CCounterEventSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCounterEventSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCounterEventSource object

    */
    CCounterEventSource(const CCounterEventSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCounterEventSource() {}
    /**
    Assignment operator
    Parameter:
        object The CCounterEventSource object to assign.

    Return: Object reference with the value set.
    */
    const CCounterEventSource& operator = (const CCounterEventSource& object);
    /**
    Get the current value.
    Return: The value as CounterEventSource
    */
    operator CounterEventSource() const;
    /**
    Set the current value.
    Parameter:
        value The CounterEventSource value to be written.

    Return: The CCounterEventSource object
    */
    CCounterEventSource& operator = (CounterEventSource value);
    /**
    Set the current value.
    Parameter:
        value The CounterEventSource value to be written.

    Return: The CCounterEventSource object
    */
    CCounterEventSource& Set(CounterEventSource value);
    /**
    Get the current value.
    Return: The value as CounterEventSource
    */
    CounterEventSource Get() const;
};

/**
 Valid values for CounterResetActivation
 */
enum class CounterResetActivation {
    AnyEdge = 0,  // Resets the counter on the Falling or rising Edge of the selected signal.
    FallingEdge,  // Resets the counter on the Falling Edge of the signal.
    LevelHigh,  // Resets the counter as long as the selected signal level is High.
    LevelLow,  // Resets the counter as long as the selected signal level is Low.
    RisingEdge  // Resets the counter on the Rising Edge of the signal.
};

/**
Class to control Feature CounterResetActivation
*/
class NEOAPI_CPP_DECL CCounterResetActivation : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCounterResetActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCounterResetActivation object

    */
    CCounterResetActivation(const CCounterResetActivation& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCounterResetActivation() {}
    /**
    Assignment operator
    Parameter:
        object The CCounterResetActivation object to assign.

    Return: Object reference with the value set.
    */
    const CCounterResetActivation& operator = (const CCounterResetActivation& object);
    /**
    Get the current value.
    Return: The value as CounterResetActivation
    */
    operator CounterResetActivation() const;
    /**
    Set the current value.
    Parameter:
        value The CounterResetActivation value to be written.

    Return: The CCounterResetActivation object
    */
    CCounterResetActivation& operator = (CounterResetActivation value);
    /**
    Set the current value.
    Parameter:
        value The CounterResetActivation value to be written.

    Return: The CCounterResetActivation object
    */
    CCounterResetActivation& Set(CounterResetActivation value);
    /**
    Get the current value.
    Return: The value as CounterResetActivation
    */
    CounterResetActivation Get() const;
};

/**
 Valid values for CounterResetSource
 */
enum class CounterResetSource {
    AcquisitionEnd = 0,  // Resets with the reception of the Acquisition End.
    AcquisitionStart,  // Resets with the reception of the Acquisition Start.
    AcquisitionTrigger,  // Resets with the reception of the Acquisition Trigger.
    AcquisitionTriggerMissed,  // Resets with the reception of the missed Acquisition start trigger.
    Action0,  // Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
    Action1,  // Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
    Action2,  // Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
    Counter0End,  // Resets with the reception of the Counter End.
    Counter0Start,  // Resets with the reception of the Counter Start.
    Counter1End,  // Resets with the reception of the Counter End.
    Counter1Start,  // Resets with the reception of the Counter Start.
    Counter2End,  // Resets with the reception of the Counter End.
    Counter2Start,  // Resets with the reception of the Counter Start.
    CounterTrigger,  // Resets with the reception of a trigger on the CounterTriggerSource.
    Encoder0,  // Resets with the reception of the Encoder output signal.
    Encoder1,  // Resets with the reception of the Encoder output signal.
    Encoder2,  // Resets with the reception of the Encoder output signal.
    ExposureEnd,  // Resets with the reception of the Exposure End.
    ExposureStart,  // Resets with the reception of the Exposure Start.
    FrameEnd,  // Resets with the reception of the Frame End.
    FrameStart,  // Resets with the reception of the Frame Start.
    FrameTrigger,  // Resets with the reception of the Frame Start Trigger.
    FrameTriggerMissed,  // Resets with the reception of the missed Frame start trigger.
    Line0,  // Resets by the chosen I/O Line.
    Line1,  // Resets by the chosen I/O Line.
    Line2,  // Resets by the chosen I/O Line.
    LineEnd,  // Resets with the reception of the Line End.
    LineStart,  // Resets with the reception of the Line Start.
    LineTrigger,  // Resets with the reception of the Line Start Trigger.
    LineTriggerMissed,  // Resets with the reception of the missed Line start trigger.
    LinkTrigger0,  // Resets on the reception of the chosen Link Trigger (received from the transport layer).
    LinkTrigger1,  // Resets on the reception of the chosen Link Trigger (received from the transport layer).
    LinkTrigger2,  // Resets on the reception of the chosen Link Trigger (received from the transport layer).
    LogicBlock0,  // Resets with the reception of the LogicBlock output signal.
    LogicBlock1,  // Resets with the reception of the LogicBlock output signal.
    LogicBlock2,  // Resets with the reception of the LogicBlock output signal.
    Off,  // Disable the Counter Reset trigger.
    SoftwareSignal0,  // Resets on the reception of the Software Signal.
    SoftwareSignal1,  // Resets on the reception of the Software Signal.
    SoftwareSignal2,  // Resets on the reception of the Software Signal.
    Timer0End,  // Resets with the reception of the Timer End.
    Timer0Start,  // Resets with the reception of the Timer Start.
    Timer1End,  // Resets with the reception of the Timer End.
    Timer1Start,  // Resets with the reception of the Timer Start.
    Timer2End,  // Resets with the reception of the Timer End.
    Timer2Start,  // Resets with the reception of the Timer Start.
    UserOutput0,  // Resets by the chosen User Output bit.
    UserOutput1,  // Resets by the chosen User Output bit.
    UserOutput2  // Resets by the chosen User Output bit.
};

/**
Class to control Feature CounterResetSource
*/
class NEOAPI_CPP_DECL CCounterResetSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCounterResetSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCounterResetSource object

    */
    CCounterResetSource(const CCounterResetSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCounterResetSource() {}
    /**
    Assignment operator
    Parameter:
        object The CCounterResetSource object to assign.

    Return: Object reference with the value set.
    */
    const CCounterResetSource& operator = (const CCounterResetSource& object);
    /**
    Get the current value.
    Return: The value as CounterResetSource
    */
    operator CounterResetSource() const;
    /**
    Set the current value.
    Parameter:
        value The CounterResetSource value to be written.

    Return: The CCounterResetSource object
    */
    CCounterResetSource& operator = (CounterResetSource value);
    /**
    Set the current value.
    Parameter:
        value The CounterResetSource value to be written.

    Return: The CCounterResetSource object
    */
    CCounterResetSource& Set(CounterResetSource value);
    /**
    Get the current value.
    Return: The value as CounterResetSource
    */
    CounterResetSource Get() const;
};

/**
 Valid values for CounterSelector
 */
enum class CounterSelector {
    Counter0 = 0,  // Selects the counter 0.
    Counter1,  // Selects the counter 1.
    Counter2  // Selects the counter 2.
};

/**
Class to control Feature CounterSelector
*/
class NEOAPI_CPP_DECL CCounterSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCounterSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCounterSelector object

    */
    CCounterSelector(const CCounterSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCounterSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CCounterSelector object to assign.

    Return: Object reference with the value set.
    */
    const CCounterSelector& operator = (const CCounterSelector& object);
    /**
    Get the current value.
    Return: The value as CounterSelector
    */
    operator CounterSelector() const;
    /**
    Set the current value.
    Parameter:
        value The CounterSelector value to be written.

    Return: The CCounterSelector object
    */
    CCounterSelector& operator = (CounterSelector value);
    /**
    Set the current value.
    Parameter:
        value The CounterSelector value to be written.

    Return: The CCounterSelector object
    */
    CCounterSelector& Set(CounterSelector value);
    /**
    Get the current value.
    Return: The value as CounterSelector
    */
    CounterSelector Get() const;
};

/**
 Valid values for CustomDataConfigurationMode
 */
enum class CustomDataConfigurationMode {
    Off = 0,  // Disables the custom data configuration mode.
    On  // Enables the custom data configuration mode.
};

/**
Class to control Feature CustomDataConfigurationMode
*/
class NEOAPI_CPP_DECL CCustomDataConfigurationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CCustomDataConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CCustomDataConfigurationMode object

    */
    CCustomDataConfigurationMode(const CCustomDataConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CCustomDataConfigurationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CCustomDataConfigurationMode object to assign.

    Return: Object reference with the value set.
    */
    const CCustomDataConfigurationMode& operator = (const CCustomDataConfigurationMode& object);
    /**
    Get the current value.
    Return: The value as CustomDataConfigurationMode
    */
    operator CustomDataConfigurationMode() const;
    /**
    Set the current value.
    Parameter:
        value The CustomDataConfigurationMode value to be written.

    Return: The CCustomDataConfigurationMode object
    */
    CCustomDataConfigurationMode& operator = (CustomDataConfigurationMode value);
    /**
    Set the current value.
    Parameter:
        value The CustomDataConfigurationMode value to be written.

    Return: The CCustomDataConfigurationMode object
    */
    CCustomDataConfigurationMode& Set(CustomDataConfigurationMode value);
    /**
    Get the current value.
    Return: The value as CustomDataConfigurationMode
    */
    CustomDataConfigurationMode Get() const;
};

/**
 Valid values for DecimationHorizontalMode
 */
enum class DecimationHorizontalMode {
    Average = 0,  // The values of a group of N adjacent pixels are averaged.
    Discard  // The value of every Nth pixel is kept, others are discarded.
};

/**
Class to control Feature DecimationHorizontalMode
*/
class NEOAPI_CPP_DECL CDecimationHorizontalMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDecimationHorizontalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDecimationHorizontalMode object

    */
    CDecimationHorizontalMode(const CDecimationHorizontalMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDecimationHorizontalMode() {}
    /**
    Assignment operator
    Parameter:
        object The CDecimationHorizontalMode object to assign.

    Return: Object reference with the value set.
    */
    const CDecimationHorizontalMode& operator = (const CDecimationHorizontalMode& object);
    /**
    Get the current value.
    Return: The value as DecimationHorizontalMode
    */
    operator DecimationHorizontalMode() const;
    /**
    Set the current value.
    Parameter:
        value The DecimationHorizontalMode value to be written.

    Return: The CDecimationHorizontalMode object
    */
    CDecimationHorizontalMode& operator = (DecimationHorizontalMode value);
    /**
    Set the current value.
    Parameter:
        value The DecimationHorizontalMode value to be written.

    Return: The CDecimationHorizontalMode object
    */
    CDecimationHorizontalMode& Set(DecimationHorizontalMode value);
    /**
    Get the current value.
    Return: The value as DecimationHorizontalMode
    */
    DecimationHorizontalMode Get() const;
};

/**
 Valid values for DecimationVerticalMode
 */
enum class DecimationVerticalMode {
    Average = 0,  // The values of a group of N adjacent pixels are averaged.
    Discard  // The value of every Nth pixel is kept, others are discarded.
};

/**
Class to control Feature DecimationVerticalMode
*/
class NEOAPI_CPP_DECL CDecimationVerticalMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDecimationVerticalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDecimationVerticalMode object

    */
    CDecimationVerticalMode(const CDecimationVerticalMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDecimationVerticalMode() {}
    /**
    Assignment operator
    Parameter:
        object The CDecimationVerticalMode object to assign.

    Return: Object reference with the value set.
    */
    const CDecimationVerticalMode& operator = (const CDecimationVerticalMode& object);
    /**
    Get the current value.
    Return: The value as DecimationVerticalMode
    */
    operator DecimationVerticalMode() const;
    /**
    Set the current value.
    Parameter:
        value The DecimationVerticalMode value to be written.

    Return: The CDecimationVerticalMode object
    */
    CDecimationVerticalMode& operator = (DecimationVerticalMode value);
    /**
    Set the current value.
    Parameter:
        value The DecimationVerticalMode value to be written.

    Return: The CDecimationVerticalMode object
    */
    CDecimationVerticalMode& Set(DecimationVerticalMode value);
    /**
    Get the current value.
    Return: The value as DecimationVerticalMode
    */
    DecimationVerticalMode Get() const;
};

/**
 Valid values for DefectPixelListSelector
 */
enum class DefectPixelListSelector {
    Column = 0,  // Selects Defect Pixel List for defect columns.
    Pixel,  // Selects Defect Pixel List for defect pixels.
    Row  // Selects Defect Pixel List for defect rows.
};

/**
Class to control Feature DefectPixelListSelector
*/
class NEOAPI_CPP_DECL CDefectPixelListSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDefectPixelListSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDefectPixelListSelector object

    */
    CDefectPixelListSelector(const CDefectPixelListSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDefectPixelListSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDefectPixelListSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDefectPixelListSelector& operator = (const CDefectPixelListSelector& object);
    /**
    Get the current value.
    Return: The value as DefectPixelListSelector
    */
    operator DefectPixelListSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DefectPixelListSelector value to be written.

    Return: The CDefectPixelListSelector object
    */
    CDefectPixelListSelector& operator = (DefectPixelListSelector value);
    /**
    Set the current value.
    Parameter:
        value The DefectPixelListSelector value to be written.

    Return: The CDefectPixelListSelector object
    */
    CDefectPixelListSelector& Set(DefectPixelListSelector value);
    /**
    Get the current value.
    Return: The value as DefectPixelListSelector
    */
    DefectPixelListSelector Get() const;
};

/**
 Valid values for DeviceCharacterSet
 */
enum class DeviceCharacterSet {
    ASCII = 0,  // Device use ASCII character set.
    UTF16,  // Device use UTF16 character set. AVAILABLE: Always.
    UTF8  // Device use UTF8 character set.
};

/**
Class to control Feature DeviceCharacterSet
*/
class NEOAPI_CPP_DECL CDeviceCharacterSet : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceCharacterSet(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceCharacterSet object

    */
    CDeviceCharacterSet(const CDeviceCharacterSet& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceCharacterSet() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceCharacterSet object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceCharacterSet& operator = (const CDeviceCharacterSet& object);
    /**
    Get the current value.
    Return: The value as DeviceCharacterSet
    */
    operator DeviceCharacterSet() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceCharacterSet value to be written.

    Return: The CDeviceCharacterSet object
    */
    CDeviceCharacterSet& operator = (DeviceCharacterSet value);
    /**
    Set the current value.
    Parameter:
        value The DeviceCharacterSet value to be written.

    Return: The CDeviceCharacterSet object
    */
    CDeviceCharacterSet& Set(DeviceCharacterSet value);
    /**
    Get the current value.
    Return: The value as DeviceCharacterSet
    */
    DeviceCharacterSet Get() const;
};

/**
 Valid values for DeviceClockSelector
 */
enum class DeviceClockSelector {
    CameraLink = 0,  // Frequency of the Camera Link clock.
    Sensor,  // Clock frequency of the image sensor of the camera.
    SensorDigitization  // Clock frequency of the camera A/D conversion stage.
};

/**
Class to control Feature DeviceClockSelector
*/
class NEOAPI_CPP_DECL CDeviceClockSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceClockSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceClockSelector object

    */
    CDeviceClockSelector(const CDeviceClockSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceClockSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceClockSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceClockSelector& operator = (const CDeviceClockSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceClockSelector
    */
    operator DeviceClockSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceClockSelector value to be written.

    Return: The CDeviceClockSelector object
    */
    CDeviceClockSelector& operator = (DeviceClockSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceClockSelector value to be written.

    Return: The CDeviceClockSelector object
    */
    CDeviceClockSelector& Set(DeviceClockSelector value);
    /**
    Get the current value.
    Return: The value as DeviceClockSelector
    */
    DeviceClockSelector Get() const;
};

/**
 Valid values for DeviceFrontUARTSource
 */
enum class DeviceFrontUARTSource {
    OpticControl = 0,  // Front side UART interface is used for optic control.
    RS232  // Front side UART interface is used as RS232 interface. Optic control is not possible.
};

/**
Class to control Feature DeviceFrontUARTSource
*/
class NEOAPI_CPP_DECL CDeviceFrontUARTSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceFrontUARTSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceFrontUARTSource object

    */
    CDeviceFrontUARTSource(const CDeviceFrontUARTSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceFrontUARTSource() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceFrontUARTSource object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceFrontUARTSource& operator = (const CDeviceFrontUARTSource& object);
    /**
    Get the current value.
    Return: The value as DeviceFrontUARTSource
    */
    operator DeviceFrontUARTSource() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceFrontUARTSource value to be written.

    Return: The CDeviceFrontUARTSource object
    */
    CDeviceFrontUARTSource& operator = (DeviceFrontUARTSource value);
    /**
    Set the current value.
    Parameter:
        value The DeviceFrontUARTSource value to be written.

    Return: The CDeviceFrontUARTSource object
    */
    CDeviceFrontUARTSource& Set(DeviceFrontUARTSource value);
    /**
    Get the current value.
    Return: The value as DeviceFrontUARTSource
    */
    DeviceFrontUARTSource Get() const;
};

/**
 Valid values for DeviceLicense
 */
enum class DeviceLicense {
    Invalid = 0,  // The license is invalid
    Valid  // The license is valid
};

/**
Class to control Feature DeviceLicense
*/
class NEOAPI_CPP_DECL CDeviceLicense : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceLicense(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceLicense object

    */
    CDeviceLicense(const CDeviceLicense& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceLicense() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceLicense object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceLicense& operator = (const CDeviceLicense& object);
    /**
    Get the current value.
    Return: The value as DeviceLicense
    */
    operator DeviceLicense() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceLicense value to be written.

    Return: The CDeviceLicense object
    */
    CDeviceLicense& operator = (DeviceLicense value);
    /**
    Set the current value.
    Parameter:
        value The DeviceLicense value to be written.

    Return: The CDeviceLicense object
    */
    CDeviceLicense& Set(DeviceLicense value);
    /**
    Get the current value.
    Return: The value as DeviceLicense
    */
    DeviceLicense Get() const;
};

/**
 Valid values for DeviceLicenseTypeSelector
 */
enum class DeviceLicenseTypeSelector {
    eVARuntime = 0  // License to execute an applet, generated by VisualApplets
};

/**
Class to control Feature DeviceLicenseTypeSelector
*/
class NEOAPI_CPP_DECL CDeviceLicenseTypeSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceLicenseTypeSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceLicenseTypeSelector object

    */
    CDeviceLicenseTypeSelector(const CDeviceLicenseTypeSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceLicenseTypeSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceLicenseTypeSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceLicenseTypeSelector& operator = (const CDeviceLicenseTypeSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceLicenseTypeSelector
    */
    operator DeviceLicenseTypeSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceLicenseTypeSelector value to be written.

    Return: The CDeviceLicenseTypeSelector object
    */
    CDeviceLicenseTypeSelector& operator = (DeviceLicenseTypeSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceLicenseTypeSelector value to be written.

    Return: The CDeviceLicenseTypeSelector object
    */
    CDeviceLicenseTypeSelector& Set(DeviceLicenseTypeSelector value);
    /**
    Get the current value.
    Return: The value as DeviceLicenseTypeSelector
    */
    DeviceLicenseTypeSelector Get() const;
};

/**
 Valid values for DeviceLinkHeartbeatMode
 */
enum class DeviceLinkHeartbeatMode {
    Off = 0,  // Disables the Link heartbeat.
    On  // Enables the Link heartbeat.
};

/**
Class to control Feature DeviceLinkHeartbeatMode
*/
class NEOAPI_CPP_DECL CDeviceLinkHeartbeatMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceLinkHeartbeatMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceLinkHeartbeatMode object

    */
    CDeviceLinkHeartbeatMode(const CDeviceLinkHeartbeatMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceLinkHeartbeatMode() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceLinkHeartbeatMode object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceLinkHeartbeatMode& operator = (const CDeviceLinkHeartbeatMode& object);
    /**
    Get the current value.
    Return: The value as DeviceLinkHeartbeatMode
    */
    operator DeviceLinkHeartbeatMode() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceLinkHeartbeatMode value to be written.

    Return: The CDeviceLinkHeartbeatMode object
    */
    CDeviceLinkHeartbeatMode& operator = (DeviceLinkHeartbeatMode value);
    /**
    Set the current value.
    Parameter:
        value The DeviceLinkHeartbeatMode value to be written.

    Return: The CDeviceLinkHeartbeatMode object
    */
    CDeviceLinkHeartbeatMode& Set(DeviceLinkHeartbeatMode value);
    /**
    Get the current value.
    Return: The value as DeviceLinkHeartbeatMode
    */
    DeviceLinkHeartbeatMode Get() const;
};

/**
 Valid values for DeviceLinkSelector
 */
enum class DeviceLinkSelector {
    USB0 = 0  // Selects the link at USB interface with index 0
};

/**
Class to control Feature DeviceLinkSelector
*/
class NEOAPI_CPP_DECL CDeviceLinkSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceLinkSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceLinkSelector object

    */
    CDeviceLinkSelector(const CDeviceLinkSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceLinkSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceLinkSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceLinkSelector& operator = (const CDeviceLinkSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceLinkSelector
    */
    operator DeviceLinkSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceLinkSelector value to be written.

    Return: The CDeviceLinkSelector object
    */
    CDeviceLinkSelector& operator = (DeviceLinkSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceLinkSelector value to be written.

    Return: The CDeviceLinkSelector object
    */
    CDeviceLinkSelector& Set(DeviceLinkSelector value);
    /**
    Get the current value.
    Return: The value as DeviceLinkSelector
    */
    DeviceLinkSelector Get() const;
};

/**
 Valid values for DeviceLinkThroughputLimitMode
 */
enum class DeviceLinkThroughputLimitMode {
    Off = 0,  // Disables the DeviceLinkThroughputLimit feature.
    On  // Enables the DeviceLinkThroughputLimit feature.
};

/**
Class to control Feature DeviceLinkThroughputLimitMode
*/
class NEOAPI_CPP_DECL CDeviceLinkThroughputLimitMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceLinkThroughputLimitMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceLinkThroughputLimitMode object

    */
    CDeviceLinkThroughputLimitMode(const CDeviceLinkThroughputLimitMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceLinkThroughputLimitMode() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceLinkThroughputLimitMode object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceLinkThroughputLimitMode& operator = (const CDeviceLinkThroughputLimitMode& object);
    /**
    Get the current value.
    Return: The value as DeviceLinkThroughputLimitMode
    */
    operator DeviceLinkThroughputLimitMode() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceLinkThroughputLimitMode value to be written.

    Return: The CDeviceLinkThroughputLimitMode object
    */
    CDeviceLinkThroughputLimitMode& operator = (DeviceLinkThroughputLimitMode value);
    /**
    Set the current value.
    Parameter:
        value The DeviceLinkThroughputLimitMode value to be written.

    Return: The CDeviceLinkThroughputLimitMode object
    */
    CDeviceLinkThroughputLimitMode& Set(DeviceLinkThroughputLimitMode value);
    /**
    Get the current value.
    Return: The value as DeviceLinkThroughputLimitMode
    */
    DeviceLinkThroughputLimitMode Get() const;
};

/**
 Valid values for DeviceRegistersEndianness
 */
enum class DeviceRegistersEndianness {
    Big = 0,  // The registers of the device are big endian.
    Little  // The registers of the device are little endian.
};

/**
Class to control Feature DeviceRegistersEndianness
*/
class NEOAPI_CPP_DECL CDeviceRegistersEndianness : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceRegistersEndianness(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceRegistersEndianness object

    */
    CDeviceRegistersEndianness(const CDeviceRegistersEndianness& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceRegistersEndianness() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceRegistersEndianness object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceRegistersEndianness& operator = (const CDeviceRegistersEndianness& object);
    /**
    Get the current value.
    Return: The value as DeviceRegistersEndianness
    */
    operator DeviceRegistersEndianness() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceRegistersEndianness value to be written.

    Return: The CDeviceRegistersEndianness object
    */
    CDeviceRegistersEndianness& operator = (DeviceRegistersEndianness value);
    /**
    Set the current value.
    Parameter:
        value The DeviceRegistersEndianness value to be written.

    Return: The CDeviceRegistersEndianness object
    */
    CDeviceRegistersEndianness& Set(DeviceRegistersEndianness value);
    /**
    Get the current value.
    Return: The value as DeviceRegistersEndianness
    */
    DeviceRegistersEndianness Get() const;
};

/**
 Valid values for DeviceScanType
 */
enum class DeviceScanType {
    Areascan = 0,  // 2D sensor outputting an image created from a unique sensor acquisition.
    Areascan3D,  // 3D sensor outputting a range (or disparity) image created from a unique sensor acquisition.
    Linescan,  // 1D sensor outputting an image acquired line by line.
    Linescan3D  // 3D sensor outputting a range (or disparity) image acquired line by line.
};

/**
Class to control Feature DeviceScanType
*/
class NEOAPI_CPP_DECL CDeviceScanType : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceScanType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceScanType object

    */
    CDeviceScanType(const CDeviceScanType& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceScanType() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceScanType object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceScanType& operator = (const CDeviceScanType& object);
    /**
    Get the current value.
    Return: The value as DeviceScanType
    */
    operator DeviceScanType() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceScanType value to be written.

    Return: The CDeviceScanType object
    */
    CDeviceScanType& operator = (DeviceScanType value);
    /**
    Set the current value.
    Parameter:
        value The DeviceScanType value to be written.

    Return: The CDeviceScanType object
    */
    CDeviceScanType& Set(DeviceScanType value);
    /**
    Get the current value.
    Return: The value as DeviceScanType
    */
    DeviceScanType Get() const;
};

/**
 Valid values for DeviceSensorSelector
 */
enum class DeviceSensorSelector {
    All = 0,  // All sensors.
    Left,  // Left sensor.
    Right  // Right sensor.
};

/**
Class to control Feature DeviceSensorSelector
*/
class NEOAPI_CPP_DECL CDeviceSensorSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceSensorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceSensorSelector object

    */
    CDeviceSensorSelector(const CDeviceSensorSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceSensorSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceSensorSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceSensorSelector& operator = (const CDeviceSensorSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceSensorSelector
    */
    operator DeviceSensorSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceSensorSelector value to be written.

    Return: The CDeviceSensorSelector object
    */
    CDeviceSensorSelector& operator = (DeviceSensorSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceSensorSelector value to be written.

    Return: The CDeviceSensorSelector object
    */
    CDeviceSensorSelector& Set(DeviceSensorSelector value);
    /**
    Get the current value.
    Return: The value as DeviceSensorSelector
    */
    DeviceSensorSelector Get() const;
};

/**
 Valid values for DeviceSensorType
 */
enum class DeviceSensorType {
    CCD = 0,  // The camera sensor is a CCD sensor
    CMOS  // The camera sensor is a CMOS sensor
};

/**
Class to control Feature DeviceSensorType
*/
class NEOAPI_CPP_DECL CDeviceSensorType : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceSensorType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceSensorType object

    */
    CDeviceSensorType(const CDeviceSensorType& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceSensorType() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceSensorType object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceSensorType& operator = (const CDeviceSensorType& object);
    /**
    Get the current value.
    Return: The value as DeviceSensorType
    */
    operator DeviceSensorType() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceSensorType value to be written.

    Return: The CDeviceSensorType object
    */
    CDeviceSensorType& operator = (DeviceSensorType value);
    /**
    Set the current value.
    Parameter:
        value The DeviceSensorType value to be written.

    Return: The CDeviceSensorType object
    */
    CDeviceSensorType& Set(DeviceSensorType value);
    /**
    Get the current value.
    Return: The value as DeviceSensorType
    */
    DeviceSensorType Get() const;
};

/**
 Valid values for DeviceSensorVersion
 */
enum class DeviceSensorVersion {
    CMOSIS_CMV2000_V2 = 0,  // CMV 2000 Sensor, Version 2
    CMOSIS_CMV2000_V3,  // CMV 2000 Sensor, Version 3
    CMOSIS_CMV4000_V2,  // CMV 4000 Sensor, Version 2
    CMOSIS_CMV4000_V3  // CMV 4000 Sensor, Version 3
};

/**
Class to control Feature DeviceSensorVersion
*/
class NEOAPI_CPP_DECL CDeviceSensorVersion : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceSensorVersion(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceSensorVersion object

    */
    CDeviceSensorVersion(const CDeviceSensorVersion& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceSensorVersion() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceSensorVersion object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceSensorVersion& operator = (const CDeviceSensorVersion& object);
    /**
    Get the current value.
    Return: The value as DeviceSensorVersion
    */
    operator DeviceSensorVersion() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceSensorVersion value to be written.

    Return: The CDeviceSensorVersion object
    */
    CDeviceSensorVersion& operator = (DeviceSensorVersion value);
    /**
    Set the current value.
    Parameter:
        value The DeviceSensorVersion value to be written.

    Return: The CDeviceSensorVersion object
    */
    CDeviceSensorVersion& Set(DeviceSensorVersion value);
    /**
    Get the current value.
    Return: The value as DeviceSensorVersion
    */
    DeviceSensorVersion Get() const;
};

/**
 Valid values for DeviceSerialPortBaudRate
 */
enum class DeviceSerialPortBaudRate {
    Baud115200 = 0,  // Serial port speed of 115200 baud.
    Baud19200,  // Serial port speed of 19200 baud.
    Baud230400,  // Serial port speed of 230400 baud.
    Baud38400,  // Serial port speed of 38400 baud.
    Baud460800,  // Serial port speed of 460800 baud.
    Baud57600,  // Serial port speed of 57600 baud.
    Baud921600,  // Serial port speed of 921600 baud.
    Baud9600  // Serial port speed of 9600 baud.
};

/**
Class to control Feature DeviceSerialPortBaudRate
*/
class NEOAPI_CPP_DECL CDeviceSerialPortBaudRate : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceSerialPortBaudRate(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceSerialPortBaudRate object

    */
    CDeviceSerialPortBaudRate(const CDeviceSerialPortBaudRate& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceSerialPortBaudRate() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceSerialPortBaudRate object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceSerialPortBaudRate& operator = (const CDeviceSerialPortBaudRate& object);
    /**
    Get the current value.
    Return: The value as DeviceSerialPortBaudRate
    */
    operator DeviceSerialPortBaudRate() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceSerialPortBaudRate value to be written.

    Return: The CDeviceSerialPortBaudRate object
    */
    CDeviceSerialPortBaudRate& operator = (DeviceSerialPortBaudRate value);
    /**
    Set the current value.
    Parameter:
        value The DeviceSerialPortBaudRate value to be written.

    Return: The CDeviceSerialPortBaudRate object
    */
    CDeviceSerialPortBaudRate& Set(DeviceSerialPortBaudRate value);
    /**
    Get the current value.
    Return: The value as DeviceSerialPortBaudRate
    */
    DeviceSerialPortBaudRate Get() const;
};

/**
 Valid values for DeviceSerialPortSelector
 */
enum class DeviceSerialPortSelector {
    CameraLink = 0  // Serial port associated to the Camera link connection.
};

/**
Class to control Feature DeviceSerialPortSelector
*/
class NEOAPI_CPP_DECL CDeviceSerialPortSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceSerialPortSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceSerialPortSelector object

    */
    CDeviceSerialPortSelector(const CDeviceSerialPortSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceSerialPortSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceSerialPortSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceSerialPortSelector& operator = (const CDeviceSerialPortSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceSerialPortSelector
    */
    operator DeviceSerialPortSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceSerialPortSelector value to be written.

    Return: The CDeviceSerialPortSelector object
    */
    CDeviceSerialPortSelector& operator = (DeviceSerialPortSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceSerialPortSelector value to be written.

    Return: The CDeviceSerialPortSelector object
    */
    CDeviceSerialPortSelector& Set(DeviceSerialPortSelector value);
    /**
    Get the current value.
    Return: The value as DeviceSerialPortSelector
    */
    DeviceSerialPortSelector Get() const;
};

/**
 Valid values for DeviceStreamChannelEndianness
 */
enum class DeviceStreamChannelEndianness {
    Big = 0,  // Stream channel data is big Endian.
    Little  // Stream channel data is little Endian.
};

/**
Class to control Feature DeviceStreamChannelEndianness
*/
class NEOAPI_CPP_DECL CDeviceStreamChannelEndianness : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceStreamChannelEndianness(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceStreamChannelEndianness object

    */
    CDeviceStreamChannelEndianness(const CDeviceStreamChannelEndianness& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceStreamChannelEndianness() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceStreamChannelEndianness object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceStreamChannelEndianness& operator = (const CDeviceStreamChannelEndianness& object);
    /**
    Get the current value.
    Return: The value as DeviceStreamChannelEndianness
    */
    operator DeviceStreamChannelEndianness() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceStreamChannelEndianness value to be written.

    Return: The CDeviceStreamChannelEndianness object
    */
    CDeviceStreamChannelEndianness& operator = (DeviceStreamChannelEndianness value);
    /**
    Set the current value.
    Parameter:
        value The DeviceStreamChannelEndianness value to be written.

    Return: The CDeviceStreamChannelEndianness object
    */
    CDeviceStreamChannelEndianness& Set(DeviceStreamChannelEndianness value);
    /**
    Get the current value.
    Return: The value as DeviceStreamChannelEndianness
    */
    DeviceStreamChannelEndianness Get() const;
};

/**
 Valid values for DeviceStreamChannelType
 */
enum class DeviceStreamChannelType {
    Receiver = 0,  // Data stream receiver channel.
    Transmitter  // Data stream transmitter channel.
};

/**
Class to control Feature DeviceStreamChannelType
*/
class NEOAPI_CPP_DECL CDeviceStreamChannelType : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceStreamChannelType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceStreamChannelType object

    */
    CDeviceStreamChannelType(const CDeviceStreamChannelType& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceStreamChannelType() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceStreamChannelType object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceStreamChannelType& operator = (const CDeviceStreamChannelType& object);
    /**
    Get the current value.
    Return: The value as DeviceStreamChannelType
    */
    operator DeviceStreamChannelType() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceStreamChannelType value to be written.

    Return: The CDeviceStreamChannelType object
    */
    CDeviceStreamChannelType& operator = (DeviceStreamChannelType value);
    /**
    Set the current value.
    Parameter:
        value The DeviceStreamChannelType value to be written.

    Return: The CDeviceStreamChannelType object
    */
    CDeviceStreamChannelType& Set(DeviceStreamChannelType value);
    /**
    Get the current value.
    Return: The value as DeviceStreamChannelType
    */
    DeviceStreamChannelType Get() const;
};

/**
 Valid values for DeviceTLType
 */
enum class DeviceTLType {
    CameraLink = 0,  // Camera Link.
    CameraLinkHS,  // Camera Link High Speed.
    CoaXPress,  // CoaXPress.
    Custom,  // Custom Transport Layer.
    GigEVision,  // GigE Vision.
    USB3Vision  // USB3 Vision.
};

/**
Class to control Feature DeviceTLType
*/
class NEOAPI_CPP_DECL CDeviceTLType : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceTLType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceTLType object

    */
    CDeviceTLType(const CDeviceTLType& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceTLType() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceTLType object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceTLType& operator = (const CDeviceTLType& object);
    /**
    Get the current value.
    Return: The value as DeviceTLType
    */
    operator DeviceTLType() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceTLType value to be written.

    Return: The CDeviceTLType object
    */
    CDeviceTLType& operator = (DeviceTLType value);
    /**
    Set the current value.
    Parameter:
        value The DeviceTLType value to be written.

    Return: The CDeviceTLType object
    */
    CDeviceTLType& Set(DeviceTLType value);
    /**
    Get the current value.
    Return: The value as DeviceTLType
    */
    DeviceTLType Get() const;
};

/**
 Valid values for DeviceTapGeometry
 */
enum class DeviceTapGeometry {
    Geometry_10X = 0,  // Geometry_10X
    Geometry_10X_1Y,  // Geometry_10X_1Y
    Geometry_1X,  // Geometry_1X
    Geometry_1X10,  // Geometry_1X10
    Geometry_1X10_1Y,  // Geometry_1X10_1Y
    Geometry_1X2,  // Geometry_1X2
    Geometry_1X2_1Y,  // Geometry_1X2_1Y
    Geometry_1X2_1Y2,  // Geometry_1X2_1Y2
    Geometry_1X2_2YE,  // Geometry_1X2_2YE
    Geometry_1X3,  // Geometry_1X3
    Geometry_1X3_1Y,  // Geometry_1X3_1Y
    Geometry_1X4,  // Geometry_1X4
    Geometry_1X4_1Y,  // Geometry_1X4_1Y
    Geometry_1X8,  // Geometry_1X8
    Geometry_1X8_1Y,  // Geometry_1X8_1Y
    Geometry_1X_1Y,  // Geometry_1X_1Y
    Geometry_1X_1Y2,  // Geometry_1X_1Y2
    Geometry_1X_2YE,  // Geometry_1X_2YE
    Geometry_2X,  // Geometry_2X
    Geometry_2X2,  // Geometry_2X2
    Geometry_2X2E,  // Geometry_2X2E
    Geometry_2X2E_1Y,  // Geometry_2X2E_1Y
    Geometry_2X2E_2YE,  // Geometry_2X2E_2YE
    Geometry_2X2M,  // Geometry_2X2M
    Geometry_2X2M_1Y,  // Geometry_2X2M_1Y
    Geometry_2X2_1Y,  // Geometry_2X2_1Y
    Geometry_2XE,  // Geometry_2XE
    Geometry_2XE_1Y,  // Geometry_2XE_1Y
    Geometry_2XE_1Y2,  // Geometry_2XE_1Y2
    Geometry_2XE_2YE,  // Geometry_2XE_2YE
    Geometry_2XM,  // Geometry_2XM
    Geometry_2XM_1Y,  // Geometry_2XM_1Y
    Geometry_2XM_1Y2,  // Geometry_2XM_1Y2
    Geometry_2XM_2YE,  // Geometry_2XM_2YE
    Geometry_2X_1Y,  // Geometry_2X_1Y
    Geometry_2X_1Y2,  // Geometry_2X_1Y2
    Geometry_2X_2YE,  // Geometry_2X_2YE
    Geometry_3X,  // Geometry_3X
    Geometry_3X_1Y,  // Geometry_3X_1Y
    Geometry_4X,  // Geometry_4X
    Geometry_4X2,  // Geometry_4X2
    Geometry_4X2E,  // Geometry_4X2E
    Geometry_4X2E_1Y,  // Geometry_4X2E_1Y
    Geometry_4X2_1Y,  // Geometry_4X2_1Y
    Geometry_4X_1Y,  // Geometry_4X_1Y
    Geometry_8X,  // Geometry_8X
    Geometry_8X_1Y  // Geometry_8X_1Y
};

/**
Class to control Feature DeviceTapGeometry
*/
class NEOAPI_CPP_DECL CDeviceTapGeometry : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceTapGeometry(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceTapGeometry object

    */
    CDeviceTapGeometry(const CDeviceTapGeometry& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceTapGeometry() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceTapGeometry object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceTapGeometry& operator = (const CDeviceTapGeometry& object);
    /**
    Get the current value.
    Return: The value as DeviceTapGeometry
    */
    operator DeviceTapGeometry() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceTapGeometry value to be written.

    Return: The CDeviceTapGeometry object
    */
    CDeviceTapGeometry& operator = (DeviceTapGeometry value);
    /**
    Set the current value.
    Parameter:
        value The DeviceTapGeometry value to be written.

    Return: The CDeviceTapGeometry object
    */
    CDeviceTapGeometry& Set(DeviceTapGeometry value);
    /**
    Get the current value.
    Return: The value as DeviceTapGeometry
    */
    DeviceTapGeometry Get() const;
};

/**
 Valid values for DeviceTemperatureSelector
 */
enum class DeviceTemperatureSelector {
    InHouse = 0,  // Temperature inside the camera housing. AVAILABLE: Always
    Mainboard,  // Temperature of the device's mainboard.
    Sensor  // Temperature of the image sensor of the camera.
};

/**
Class to control Feature DeviceTemperatureSelector
*/
class NEOAPI_CPP_DECL CDeviceTemperatureSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceTemperatureSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceTemperatureSelector object

    */
    CDeviceTemperatureSelector(const CDeviceTemperatureSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceTemperatureSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceTemperatureSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceTemperatureSelector& operator = (const CDeviceTemperatureSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceTemperatureSelector
    */
    operator DeviceTemperatureSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceTemperatureSelector value to be written.

    Return: The CDeviceTemperatureSelector object
    */
    CDeviceTemperatureSelector& operator = (DeviceTemperatureSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceTemperatureSelector value to be written.

    Return: The CDeviceTemperatureSelector object
    */
    CDeviceTemperatureSelector& Set(DeviceTemperatureSelector value);
    /**
    Get the current value.
    Return: The value as DeviceTemperatureSelector
    */
    DeviceTemperatureSelector Get() const;
};

/**
 Valid values for DeviceTemperatureStatus
 */
enum class DeviceTemperatureStatus {
    Exceeded = 0,  // The device operates in a critical temperature range.
    High,  // The device operates in an increased temperature range.
    Normal  // The device operates in normal temperature range.
};

/**
Class to control Feature DeviceTemperatureStatus
*/
class NEOAPI_CPP_DECL CDeviceTemperatureStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceTemperatureStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceTemperatureStatus object

    */
    CDeviceTemperatureStatus(const CDeviceTemperatureStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceTemperatureStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceTemperatureStatus object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceTemperatureStatus& operator = (const CDeviceTemperatureStatus& object);
    /**
    Get the current value.
    Return: The value as DeviceTemperatureStatus
    */
    operator DeviceTemperatureStatus() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceTemperatureStatus value to be written.

    Return: The CDeviceTemperatureStatus object
    */
    CDeviceTemperatureStatus& operator = (DeviceTemperatureStatus value);
    /**
    Set the current value.
    Parameter:
        value The DeviceTemperatureStatus value to be written.

    Return: The CDeviceTemperatureStatus object
    */
    CDeviceTemperatureStatus& Set(DeviceTemperatureStatus value);
    /**
    Get the current value.
    Return: The value as DeviceTemperatureStatus
    */
    DeviceTemperatureStatus Get() const;
};

/**
 Valid values for DeviceTemperatureStatusTransitionSelector
 */
enum class DeviceTemperatureStatusTransitionSelector {
    ExceededToNormal = 0,  // Exceeded To Normal
    HighToExceeded,  // High To Exceeded
    NormalToHigh  // Normal To High
};

/**
Class to control Feature DeviceTemperatureStatusTransitionSelector
*/
class NEOAPI_CPP_DECL CDeviceTemperatureStatusTransitionSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceTemperatureStatusTransitionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceTemperatureStatusTransitionSelector object

    */
    CDeviceTemperatureStatusTransitionSelector(const CDeviceTemperatureStatusTransitionSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceTemperatureStatusTransitionSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceTemperatureStatusTransitionSelector object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceTemperatureStatusTransitionSelector& operator = (const CDeviceTemperatureStatusTransitionSelector& object);
    /**
    Get the current value.
    Return: The value as DeviceTemperatureStatusTransitionSelector
    */
    operator DeviceTemperatureStatusTransitionSelector() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceTemperatureStatusTransitionSelector value to be written.

    Return: The CDeviceTemperatureStatusTransitionSelector object
    */
    CDeviceTemperatureStatusTransitionSelector& operator = (DeviceTemperatureStatusTransitionSelector value);
    /**
    Set the current value.
    Parameter:
        value The DeviceTemperatureStatusTransitionSelector value to be written.

    Return: The CDeviceTemperatureStatusTransitionSelector object
    */
    CDeviceTemperatureStatusTransitionSelector& Set(DeviceTemperatureStatusTransitionSelector value);
    /**
    Get the current value.
    Return: The value as DeviceTemperatureStatusTransitionSelector
    */
    DeviceTemperatureStatusTransitionSelector Get() const;
};

/**
 Valid values for DeviceType
 */
enum class DeviceType {
    Peripheral = 0,  // Controllable device (with no data stream handling).
    Receiver,  // Data stream receiver device.
    Transceiver,  // Data stream receiver and transmitter device.
    Transmitter  // Data stream transmitter device.
};

/**
Class to control Feature DeviceType
*/
class NEOAPI_CPP_DECL CDeviceType : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CDeviceType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CDeviceType object

    */
    CDeviceType(const CDeviceType& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CDeviceType() {}
    /**
    Assignment operator
    Parameter:
        object The CDeviceType object to assign.

    Return: Object reference with the value set.
    */
    const CDeviceType& operator = (const CDeviceType& object);
    /**
    Get the current value.
    Return: The value as DeviceType
    */
    operator DeviceType() const;
    /**
    Set the current value.
    Parameter:
        value The DeviceType value to be written.

    Return: The CDeviceType object
    */
    CDeviceType& operator = (DeviceType value);
    /**
    Set the current value.
    Parameter:
        value The DeviceType value to be written.

    Return: The CDeviceType object
    */
    CDeviceType& Set(DeviceType value);
    /**
    Get the current value.
    Return: The value as DeviceType
    */
    DeviceType Get() const;
};

/**
 Valid values for EventNotification
 */
enum class EventNotification {
    Off = 0,  // The selected Event notification is disabled.
    On,  // The selected Event notification is enabled.
    Once  // The selected Event notification is enabled for one event then return to Off state.
};

/**
Class to control Feature EventNotification
*/
class NEOAPI_CPP_DECL CEventNotification : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CEventNotification(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CEventNotification object

    */
    CEventNotification(const CEventNotification& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CEventNotification() {}
    /**
    Assignment operator
    Parameter:
        object The CEventNotification object to assign.

    Return: Object reference with the value set.
    */
    const CEventNotification& operator = (const CEventNotification& object);
    /**
    Get the current value.
    Return: The value as EventNotification
    */
    operator EventNotification() const;
    /**
    Set the current value.
    Parameter:
        value The EventNotification value to be written.

    Return: The CEventNotification object
    */
    CEventNotification& operator = (EventNotification value);
    /**
    Set the current value.
    Parameter:
        value The EventNotification value to be written.

    Return: The CEventNotification object
    */
    CEventNotification& Set(EventNotification value);
    /**
    Get the current value.
    Return: The value as EventNotification
    */
    EventNotification Get() const;
};

/**
 Valid values for EventSelector
 */
enum class EventSelector {
    AcquisitionEnd = 0,  // Device just completed the Acquisition of one or many Frames.
    AcquisitionError,  // Device just detected an error during the active Acquisition.
    AcquisitionStart,  // Device just started the Acquisition of one or many Frames.
    AcquisitionTransferEnd,  // Device just completed the transfer of one or many Frames.
    AcquisitionTransferStart,  // Device just started the transfer of one or many Frames.
    AcquisitionTrigger,  // Device just received a trigger for the Acquisition of one or many Frames.
    AcquisitionTriggerMissed,  // Device just missed a trigger for the Acquisition of one or many Frames.
    Action1,  // The event will be generated when an action command has triggered an image in the camera.
    ActionLate,  // The event will be generated when a valid scheduled action command is received and is scheduled to be executed at a time that is already past.
    Counter0End,  // The event will be generated when counter 0 ends counting.
    Counter0Start,  // The event will be generated when counter 0 starts counting.
    Counter1End,  // The event will be generated when counter 1 ends counting.
    Counter1Start,  // The event will be generated when counter 1 starts counting.
    DeviceTemperatureStatusChanged,  // The event will be generated when the status of the internal device temperature has been changed. AVAILABLE: Always
    Encoder0Restarted,  // The event will be generated when the Encoder 0 restarts moving.
    Encoder0Stopped,  // The event will be generated when the Encoder 0 stops for longer than EncoderTimeout.
    Encoder1Restarted,  // The event will be generated when the Encoder 1 restarts moving.
    Encoder1Stopped,  // The event will be generated when the Encoder 1 stops for longer than EncoderTimeout.
    Error,  // Device just detected an error during the active Acquisition.
    EventDiscarded,  // The event will be generated when an event had to be discarded in the camera.
    EventLost,  // The event will be generated when an event was lost in the camera. AVAILABLE: Always
    ExposureEnd,  // Device just completed the exposure of one Frame (or Line).
    ExposureStart,  // Device just started the exposure of one Frame (or Line).
    FrameBurstEnd,  // Device just completed the capture of a burst of Frames.
    FrameBurstStart,  // Device just started the capture of a burst of Frames.
    FrameEnd,  // Device just completed the capture of one Frame.
    FrameStart,  // Device just started the capture of one Frame.
    FrameTransferEnd,  // Device just completed the transfer of one Frame.
    FrameTransferSkipped,  // The event will be generated when the internal camera buffer is overflowed and an image has been lost. AVAILABLE: Always
    FrameTransferStart,  // Device just started the transfer of one Frame.
    FrameTrigger,  // Device just received a trigger to start the capture of one Frame.
    FrameTriggerMissed,  // Device just missed a trigger to start the capture of one Frame.
    GigEVisionError,  // Device just detected an error. AVAILABLE: Always
    GigEVisionHeartbeatTimeOut,  // The device runs in heartbeat timeout. AVAILABLE: Always
    Line0AnyEdge,  // The event will be generated when a Falling or Rising Edge is detected on the Line 0.
    Line0FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 0.
    Line0RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 0.
    Line1AnyEdge,  // The event will be generated when a Falling or Rising Edge is detected on the Line 1.
    Line1FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 1.
    Line1RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 1.
    Line2FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 2. AVAILABLE: Always
    Line2RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 2. AVAILABLE: Always
    Line3FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 3. AVAILABLE: Always
    Line3RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 3. AVAILABLE: Always
    Line4FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 4. AVAILABLE: Always
    Line4RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 4. AVAILABLE: Always
    Line5FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 5. AVAILABLE: Always
    Line5RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 5. AVAILABLE: Always
    Line6FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 6. AVAILABLE: Always
    Line6RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 6. AVAILABLE: Always
    Line7FallingEdge,  // The event will be generated when a Falling Edge is detected on the Line 7. AVAILABLE: Always
    Line7RisingEdge,  // The event will be generated when a Rising Edge is detected on the Line 7. AVAILABLE: Always
    LineEnd,  // Device just completed the capture of one Line.
    LineStart,  // Device just started the capture of one Line.
    LineTrigger,  // Device just received a trigger to start the capture of one Line.
    LineTriggerMissed,  // Device just missed a trigger to start the capture of one Line.
    LinkSpeedChange,  // The event will be generated when the link speed has changed.
    LinkTrigger0,  // The event will be generated when a Rising Edge is detected on the LinkTrigger 0.
    LinkTrigger1,  // The event will be generated when a Rising Edge is detected on the LinkTrigger 1.
    PhysicalConnection0Down,  // The event will be generated when a Link down at ethernet interface 0 detect.
    PhysicalConnection0Up,  // The event will be generated when a Link up at ethernet interface 0 detect.
    PhysicalConnection1Down,  // The event will be generated when a Link down at ethernet interface 1 detect.
    PhysicalConnection1Up,  // The event will be generated when a Link up at ethernet interface 1 detect.
    PrimaryApplicationSwitch,  // The event will be generated when a primary application switchover has been granted (GigE Vision Specific).
    PtpServoStatusChanged,  // The event will be generated when the status of the internal PTP servo has been changed. AVAILABLE: Always.
    PtpStatusChanged,  // The event will be generated when the status of the internal PTP state machine has been changed. AVAILABLE: Always.
    SequencerSetChange,  // Device sequencer set has changed.
    Stream0TransferBlockEnd,  // Device just completed the transfer of one Block.
    Stream0TransferBlockStart,  // Device just started the transfer of one Block.
    Stream0TransferBlockTrigger,  // Device just received a trigger to start the transfer of one Block.
    Stream0TransferBurstEnd,  // Device just completed the transfer of a burst of Blocks.
    Stream0TransferBurstStart,  // Device just started the transfer of a burst of Blocks.
    Stream0TransferEnd,  // Device just completed the transfer of one or many Blocks.
    Stream0TransferOverflow,  // Device transfer queue overflowed.
    Stream0TransferPause,  // Device just paused the transfer.
    Stream0TransferResume,  // Device just resumed the transfer.
    Stream0TransferStart,  // Device just started the transfer of one or many Blocks.
    Test,  // The test event will be generated when the device receives the TestEventGenerate command (EventNotification for the Test event is always On).
    Timer0End,  // The event will be generated when Timer 0 ends counting.
    Timer0Start,  // The event will be generated when Timer 0 starts counting.
    Timer1End,  // The event will be generated when Timer 1 ends counting.
    Timer1Start,  // The event will be generated when Timer 1 starts counting.
    Timer2End,  // The event will be generated when Timer 2 ends counting.
    Timer3End,  // The event will be generated when Timer 3 ends counting.
    TransferBufferFull,  // The event will be generated when no internal camera buffer is available. AVAILABLE: Always
    TransferBufferReady,  // The event will be generated when an internal camera buffer is available again. AVAILABLE: Always
    TriggerOverlapped,  // Trigger Overlapped. AVAILABLE: Always
    TriggerReady,  // The event will be generated when the camera is able to process an incoming trigger signal. AVAILABLE: Always
    TriggerSkipped  // The event will be generated when camera reject an incoming trigger signal. AVAILABLE: Always
};

/**
Class to control Feature EventSelector
*/
class NEOAPI_CPP_DECL CEventSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CEventSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CEventSelector object

    */
    CEventSelector(const CEventSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CEventSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CEventSelector object to assign.

    Return: Object reference with the value set.
    */
    const CEventSelector& operator = (const CEventSelector& object);
    /**
    Get the current value.
    Return: The value as EventSelector
    */
    operator EventSelector() const;
    /**
    Set the current value.
    Parameter:
        value The EventSelector value to be written.

    Return: The CEventSelector object
    */
    CEventSelector& operator = (EventSelector value);
    /**
    Set the current value.
    Parameter:
        value The EventSelector value to be written.

    Return: The CEventSelector object
    */
    CEventSelector& Set(EventSelector value);
    /**
    Get the current value.
    Return: The value as EventSelector
    */
    EventSelector Get() const;
};

/**
 Valid values for ExposureAuto
 */
enum class ExposureAuto {
    Continuous = 0,  // Exposure duration is constantly adapted by the device to maximize the dynamic range.
    Off,  // Exposure duration is user controlled using ExposureTime.
    Once  // Exposure duration is adapted once by the device. Once it has converged, it returns to the Off state.
};

/**
Class to control Feature ExposureAuto
*/
class NEOAPI_CPP_DECL CExposureAuto : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CExposureAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CExposureAuto object

    */
    CExposureAuto(const CExposureAuto& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CExposureAuto() {}
    /**
    Assignment operator
    Parameter:
        object The CExposureAuto object to assign.

    Return: Object reference with the value set.
    */
    const CExposureAuto& operator = (const CExposureAuto& object);
    /**
    Get the current value.
    Return: The value as ExposureAuto
    */
    operator ExposureAuto() const;
    /**
    Set the current value.
    Parameter:
        value The ExposureAuto value to be written.

    Return: The CExposureAuto object
    */
    CExposureAuto& operator = (ExposureAuto value);
    /**
    Set the current value.
    Parameter:
        value The ExposureAuto value to be written.

    Return: The CExposureAuto object
    */
    CExposureAuto& Set(ExposureAuto value);
    /**
    Get the current value.
    Return: The value as ExposureAuto
    */
    ExposureAuto Get() const;
};

/**
 Valid values for ExposureMode
 */
enum class ExposureMode {
    Off = 0,  // Disables the Exposure and let the shutter open.
    Timed,  // Timed exposure. The exposure duration time is set using the ExposureTime or ExposureAuto features and the exposure starts with the FrameStart or LineStart.
    TriggerControlled,  // Uses one or more trigger signal(s) to control the exposure duration independently from the current Frame or Line triggers. See ExposureStart, ExposureEnd and ExposureActive of the TriggerSelector feature.
    TriggerWidth  // Uses the width of the current Frame or Line trigger signal(s) pulse to control the exposure duration. Note that if the Frame or Line TriggerActivation is RisingEdge or LevelHigh, the exposure duration will be the time the trigger stays High. If TriggerActivation is FallingEdge or LevelLow, the exposure time will last as long as the trigger stays Low.
};

/**
Class to control Feature ExposureMode
*/
class NEOAPI_CPP_DECL CExposureMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CExposureMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CExposureMode object

    */
    CExposureMode(const CExposureMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CExposureMode() {}
    /**
    Assignment operator
    Parameter:
        object The CExposureMode object to assign.

    Return: Object reference with the value set.
    */
    const CExposureMode& operator = (const CExposureMode& object);
    /**
    Get the current value.
    Return: The value as ExposureMode
    */
    operator ExposureMode() const;
    /**
    Set the current value.
    Parameter:
        value The ExposureMode value to be written.

    Return: The CExposureMode object
    */
    CExposureMode& operator = (ExposureMode value);
    /**
    Set the current value.
    Parameter:
        value The ExposureMode value to be written.

    Return: The CExposureMode object
    */
    CExposureMode& Set(ExposureMode value);
    /**
    Get the current value.
    Return: The value as ExposureMode
    */
    ExposureMode Get() const;
};

/**
 Valid values for FileOpenMode
 */
enum class FileOpenMode {
    Read = 0,  // This mode selects read-only open mode.
    ReadWrite,  // This mode selects read and write open mode.
    Write  // This mode selects write-only open mode.
};

/**
Class to control Feature FileOpenMode
*/
class NEOAPI_CPP_DECL CFileOpenMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CFileOpenMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CFileOpenMode object

    */
    CFileOpenMode(const CFileOpenMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CFileOpenMode() {}
    /**
    Assignment operator
    Parameter:
        object The CFileOpenMode object to assign.

    Return: Object reference with the value set.
    */
    const CFileOpenMode& operator = (const CFileOpenMode& object);
    /**
    Get the current value.
    Return: The value as FileOpenMode
    */
    operator FileOpenMode() const;
    /**
    Set the current value.
    Parameter:
        value The FileOpenMode value to be written.

    Return: The CFileOpenMode object
    */
    CFileOpenMode& operator = (FileOpenMode value);
    /**
    Set the current value.
    Parameter:
        value The FileOpenMode value to be written.

    Return: The CFileOpenMode object
    */
    CFileOpenMode& Set(FileOpenMode value);
    /**
    Get the current value.
    Return: The value as FileOpenMode
    */
    FileOpenMode Get() const;
};

/**
 Valid values for FileOperationSelector
 */
enum class FileOperationSelector {
    Close = 0,  // Closes the file selected by FileSelector in the device.
    Delete,  // Deletes the file selected by FileSelector in the device. Note that deleting a device file should not remove the associated FileSelector entry to allow future operation on this file.
    Open,  // Opens the file selected by FileSelector in the device. The access mode in which the file is opened is selected by FileOpenMode.
    Read,  // Reads FileAccessLength bytes from the device storage at the file relative offset FileAccessOffset into FileAccessBuffer.
    Write  // Writes FileAccessLength bytes taken from the FileAccessBuffer into the device storage at the file relative offset FileAccessOffset.
};

/**
Class to control Feature FileOperationSelector
*/
class NEOAPI_CPP_DECL CFileOperationSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CFileOperationSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CFileOperationSelector object

    */
    CFileOperationSelector(const CFileOperationSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CFileOperationSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CFileOperationSelector object to assign.

    Return: Object reference with the value set.
    */
    const CFileOperationSelector& operator = (const CFileOperationSelector& object);
    /**
    Get the current value.
    Return: The value as FileOperationSelector
    */
    operator FileOperationSelector() const;
    /**
    Set the current value.
    Parameter:
        value The FileOperationSelector value to be written.

    Return: The CFileOperationSelector object
    */
    CFileOperationSelector& operator = (FileOperationSelector value);
    /**
    Set the current value.
    Parameter:
        value The FileOperationSelector value to be written.

    Return: The CFileOperationSelector object
    */
    CFileOperationSelector& Set(FileOperationSelector value);
    /**
    Get the current value.
    Return: The value as FileOperationSelector
    */
    FileOperationSelector Get() const;
};

/**
 Valid values for FileOperationStatus
 */
enum class FileOperationStatus {
    Failure = 0,  // File Operation failed.
    Success  // File Operation was successful.
};

/**
Class to control Feature FileOperationStatus
*/
class NEOAPI_CPP_DECL CFileOperationStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CFileOperationStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CFileOperationStatus object

    */
    CFileOperationStatus(const CFileOperationStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CFileOperationStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CFileOperationStatus object to assign.

    Return: Object reference with the value set.
    */
    const CFileOperationStatus& operator = (const CFileOperationStatus& object);
    /**
    Get the current value.
    Return: The value as FileOperationStatus
    */
    operator FileOperationStatus() const;
    /**
    Set the current value.
    Parameter:
        value The FileOperationStatus value to be written.

    Return: The CFileOperationStatus object
    */
    CFileOperationStatus& operator = (FileOperationStatus value);
    /**
    Set the current value.
    Parameter:
        value The FileOperationStatus value to be written.

    Return: The CFileOperationStatus object
    */
    CFileOperationStatus& Set(FileOperationStatus value);
    /**
    Get the current value.
    Return: The value as FileOperationStatus
    */
    FileOperationStatus Get() const;
};

/**
 Valid values for FileSelector
 */
enum class FileSelector {
    LUTBlue = 0,  // The Blue LUT of the camera.
    LUTGreen,  // The Green LUT of the camera.
    LUTLuminance,  // The Luminance LUT of the camera.
    LUTRed,  // The Red LUT of the camera.
    UserSet1,  // The first user set of the device.
    UserSet2,  // The second user set of the device.
    UserSet3,  // The third user set of the device.
    UserSetDefault  // The default user set of the device.
};

/**
Class to control Feature FileSelector
*/
class NEOAPI_CPP_DECL CFileSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CFileSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CFileSelector object

    */
    CFileSelector(const CFileSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CFileSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CFileSelector object to assign.

    Return: Object reference with the value set.
    */
    const CFileSelector& operator = (const CFileSelector& object);
    /**
    Get the current value.
    Return: The value as FileSelector
    */
    operator FileSelector() const;
    /**
    Set the current value.
    Parameter:
        value The FileSelector value to be written.

    Return: The CFileSelector object
    */
    CFileSelector& operator = (FileSelector value);
    /**
    Set the current value.
    Parameter:
        value The FileSelector value to be written.

    Return: The CFileSelector object
    */
    CFileSelector& Set(FileSelector value);
    /**
    Get the current value.
    Return: The value as FileSelector
    */
    FileSelector Get() const;
};

/**
 Valid values for FocalLengthStatus
 */
enum class FocalLengthStatus {
    Busy = 0,  // The focal length controller executes a feature access/command.
    Error,  // The focal length controller encountered an error.
    NotConnected,  // The focal length controller is physically not connected.
    NotInitialized,  // The focal length controller is not initialized.
    NotSupported,  // The focal length controller is physically connected but not supported.
    Ready  // The focal length controller is ready to use.
};

/**
Class to control Feature FocalLengthStatus
*/
class NEOAPI_CPP_DECL CFocalLengthStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CFocalLengthStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CFocalLengthStatus object

    */
    CFocalLengthStatus(const CFocalLengthStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CFocalLengthStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CFocalLengthStatus object to assign.

    Return: Object reference with the value set.
    */
    const CFocalLengthStatus& operator = (const CFocalLengthStatus& object);
    /**
    Get the current value.
    Return: The value as FocalLengthStatus
    */
    operator FocalLengthStatus() const;
    /**
    Set the current value.
    Parameter:
        value The FocalLengthStatus value to be written.

    Return: The CFocalLengthStatus object
    */
    CFocalLengthStatus& operator = (FocalLengthStatus value);
    /**
    Set the current value.
    Parameter:
        value The FocalLengthStatus value to be written.

    Return: The CFocalLengthStatus object
    */
    CFocalLengthStatus& Set(FocalLengthStatus value);
    /**
    Get the current value.
    Return: The value as FocalLengthStatus
    */
    FocalLengthStatus Get() const;
};

/**
 Valid values for FocusStatus
 */
enum class FocusStatus {
    Busy = 0,  // The focus controller executes a feature access/command.
    Error,  // The focus controller encountered an error.
    NotConnected,  // The focus controller is physically not connected.
    NotInitialized,  // The focus controller is not initialized.
    NotSupported,  // The focus controller is physically connected but not supported.
    Ready  // The focus controller is ready to use.
};

/**
Class to control Feature FocusStatus
*/
class NEOAPI_CPP_DECL CFocusStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CFocusStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CFocusStatus object

    */
    CFocusStatus(const CFocusStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CFocusStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CFocusStatus object to assign.

    Return: Object reference with the value set.
    */
    const CFocusStatus& operator = (const CFocusStatus& object);
    /**
    Get the current value.
    Return: The value as FocusStatus
    */
    operator FocusStatus() const;
    /**
    Set the current value.
    Parameter:
        value The FocusStatus value to be written.

    Return: The CFocusStatus object
    */
    CFocusStatus& operator = (FocusStatus value);
    /**
    Set the current value.
    Parameter:
        value The FocusStatus value to be written.

    Return: The CFocusStatus object
    */
    CFocusStatus& Set(FocusStatus value);
    /**
    Get the current value.
    Return: The value as FocusStatus
    */
    FocusStatus Get() const;
};

/**
 Valid values for GainAuto
 */
enum class GainAuto {
    Continuous = 0,  // Gain is constantly adjusted by the device.
    Off,  // Gain is User controlled using Gain.
    Once  // Gain is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
};

/**
Class to control Feature GainAuto
*/
class NEOAPI_CPP_DECL CGainAuto : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGainAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGainAuto object

    */
    CGainAuto(const CGainAuto& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGainAuto() {}
    /**
    Assignment operator
    Parameter:
        object The CGainAuto object to assign.

    Return: Object reference with the value set.
    */
    const CGainAuto& operator = (const CGainAuto& object);
    /**
    Get the current value.
    Return: The value as GainAuto
    */
    operator GainAuto() const;
    /**
    Set the current value.
    Parameter:
        value The GainAuto value to be written.

    Return: The CGainAuto object
    */
    CGainAuto& operator = (GainAuto value);
    /**
    Set the current value.
    Parameter:
        value The GainAuto value to be written.

    Return: The CGainAuto object
    */
    CGainAuto& Set(GainAuto value);
    /**
    Get the current value.
    Return: The value as GainAuto
    */
    GainAuto Get() const;
};

/**
 Valid values for GainSelector
 */
enum class GainSelector {
    All = 0,  // Gain will be applied to all channels or taps.
    AnalogAll,  // Gain will be applied to all analog channels or taps.
    AnalogBlue,  // Gain will be applied to the blue analog channel.
    AnalogGreen,  // Gain will be applied to the green analog channel.
    AnalogRed,  // Gain will be applied to the red analog channel.
    AnalogTap1,  // Analog gain will be applied to Tap 1.
    AnalogTap2,  // Analog gain will be applied to Tap 2.
    AnalogU,  // Gain will be applied to U analog channel.
    AnalogV,  // Gain will be applied to V analog channel.
    AnalogY,  // Gain will be applied to Y analog channel.
    Blue,  // Gain will be applied to the blue channel.
    DigitalAll,  // Gain will be applied to all digital channels or taps.
    DigitalBlue,  // Gain will be applied to the blue digital channel.
    DigitalGreen,  // Gain will be applied to the green digital channel.
    DigitalRed,  // Gain will be applied to the red digital channel.
    DigitalTap1,  // Digital gain will be applied to Tap 1.
    DigitalTap2,  // Digital gain will be applied to Tap 2.
    DigitalU,  // Gain will be applied to U digital channel.
    DigitalV,  // Gain will be applied to V digital channel.
    DigitalY,  // Gain will be applied to Y digital channel.
    Green,  // Gain will be applied to the green channel.
    GreenBlue,  // Gain will be applied to the green blue channel. AVAILABLE: Always
    GreenRed,  // Gain will be applied to the green red channel. AVAILABLE: Always
    Red,  // Gain will be applied to the red channel.
    Tap1,  // Gain will be applied to Tap 1.
    Tap2,  // Gain will be applied to Tap 2.
    U,  // Gain will be applied to U channel.
    V,  // Gain will be applied to V channel.
    Y  // Gain will be applied to Y channel.
};

/**
Class to control Feature GainSelector
*/
class NEOAPI_CPP_DECL CGainSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGainSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGainSelector object

    */
    CGainSelector(const CGainSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGainSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CGainSelector object to assign.

    Return: Object reference with the value set.
    */
    const CGainSelector& operator = (const CGainSelector& object);
    /**
    Get the current value.
    Return: The value as GainSelector
    */
    operator GainSelector() const;
    /**
    Set the current value.
    Parameter:
        value The GainSelector value to be written.

    Return: The CGainSelector object
    */
    CGainSelector& operator = (GainSelector value);
    /**
    Set the current value.
    Parameter:
        value The GainSelector value to be written.

    Return: The CGainSelector object
    */
    CGainSelector& Set(GainSelector value);
    /**
    Get the current value.
    Return: The value as GainSelector
    */
    GainSelector Get() const;
};

/**
 Valid values for GenDCStreamingMode
 */
enum class GenDCStreamingMode {
    Automatic = 0,  // The device will automatically choose in which format it streams its data.
    Off,  // The device will only stream data in its native format.
    On  // The device will stream all its data in the generic GenDC format.
};

/**
Class to control Feature GenDCStreamingMode
*/
class NEOAPI_CPP_DECL CGenDCStreamingMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGenDCStreamingMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGenDCStreamingMode object

    */
    CGenDCStreamingMode(const CGenDCStreamingMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGenDCStreamingMode() {}
    /**
    Assignment operator
    Parameter:
        object The CGenDCStreamingMode object to assign.

    Return: Object reference with the value set.
    */
    const CGenDCStreamingMode& operator = (const CGenDCStreamingMode& object);
    /**
    Get the current value.
    Return: The value as GenDCStreamingMode
    */
    operator GenDCStreamingMode() const;
    /**
    Set the current value.
    Parameter:
        value The GenDCStreamingMode value to be written.

    Return: The CGenDCStreamingMode object
    */
    CGenDCStreamingMode& operator = (GenDCStreamingMode value);
    /**
    Set the current value.
    Parameter:
        value The GenDCStreamingMode value to be written.

    Return: The CGenDCStreamingMode object
    */
    CGenDCStreamingMode& Set(GenDCStreamingMode value);
    /**
    Get the current value.
    Return: The value as GenDCStreamingMode
    */
    GenDCStreamingMode Get() const;
};

/**
 Valid values for GenDCStreamingStatus
 */
enum class GenDCStreamingStatus {
    Off = 0,  // The device will only stream data in its native format.
    On  // The device will stream all its data in the generic GenDC format.
};

/**
Class to control Feature GenDCStreamingStatus
*/
class NEOAPI_CPP_DECL CGenDCStreamingStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGenDCStreamingStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGenDCStreamingStatus object

    */
    CGenDCStreamingStatus(const CGenDCStreamingStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGenDCStreamingStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CGenDCStreamingStatus object to assign.

    Return: Object reference with the value set.
    */
    const CGenDCStreamingStatus& operator = (const CGenDCStreamingStatus& object);
    /**
    Get the current value.
    Return: The value as GenDCStreamingStatus
    */
    operator GenDCStreamingStatus() const;
    /**
    Set the current value.
    Parameter:
        value The GenDCStreamingStatus value to be written.

    Return: The CGenDCStreamingStatus object
    */
    CGenDCStreamingStatus& operator = (GenDCStreamingStatus value);
    /**
    Set the current value.
    Parameter:
        value The GenDCStreamingStatus value to be written.

    Return: The CGenDCStreamingStatus object
    */
    CGenDCStreamingStatus& Set(GenDCStreamingStatus value);
    /**
    Get the current value.
    Return: The value as GenDCStreamingStatus
    */
    GenDCStreamingStatus Get() const;
};

/**
 Valid values for GevCCP
 */
enum class GevCCP {
    ControlAccess = 0,  // Control Access
    ControlAccessSwitchoverActive,  // Control Access Switchover Active
    ExclusiveAccess,  // Exclusive Access
    OpenAccess  // Open Access
};

/**
Class to control Feature GevCCP
*/
class NEOAPI_CPP_DECL CGevCCP : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGevCCP(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGevCCP object

    */
    CGevCCP(const CGevCCP& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGevCCP() {}
    /**
    Assignment operator
    Parameter:
        object The CGevCCP object to assign.

    Return: Object reference with the value set.
    */
    const CGevCCP& operator = (const CGevCCP& object);
    /**
    Get the current value.
    Return: The value as GevCCP
    */
    operator GevCCP() const;
    /**
    Set the current value.
    Parameter:
        value The GevCCP value to be written.

    Return: The CGevCCP object
    */
    CGevCCP& operator = (GevCCP value);
    /**
    Set the current value.
    Parameter:
        value The GevCCP value to be written.

    Return: The CGevCCP object
    */
    CGevCCP& Set(GevCCP value);
    /**
    Get the current value.
    Return: The value as GevCCP
    */
    GevCCP Get() const;
};

/**
 Valid values for GevGVCPExtendedStatusCodesSelector
 */
enum class GevGVCPExtendedStatusCodesSelector {
    Version1_1 = 0,  // Version 1 1
    Version2_0  // Version 2 0
};

/**
Class to control Feature GevGVCPExtendedStatusCodesSelector
*/
class NEOAPI_CPP_DECL CGevGVCPExtendedStatusCodesSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGevGVCPExtendedStatusCodesSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGevGVCPExtendedStatusCodesSelector object

    */
    CGevGVCPExtendedStatusCodesSelector(const CGevGVCPExtendedStatusCodesSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGevGVCPExtendedStatusCodesSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CGevGVCPExtendedStatusCodesSelector object to assign.

    Return: Object reference with the value set.
    */
    const CGevGVCPExtendedStatusCodesSelector& operator = (const CGevGVCPExtendedStatusCodesSelector& object);
    /**
    Get the current value.
    Return: The value as GevGVCPExtendedStatusCodesSelector
    */
    operator GevGVCPExtendedStatusCodesSelector() const;
    /**
    Set the current value.
    Parameter:
        value The GevGVCPExtendedStatusCodesSelector value to be written.

    Return: The CGevGVCPExtendedStatusCodesSelector object
    */
    CGevGVCPExtendedStatusCodesSelector& operator = (GevGVCPExtendedStatusCodesSelector value);
    /**
    Set the current value.
    Parameter:
        value The GevGVCPExtendedStatusCodesSelector value to be written.

    Return: The CGevGVCPExtendedStatusCodesSelector object
    */
    CGevGVCPExtendedStatusCodesSelector& Set(GevGVCPExtendedStatusCodesSelector value);
    /**
    Get the current value.
    Return: The value as GevGVCPExtendedStatusCodesSelector
    */
    GevGVCPExtendedStatusCodesSelector Get() const;
};

/**
 Valid values for GevIPConfigurationStatus
 */
enum class GevIPConfigurationStatus {
    DHCP = 0,  // DHCP
    ForceIP,  // Force IP
    LLA,  // LLA
    None,  // None
    PersistentIP  // Persistent IP
};

/**
Class to control Feature GevIPConfigurationStatus
*/
class NEOAPI_CPP_DECL CGevIPConfigurationStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGevIPConfigurationStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGevIPConfigurationStatus object

    */
    CGevIPConfigurationStatus(const CGevIPConfigurationStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGevIPConfigurationStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CGevIPConfigurationStatus object to assign.

    Return: Object reference with the value set.
    */
    const CGevIPConfigurationStatus& operator = (const CGevIPConfigurationStatus& object);
    /**
    Get the current value.
    Return: The value as GevIPConfigurationStatus
    */
    operator GevIPConfigurationStatus() const;
    /**
    Set the current value.
    Parameter:
        value The GevIPConfigurationStatus value to be written.

    Return: The CGevIPConfigurationStatus object
    */
    CGevIPConfigurationStatus& operator = (GevIPConfigurationStatus value);
    /**
    Set the current value.
    Parameter:
        value The GevIPConfigurationStatus value to be written.

    Return: The CGevIPConfigurationStatus object
    */
    CGevIPConfigurationStatus& Set(GevIPConfigurationStatus value);
    /**
    Get the current value.
    Return: The value as GevIPConfigurationStatus
    */
    GevIPConfigurationStatus Get() const;
};

/**
 Valid values for GevSupportedOptionSelector
 */
enum class GevSupportedOptionSelector {
    Action = 0,  // Action
    CCPApplicationSocket,  // CCP Application Socket
    CommandsConcatenation,  // Commands Concatenation
    DiscoveryAckDelay,  // Discovery Ack Delay
    DiscoveryAckDelayWritable,  // Discovery Ack Delay Writable
    DynamicLAG,  // Dynamic LAG
    Event,  // Event
    EventData,  // Event Data
    ExtendedStatusCodes,  // Extended Status Codes
    ExtendedStatusCodesVersion2_0,  // Extended Status Codes Version 2 0
    HeartbeatDisable,  // Heartbeat Disable
    IEEE1588,  // IEEE 1588. AVAILABLE: (DeviceTLVersionMajor >= 2)
    IPConfigurationDHCP,  // IP Configuration DHCP
    IPConfigurationLLA,  // IP Configuration LLA
    IPConfigurationPersistentIP,  // IP Configuration Persistent IP
    LinkSpeed,  // Link Speed
    ManifestTable,  // Manifest Table
    MessageChannelSourceSocket,  // Message Channel Source Socket
    MultiLink,  // Multi Link
    PAUSEFrameGeneration,  // PAUSE Frame Generation
    PAUSEFrameReception,  // PAUSE Frame Reception
    PacketResend,  // Packet Resend
    PendingAck,  // Pending Ack
    PrimaryApplicationSwitchover,  // Primary Application Switchover
    Ptp,  // Ptp
    ScheduledAction,  // Scheduled Action
    SerialNumber,  // Serial Number
    SingleLink,  // Single Link
    StandardIDMode,  // Standard ID Mode
    StaticLAG,  // Static LAG
    StreamChannel0AllInTransmission,  // Stream Channel 0 All In Transmission
    StreamChannel0BigAndLittleEndian,  // Stream Channel 0 Big And Little Endian
    StreamChannel0ExtendedChunkData,  // Stream Channel 0 Extended Chunk Data
    StreamChannel0IPReassembly,  // Stream Channel 0 IP Reassembly
    StreamChannel0MultiZone,  // Stream Channel 0 Multi Zone
    StreamChannel0PacketResendDestination,  // Stream Channel 0 Packet Resend Destination
    StreamChannel0UnconditionalStreaming,  // Stream Channel 0 Unconditional Streaming
    StreamChannel1AllInTransmission,  // Stream Channel 1 All In Transmission
    StreamChannel1BigAndLittleEndian,  // Stream Channel 1 Big And Little Endian
    StreamChannel1ExtendedChunkData,  // Stream Channel 1 Extended Chunk Data
    StreamChannel1IPReassembly,  // Stream Channel 1 IP Reassembly
    StreamChannel1MultiZone,  // Stream Channel 1 Multi Zone
    StreamChannel1PacketResendDestination,  // Stream Channel 1 Packet Resend Destination
    StreamChannel1UnconditionalStreaming,  // Stream Channel 1 Unconditional Streaming
    StreamChannel2AllInTransmission,  // Stream Channel 2 All In Transmission
    StreamChannel2BigAndLittleEndian,  // Stream Channel 2 Big And Little Endian
    StreamChannel2ExtendedChunkData,  // Stream Channel 2 Extended Chunk Data
    StreamChannel2IPReassembly,  // Stream Channel 2 IP Reassembly
    StreamChannel2MultiZone,  // Stream Channel 2 Multi Zone
    StreamChannel2PacketResendDestination,  // Stream Channel 2 Packet Resend Destination
    StreamChannel2UnconditionalStreaming,  // Stream Channel 2 Unconditional Streaming
    StreamChannelSourceSocket,  // Stream Channel Source Socket
    TestData,  // Test Data
    UnconditionalAction,  // Unconditional Action
    UserDefinedName,  // User Defined Name
    WriteMem  // Write Mem
};

/**
Class to control Feature GevSupportedOptionSelector
*/
class NEOAPI_CPP_DECL CGevSupportedOptionSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CGevSupportedOptionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CGevSupportedOptionSelector object

    */
    CGevSupportedOptionSelector(const CGevSupportedOptionSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CGevSupportedOptionSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CGevSupportedOptionSelector object to assign.

    Return: Object reference with the value set.
    */
    const CGevSupportedOptionSelector& operator = (const CGevSupportedOptionSelector& object);
    /**
    Get the current value.
    Return: The value as GevSupportedOptionSelector
    */
    operator GevSupportedOptionSelector() const;
    /**
    Set the current value.
    Parameter:
        value The GevSupportedOptionSelector value to be written.

    Return: The CGevSupportedOptionSelector object
    */
    CGevSupportedOptionSelector& operator = (GevSupportedOptionSelector value);
    /**
    Set the current value.
    Parameter:
        value The GevSupportedOptionSelector value to be written.

    Return: The CGevSupportedOptionSelector object
    */
    CGevSupportedOptionSelector& Set(GevSupportedOptionSelector value);
    /**
    Get the current value.
    Return: The value as GevSupportedOptionSelector
    */
    GevSupportedOptionSelector Get() const;
};

/**
 Valid values for HDRGainRatioSelector
 */
enum class HDRGainRatioSelector {
    Gain12_0dB = 0,  // Sets HDR gain ratio to dynamic range of 12.0dB.
    Gain2_5dB,  // Sets HDR gain ratio to dynamic range of 2.5dB.
    Gain3_5dB,  // Sets HDR gain ratio to dynamic range of 3.5dB.
    Gain6_0dB,  // Sets HDR gain ratio to dynamic range of 6.0dB.
    Gain9_5dB,  // Sets HDR gain ratio to dynamic range of 9.5dB.
    Off  // Sets HDR gain ratio to dynamic range of 0dB.
};

/**
Class to control Feature HDRGainRatioSelector
*/
class NEOAPI_CPP_DECL CHDRGainRatioSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CHDRGainRatioSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CHDRGainRatioSelector object

    */
    CHDRGainRatioSelector(const CHDRGainRatioSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CHDRGainRatioSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CHDRGainRatioSelector object to assign.

    Return: Object reference with the value set.
    */
    const CHDRGainRatioSelector& operator = (const CHDRGainRatioSelector& object);
    /**
    Get the current value.
    Return: The value as HDRGainRatioSelector
    */
    operator HDRGainRatioSelector() const;
    /**
    Set the current value.
    Parameter:
        value The HDRGainRatioSelector value to be written.

    Return: The CHDRGainRatioSelector object
    */
    CHDRGainRatioSelector& operator = (HDRGainRatioSelector value);
    /**
    Set the current value.
    Parameter:
        value The HDRGainRatioSelector value to be written.

    Return: The CHDRGainRatioSelector object
    */
    CHDRGainRatioSelector& Set(HDRGainRatioSelector value);
    /**
    Get the current value.
    Return: The value as HDRGainRatioSelector
    */
    HDRGainRatioSelector Get() const;
};

/**
 Valid values for HDRTonemappingCurvePresetSelector
 */
enum class HDRTonemappingCurvePresetSelector {
    Preset1 = 0,  // The HDR tone-mapping preset for a steep logarithmic transfer curve will be used.
    Preset2,  // The HDR tone-mapping preset for a middle steep logarithmic transfer curve will be used.
    Preset3  // The HDR tone-mapping preset for a slight logarithmic transfer curve will be used.
};

/**
Class to control Feature HDRTonemappingCurvePresetSelector
*/
class NEOAPI_CPP_DECL CHDRTonemappingCurvePresetSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CHDRTonemappingCurvePresetSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CHDRTonemappingCurvePresetSelector object

    */
    CHDRTonemappingCurvePresetSelector(const CHDRTonemappingCurvePresetSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CHDRTonemappingCurvePresetSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CHDRTonemappingCurvePresetSelector object to assign.

    Return: Object reference with the value set.
    */
    const CHDRTonemappingCurvePresetSelector& operator = (const CHDRTonemappingCurvePresetSelector& object);
    /**
    Get the current value.
    Return: The value as HDRTonemappingCurvePresetSelector
    */
    operator HDRTonemappingCurvePresetSelector() const;
    /**
    Set the current value.
    Parameter:
        value The HDRTonemappingCurvePresetSelector value to be written.

    Return: The CHDRTonemappingCurvePresetSelector object
    */
    CHDRTonemappingCurvePresetSelector& operator = (HDRTonemappingCurvePresetSelector value);
    /**
    Set the current value.
    Parameter:
        value The HDRTonemappingCurvePresetSelector value to be written.

    Return: The CHDRTonemappingCurvePresetSelector object
    */
    CHDRTonemappingCurvePresetSelector& Set(HDRTonemappingCurvePresetSelector value);
    /**
    Get the current value.
    Return: The value as HDRTonemappingCurvePresetSelector
    */
    HDRTonemappingCurvePresetSelector Get() const;
};

/**
 Valid values for ImageCompressionJPEGFormatOption
 */
enum class ImageCompressionJPEGFormatOption {
    BaselineOptimized = 0,  // Provides optimized color and slightly better compression than baseline standard by using custom Huffman tables optimized after statistical analysis of the image content.
    BaselineStandard,  // Indicates this is a baseline sequential (single-scan) DCT-based JPEG.
    Lossless,  // Selects lossless JPEG compression based on a predictive coding model.
    Progressive  // Indicates this is a progressive (multi-scan) DCT-based JPEG.
};

/**
Class to control Feature ImageCompressionJPEGFormatOption
*/
class NEOAPI_CPP_DECL CImageCompressionJPEGFormatOption : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CImageCompressionJPEGFormatOption(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CImageCompressionJPEGFormatOption object

    */
    CImageCompressionJPEGFormatOption(const CImageCompressionJPEGFormatOption& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CImageCompressionJPEGFormatOption() {}
    /**
    Assignment operator
    Parameter:
        object The CImageCompressionJPEGFormatOption object to assign.

    Return: Object reference with the value set.
    */
    const CImageCompressionJPEGFormatOption& operator = (const CImageCompressionJPEGFormatOption& object);
    /**
    Get the current value.
    Return: The value as ImageCompressionJPEGFormatOption
    */
    operator ImageCompressionJPEGFormatOption() const;
    /**
    Set the current value.
    Parameter:
        value The ImageCompressionJPEGFormatOption value to be written.

    Return: The CImageCompressionJPEGFormatOption object
    */
    CImageCompressionJPEGFormatOption& operator = (ImageCompressionJPEGFormatOption value);
    /**
    Set the current value.
    Parameter:
        value The ImageCompressionJPEGFormatOption value to be written.

    Return: The CImageCompressionJPEGFormatOption object
    */
    CImageCompressionJPEGFormatOption& Set(ImageCompressionJPEGFormatOption value);
    /**
    Get the current value.
    Return: The value as ImageCompressionJPEGFormatOption
    */
    ImageCompressionJPEGFormatOption Get() const;
};

/**
 Valid values for ImageCompressionMode
 */
enum class ImageCompressionMode {
    H264 = 0,  // H.264 compression is selected.
    JPEG,  // JPEG compression is selected.
    JPEG2000,  // JPEG 2000 compression is selected.
    Off  // Default value. Image compression is disabled. Images are transmitted uncompressed.
};

/**
Class to control Feature ImageCompressionMode
*/
class NEOAPI_CPP_DECL CImageCompressionMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CImageCompressionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CImageCompressionMode object

    */
    CImageCompressionMode(const CImageCompressionMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CImageCompressionMode() {}
    /**
    Assignment operator
    Parameter:
        object The CImageCompressionMode object to assign.

    Return: Object reference with the value set.
    */
    const CImageCompressionMode& operator = (const CImageCompressionMode& object);
    /**
    Get the current value.
    Return: The value as ImageCompressionMode
    */
    operator ImageCompressionMode() const;
    /**
    Set the current value.
    Parameter:
        value The ImageCompressionMode value to be written.

    Return: The CImageCompressionMode object
    */
    CImageCompressionMode& operator = (ImageCompressionMode value);
    /**
    Set the current value.
    Parameter:
        value The ImageCompressionMode value to be written.

    Return: The CImageCompressionMode object
    */
    CImageCompressionMode& Set(ImageCompressionMode value);
    /**
    Get the current value.
    Return: The value as ImageCompressionMode
    */
    ImageCompressionMode Get() const;
};

/**
 Valid values for ImageCompressionRateOption
 */
enum class ImageCompressionRateOption {
    FixBitrate = 0,  // Output stream follows a constant bit rate. Allows easy bandwidth management on the link.
    FixQuality  // Output stream has a constant image quality. Can be used when image processing algorithms are sensitive to image degradation caused by excessive data compression.
};

/**
Class to control Feature ImageCompressionRateOption
*/
class NEOAPI_CPP_DECL CImageCompressionRateOption : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CImageCompressionRateOption(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CImageCompressionRateOption object

    */
    CImageCompressionRateOption(const CImageCompressionRateOption& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CImageCompressionRateOption() {}
    /**
    Assignment operator
    Parameter:
        object The CImageCompressionRateOption object to assign.

    Return: Object reference with the value set.
    */
    const CImageCompressionRateOption& operator = (const CImageCompressionRateOption& object);
    /**
    Get the current value.
    Return: The value as ImageCompressionRateOption
    */
    operator ImageCompressionRateOption() const;
    /**
    Set the current value.
    Parameter:
        value The ImageCompressionRateOption value to be written.

    Return: The CImageCompressionRateOption object
    */
    CImageCompressionRateOption& operator = (ImageCompressionRateOption value);
    /**
    Set the current value.
    Parameter:
        value The ImageCompressionRateOption value to be written.

    Return: The CImageCompressionRateOption object
    */
    CImageCompressionRateOption& Set(ImageCompressionRateOption value);
    /**
    Get the current value.
    Return: The value as ImageCompressionRateOption
    */
    ImageCompressionRateOption Get() const;
};

/**
 Valid values for InterfaceSpeedMode
 */
enum class InterfaceSpeedMode {
    Ethernet100Mbps = 0,  // Interface speed mode is 100 Mbps.
    Ethernet10Gbps,  // Operation at 10 Gbps. AVAILABLE: Always.
    Ethernet1Gbps,  // Interface speed mode is 1 Gbps.
    Ethernet2_5Gbps,  // Operation at 2.5 Gbps. AVAILABLE: Always.
    Ethernet5Gbps,  // Operation at 5 Gbps. AVAILABLE: Always.
    FullSpeed,  // USB Operation at 12 Mbps
    HighSpeed,  // USB Operation at 480 Mbps
    LowSpeed,  // USB Operation at 1.5 Mbps
    SuperSpeed  // USB Operation at 5 Gbps
};

/**
Class to control Feature InterfaceSpeedMode
*/
class NEOAPI_CPP_DECL CInterfaceSpeedMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CInterfaceSpeedMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CInterfaceSpeedMode object

    */
    CInterfaceSpeedMode(const CInterfaceSpeedMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CInterfaceSpeedMode() {}
    /**
    Assignment operator
    Parameter:
        object The CInterfaceSpeedMode object to assign.

    Return: Object reference with the value set.
    */
    const CInterfaceSpeedMode& operator = (const CInterfaceSpeedMode& object);
    /**
    Get the current value.
    Return: The value as InterfaceSpeedMode
    */
    operator InterfaceSpeedMode() const;
    /**
    Set the current value.
    Parameter:
        value The InterfaceSpeedMode value to be written.

    Return: The CInterfaceSpeedMode object
    */
    CInterfaceSpeedMode& operator = (InterfaceSpeedMode value);
    /**
    Set the current value.
    Parameter:
        value The InterfaceSpeedMode value to be written.

    Return: The CInterfaceSpeedMode object
    */
    CInterfaceSpeedMode& Set(InterfaceSpeedMode value);
    /**
    Get the current value.
    Return: The value as InterfaceSpeedMode
    */
    InterfaceSpeedMode Get() const;
};

/**
 Valid values for LUTContent
 */
enum class LUTContent {
    Gamma = 0,  // The LUT Values are calculated in an automatically way related to the value of the feature Gamma.
    UserdefinedLUT  // The LUT is defined and editable with the features LUTIndex and LUTValue.
};

/**
Class to control Feature LUTContent
*/
class NEOAPI_CPP_DECL CLUTContent : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLUTContent(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLUTContent object

    */
    CLUTContent(const CLUTContent& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLUTContent() {}
    /**
    Assignment operator
    Parameter:
        object The CLUTContent object to assign.

    Return: Object reference with the value set.
    */
    const CLUTContent& operator = (const CLUTContent& object);
    /**
    Get the current value.
    Return: The value as LUTContent
    */
    operator LUTContent() const;
    /**
    Set the current value.
    Parameter:
        value The LUTContent value to be written.

    Return: The CLUTContent object
    */
    CLUTContent& operator = (LUTContent value);
    /**
    Set the current value.
    Parameter:
        value The LUTContent value to be written.

    Return: The CLUTContent object
    */
    CLUTContent& Set(LUTContent value);
    /**
    Get the current value.
    Return: The value as LUTContent
    */
    LUTContent Get() const;
};

/**
 Valid values for LUTSelector
 */
enum class LUTSelector {
    Blue = 0,  // Selects the Blue LUT.
    Green,  // Selects the Green LUT.
    Luminance,  // Selects the Luminance LUT.
    Red  // Selects the Red LUT.
};

/**
Class to control Feature LUTSelector
*/
class NEOAPI_CPP_DECL CLUTSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLUTSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLUTSelector object

    */
    CLUTSelector(const CLUTSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLUTSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CLUTSelector object to assign.

    Return: Object reference with the value set.
    */
    const CLUTSelector& operator = (const CLUTSelector& object);
    /**
    Get the current value.
    Return: The value as LUTSelector
    */
    operator LUTSelector() const;
    /**
    Set the current value.
    Parameter:
        value The LUTSelector value to be written.

    Return: The CLUTSelector object
    */
    CLUTSelector& operator = (LUTSelector value);
    /**
    Set the current value.
    Parameter:
        value The LUTSelector value to be written.

    Return: The CLUTSelector object
    */
    CLUTSelector& Set(LUTSelector value);
    /**
    Get the current value.
    Return: The value as LUTSelector
    */
    LUTSelector Get() const;
};

/**
 Valid values for LineFormat
 */
enum class LineFormat {
    LVDS = 0,  // The Line is currently accepting or sending LVDS level signals.
    NoConnect,  // The Line is not connected.
    OpenDrain,  // The Line is Open Drain (or Open Collector).
    OpenSource,  // The Line is Open Source. AVAILABLE: (LineMode[LineSelector] = Output)
    OptoCoupled,  // The Line is opto-coupled.
    PushPull,  // The Line is Push Pull. AVAILABLE: (LineMode[LineSelector] = Output)
    RS422,  // The Line is currently accepting or sending RS422 level signals.
    TTL,  // The Line is currently accepting or sending TTL level signals.
    TriState  // The Line is currently in Tri-State mode (Not driven).
};

/**
Class to control Feature LineFormat
*/
class NEOAPI_CPP_DECL CLineFormat : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLineFormat(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLineFormat object

    */
    CLineFormat(const CLineFormat& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLineFormat() {}
    /**
    Assignment operator
    Parameter:
        object The CLineFormat object to assign.

    Return: Object reference with the value set.
    */
    const CLineFormat& operator = (const CLineFormat& object);
    /**
    Get the current value.
    Return: The value as LineFormat
    */
    operator LineFormat() const;
    /**
    Set the current value.
    Parameter:
        value The LineFormat value to be written.

    Return: The CLineFormat object
    */
    CLineFormat& operator = (LineFormat value);
    /**
    Set the current value.
    Parameter:
        value The LineFormat value to be written.

    Return: The CLineFormat object
    */
    CLineFormat& Set(LineFormat value);
    /**
    Get the current value.
    Return: The value as LineFormat
    */
    LineFormat Get() const;
};

/**
 Valid values for LineMode
 */
enum class LineMode {
    Input = 0,  // The selected physical line is used to Input an electrical signal.
    Output  // The selected physical line is used to Output an electrical signal.
};

/**
Class to control Feature LineMode
*/
class NEOAPI_CPP_DECL CLineMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLineMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLineMode object

    */
    CLineMode(const CLineMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLineMode() {}
    /**
    Assignment operator
    Parameter:
        object The CLineMode object to assign.

    Return: Object reference with the value set.
    */
    const CLineMode& operator = (const CLineMode& object);
    /**
    Get the current value.
    Return: The value as LineMode
    */
    operator LineMode() const;
    /**
    Set the current value.
    Parameter:
        value The LineMode value to be written.

    Return: The CLineMode object
    */
    CLineMode& operator = (LineMode value);
    /**
    Set the current value.
    Parameter:
        value The LineMode value to be written.

    Return: The CLineMode object
    */
    CLineMode& Set(LineMode value);
    /**
    Get the current value.
    Return: The value as LineMode
    */
    LineMode Get() const;
};

/**
 Valid values for LinePWMConfigurationMode
 */
enum class LinePWMConfigurationMode {
    Off = 0,  // Disables the line PWM configuration mode.
    On  // Enables the line PWM configuration mode.
};

/**
Class to control Feature LinePWMConfigurationMode
*/
class NEOAPI_CPP_DECL CLinePWMConfigurationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLinePWMConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLinePWMConfigurationMode object

    */
    CLinePWMConfigurationMode(const CLinePWMConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLinePWMConfigurationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CLinePWMConfigurationMode object to assign.

    Return: Object reference with the value set.
    */
    const CLinePWMConfigurationMode& operator = (const CLinePWMConfigurationMode& object);
    /**
    Get the current value.
    Return: The value as LinePWMConfigurationMode
    */
    operator LinePWMConfigurationMode() const;
    /**
    Set the current value.
    Parameter:
        value The LinePWMConfigurationMode value to be written.

    Return: The CLinePWMConfigurationMode object
    */
    CLinePWMConfigurationMode& operator = (LinePWMConfigurationMode value);
    /**
    Set the current value.
    Parameter:
        value The LinePWMConfigurationMode value to be written.

    Return: The CLinePWMConfigurationMode object
    */
    CLinePWMConfigurationMode& Set(LinePWMConfigurationMode value);
    /**
    Get the current value.
    Return: The value as LinePWMConfigurationMode
    */
    LinePWMConfigurationMode Get() const;
};

/**
 Valid values for LinePWMMode
 */
enum class LinePWMMode {
    FixedFrequency = 0,  // The selected output line generate a fixed frequency of pulses starting with every transition from 0 to 1 and stopping with every transition from 1 to 0.
    Off,  // The PWM Mode is off. The selected output line acts as a normal output.
    OnePulse  // The selected output line generates one pulse with every transition from 0 to 1.
};

/**
Class to control Feature LinePWMMode
*/
class NEOAPI_CPP_DECL CLinePWMMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLinePWMMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLinePWMMode object

    */
    CLinePWMMode(const CLinePWMMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLinePWMMode() {}
    /**
    Assignment operator
    Parameter:
        object The CLinePWMMode object to assign.

    Return: Object reference with the value set.
    */
    const CLinePWMMode& operator = (const CLinePWMMode& object);
    /**
    Get the current value.
    Return: The value as LinePWMMode
    */
    operator LinePWMMode() const;
    /**
    Set the current value.
    Parameter:
        value The LinePWMMode value to be written.

    Return: The CLinePWMMode object
    */
    CLinePWMMode& operator = (LinePWMMode value);
    /**
    Set the current value.
    Parameter:
        value The LinePWMMode value to be written.

    Return: The CLinePWMMode object
    */
    CLinePWMMode& Set(LinePWMMode value);
    /**
    Get the current value.
    Return: The value as LinePWMMode
    */
    LinePWMMode Get() const;
};

/**
 Valid values for LineSelector
 */
enum class LineSelector {
    CC1 = 0,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    CC2,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    CC3,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    CC4,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    Line0,  // Index of the physical line and associated I/O control block to use.
    Line1,  // Index of the physical line and associated I/O control block to use.
    Line2,  // Index of the physical line and associated I/O control block to use.
    Line3,  // Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line4,  // Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line5,  // Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line6,  // Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line7,  // Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    LinkTrigger0,  // Index of the virtual line going on the Transport layer to use.
    LinkTrigger1,  // Index of the virtual line going on the Transport layer to use.
    LinkTrigger2  // Index of the virtual line going on the Transport layer to use.
};

/**
Class to control Feature LineSelector
*/
class NEOAPI_CPP_DECL CLineSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLineSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLineSelector object

    */
    CLineSelector(const CLineSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLineSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CLineSelector object to assign.

    Return: Object reference with the value set.
    */
    const CLineSelector& operator = (const CLineSelector& object);
    /**
    Get the current value.
    Return: The value as LineSelector
    */
    operator LineSelector() const;
    /**
    Set the current value.
    Parameter:
        value The LineSelector value to be written.

    Return: The CLineSelector object
    */
    CLineSelector& operator = (LineSelector value);
    /**
    Set the current value.
    Parameter:
        value The LineSelector value to be written.

    Return: The CLineSelector object
    */
    CLineSelector& Set(LineSelector value);
    /**
    Get the current value.
    Return: The value as LineSelector
    */
    LineSelector Get() const;
};

/**
 Valid values for LineSource
 */
enum class LineSource {
    AcquisitionActive = 0,  // Device is currently doing an acquisition of one or many Frames.
    AcquisitionTrigger,  // Device is currently waiting for a trigger for the capture of one or many Frames.
    AcquisitionTriggerMissed,  // Device has missed an Acquisition start trigger.
    AcquisitionTriggerWait,  // Device is currently waiting for a trigger for the capture of one or many Frames.
    Counter0Active,  // The chosen counter is in active state (counting).
    Counter1Active,  // The chosen counter is in active state (counting).
    Counter2Active,  // The chosen counter is in active state (counting).
    Encoder0,  // The chosen Encoder Output state.
    Encoder1,  // The chosen Encoder Output state.
    Encoder2,  // The chosen Encoder Output state.
    ExposureActive,  // Device is doing the exposure of a Frame (or Line).
    FrameActive,  // Device is currently doing the capture of a Frame.
    FrameTrigger,  // Device is currently waiting for a Frame start trigger.
    FrameTriggerMissed,  // Device has missed a Frame start trigger.
    FrameTriggerWait,  // Device is currently waiting for a Frame start trigger.
    Line0,  // Device is currently waiting for signal of input line 0. AVAILABLE: Always
    Line1,  // Device is currently waiting for signal of input line 10. AVAILABLE: Always
    LineActive,  // Device is currently doing the capture of a Line.
    LineTrigger,  // Device is currently waiting for a Line start trigger.
    LineTriggerMissed,  // Device has missed a Line start trigger.
    LineTriggerWait,  // Device is currently waiting for a Line start trigger.
    LogicBlock0,  // The choosen Logic Block output state.
    LogicBlock1,  // The choosen Logic Block output state.
    LogicBlock2,  // The choosen Logic Block output state.
    Off,  // Line output is disabled (Tri-State).
    ReadoutActive,  // Device is doing the readout of a Frame. AVAILABLE: Always
    SequencerOutput0,  // The chosen Sequencer Output is in active state.
    SequencerOutput1,  // The chosen Sequencer Output is in active state.
    SequencerOutput2,  // The chosen Sequencer Output is in active state.
    SoftwareSignal0,  // The choosen Software Signal output state.
    SoftwareSignal1,  // The choosen Software Signal output state.
    SoftwareSignal2,  // The choosen Software Signal output state.
    Stream0TransferActive,  // Transfer on the stream is active.
    Stream0TransferOverflow,  // Transfer on the stream is in overflow.
    Stream0TransferPaused,  // Transfer on the stream is paused.
    Stream0TransferStopped,  // Transfer on the stream is stopped.
    Stream0TransferStopping,  // Transfer on the stream is stopping.
    Stream1TransferActive,  // Transfer on the stream is active.
    Stream1TransferOverflow,  // Transfer on the stream is in overflow.
    Stream1TransferPaused,  // Transfer on the stream is paused.
    Stream1TransferStopped,  // Transfer on the stream is stopped.
    Stream1TransferStopping,  // Transfer on the stream is stopping.
    Timer0Active,  // The chosen Timer is in active state.
    Timer1Active,  // The chosen Timer is in active state.
    Timer2Active,  // The chosen Timer is in active state.
    Timer3Active,  // The chosen Timer is in active state. AVAILABLE: Always
    TriggerOverlapped,  // Mark Overlapped.
    TriggerReady,  // Device is ready for trigger. AVAILABLE: Always
    TriggerSkipped,  // Trigger Skipped.
    UserOutput0,  // The chosen User Output Bit state as defined by its current UserOutputValue.
    UserOutput1,  // The chosen User Output Bit state as defined by its current UserOutputValue.
    UserOutput2,  // The chosen User Output Bit state as defined by its current UserOutputValue.
    UserOutput3,  // The chosen User Output Bit state as defined by its current UserOutputValue. AVAILABLE: Always
    UserOutput4  // The chosen User Output Bit state as defined by its current UserOutputValue. AVAILABLE: Always
};

/**
Class to control Feature LineSource
*/
class NEOAPI_CPP_DECL CLineSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CLineSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CLineSource object

    */
    CLineSource(const CLineSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CLineSource() {}
    /**
    Assignment operator
    Parameter:
        object The CLineSource object to assign.

    Return: Object reference with the value set.
    */
    const CLineSource& operator = (const CLineSource& object);
    /**
    Get the current value.
    Return: The value as LineSource
    */
    operator LineSource() const;
    /**
    Set the current value.
    Parameter:
        value The LineSource value to be written.

    Return: The CLineSource object
    */
    CLineSource& operator = (LineSource value);
    /**
    Set the current value.
    Parameter:
        value The LineSource value to be written.

    Return: The CLineSource object
    */
    CLineSource& Set(LineSource value);
    /**
    Get the current value.
    Return: The value as LineSource
    */
    LineSource Get() const;
};

/**
 Valid values for MemoryActivePart
 */
enum class MemoryActivePart {
    Part_1 = 0,  // Part 1 is the active memory part.
    Part_2,  // Part 2 is the active memory part.
    Part_3,  // Part 3 is the active memory part.
    Part_4  // Part 4 is the active memory part.
};

/**
Class to control Feature MemoryActivePart
*/
class NEOAPI_CPP_DECL CMemoryActivePart : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CMemoryActivePart(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CMemoryActivePart object

    */
    CMemoryActivePart(const CMemoryActivePart& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CMemoryActivePart() {}
    /**
    Assignment operator
    Parameter:
        object The CMemoryActivePart object to assign.

    Return: Object reference with the value set.
    */
    const CMemoryActivePart& operator = (const CMemoryActivePart& object);
    /**
    Get the current value.
    Return: The value as MemoryActivePart
    */
    operator MemoryActivePart() const;
    /**
    Set the current value.
    Parameter:
        value The MemoryActivePart value to be written.

    Return: The CMemoryActivePart object
    */
    CMemoryActivePart& operator = (MemoryActivePart value);
    /**
    Set the current value.
    Parameter:
        value The MemoryActivePart value to be written.

    Return: The CMemoryActivePart object
    */
    CMemoryActivePart& Set(MemoryActivePart value);
    /**
    Get the current value.
    Return: The value as MemoryActivePart
    */
    MemoryActivePart Get() const;
};

/**
 Valid values for MemoryMode
 */
enum class MemoryMode {
    Active = 0,  // The memory is configured and in use.
    Burst,  // The selected memory part will be written and read simultaneously. The memory will be read when MemoryPartFilledBlocks are available.
    Config,  // Configuration of internal memory to store images is active.
    Off  // No images are stored in this mode.
};

/**
Class to control Feature MemoryMode
*/
class NEOAPI_CPP_DECL CMemoryMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CMemoryMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CMemoryMode object

    */
    CMemoryMode(const CMemoryMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CMemoryMode() {}
    /**
    Assignment operator
    Parameter:
        object The CMemoryMode object to assign.

    Return: Object reference with the value set.
    */
    const CMemoryMode& operator = (const CMemoryMode& object);
    /**
    Get the current value.
    Return: The value as MemoryMode
    */
    operator MemoryMode() const;
    /**
    Set the current value.
    Parameter:
        value The MemoryMode value to be written.

    Return: The CMemoryMode object
    */
    CMemoryMode& operator = (MemoryMode value);
    /**
    Set the current value.
    Parameter:
        value The MemoryMode value to be written.

    Return: The CMemoryMode object
    */
    CMemoryMode& Set(MemoryMode value);
    /**
    Get the current value.
    Return: The value as MemoryMode
    */
    MemoryMode Get() const;
};

/**
 Valid values for MemoryPartIncrementSource
 */
enum class MemoryPartIncrementSource {
    Line1 = 0,  // Selects line 1 as source to switch the active memory part.
    Software  // Selects the command MemoryPartIncrementSoftware as source to switch the active memory part.
};

/**
Class to control Feature MemoryPartIncrementSource
*/
class NEOAPI_CPP_DECL CMemoryPartIncrementSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CMemoryPartIncrementSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CMemoryPartIncrementSource object

    */
    CMemoryPartIncrementSource(const CMemoryPartIncrementSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CMemoryPartIncrementSource() {}
    /**
    Assignment operator
    Parameter:
        object The CMemoryPartIncrementSource object to assign.

    Return: Object reference with the value set.
    */
    const CMemoryPartIncrementSource& operator = (const CMemoryPartIncrementSource& object);
    /**
    Get the current value.
    Return: The value as MemoryPartIncrementSource
    */
    operator MemoryPartIncrementSource() const;
    /**
    Set the current value.
    Parameter:
        value The MemoryPartIncrementSource value to be written.

    Return: The CMemoryPartIncrementSource object
    */
    CMemoryPartIncrementSource& operator = (MemoryPartIncrementSource value);
    /**
    Set the current value.
    Parameter:
        value The MemoryPartIncrementSource value to be written.

    Return: The CMemoryPartIncrementSource object
    */
    CMemoryPartIncrementSource& Set(MemoryPartIncrementSource value);
    /**
    Get the current value.
    Return: The value as MemoryPartIncrementSource
    */
    MemoryPartIncrementSource Get() const;
};

/**
 Valid values for MemoryPartMode
 */
enum class MemoryPartMode {
    Cyclic = 0,  // The selected memory part will be written cyclic. The oldest image will be overwritten as first.
    Once  // The selected memory part will be written once without overrun. No images will be overwritten.
};

/**
Class to control Feature MemoryPartMode
*/
class NEOAPI_CPP_DECL CMemoryPartMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CMemoryPartMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CMemoryPartMode object

    */
    CMemoryPartMode(const CMemoryPartMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CMemoryPartMode() {}
    /**
    Assignment operator
    Parameter:
        object The CMemoryPartMode object to assign.

    Return: Object reference with the value set.
    */
    const CMemoryPartMode& operator = (const CMemoryPartMode& object);
    /**
    Get the current value.
    Return: The value as MemoryPartMode
    */
    operator MemoryPartMode() const;
    /**
    Set the current value.
    Parameter:
        value The MemoryPartMode value to be written.

    Return: The CMemoryPartMode object
    */
    CMemoryPartMode& operator = (MemoryPartMode value);
    /**
    Set the current value.
    Parameter:
        value The MemoryPartMode value to be written.

    Return: The CMemoryPartMode object
    */
    CMemoryPartMode& Set(MemoryPartMode value);
    /**
    Get the current value.
    Return: The value as MemoryPartMode
    */
    MemoryPartMode Get() const;
};

/**
 Valid values for MemoryPartSelector
 */
enum class MemoryPartSelector {
    Part_1 = 0,  // Selects memory part 1.
    Part_2,  // Selects memory part 2.
    Part_3,  // Selects memory part 3.
    Part_4  // Selects memory part 4.
};

/**
Class to control Feature MemoryPartSelector
*/
class NEOAPI_CPP_DECL CMemoryPartSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CMemoryPartSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CMemoryPartSelector object

    */
    CMemoryPartSelector(const CMemoryPartSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CMemoryPartSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CMemoryPartSelector object to assign.

    Return: Object reference with the value set.
    */
    const CMemoryPartSelector& operator = (const CMemoryPartSelector& object);
    /**
    Get the current value.
    Return: The value as MemoryPartSelector
    */
    operator MemoryPartSelector() const;
    /**
    Set the current value.
    Parameter:
        value The MemoryPartSelector value to be written.

    Return: The CMemoryPartSelector object
    */
    CMemoryPartSelector& operator = (MemoryPartSelector value);
    /**
    Set the current value.
    Parameter:
        value The MemoryPartSelector value to be written.

    Return: The CMemoryPartSelector object
    */
    CMemoryPartSelector& Set(MemoryPartSelector value);
    /**
    Get the current value.
    Return: The value as MemoryPartSelector
    */
    MemoryPartSelector Get() const;
};

/**
 Valid values for OpticControllerSelector
 */
enum class OpticControllerSelector {
    OpticController0 = 0,  // Selects Optic Controller 0.
    OpticController1,  // Selects Optic Controller 1.
    OpticController2  // Selects Optic Controller 2.
};

/**
Class to control Feature OpticControllerSelector
*/
class NEOAPI_CPP_DECL COpticControllerSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    COpticControllerSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A COpticControllerSelector object

    */
    COpticControllerSelector(const COpticControllerSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~COpticControllerSelector() {}
    /**
    Assignment operator
    Parameter:
        object The COpticControllerSelector object to assign.

    Return: Object reference with the value set.
    */
    const COpticControllerSelector& operator = (const COpticControllerSelector& object);
    /**
    Get the current value.
    Return: The value as OpticControllerSelector
    */
    operator OpticControllerSelector() const;
    /**
    Set the current value.
    Parameter:
        value The OpticControllerSelector value to be written.

    Return: The COpticControllerSelector object
    */
    COpticControllerSelector& operator = (OpticControllerSelector value);
    /**
    Set the current value.
    Parameter:
        value The OpticControllerSelector value to be written.

    Return: The COpticControllerSelector object
    */
    COpticControllerSelector& Set(OpticControllerSelector value);
    /**
    Get the current value.
    Return: The value as OpticControllerSelector
    */
    OpticControllerSelector Get() const;
};

/**
 Valid values for OpticControllerStatus
 */
enum class OpticControllerStatus {
    Busy = 0,  // The optic controller executes a feature access/command.
    Error,  // The optic controller encountered an error.
    NotConnected,  // The optic contoller is physically not connected.
    NotInitialized,  // The optic controller is not initialized.
    NotSupported,  // The optic controller is physically connected but not supported.
    Ready  // The optic controller is ready to use.
};

/**
Class to control Feature OpticControllerStatus
*/
class NEOAPI_CPP_DECL COpticControllerStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    COpticControllerStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A COpticControllerStatus object

    */
    COpticControllerStatus(const COpticControllerStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~COpticControllerStatus() {}
    /**
    Assignment operator
    Parameter:
        object The COpticControllerStatus object to assign.

    Return: Object reference with the value set.
    */
    const COpticControllerStatus& operator = (const COpticControllerStatus& object);
    /**
    Get the current value.
    Return: The value as OpticControllerStatus
    */
    operator OpticControllerStatus() const;
    /**
    Set the current value.
    Parameter:
        value The OpticControllerStatus value to be written.

    Return: The COpticControllerStatus object
    */
    COpticControllerStatus& operator = (OpticControllerStatus value);
    /**
    Set the current value.
    Parameter:
        value The OpticControllerStatus value to be written.

    Return: The COpticControllerStatus object
    */
    COpticControllerStatus& Set(OpticControllerStatus value);
    /**
    Get the current value.
    Return: The value as OpticControllerStatus
    */
    OpticControllerStatus Get() const;
};

/**
 Valid values for PartialScanEnabled
 */
enum class PartialScanEnabled {
    Off = 0,  // Off
    On  // On
};

/**
Class to control Feature PartialScanEnabled
*/
class NEOAPI_CPP_DECL CPartialScanEnabled : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPartialScanEnabled(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPartialScanEnabled object

    */
    CPartialScanEnabled(const CPartialScanEnabled& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPartialScanEnabled() {}
    /**
    Assignment operator
    Parameter:
        object The CPartialScanEnabled object to assign.

    Return: Object reference with the value set.
    */
    const CPartialScanEnabled& operator = (const CPartialScanEnabled& object);
    /**
    Get the current value.
    Return: The value as PartialScanEnabled
    */
    operator PartialScanEnabled() const;
    /**
    Set the current value.
    Parameter:
        value The PartialScanEnabled value to be written.

    Return: The CPartialScanEnabled object
    */
    CPartialScanEnabled& operator = (PartialScanEnabled value);
    /**
    Set the current value.
    Parameter:
        value The PartialScanEnabled value to be written.

    Return: The CPartialScanEnabled object
    */
    CPartialScanEnabled& Set(PartialScanEnabled value);
    /**
    Get the current value.
    Return: The value as PartialScanEnabled
    */
    PartialScanEnabled Get() const;
};

/**
 Valid values for PixelFormat
 */
enum class PixelFormat {
    B10 = 0,  // Blue 10-bit
    B10_Deprecated,  // Deprecated because size field is wrong
    B12,  // Blue 12-bit
    B12_Deprecated,  // Deprecated because size field is wrong
    B16,  // Blue 16-bit
    B8,  // Blue 8-bit
    BGR10,  // Blue-Green-Red 10-bit unpacked
    BGR10p,  // Blue-Green-Red 10-bit packed
    BGR12,  // Blue-Green-Red 12-bit unpacked
    BGR12p,  // Blue-Green-Red 12-bit packed
    BGR14,  // Blue-Green-Red 14-bit unpacked
    BGR16,  // Blue-Green-Red 16-bit
    BGR565p,  // Blue-Green-Red 5/6/5-bit packed
    BGR8,  // Blue-Green-Red 8-bit
    BGRa10,  // Blue-Green-Red-alpha 10-bit unpacked
    BGRa10p,  // Blue-Green-Red-alpha 10-bit packed
    BGRa12,  // Blue-Green-Red-alpha 12-bit unpacked
    BGRa12p,  // Blue-Green-Red-alpha 12-bit packed
    BGRa14,  // Blue-Green-Red-alpha 14-bit unpacked
    BGRa16,  // Blue-Green-Red-alpha 16-bit
    BGRa8,  // Blue-Green-Red-alpha 8-bit
    BayerBG10,  // Bayer Blue-Green 10-bit unpacked
    BayerBG10p,  // Bayer Blue-Green 10-bit packed
    BayerBG12,  // Bayer Blue-Green 12-bit unpacked
    BayerBG12p,  // Bayer Blue-Green 12-bit packed
    BayerBG14,  // Bayer Blue-Green 14-bit
    BayerBG14p,  // Bayer Blue-Green 14-bit packed
    BayerBG16,  // Bayer Blue-Green 16-bit
    BayerBG4p,  // Bayer Blue-Green 4-bit packed
    BayerBG8,  // Bayer Blue-Green 8-bit
    BayerGB10,  // Bayer Green-Blue 10-bit unpacked
    BayerGB10Packed,  // Bayer Green Blue 10 bit packed.
    BayerGB10p,  // Bayer Green-Blue 10-bit packed
    BayerGB12,  // Bayer Green-Blue 12-bit unpacked
    BayerGB12Packed,  // Bayer Green Blue 12 bit packed.
    BayerGB12p,  // Bayer Green-Blue 12-bit packed
    BayerGB14,  // Bayer Green-Blue 14-bit
    BayerGB14p,  // Bayer Green-Blue 14-bit packed
    BayerGB16,  // Bayer Green-Blue 16-bit
    BayerGB4p,  // Bayer Green-Blue 4-bit packed
    BayerGB8,  // Bayer Green-Blue 8-bit
    BayerGR10,  // Bayer Green-Red 10-bit unpacked
    BayerGR10p,  // Bayer Green-Red 10-bit packed
    BayerGR12,  // Bayer Green-Red 12-bit unpacked
    BayerGR12p,  // Bayer Green-Red 12-bit packed
    BayerGR14,  // Bayer Green-Red 14-bit
    BayerGR14p,  // Bayer Green-Red 14-bit packed
    BayerGR16,  // Bayer Green-Red 16-bit
    BayerGR4p,  // Bayer Green-Red 4-bit packed
    BayerGR8,  // Bayer Green-Red 8-bit
    BayerRG10,  // Bayer Red-Green 10-bit unpacked
    BayerRG10Packed,  // Bayer Red Green 10 bit packed.
    BayerRG10p,  // Bayer Red-Green 10-bit packed
    BayerRG12,  // Bayer Red-Green 12-bit unpacked
    BayerRG12Packed,  // Bayer Red Green 12 bit packed.
    BayerRG12p,  // Bayer Red-Green 12-bit packed
    BayerRG14,  // Bayer Red-Green 14-bit
    BayerRG14p,  // Bayer Red-Green 14-bit packed
    BayerRG16,  // Bayer Red-Green 16-bit
    BayerRG4p,  // Bayer Red-Green 4-bit packed
    BayerRG8,  // Bayer Red-Green 8-bit
    BiColorBGRG10,  // Bi-color Blue/Green - Red/Green 10-bit unpacked
    BiColorBGRG10p,  // Bi-color Blue/Green - Red/Green 10-bit packed
    BiColorBGRG12,  // Bi-color Blue/Green - Red/Green 12-bit unpacked
    BiColorBGRG12p,  // Bi-color Blue/Green - Red/Green 12-bit packed
    BiColorBGRG8,  // Bi-color Blue/Green - Red/Green 8-bit
    BiColorRGBG10,  // Bi-color Red/Green - Blue/Green 10-bit unpacked
    BiColorRGBG10p,  // Bi-color Red/Green - Blue/Green 10-bit packed
    BiColorRGBG12,  // Bi-color Red/Green - Blue/Green 12-bit unpacked
    BiColorRGBG12p,  // Bi-color Red/Green - Blue/Green 12-bit packed
    BiColorRGBG8,  // Bi-color Red/Green - Blue/Green 8-bit
    Confidence1,  // Confidence 1-bit unpacked
    Confidence16,  // Confidence 16-bit
    Confidence1p,  // Confidence 1-bit packed
    Confidence32f,  // Confidence 32-bit floating point
    Confidence8,  // Confidence 8-bit
    Coord3D_A10p,  // 3D coordinate A 10-bit packed
    Coord3D_A12p,  // 3D coordinate A 12-bit packed
    Coord3D_A16,  // 3D coordinate A 16-bit
    Coord3D_A32f,  // 3D coordinate A 32-bit floating point
    Coord3D_A8,  // 3D coordinate A 8-bit
    Coord3D_ABC10p,  // 3D coordinate A-B-C 10-bit packed
    Coord3D_ABC10p_Planar,  // 3D coordinate A-B-C 10-bit packed planar
    Coord3D_ABC12p,  // 3D coordinate A-B-C 12-bit packed
    Coord3D_ABC12p_Planar,  // 3D coordinate A-B-C 12-bit packed planar
    Coord3D_ABC16,  // 3D coordinate A-B-C 16-bit
    Coord3D_ABC16_Planar,  // 3D coordinate A-B-C 16-bit planar
    Coord3D_ABC32f,  // 3D coordinate A-B-C 32-bit floating point
    Coord3D_ABC32f_Planar,  // 3D coordinate A-B-C 32-bit floating point planar
    Coord3D_ABC8,  // 3D coordinate A-B-C 8-bit
    Coord3D_ABC8_Planar,  // 3D coordinate A-B-C 8-bit planar
    Coord3D_AC10p,  // 3D coordinate A-C 10-bit packed
    Coord3D_AC10p_Planar,  // 3D coordinate A-C 10-bit packed planar
    Coord3D_AC12p,  // 3D coordinate A-C 12-bit packed
    Coord3D_AC12p_Planar,  // 3D coordinate A-C 12-bit packed planar
    Coord3D_AC16,  // 3D coordinate A-C 16-bit
    Coord3D_AC16_Planar,  // 3D coordinate A-C 16-bit planar
    Coord3D_AC32f,  // 3D coordinate A-C 32-bit floating point
    Coord3D_AC32f_Planar,  // 3D coordinate A-C 32-bit floating point planar
    Coord3D_AC8,  // 3D coordinate A-C 8-bit
    Coord3D_AC8_Planar,  // 3D coordinate A-C 8-bit planar
    Coord3D_B10p,  // 3D coordinate B 10-bit packed
    Coord3D_B12p,  // 3D coordinate B 12-bit packed
    Coord3D_B16,  // 3D coordinate B 16-bit
    Coord3D_B32f,  // 3D coordinate B 32-bit floating point
    Coord3D_B8,  // 3D coordinate B 8-bit
    Coord3D_C10p,  // 3D coordinate C 10-bit packed
    Coord3D_C12p,  // 3D coordinate C 12-bit packed
    Coord3D_C16,  // 3D coordinate C 16-bit
    Coord3D_C32f,  // 3D coordinate C 32-bit floating point
    Coord3D_C8,  // 3D coordinate C 8-bit
    Data16,  // Data 16-bit
    Data16s,  // Data 16-bit signed
    Data32,  // Data 32-bit
    Data32f,  // Data 32-bit floating point
    Data32s,  // Data 32-bit signed
    Data64,  // Data 64-bit
    Data64f,  // Data 64-bit floating point
    Data64s,  // Data 64-bit signed
    Data8,  // Data 8-bit
    Data8s,  // Data 8-bit signed
    G10,  // Green 10-bit
    G10_Deprecated,  // Deprecated because size field is wrong
    G12,  // Green 12-bit
    G12_Deprecated,  // Deprecated because size field is wrong
    G16,  // Green 16-bit
    G8,  // Green 8-bit
    Mono10,  // Monochrome 10-bit unpacked
    Mono10Packed,  // Mono 10 bit packed. AVAILABLE: Always.
    Mono10p,  // Monochrome 10-bit packed
    Mono12,  // Monochrome 12-bit unpacked
    Mono12Packed,  // Mono 12 bit packed. AVAILABLE: Always.
    Mono12p,  // Monochrome 12-bit packed
    Mono14,  // Monochrome 14-bit unpacked
    Mono14p,  // Monochrome 14-bit packed
    Mono16,  // Monochrome 16-bit
    Mono1p,  // Monochrome 1-bit packed
    Mono2p,  // Monochrome 2-bit packed
    Mono32,  // Monochrome 32-bit
    Mono4p,  // Monochrome 4-bit packed
    Mono8,  // Monochrome 8-bit
    Mono8s,  // Monochrome 8-bit signed
    R10,  // Red 10-bit
    R10_Deprecated,  // Deprecated because size field is wrong
    R12,  // Red 12-bit
    R12_Deprecated,  // Deprecated because size field is wrong
    R16,  // Red 16-bit
    R8,  // Red 8-bit
    RGB10,  // Red-Green-Blue 10-bit unpacked
    RGB10_Planar,  // Red-Green-Blue 10-bit unpacked planar
    RGB10p,  // Red-Green-Blue 10-bit packed
    RGB10p32,  // Red-Green-Blue 10-bit packed into 32-bit
    RGB12,  // Red-Green-Blue 12-bit unpacked
    RGB12_Planar,  // Red-Green-Blue 12-bit unpacked planar
    RGB12p,  // Red-Green-Blue 12-bit packed
    RGB14,  // Red-Green-Blue 14-bit unpacked
    RGB16,  // Red-Green-Blue 16-bit
    RGB16_Planar,  // Red-Green-Blue 16-bit planar
    RGB565p,  // Red-Green-Blue 5/6/5-bit packed
    RGB8,  // Red-Green-Blue 8-bit
    RGB8_Planar,  // Red-Green-Blue 8-bit planar
    RGBa10,  // Red-Green-Blue-alpha 10-bit unpacked
    RGBa10p,  // Red-Green-Blue-alpha 10-bit packed
    RGBa12,  // Red-Green-Blue-alpha 12-bit unpacked
    RGBa12p,  // Red-Green-Blue-alpha 12-bit packed
    RGBa14,  // Red-Green-Blue-alpha 14-bit unpacked
    RGBa16,  // Red-Green-Blue-alpha 16-bit
    RGBa8,  // Red-Green-Blue-alpha 8-bit
    SCF1WBWG10,  // Sparse Color Filter #1 White-Blue-White-Green 10-bit unpacked
    SCF1WBWG10p,  // Sparse Color Filter #1 White-Blue-White-Green 10-bit packed
    SCF1WBWG12,  // Sparse Color Filter #1 White-Blue-White-Green 12-bit unpacked
    SCF1WBWG12p,  // Sparse Color Filter #1 White-Blue-White-Green 12-bit packed
    SCF1WBWG14,  // Sparse Color Filter #1 White-Blue-White-Green 14-bit unpacked
    SCF1WBWG16,  // Sparse Color Filter #1 White-Blue-White-Green 16-bit unpacked
    SCF1WBWG8,  // Sparse Color Filter #1 White-Blue-White-Green 8-bit
    SCF1WGWB10,  // Sparse Color Filter #1 White-Green-White-Blue 10-bit unpacked
    SCF1WGWB10p,  // Sparse Color Filter #1 White-Green-White-Blue 10-bit packed
    SCF1WGWB12,  // Sparse Color Filter #1 White-Green-White-Blue 12-bit unpacked
    SCF1WGWB12p,  // Sparse Color Filter #1 White-Green-White-Blue 12-bit packed
    SCF1WGWB14,  // Sparse Color Filter #1 White-Green-White-Blue 14-bit unpacked
    SCF1WGWB16,  // Sparse Color Filter #1 White-Green-White-Blue 16-bit
    SCF1WGWB8,  // Sparse Color Filter #1 White-Green-White-Blue 8-bit
    SCF1WGWR10,  // Sparse Color Filter #1 White-Green-White-Red 10-bit unpacked
    SCF1WGWR10p,  // Sparse Color Filter #1 White-Green-White-Red 10-bit packed
    SCF1WGWR12,  // Sparse Color Filter #1 White-Green-White-Red 12-bit unpacked
    SCF1WGWR12p,  // Sparse Color Filter #1 White-Green-White-Red 12-bit packed
    SCF1WGWR14,  // Sparse Color Filter #1 White-Green-White-Red 14-bit unpacked
    SCF1WGWR16,  // Sparse Color Filter #1 White-Green-White-Red 16-bit
    SCF1WGWR8,  // Sparse Color Filter #1 White-Green-White-Red 8-bit
    SCF1WRWG10,  // Sparse Color Filter #1 White-Red-White-Green 10-bit unpacked
    SCF1WRWG10p,  // Sparse Color Filter #1 White-Red-White-Green 10-bit packed
    SCF1WRWG12,  // Sparse Color Filter #1 White-Red-White-Green 12-bit unpacked
    SCF1WRWG12p,  // Sparse Color Filter #1 White-Red-White-Green 12-bit packed
    SCF1WRWG14,  // Sparse Color Filter #1 White-Red-White-Green 14-bit unpacked
    SCF1WRWG16,  // Sparse Color Filter #1 White-Red-White-Green 16-bit
    SCF1WRWG8,  // Sparse Color Filter #1 White-Red-White-Green 8-bit
    YCbCr10_CbYCr,  // YCbCr 4:4:4 10-bit unpacked
    YCbCr10p_CbYCr,  // YCbCr 4:4:4 10-bit packed
    YCbCr12_CbYCr,  // YCbCr 4:4:4 12-bit unpacked
    YCbCr12p_CbYCr,  // YCbCr 4:4:4 12-bit packed
    YCbCr2020_10_CbYCr,  // YCbCr 4:4:4 10-bit unpacked BT.2020
    YCbCr2020_10p_CbYCr,  // YCbCr 4:4:4 10-bit packed BT.2020
    YCbCr2020_12_CbYCr,  // YCbCr 4:4:4 12-bit unpacked BT.2020
    YCbCr2020_12p_CbYCr,  // YCbCr 4:4:4 12-bit packed BT.2020
    YCbCr2020_411_8_CbYYCrYY,  // YCbCr 4:1:1 8-bit BT.2020
    YCbCr2020_422_10,  // YCbCr 4:2:2 10-bit unpacked BT.2020
    YCbCr2020_422_10_CbYCrY,  // YCbCr 4:2:2 10-bit unpacked BT.2020
    YCbCr2020_422_10p,  // YCbCr 4:2:2 10-bit packed BT.2020
    YCbCr2020_422_10p_CbYCrY,  // YCbCr 4:2:2 10-bit packed BT.2020
    YCbCr2020_422_12,  // YCbCr 4:2:2 12-bit unpacked BT.2020
    YCbCr2020_422_12_CbYCrY,  // YCbCr 4:2:2 12-bit unpacked BT.2020
    YCbCr2020_422_12p,  // YCbCr 4:2:2 12-bit packed BT.2020
    YCbCr2020_422_12p_CbYCrY,  // YCbCr 4:2:2 12-bit packed BT.2020
    YCbCr2020_422_8,  // YCbCr 4:2:2 8-bit BT.2020
    YCbCr2020_422_8_CbYCrY,  // YCbCr 4:2:2 8-bit BT.2020
    YCbCr2020_8_CbYCr,  // YCbCr 4:4:4 8-bit BT.2020
    YCbCr411_8,  // YCbCr 4:1:1 8-bit
    YCbCr411_8_CbYYCrYY,  // YCbCr 4:1:1 8-bit
    YCbCr420_8_YY_CbCr_Semiplanar,  // YCbCr 4:2:0 8-bit YY/CbCr Semiplanar
    YCbCr420_8_YY_CrCb_Semiplanar,  // YCbCr 4:2:0 8-bit YY/CrCb Semiplanar
    YCbCr422_10,  // YCbCr 4:2:2 10-bit unpacked
    YCbCr422_10_CbYCrY,  // YCbCr 4:2:2 10-bit unpacked
    YCbCr422_10p,  // YCbCr 4:2:2 10-bit packed
    YCbCr422_10p_CbYCrY,  // YCbCr 4:2:2 10-bit packed
    YCbCr422_12,  // YCbCr 4:2:2 12-bit unpacked
    YCbCr422_12_CbYCrY,  // YCbCr 4:2:2 12-bit unpacked
    YCbCr422_12p,  // YCbCr 4:2:2 12-bit packed
    YCbCr422_12p_CbYCrY,  // YCbCr 4:2:2 12-bit packed
    YCbCr422_8,  // YCbCr 4:2:2 8-bit
    YCbCr422_8_CbYCrY,  // YCbCr 4:2:2 8-bit
    YCbCr422_8_YY_CbCr_Semiplanar,  // YCbCr 4:2:2 8-bit YY/CbCr Semiplanar
    YCbCr422_8_YY_CrCb_Semiplanar,  // YCbCr 4:2:2 8-bit YY/CrCb Semiplanar
    YCbCr601_10_CbYCr,  // YCbCr 4:4:4 10-bit unpacked BT.601
    YCbCr601_10p_CbYCr,  // YCbCr 4:4:4 10-bit packed BT.601
    YCbCr601_12_CbYCr,  // YCbCr 4:4:4 12-bit unpacked BT.601
    YCbCr601_12p_CbYCr,  // YCbCr 4:4:4 12-bit packed BT.601
    YCbCr601_411_8_CbYYCrYY,  // YCbCr 4:1:1 8-bit BT.601
    YCbCr601_422_10,  // YCbCr 4:2:2 10-bit unpacked BT.601
    YCbCr601_422_10_CbYCrY,  // YCbCr 4:2:2 10-bit unpacked BT.601
    YCbCr601_422_10p,  // YCbCr 4:2:2 10-bit packed BT.601
    YCbCr601_422_10p_CbYCrY,  // YCbCr 4:2:2 10-bit packed BT.601
    YCbCr601_422_12,  // YCbCr 4:2:2 12-bit unpacked BT.601
    YCbCr601_422_12_CbYCrY,  // YCbCr 4:2:2 12-bit unpacked BT.601
    YCbCr601_422_12p,  // YCbCr 4:2:2 12-bit packed BT.601
    YCbCr601_422_12p_CbYCrY,  // YCbCr 4:2:2 12-bit packed BT.601
    YCbCr601_422_8,  // YCbCr 4:2:2 8-bit BT.601
    YCbCr601_422_8_CbYCrY,  // YCbCr 4:2:2 8-bit BT.601
    YCbCr601_8_CbYCr,  // YCbCr 4:4:4 8-bit BT.601
    YCbCr709_10_CbYCr,  // YCbCr 4:4:4 10-bit unpacked BT.709
    YCbCr709_10p_CbYCr,  // YCbCr 4:4:4 10-bit packed BT.709
    YCbCr709_12_CbYCr,  // YCbCr 4:4:4 12-bit unpacked BT.709
    YCbCr709_12p_CbYCr,  // YCbCr 4:4:4 12-bit packed BT.709
    YCbCr709_411_8_CbYYCrYY,  // YCbCr 4:1:1 8-bit BT.709
    YCbCr709_422_10,  // YCbCr 4:2:2 10-bit unpacked BT.709
    YCbCr709_422_10_CbYCrY,  // YCbCr 4:2:2 10-bit unpacked BT.709
    YCbCr709_422_10p,  // YCbCr 4:2:2 10-bit packed BT.709
    YCbCr709_422_10p_CbYCrY,  // YCbCr 4:2:2 10-bit packed BT.709
    YCbCr709_422_12,  // YCbCr 4:2:2 12-bit unpacked BT.709
    YCbCr709_422_12_CbYCrY,  // YCbCr 4:2:2 12-bit unpacked BT.709
    YCbCr709_422_12p,  // YCbCr 4:2:2 12-bit packed BT.709
    YCbCr709_422_12p_CbYCrY,  // YCbCr 4:2:2 12-bit packed BT.709
    YCbCr709_422_8,  // YCbCr 4:2:2 8-bit BT.709
    YCbCr709_422_8_CbYCrY,  // YCbCr 4:2:2 8-bit BT.709
    YCbCr709_8_CbYCr,  // YCbCr 4:4:4 8-bit BT.709
    YCbCr8,  // YCbCr 4:4:4 8-bit
    YCbCr8_CbYCr,  // YCbCr 4:4:4 8-bit
    YUV411Packed,  // YUV 411 8 bit packed.
    YUV411_8,  // YUV 411 8 bit. AVAILABLE: Always.
    YUV411_8_UYYVYY,  // YUV 4:1:1 8-bit
    YUV422Packed,  // YUV 422 8 bit packed.
    YUV422_8,  // YUV 4:2:2 8-bit
    YUV422_8_UYVY,  // YUV 4:2:2 8-bit
    YUV444Packed,  // YUV 444 8 bit packed.
    YUV8,  // YUV 8 bit. AVAILABLE: Always.
    YUV8_UYV  // YUV 4:4:4 8-bit
};

/**
Class to control Feature PixelFormat
*/
class NEOAPI_CPP_DECL CPixelFormat : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPixelFormat(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPixelFormat object

    */
    CPixelFormat(const CPixelFormat& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPixelFormat() {}
    /**
    Assignment operator
    Parameter:
        object The CPixelFormat object to assign.

    Return: Object reference with the value set.
    */
    const CPixelFormat& operator = (const CPixelFormat& object);
    /**
    Get the current value.
    Return: The value as PixelFormat
    */
    operator PixelFormat() const;
    /**
    Set the current value.
    Parameter:
        value The PixelFormat value to be written.

    Return: The CPixelFormat object
    */
    CPixelFormat& operator = (PixelFormat value);
    /**
    Set the current value.
    Parameter:
        value The PixelFormat value to be written.

    Return: The CPixelFormat object
    */
    CPixelFormat& Set(PixelFormat value);
    /**
    Get the current value.
    Return: The value as PixelFormat
    */
    PixelFormat Get() const;
};

/**
 Valid values for PtpClockAccuracy
 */
enum class PtpClockAccuracy {
    AlternatePTPProfile = 0,  // Alternate PTP Profile
    GreaterThan10s,  // Greater Than 10s
    Reserved,  // Reserved
    Unknown,  // Unknown
    Within100ms,  // Within 100ms
    Within100ns,  // Within 100ns
    Within100us,  // Within 100us
    Within10ms,  // Within 10ms
    Within10s,  // Within 10s
    Within10us,  // Within 10us
    Within1ms,  // Within 1ms
    Within1s,  // Within 1s
    Within1us,  // Within 1us
    Within250ms,  // Within 250ms
    Within250ns,  // Within 250ns
    Within250us,  // Within 250us
    Within25ms,  // Within 25ms
    Within25ns,  // Within 25ns
    Within25us,  // Within 25us
    Within2p5ms,  // Within 2p 5ms
    Within2p5us  // Within 2p5us
};

/**
Class to control Feature PtpClockAccuracy
*/
class NEOAPI_CPP_DECL CPtpClockAccuracy : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpClockAccuracy(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpClockAccuracy object

    */
    CPtpClockAccuracy(const CPtpClockAccuracy& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpClockAccuracy() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpClockAccuracy object to assign.

    Return: Object reference with the value set.
    */
    const CPtpClockAccuracy& operator = (const CPtpClockAccuracy& object);
    /**
    Get the current value.
    Return: The value as PtpClockAccuracy
    */
    operator PtpClockAccuracy() const;
    /**
    Set the current value.
    Parameter:
        value The PtpClockAccuracy value to be written.

    Return: The CPtpClockAccuracy object
    */
    CPtpClockAccuracy& operator = (PtpClockAccuracy value);
    /**
    Set the current value.
    Parameter:
        value The PtpClockAccuracy value to be written.

    Return: The CPtpClockAccuracy object
    */
    CPtpClockAccuracy& Set(PtpClockAccuracy value);
    /**
    Get the current value.
    Return: The value as PtpClockAccuracy
    */
    PtpClockAccuracy Get() const;
};

/**
 Valid values for PtpClockOffsetMode
 */
enum class PtpClockOffsetMode {
    Add = 0,  // Timestamp Offset will be added to cameras internal timestamp.
    Sub  // Timestamp Offset will be subtracted from cameras internal timestamp.
};

/**
Class to control Feature PtpClockOffsetMode
*/
class NEOAPI_CPP_DECL CPtpClockOffsetMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpClockOffsetMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpClockOffsetMode object

    */
    CPtpClockOffsetMode(const CPtpClockOffsetMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpClockOffsetMode() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpClockOffsetMode object to assign.

    Return: Object reference with the value set.
    */
    const CPtpClockOffsetMode& operator = (const CPtpClockOffsetMode& object);
    /**
    Get the current value.
    Return: The value as PtpClockOffsetMode
    */
    operator PtpClockOffsetMode() const;
    /**
    Set the current value.
    Parameter:
        value The PtpClockOffsetMode value to be written.

    Return: The CPtpClockOffsetMode object
    */
    CPtpClockOffsetMode& operator = (PtpClockOffsetMode value);
    /**
    Set the current value.
    Parameter:
        value The PtpClockOffsetMode value to be written.

    Return: The CPtpClockOffsetMode object
    */
    CPtpClockOffsetMode& Set(PtpClockOffsetMode value);
    /**
    Get the current value.
    Return: The value as PtpClockOffsetMode
    */
    PtpClockOffsetMode Get() const;
};

/**
 Valid values for PtpDriftOffsetMode
 */
enum class PtpDriftOffsetMode {
    Add = 0,  // Drift Offset will be added to cameras internal timestamp increment.
    Sub  // Drift Offset will be subtracted from cameras internal timestamp increment.
};

/**
Class to control Feature PtpDriftOffsetMode
*/
class NEOAPI_CPP_DECL CPtpDriftOffsetMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpDriftOffsetMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpDriftOffsetMode object

    */
    CPtpDriftOffsetMode(const CPtpDriftOffsetMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpDriftOffsetMode() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpDriftOffsetMode object to assign.

    Return: Object reference with the value set.
    */
    const CPtpDriftOffsetMode& operator = (const CPtpDriftOffsetMode& object);
    /**
    Get the current value.
    Return: The value as PtpDriftOffsetMode
    */
    operator PtpDriftOffsetMode() const;
    /**
    Set the current value.
    Parameter:
        value The PtpDriftOffsetMode value to be written.

    Return: The CPtpDriftOffsetMode object
    */
    CPtpDriftOffsetMode& operator = (PtpDriftOffsetMode value);
    /**
    Set the current value.
    Parameter:
        value The PtpDriftOffsetMode value to be written.

    Return: The CPtpDriftOffsetMode object
    */
    CPtpDriftOffsetMode& Set(PtpDriftOffsetMode value);
    /**
    Get the current value.
    Return: The value as PtpDriftOffsetMode
    */
    PtpDriftOffsetMode Get() const;
};

/**
 Valid values for PtpMode
 */
enum class PtpMode {
    Auto = 0,  // The device uses the IEEE 1588 best master clock algorithm to determine which device is master, and which devices are slaves.
    Slave  // The clock of the device will act as a PTP slave only to align with a master device clock.
};

/**
Class to control Feature PtpMode
*/
class NEOAPI_CPP_DECL CPtpMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpMode object

    */
    CPtpMode(const CPtpMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpMode() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpMode object to assign.

    Return: Object reference with the value set.
    */
    const CPtpMode& operator = (const CPtpMode& object);
    /**
    Get the current value.
    Return: The value as PtpMode
    */
    operator PtpMode() const;
    /**
    Set the current value.
    Parameter:
        value The PtpMode value to be written.

    Return: The CPtpMode object
    */
    CPtpMode& operator = (PtpMode value);
    /**
    Set the current value.
    Parameter:
        value The PtpMode value to be written.

    Return: The CPtpMode object
    */
    CPtpMode& Set(PtpMode value);
    /**
    Get the current value.
    Return: The value as PtpMode
    */
    PtpMode Get() const;
};

/**
 Valid values for PtpServoStatus
 */
enum class PtpServoStatus {
    Locked = 0,  // Servo is locked
    Unknown  // Servo state is unknown.
};

/**
Class to control Feature PtpServoStatus
*/
class NEOAPI_CPP_DECL CPtpServoStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpServoStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpServoStatus object

    */
    CPtpServoStatus(const CPtpServoStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpServoStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpServoStatus object to assign.

    Return: Object reference with the value set.
    */
    const CPtpServoStatus& operator = (const CPtpServoStatus& object);
    /**
    Get the current value.
    Return: The value as PtpServoStatus
    */
    operator PtpServoStatus() const;
    /**
    Set the current value.
    Parameter:
        value The PtpServoStatus value to be written.

    Return: The CPtpServoStatus object
    */
    CPtpServoStatus& operator = (PtpServoStatus value);
    /**
    Set the current value.
    Parameter:
        value The PtpServoStatus value to be written.

    Return: The CPtpServoStatus object
    */
    CPtpServoStatus& Set(PtpServoStatus value);
    /**
    Get the current value.
    Return: The value as PtpServoStatus
    */
    PtpServoStatus Get() const;
};

/**
 Valid values for PtpStatus
 */
enum class PtpStatus {
    Disabled = 0,  // Disabled
    Faulty,  // Faulty
    Initializing,  // Initializing
    Listening,  // Listening
    Master,  // Master
    Passive,  // Passive
    PreMaster,  // Pre Master
    Slave,  // Slave
    Uncalibrated  // Uncalibrated
};

/**
Class to control Feature PtpStatus
*/
class NEOAPI_CPP_DECL CPtpStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpStatus object

    */
    CPtpStatus(const CPtpStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpStatus object to assign.

    Return: Object reference with the value set.
    */
    const CPtpStatus& operator = (const CPtpStatus& object);
    /**
    Get the current value.
    Return: The value as PtpStatus
    */
    operator PtpStatus() const;
    /**
    Set the current value.
    Parameter:
        value The PtpStatus value to be written.

    Return: The CPtpStatus object
    */
    CPtpStatus& operator = (PtpStatus value);
    /**
    Set the current value.
    Parameter:
        value The PtpStatus value to be written.

    Return: The CPtpStatus object
    */
    CPtpStatus& Set(PtpStatus value);
    /**
    Get the current value.
    Return: The value as PtpStatus
    */
    PtpStatus Get() const;
};

/**
 Valid values for PtpSyncMessageIntervalStatus
 */
enum class PtpSyncMessageIntervalStatus {
    Invalid = 0,  // Sync message interval is not valid. This may result in PtpServoStatus instability.
    Valid  // Sync message interval is valid and supported by the device.
};

/**
Class to control Feature PtpSyncMessageIntervalStatus
*/
class NEOAPI_CPP_DECL CPtpSyncMessageIntervalStatus : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpSyncMessageIntervalStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpSyncMessageIntervalStatus object

    */
    CPtpSyncMessageIntervalStatus(const CPtpSyncMessageIntervalStatus& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpSyncMessageIntervalStatus() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpSyncMessageIntervalStatus object to assign.

    Return: Object reference with the value set.
    */
    const CPtpSyncMessageIntervalStatus& operator = (const CPtpSyncMessageIntervalStatus& object);
    /**
    Get the current value.
    Return: The value as PtpSyncMessageIntervalStatus
    */
    operator PtpSyncMessageIntervalStatus() const;
    /**
    Set the current value.
    Parameter:
        value The PtpSyncMessageIntervalStatus value to be written.

    Return: The CPtpSyncMessageIntervalStatus object
    */
    CPtpSyncMessageIntervalStatus& operator = (PtpSyncMessageIntervalStatus value);
    /**
    Set the current value.
    Parameter:
        value The PtpSyncMessageIntervalStatus value to be written.

    Return: The CPtpSyncMessageIntervalStatus object
    */
    CPtpSyncMessageIntervalStatus& Set(PtpSyncMessageIntervalStatus value);
    /**
    Get the current value.
    Return: The value as PtpSyncMessageIntervalStatus
    */
    PtpSyncMessageIntervalStatus Get() const;
};

/**
 Valid values for PtpTimestampOffsetMode
 */
enum class PtpTimestampOffsetMode {
    RxAndTxOffset = 0,  // Timestamp Offset will be used for both Tx and Rx.
    RxOffset,  // Timestamp Offset will be used for Rx only.
    TxOffset  // Timestamp Offset will be used for Tx only.
};

/**
Class to control Feature PtpTimestampOffsetMode
*/
class NEOAPI_CPP_DECL CPtpTimestampOffsetMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CPtpTimestampOffsetMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CPtpTimestampOffsetMode object

    */
    CPtpTimestampOffsetMode(const CPtpTimestampOffsetMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CPtpTimestampOffsetMode() {}
    /**
    Assignment operator
    Parameter:
        object The CPtpTimestampOffsetMode object to assign.

    Return: Object reference with the value set.
    */
    const CPtpTimestampOffsetMode& operator = (const CPtpTimestampOffsetMode& object);
    /**
    Get the current value.
    Return: The value as PtpTimestampOffsetMode
    */
    operator PtpTimestampOffsetMode() const;
    /**
    Set the current value.
    Parameter:
        value The PtpTimestampOffsetMode value to be written.

    Return: The CPtpTimestampOffsetMode object
    */
    CPtpTimestampOffsetMode& operator = (PtpTimestampOffsetMode value);
    /**
    Set the current value.
    Parameter:
        value The PtpTimestampOffsetMode value to be written.

    Return: The CPtpTimestampOffsetMode object
    */
    CPtpTimestampOffsetMode& Set(PtpTimestampOffsetMode value);
    /**
    Get the current value.
    Return: The value as PtpTimestampOffsetMode
    */
    PtpTimestampOffsetMode Get() const;
};

/**
 Valid values for ReadOutBuffering
 */
enum class ReadOutBuffering {
    Buffered = 0,  // Uses 4 buffers.
    BufferedImages16,  // Uses 16 buffers.
    BufferedImages8,  // Uses 8 buffers.
    Live  // Uses 2 buffers.
};

/**
Class to control Feature ReadOutBuffering
*/
class NEOAPI_CPP_DECL CReadOutBuffering : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CReadOutBuffering(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CReadOutBuffering object

    */
    CReadOutBuffering(const CReadOutBuffering& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CReadOutBuffering() {}
    /**
    Assignment operator
    Parameter:
        object The CReadOutBuffering object to assign.

    Return: Object reference with the value set.
    */
    const CReadOutBuffering& operator = (const CReadOutBuffering& object);
    /**
    Get the current value.
    Return: The value as ReadOutBuffering
    */
    operator ReadOutBuffering() const;
    /**
    Set the current value.
    Parameter:
        value The ReadOutBuffering value to be written.

    Return: The CReadOutBuffering object
    */
    CReadOutBuffering& operator = (ReadOutBuffering value);
    /**
    Set the current value.
    Parameter:
        value The ReadOutBuffering value to be written.

    Return: The CReadOutBuffering object
    */
    CReadOutBuffering& Set(ReadOutBuffering value);
    /**
    Get the current value.
    Return: The value as ReadOutBuffering
    */
    ReadOutBuffering Get() const;
};

/**
 Valid values for ReadoutMode
 */
enum class ReadoutMode {
    Overlapped = 0,  // Overlapped Readout.
    Sequential  // Sequential Readout.
};

/**
Class to control Feature ReadoutMode
*/
class NEOAPI_CPP_DECL CReadoutMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CReadoutMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CReadoutMode object

    */
    CReadoutMode(const CReadoutMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CReadoutMode() {}
    /**
    Assignment operator
    Parameter:
        object The CReadoutMode object to assign.

    Return: Object reference with the value set.
    */
    const CReadoutMode& operator = (const CReadoutMode& object);
    /**
    Get the current value.
    Return: The value as ReadoutMode
    */
    operator ReadoutMode() const;
    /**
    Set the current value.
    Parameter:
        value The ReadoutMode value to be written.

    Return: The CReadoutMode object
    */
    CReadoutMode& operator = (ReadoutMode value);
    /**
    Set the current value.
    Parameter:
        value The ReadoutMode value to be written.

    Return: The CReadoutMode object
    */
    CReadoutMode& Set(ReadoutMode value);
    /**
    Get the current value.
    Return: The value as ReadoutMode
    */
    ReadoutMode Get() const;
};

/**
 Valid values for RegionAcquisitionMode
 */
enum class RegionAcquisitionMode {
    Memory = 0,  // Regions acquisition is in memory.
    Sensor  // Regions acquisition is in sensor.
};

/**
Class to control Feature RegionAcquisitionMode
*/
class NEOAPI_CPP_DECL CRegionAcquisitionMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CRegionAcquisitionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CRegionAcquisitionMode object

    */
    CRegionAcquisitionMode(const CRegionAcquisitionMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CRegionAcquisitionMode() {}
    /**
    Assignment operator
    Parameter:
        object The CRegionAcquisitionMode object to assign.

    Return: Object reference with the value set.
    */
    const CRegionAcquisitionMode& operator = (const CRegionAcquisitionMode& object);
    /**
    Get the current value.
    Return: The value as RegionAcquisitionMode
    */
    operator RegionAcquisitionMode() const;
    /**
    Set the current value.
    Parameter:
        value The RegionAcquisitionMode value to be written.

    Return: The CRegionAcquisitionMode object
    */
    CRegionAcquisitionMode& operator = (RegionAcquisitionMode value);
    /**
    Set the current value.
    Parameter:
        value The RegionAcquisitionMode value to be written.

    Return: The CRegionAcquisitionMode object
    */
    CRegionAcquisitionMode& Set(RegionAcquisitionMode value);
    /**
    Get the current value.
    Return: The value as RegionAcquisitionMode
    */
    RegionAcquisitionMode Get() const;
};

/**
 Valid values for RegionConfigurationMode
 */
enum class RegionConfigurationMode {
    NonOverlapping = 0,  // Regions are not allowed to be overlapped.
    Overlapping  // Region can be overlapped.
};

/**
Class to control Feature RegionConfigurationMode
*/
class NEOAPI_CPP_DECL CRegionConfigurationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CRegionConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CRegionConfigurationMode object

    */
    CRegionConfigurationMode(const CRegionConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CRegionConfigurationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CRegionConfigurationMode object to assign.

    Return: Object reference with the value set.
    */
    const CRegionConfigurationMode& operator = (const CRegionConfigurationMode& object);
    /**
    Get the current value.
    Return: The value as RegionConfigurationMode
    */
    operator RegionConfigurationMode() const;
    /**
    Set the current value.
    Parameter:
        value The RegionConfigurationMode value to be written.

    Return: The CRegionConfigurationMode object
    */
    CRegionConfigurationMode& operator = (RegionConfigurationMode value);
    /**
    Set the current value.
    Parameter:
        value The RegionConfigurationMode value to be written.

    Return: The CRegionConfigurationMode object
    */
    CRegionConfigurationMode& Set(RegionConfigurationMode value);
    /**
    Get the current value.
    Return: The value as RegionConfigurationMode
    */
    RegionConfigurationMode Get() const;
};

/**
 Valid values for RegionMode
 */
enum class RegionMode {
    Off = 0,  // Disable the usage of the Region.
    On  // Enable the usage of the Region.
};

/**
Class to control Feature RegionMode
*/
class NEOAPI_CPP_DECL CRegionMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CRegionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CRegionMode object

    */
    CRegionMode(const CRegionMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CRegionMode() {}
    /**
    Assignment operator
    Parameter:
        object The CRegionMode object to assign.

    Return: Object reference with the value set.
    */
    const CRegionMode& operator = (const CRegionMode& object);
    /**
    Get the current value.
    Return: The value as RegionMode
    */
    operator RegionMode() const;
    /**
    Set the current value.
    Parameter:
        value The RegionMode value to be written.

    Return: The CRegionMode object
    */
    CRegionMode& operator = (RegionMode value);
    /**
    Set the current value.
    Parameter:
        value The RegionMode value to be written.

    Return: The CRegionMode object
    */
    CRegionMode& Set(RegionMode value);
    /**
    Get the current value.
    Return: The value as RegionMode
    */
    RegionMode Get() const;
};

/**
 Valid values for RegionSelector
 */
enum class RegionSelector {
    All = 0,  // Selected features will control all the regions at the same time.
    Region0,  // Selected feature will control the region 0.
    Region1,  // Selected feature will control the region 1.
    Region2,  // Selected feature will control the region 2.
    Region3,  // Selected feature will control the region 3.
    Region4,  // Selected feature will control the region 4.
    Region5,  // Selected feature will control the region 5.
    Region6,  // Selected feature will control the region 6.
    Region7,  // Selected feature will control the region 7.
    Scan3dExtraction0,  // Selected feature will control the Scan3dExtraction0 output Region.
    Scan3dExtraction1,  // Selected feature will control the Scan3dExtraction1 output Region.
    Scan3dExtraction2  // Selected feature will control the Scan3dExtraction2 output Region.
};

/**
Class to control Feature RegionSelector
*/
class NEOAPI_CPP_DECL CRegionSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CRegionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CRegionSelector object

    */
    CRegionSelector(const CRegionSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CRegionSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CRegionSelector object to assign.

    Return: Object reference with the value set.
    */
    const CRegionSelector& operator = (const CRegionSelector& object);
    /**
    Get the current value.
    Return: The value as RegionSelector
    */
    operator RegionSelector() const;
    /**
    Set the current value.
    Parameter:
        value The RegionSelector value to be written.

    Return: The CRegionSelector object
    */
    CRegionSelector& operator = (RegionSelector value);
    /**
    Set the current value.
    Parameter:
        value The RegionSelector value to be written.

    Return: The CRegionSelector object
    */
    CRegionSelector& Set(RegionSelector value);
    /**
    Get the current value.
    Return: The value as RegionSelector
    */
    RegionSelector Get() const;
};

/**
 Valid values for RegionTransferMode
 */
enum class RegionTransferMode {
    SeparateImages = 0,  // Each region is transfer as a separate image.
    StackedImage  // All regions are transfer as one stacked image.
};

/**
Class to control Feature RegionTransferMode
*/
class NEOAPI_CPP_DECL CRegionTransferMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CRegionTransferMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CRegionTransferMode object

    */
    CRegionTransferMode(const CRegionTransferMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CRegionTransferMode() {}
    /**
    Assignment operator
    Parameter:
        object The CRegionTransferMode object to assign.

    Return: Object reference with the value set.
    */
    const CRegionTransferMode& operator = (const CRegionTransferMode& object);
    /**
    Get the current value.
    Return: The value as RegionTransferMode
    */
    operator RegionTransferMode() const;
    /**
    Set the current value.
    Parameter:
        value The RegionTransferMode value to be written.

    Return: The CRegionTransferMode object
    */
    CRegionTransferMode& operator = (RegionTransferMode value);
    /**
    Set the current value.
    Parameter:
        value The RegionTransferMode value to be written.

    Return: The CRegionTransferMode object
    */
    CRegionTransferMode& Set(RegionTransferMode value);
    /**
    Get the current value.
    Return: The value as RegionTransferMode
    */
    RegionTransferMode Get() const;
};

/**
 Valid values for SIControl
 */
enum class SIControl {
    StreamDisabled = 0,  // Stream is disabled.
    StreamEnabled  // Stream is enabled.
};

/**
Class to control Feature SIControl
*/
class NEOAPI_CPP_DECL CSIControl : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSIControl(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSIControl object

    */
    CSIControl(const CSIControl& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSIControl() {}
    /**
    Assignment operator
    Parameter:
        object The CSIControl object to assign.

    Return: Object reference with the value set.
    */
    const CSIControl& operator = (const CSIControl& object);
    /**
    Get the current value.
    Return: The value as SIControl
    */
    operator SIControl() const;
    /**
    Set the current value.
    Parameter:
        value The SIControl value to be written.

    Return: The CSIControl object
    */
    CSIControl& operator = (SIControl value);
    /**
    Set the current value.
    Parameter:
        value The SIControl value to be written.

    Return: The CSIControl object
    */
    CSIControl& Set(SIControl value);
    /**
    Get the current value.
    Return: The value as SIControl
    */
    SIControl Get() const;
};

/**
 Valid values for SensorADDigitization
 */
enum class SensorADDigitization {
    Bpp10 = 0,  // The sensors AD digitization is 10 bit per pixel.
    Bpp12,  // The sensors AD digitization is 12 bit per pixel.
    Bpp8  // The sensors AD digitization is 8 bit per pixel.
};

/**
Class to control Feature SensorADDigitization
*/
class NEOAPI_CPP_DECL CSensorADDigitization : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSensorADDigitization(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSensorADDigitization object

    */
    CSensorADDigitization(const CSensorADDigitization& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSensorADDigitization() {}
    /**
    Assignment operator
    Parameter:
        object The CSensorADDigitization object to assign.

    Return: Object reference with the value set.
    */
    const CSensorADDigitization& operator = (const CSensorADDigitization& object);
    /**
    Get the current value.
    Return: The value as SensorADDigitization
    */
    operator SensorADDigitization() const;
    /**
    Set the current value.
    Parameter:
        value The SensorADDigitization value to be written.

    Return: The CSensorADDigitization object
    */
    CSensorADDigitization& operator = (SensorADDigitization value);
    /**
    Set the current value.
    Parameter:
        value The SensorADDigitization value to be written.

    Return: The CSensorADDigitization object
    */
    CSensorADDigitization& Set(SensorADDigitization value);
    /**
    Get the current value.
    Return: The value as SensorADDigitization
    */
    SensorADDigitization Get() const;
};

/**
 Valid values for SensorCutConfigurationMode
 */
enum class SensorCutConfigurationMode {
    Off = 0,  // Disables the sensor adjustment configuration mode.
    On  // Enables the sensor adjustment configuration mode.
};

/**
Class to control Feature SensorCutConfigurationMode
*/
class NEOAPI_CPP_DECL CSensorCutConfigurationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSensorCutConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSensorCutConfigurationMode object

    */
    CSensorCutConfigurationMode(const CSensorCutConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSensorCutConfigurationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CSensorCutConfigurationMode object to assign.

    Return: Object reference with the value set.
    */
    const CSensorCutConfigurationMode& operator = (const CSensorCutConfigurationMode& object);
    /**
    Get the current value.
    Return: The value as SensorCutConfigurationMode
    */
    operator SensorCutConfigurationMode() const;
    /**
    Set the current value.
    Parameter:
        value The SensorCutConfigurationMode value to be written.

    Return: The CSensorCutConfigurationMode object
    */
    CSensorCutConfigurationMode& operator = (SensorCutConfigurationMode value);
    /**
    Set the current value.
    Parameter:
        value The SensorCutConfigurationMode value to be written.

    Return: The CSensorCutConfigurationMode object
    */
    CSensorCutConfigurationMode& Set(SensorCutConfigurationMode value);
    /**
    Get the current value.
    Return: The value as SensorCutConfigurationMode
    */
    SensorCutConfigurationMode Get() const;
};

/**
 Valid values for SensorDigitizationTaps
 */
enum class SensorDigitizationTaps {
    Eight = 0,  // 8 taps.
    Four,  // 4 taps.
    One,  // 1 tap.
    Ten,  // 10 taps.
    Three,  // 3 taps.
    Two  // 2 taps.
};

/**
Class to control Feature SensorDigitizationTaps
*/
class NEOAPI_CPP_DECL CSensorDigitizationTaps : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSensorDigitizationTaps(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSensorDigitizationTaps object

    */
    CSensorDigitizationTaps(const CSensorDigitizationTaps& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSensorDigitizationTaps() {}
    /**
    Assignment operator
    Parameter:
        object The CSensorDigitizationTaps object to assign.

    Return: Object reference with the value set.
    */
    const CSensorDigitizationTaps& operator = (const CSensorDigitizationTaps& object);
    /**
    Get the current value.
    Return: The value as SensorDigitizationTaps
    */
    operator SensorDigitizationTaps() const;
    /**
    Set the current value.
    Parameter:
        value The SensorDigitizationTaps value to be written.

    Return: The CSensorDigitizationTaps object
    */
    CSensorDigitizationTaps& operator = (SensorDigitizationTaps value);
    /**
    Set the current value.
    Parameter:
        value The SensorDigitizationTaps value to be written.

    Return: The CSensorDigitizationTaps object
    */
    CSensorDigitizationTaps& Set(SensorDigitizationTaps value);
    /**
    Get the current value.
    Return: The value as SensorDigitizationTaps
    */
    SensorDigitizationTaps Get() const;
};

/**
 Valid values for SensorShutterMode
 */
enum class SensorShutterMode {
    Global = 0,  // The shutter opens and closes at the same time for all pixels. All the pixels are exposed for the same length of time at the same time.
    GlobalReset,  // The shutter opens at the same time for all pixels but ends in a sequential manner. The pixels are exposed for different lengths of time.
    Rolling  // The shutter opens and closes sequentially for groups (typically lines) of pixels. All the pixels are exposed for the same length of time but not at the same time.
};

/**
Class to control Feature SensorShutterMode
*/
class NEOAPI_CPP_DECL CSensorShutterMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSensorShutterMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSensorShutterMode object

    */
    CSensorShutterMode(const CSensorShutterMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSensorShutterMode() {}
    /**
    Assignment operator
    Parameter:
        object The CSensorShutterMode object to assign.

    Return: Object reference with the value set.
    */
    const CSensorShutterMode& operator = (const CSensorShutterMode& object);
    /**
    Get the current value.
    Return: The value as SensorShutterMode
    */
    operator SensorShutterMode() const;
    /**
    Set the current value.
    Parameter:
        value The SensorShutterMode value to be written.

    Return: The CSensorShutterMode object
    */
    CSensorShutterMode& operator = (SensorShutterMode value);
    /**
    Set the current value.
    Parameter:
        value The SensorShutterMode value to be written.

    Return: The CSensorShutterMode object
    */
    CSensorShutterMode& Set(SensorShutterMode value);
    /**
    Get the current value.
    Return: The value as SensorShutterMode
    */
    SensorShutterMode Get() const;
};

/**
 Valid values for SensorTaps
 */
enum class SensorTaps {
    Eight = 0,  // 8 taps.
    Four,  // 4 taps.
    One,  // 1 tap.
    Ten,  // 10 taps.
    Three,  // 3 taps.
    Two  // 2 taps.
};

/**
Class to control Feature SensorTaps
*/
class NEOAPI_CPP_DECL CSensorTaps : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSensorTaps(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSensorTaps object

    */
    CSensorTaps(const CSensorTaps& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSensorTaps() {}
    /**
    Assignment operator
    Parameter:
        object The CSensorTaps object to assign.

    Return: Object reference with the value set.
    */
    const CSensorTaps& operator = (const CSensorTaps& object);
    /**
    Get the current value.
    Return: The value as SensorTaps
    */
    operator SensorTaps() const;
    /**
    Set the current value.
    Parameter:
        value The SensorTaps value to be written.

    Return: The CSensorTaps object
    */
    CSensorTaps& operator = (SensorTaps value);
    /**
    Set the current value.
    Parameter:
        value The SensorTaps value to be written.

    Return: The CSensorTaps object
    */
    CSensorTaps& Set(SensorTaps value);
    /**
    Get the current value.
    Return: The value as SensorTaps
    */
    SensorTaps Get() const;
};

/**
 Valid values for SequencerConfigurationMode
 */
enum class SequencerConfigurationMode {
    Off = 0,  // Disables the sequencer configuration mode.
    On  // Enables the sequencer configuration mode.
};

/**
Class to control Feature SequencerConfigurationMode
*/
class NEOAPI_CPP_DECL CSequencerConfigurationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSequencerConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSequencerConfigurationMode object

    */
    CSequencerConfigurationMode(const CSequencerConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSequencerConfigurationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CSequencerConfigurationMode object to assign.

    Return: Object reference with the value set.
    */
    const CSequencerConfigurationMode& operator = (const CSequencerConfigurationMode& object);
    /**
    Get the current value.
    Return: The value as SequencerConfigurationMode
    */
    operator SequencerConfigurationMode() const;
    /**
    Set the current value.
    Parameter:
        value The SequencerConfigurationMode value to be written.

    Return: The CSequencerConfigurationMode object
    */
    CSequencerConfigurationMode& operator = (SequencerConfigurationMode value);
    /**
    Set the current value.
    Parameter:
        value The SequencerConfigurationMode value to be written.

    Return: The CSequencerConfigurationMode object
    */
    CSequencerConfigurationMode& Set(SequencerConfigurationMode value);
    /**
    Get the current value.
    Return: The value as SequencerConfigurationMode
    */
    SequencerConfigurationMode Get() const;
};

/**
 Valid values for SequencerFeatureSelector
 */
enum class SequencerFeatureSelector {
    CounterDuration = 0,  // Sets the duration (or number of events) before the CounterEnd event is generated. AVAILABLE: Always
    CounterEventActivation,  // Selects the Activation mode Event Source signal. AVAILABLE: Always
    CounterEventSource,  // Select the events that will be the source to increment the Counter. AVAILABLE: Always
    CounterResetActivation,  // Selects the Activation mode of the Counter Reset Source signal. AVAILABLE: Always
    CounterResetSource,  // Selects the signals that will be the source to reset the Counter. AVAILABLE: Always
    DeviceSpecificFeatureList,  // Device - Specific - Feature - List
    ExposureMode,  // Sets the operation mode of the Exposure (or shutter). AVAILABLE: Always
    ExposureTime,  // Returns the exposure time used to capture the image. AVAILABLE: Always
    Gain,  // Controls the selected gain as an absolute physical value. AVAILABLE: Always
    Height,  // Height of the image provided by the device (in pixels). AVAILABLE: Always
    OffsetX,  // Horizontal offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    OffsetY,  // Vertical offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    TriggerMode,  // Controls if the selected trigger is active. AVAILABLE: Always
    UserOutputValue,  // Sets the value of the bit selected by UserOutputSelector. AVAILABLE: Always
    UserOutputValueAll,  // It is subject to the UserOutputValueAllMask. AVAILABLE: Always
    Width  // Width of the image provided by the device (in pixels). AVAILABLE: Always
};

/**
Class to control Feature SequencerFeatureSelector
*/
class NEOAPI_CPP_DECL CSequencerFeatureSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSequencerFeatureSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSequencerFeatureSelector object

    */
    CSequencerFeatureSelector(const CSequencerFeatureSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSequencerFeatureSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CSequencerFeatureSelector object to assign.

    Return: Object reference with the value set.
    */
    const CSequencerFeatureSelector& operator = (const CSequencerFeatureSelector& object);
    /**
    Get the current value.
    Return: The value as SequencerFeatureSelector
    */
    operator SequencerFeatureSelector() const;
    /**
    Set the current value.
    Parameter:
        value The SequencerFeatureSelector value to be written.

    Return: The CSequencerFeatureSelector object
    */
    CSequencerFeatureSelector& operator = (SequencerFeatureSelector value);
    /**
    Set the current value.
    Parameter:
        value The SequencerFeatureSelector value to be written.

    Return: The CSequencerFeatureSelector object
    */
    CSequencerFeatureSelector& Set(SequencerFeatureSelector value);
    /**
    Get the current value.
    Return: The value as SequencerFeatureSelector
    */
    SequencerFeatureSelector Get() const;
};

/**
 Valid values for SequencerMode
 */
enum class SequencerMode {
    Off = 0,  // Disables the sequencer.
    On  // Enables the sequencer.
};

/**
Class to control Feature SequencerMode
*/
class NEOAPI_CPP_DECL CSequencerMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSequencerMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSequencerMode object

    */
    CSequencerMode(const CSequencerMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSequencerMode() {}
    /**
    Assignment operator
    Parameter:
        object The CSequencerMode object to assign.

    Return: Object reference with the value set.
    */
    const CSequencerMode& operator = (const CSequencerMode& object);
    /**
    Get the current value.
    Return: The value as SequencerMode
    */
    operator SequencerMode() const;
    /**
    Set the current value.
    Parameter:
        value The SequencerMode value to be written.

    Return: The CSequencerMode object
    */
    CSequencerMode& operator = (SequencerMode value);
    /**
    Set the current value.
    Parameter:
        value The SequencerMode value to be written.

    Return: The CSequencerMode object
    */
    CSequencerMode& Set(SequencerMode value);
    /**
    Get the current value.
    Return: The value as SequencerMode
    */
    SequencerMode Get() const;
};

/**
 Valid values for SequencerTriggerActivation
 */
enum class SequencerTriggerActivation {
    AnyEdge = 0,  // Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
    FallingEdge,  // Specifies that the trigger is considered valid on the falling edge of the source signal.
    LevelHigh,  // Specifies that the trigger is considered valid as long as the level of the source signal is high.
    LevelLow,  // Specifies that the trigger is considered valid as long as the level of the source signal is low.
    RisingEdge  // Specifies that the trigger is considered valid on the rising edge of the source signal.
};

/**
Class to control Feature SequencerTriggerActivation
*/
class NEOAPI_CPP_DECL CSequencerTriggerActivation : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSequencerTriggerActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSequencerTriggerActivation object

    */
    CSequencerTriggerActivation(const CSequencerTriggerActivation& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSequencerTriggerActivation() {}
    /**
    Assignment operator
    Parameter:
        object The CSequencerTriggerActivation object to assign.

    Return: Object reference with the value set.
    */
    const CSequencerTriggerActivation& operator = (const CSequencerTriggerActivation& object);
    /**
    Get the current value.
    Return: The value as SequencerTriggerActivation
    */
    operator SequencerTriggerActivation() const;
    /**
    Set the current value.
    Parameter:
        value The SequencerTriggerActivation value to be written.

    Return: The CSequencerTriggerActivation object
    */
    CSequencerTriggerActivation& operator = (SequencerTriggerActivation value);
    /**
    Set the current value.
    Parameter:
        value The SequencerTriggerActivation value to be written.

    Return: The CSequencerTriggerActivation object
    */
    CSequencerTriggerActivation& Set(SequencerTriggerActivation value);
    /**
    Get the current value.
    Return: The value as SequencerTriggerActivation
    */
    SequencerTriggerActivation Get() const;
};

/**
 Valid values for SequencerTriggerSource
 */
enum class SequencerTriggerSource {
    AcquisitionEnd = 0,  // Starts with the reception of the Acquisition End.
    AcquisitionStart,  // Starts with the reception of the Acquisition Start.
    AcquisitionTrigger,  // Starts with the reception of the Acquisition Trigger.
    AcquisitionTriggerMissed,  // Starts with the reception of the missed Acquisition Trigger.
    Action0,  // Starts with the assertion of the chosen action signal.
    Action1,  // Starts with the assertion of the chosen action signal.
    Action2,  // Starts with the assertion of the chosen action signal.
    CC1,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC2,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC3,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC4,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    Counter0End,  // Starts with the reception of the Counter End.
    Counter0Start,  // Starts with the reception of the Counter Start.
    Counter1End,  // Starts with the reception of the Counter End.
    Counter1Start,  // Starts with the reception of the Counter Start.
    Counter2End,  // Starts with the reception of the Counter End.
    Counter2Start,  // Starts with the reception of the Counter Start.
    Encoder0,  // Starts with the reception of the Encoder output signal.
    Encoder1,  // Starts with the reception of the Encoder output signal.
    Encoder2,  // Starts with the reception of the Encoder output signal.
    ExposureActive,  // Starts with the reception of the Exposure Active. AVAILABLE: Always
    ExposureEnd,  // Starts with the reception of the Exposure End.
    ExposureStart,  // Starts with the reception of the Exposure Start.
    FrameBurstEnd,  // Starts with the reception of the Frame Burst End.
    FrameBurstStart,  // Starts with the reception of the Frame Burst Start.
    FrameEnd,  // Starts with the reception of the Frame End.
    FrameStart,  // Starts with the reception of the Frame Start.
    FrameTrigger,  // Starts with the reception of the Frame Start Trigger.
    FrameTriggerMissed,  // Starts with the reception of the missed Frame Trigger.
    Line0,  // Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line1,  // Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line2,  // Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    LinkTrigger0,  // Starts with the reception of the chosen Link Trigger.
    LinkTrigger1,  // Starts with the reception of the chosen Link Trigger.
    LinkTrigger2,  // Starts with the reception of the chosen Link Trigger.
    LogicBlock0,  // Starts with the reception of the Logic Block output signal.
    LogicBlock1,  // Starts with the reception of the Logic Block output signal.
    LogicBlock2,  // Starts with the reception of the Logic Block output signal.
    Off,  // Disables the sequencer trigger.
    ReadOutActive,  // Starts with the reception of the Read Out Active. AVAILABLE: Always
    SoftwareSignal0,  // Starts on the reception of the Software Signal.
    SoftwareSignal1,  // Starts on the reception of the Software Signal.
    SoftwareSignal2,  // Starts on the reception of the Software Signal.
    Timer0End,  // Starts with the reception of the Timer End.
    Timer0Start,  // Starts with the reception of the Timer Start.
    Timer1End,  // Starts with the reception of the Timer End.
    Timer1Start,  // Starts with the reception of the Timer Start.
    Timer2End,  // Starts with the reception of the Timer End.
    Timer2Start,  // Starts with the reception of the Timer Start.
    UserOutput0,  // Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput1,  // Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput2  // Specifies which User Output bit signal to use as internal source for the trigger.
};

/**
Class to control Feature SequencerTriggerSource
*/
class NEOAPI_CPP_DECL CSequencerTriggerSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSequencerTriggerSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSequencerTriggerSource object

    */
    CSequencerTriggerSource(const CSequencerTriggerSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSequencerTriggerSource() {}
    /**
    Assignment operator
    Parameter:
        object The CSequencerTriggerSource object to assign.

    Return: Object reference with the value set.
    */
    const CSequencerTriggerSource& operator = (const CSequencerTriggerSource& object);
    /**
    Get the current value.
    Return: The value as SequencerTriggerSource
    */
    operator SequencerTriggerSource() const;
    /**
    Set the current value.
    Parameter:
        value The SequencerTriggerSource value to be written.

    Return: The CSequencerTriggerSource object
    */
    CSequencerTriggerSource& operator = (SequencerTriggerSource value);
    /**
    Set the current value.
    Parameter:
        value The SequencerTriggerSource value to be written.

    Return: The CSequencerTriggerSource object
    */
    CSequencerTriggerSource& Set(SequencerTriggerSource value);
    /**
    Get the current value.
    Return: The value as SequencerTriggerSource
    */
    SequencerTriggerSource Get() const;
};

/**
 Valid values for ShadingSelector
 */
enum class ShadingSelector {
    Pixel0 = 0,  // The shading port address for pixel 0 is selected.
    Pixel1  // The shading port address for pixel 1 is selected.
};

/**
Class to control Feature ShadingSelector
*/
class NEOAPI_CPP_DECL CShadingSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CShadingSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CShadingSelector object

    */
    CShadingSelector(const CShadingSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CShadingSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CShadingSelector object to assign.

    Return: Object reference with the value set.
    */
    const CShadingSelector& operator = (const CShadingSelector& object);
    /**
    Get the current value.
    Return: The value as ShadingSelector
    */
    operator ShadingSelector() const;
    /**
    Set the current value.
    Parameter:
        value The ShadingSelector value to be written.

    Return: The CShadingSelector object
    */
    CShadingSelector& operator = (ShadingSelector value);
    /**
    Set the current value.
    Parameter:
        value The ShadingSelector value to be written.

    Return: The CShadingSelector object
    */
    CShadingSelector& Set(ShadingSelector value);
    /**
    Get the current value.
    Return: The value as ShadingSelector
    */
    ShadingSelector Get() const;
};

/**
 Valid values for SharpeningMode
 */
enum class SharpeningMode {
    ActiveNoiseReduction = 0,  // Sharpening is enabled in active noise reduction mode
    AdaptiveSharpening,  // Sharpening is enabled in adaptive sharpening mode.
    GlobalSharpening,  // Sharpening is enabled in global sharpening mode.
    Off  // Sharpening is disabled.
};

/**
Class to control Feature SharpeningMode
*/
class NEOAPI_CPP_DECL CSharpeningMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSharpeningMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSharpeningMode object

    */
    CSharpeningMode(const CSharpeningMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSharpeningMode() {}
    /**
    Assignment operator
    Parameter:
        object The CSharpeningMode object to assign.

    Return: Object reference with the value set.
    */
    const CSharpeningMode& operator = (const CSharpeningMode& object);
    /**
    Get the current value.
    Return: The value as SharpeningMode
    */
    operator SharpeningMode() const;
    /**
    Set the current value.
    Parameter:
        value The SharpeningMode value to be written.

    Return: The CSharpeningMode object
    */
    CSharpeningMode& operator = (SharpeningMode value);
    /**
    Set the current value.
    Parameter:
        value The SharpeningMode value to be written.

    Return: The CSharpeningMode object
    */
    CSharpeningMode& Set(SharpeningMode value);
    /**
    Get the current value.
    Return: The value as SharpeningMode
    */
    SharpeningMode Get() const;
};

/**
 Valid values for SourceID
 */
enum class SourceID {
    Sensor1 = 0,  // Sesnor 1.
    Sensor2  // Sensor 2.
};

/**
Class to control Feature SourceID
*/
class NEOAPI_CPP_DECL CSourceID : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSourceID(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSourceID object

    */
    CSourceID(const CSourceID& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSourceID() {}
    /**
    Assignment operator
    Parameter:
        object The CSourceID object to assign.

    Return: Object reference with the value set.
    */
    const CSourceID& operator = (const CSourceID& object);
    /**
    Get the current value.
    Return: The value as SourceID
    */
    operator SourceID() const;
    /**
    Set the current value.
    Parameter:
        value The SourceID value to be written.

    Return: The CSourceID object
    */
    CSourceID& operator = (SourceID value);
    /**
    Set the current value.
    Parameter:
        value The SourceID value to be written.

    Return: The CSourceID object
    */
    CSourceID& Set(SourceID value);
    /**
    Get the current value.
    Return: The value as SourceID
    */
    SourceID Get() const;
};

/**
 Valid values for SourceSelector
 */
enum class SourceSelector {
    All = 0,  // Selects all the data sources.
    Source0,  // Selects the data source 0.
    Source1,  // Selects the data source 1.
    Source2  // Selects the data source 2.
};

/**
Class to control Feature SourceSelector
*/
class NEOAPI_CPP_DECL CSourceSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSourceSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSourceSelector object

    */
    CSourceSelector(const CSourceSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSourceSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CSourceSelector object to assign.

    Return: Object reference with the value set.
    */
    const CSourceSelector& operator = (const CSourceSelector& object);
    /**
    Get the current value.
    Return: The value as SourceSelector
    */
    operator SourceSelector() const;
    /**
    Set the current value.
    Parameter:
        value The SourceSelector value to be written.

    Return: The CSourceSelector object
    */
    CSourceSelector& operator = (SourceSelector value);
    /**
    Set the current value.
    Parameter:
        value The SourceSelector value to be written.

    Return: The CSourceSelector object
    */
    CSourceSelector& Set(SourceSelector value);
    /**
    Get the current value.
    Return: The value as SourceSelector
    */
    SourceSelector Get() const;
};

/**
 Valid values for SwitchPortSelector
 */
enum class SwitchPortSelector {
    Port0 = 0,  // Selects port 0.
    Port1,  // Selects port 1.
    Port2,  // Selects port 2.
    Port3,  // Selects port 3.
    Port4,  // Selects port 4.
    Port5  // Selects port 5.
};

/**
Class to control Feature SwitchPortSelector
*/
class NEOAPI_CPP_DECL CSwitchPortSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CSwitchPortSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CSwitchPortSelector object

    */
    CSwitchPortSelector(const CSwitchPortSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CSwitchPortSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CSwitchPortSelector object to assign.

    Return: Object reference with the value set.
    */
    const CSwitchPortSelector& operator = (const CSwitchPortSelector& object);
    /**
    Get the current value.
    Return: The value as SwitchPortSelector
    */
    operator SwitchPortSelector() const;
    /**
    Set the current value.
    Parameter:
        value The SwitchPortSelector value to be written.

    Return: The CSwitchPortSelector object
    */
    CSwitchPortSelector& operator = (SwitchPortSelector value);
    /**
    Set the current value.
    Parameter:
        value The SwitchPortSelector value to be written.

    Return: The CSwitchPortSelector object
    */
    CSwitchPortSelector& Set(SwitchPortSelector value);
    /**
    Get the current value.
    Return: The value as SwitchPortSelector
    */
    SwitchPortSelector Get() const;
};

/**
 Valid values for TestPattern
 */
enum class TestPattern {
    Black = 0,  // Image is filled with the darkest possible image.
    ColorBar,  // Image is filled with stripes of color including White, Black, Red, Green, Blue, Cyan, Magenta and Yellow.
    FrameCounter,  // A frame counter is superimposed on the live image.
    GreyDiagonalRamp,  // Image is filled diagonally with an image that goes from the darkest possible value to the brightest. AVAILABLE: Always
    GreyDiagonalRampHorizontalAndVerticalLineMoving,  // Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving horizontal and vertical lines. AVAILABLE: Always
    GreyDiagonalRampHorizontalLineMoving,  // Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving horizontal lines. AVAILABLE: Always
    GreyDiagonalRampVerticalLineMoving,  // Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving vertical lines. AVAILABLE: Always
    GreyDiagonalRampWithLineMoving,  // Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving lines. AVAILABLE: Always
    GreyHorizontalRamp,  // Image is filled horizontally with an image that goes from the darkest possible value to the brightest.
    GreyHorizontalRampHorizontalAndVerticalLineMoving,  // Image is filled horizontally with an image that goes from the darkest possible value to the brightest with moving horizontal and vertical lines. AVAILABLE: Always
    GreyHorizontalRampHorizontalLineMoving,  // Image is filled horizontally with an image that goes from the darkest possible value to the brightest with moving horizontal lines. AVAILABLE: Always
    GreyHorizontalRampMoving,  // Image is filled horizontally with an image that goes from the darkest possible value to the brightest and that moves horizontally from left to right at each frame.
    GreyHorizontalRampVerticalLineMoving,  // Image is filled horizontally with an image that goes from the darkest possible value to the brightest with moving vertical lines. AVAILABLE: Always
    GreyVerticalRamp,  // Image is filled vertically with an image that goes from the darkest possible value to the brightest.
    GreyVerticalRampHorizontalAndVerticalLineMoving,  // Image is filled vertically with an image that goes from the darkest possible value to the brightest with moving horizontal and vertical lines. AVAILABLE: Always
    GreyVerticalRampHorizontalLineMoving,  // Image is filled vertically with an image that goes from the darkest possible value to the brightest with moving horizontal lines. AVAILABLE: Always
    GreyVerticalRampMoving,  // Image is filled vertically with an image that goes from the darkest possible value to the brightest and that moves vertically from top to bottom at each frame.
    GreyVerticalRampVerticalLineMoving,  // Image is filled vertically with an image that goes from the darkest possible value to the brightest with moving vertical lines. AVAILABLE: Always
    HorizontalAndVerticalLineMoving,  // Image is filled with moving horizontal and vertical lines. AVAILABLE: Always
    HorizontalLineMoving,  // A moving horizontal line is superimposed on the live image.
    Off,  // Image is coming from the sensor.
    VerticalLineMoving,  // A moving vertical line is superimposed on the live image.
    White  // Image is filled with the brightest possible image.
};

/**
Class to control Feature TestPattern
*/
class NEOAPI_CPP_DECL CTestPattern : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTestPattern(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTestPattern object

    */
    CTestPattern(const CTestPattern& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTestPattern() {}
    /**
    Assignment operator
    Parameter:
        object The CTestPattern object to assign.

    Return: Object reference with the value set.
    */
    const CTestPattern& operator = (const CTestPattern& object);
    /**
    Get the current value.
    Return: The value as TestPattern
    */
    operator TestPattern() const;
    /**
    Set the current value.
    Parameter:
        value The TestPattern value to be written.

    Return: The CTestPattern object
    */
    CTestPattern& operator = (TestPattern value);
    /**
    Set the current value.
    Parameter:
        value The TestPattern value to be written.

    Return: The CTestPattern object
    */
    CTestPattern& Set(TestPattern value);
    /**
    Get the current value.
    Return: The value as TestPattern
    */
    TestPattern Get() const;
};

/**
 Valid values for TestPatternGeneratorSelector
 */
enum class TestPatternGeneratorSelector {
    ImageProcessor = 0,  // TestPattern feature will control the image processor. AVAILABLE: Always
    Region0,  // TestPattern feature will control the region 0 test pattern generator.
    Region1,  // TestPattern feature will control the region 1 test pattern generator.
    Region2,  // TestPattern feature will control the region 2 test pattern generator.
    Sensor,  // TestPattern feature will control the sensor's test pattern generator.
    SensorProcessor  // TestPattern feature will control the sensor processor. AVAILABLE: Always
};

/**
Class to control Feature TestPatternGeneratorSelector
*/
class NEOAPI_CPP_DECL CTestPatternGeneratorSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTestPatternGeneratorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTestPatternGeneratorSelector object

    */
    CTestPatternGeneratorSelector(const CTestPatternGeneratorSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTestPatternGeneratorSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CTestPatternGeneratorSelector object to assign.

    Return: Object reference with the value set.
    */
    const CTestPatternGeneratorSelector& operator = (const CTestPatternGeneratorSelector& object);
    /**
    Get the current value.
    Return: The value as TestPatternGeneratorSelector
    */
    operator TestPatternGeneratorSelector() const;
    /**
    Set the current value.
    Parameter:
        value The TestPatternGeneratorSelector value to be written.

    Return: The CTestPatternGeneratorSelector object
    */
    CTestPatternGeneratorSelector& operator = (TestPatternGeneratorSelector value);
    /**
    Set the current value.
    Parameter:
        value The TestPatternGeneratorSelector value to be written.

    Return: The CTestPatternGeneratorSelector object
    */
    CTestPatternGeneratorSelector& Set(TestPatternGeneratorSelector value);
    /**
    Get the current value.
    Return: The value as TestPatternGeneratorSelector
    */
    TestPatternGeneratorSelector Get() const;
};

/**
 Valid values for TestPayloadFormatMode
 */
enum class TestPayloadFormatMode {
    GenDC = 0,  // The device streams data using GenDC payload format with at least one component in each payload. This option must be present if the device supports the GenDC payload format.
    MultiPart,  // The device streams data using multi-part payload format with at least one part in each payload. This option must be present if and only if the device supports the multi-part payload format.
    Off  // The test mode is disabled. This feature has no effect and the device is streaming data normally according to its configuration. This option has to be the default after each boot of the device.
};

/**
Class to control Feature TestPayloadFormatMode
*/
class NEOAPI_CPP_DECL CTestPayloadFormatMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTestPayloadFormatMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTestPayloadFormatMode object

    */
    CTestPayloadFormatMode(const CTestPayloadFormatMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTestPayloadFormatMode() {}
    /**
    Assignment operator
    Parameter:
        object The CTestPayloadFormatMode object to assign.

    Return: Object reference with the value set.
    */
    const CTestPayloadFormatMode& operator = (const CTestPayloadFormatMode& object);
    /**
    Get the current value.
    Return: The value as TestPayloadFormatMode
    */
    operator TestPayloadFormatMode() const;
    /**
    Set the current value.
    Parameter:
        value The TestPayloadFormatMode value to be written.

    Return: The CTestPayloadFormatMode object
    */
    CTestPayloadFormatMode& operator = (TestPayloadFormatMode value);
    /**
    Set the current value.
    Parameter:
        value The TestPayloadFormatMode value to be written.

    Return: The CTestPayloadFormatMode object
    */
    CTestPayloadFormatMode& Set(TestPayloadFormatMode value);
    /**
    Get the current value.
    Return: The value as TestPayloadFormatMode
    */
    TestPayloadFormatMode Get() const;
};

/**
 Valid values for TimerSelector
 */
enum class TimerSelector {
    Timer0 = 0,  // Selects the Timer 0.
    Timer1,  // Selects the Timer 1.
    Timer2,  // Selects the Timer 2.
    Timer3  // Selects the Timer 3. AVAILABLE: Always
};

/**
Class to control Feature TimerSelector
*/
class NEOAPI_CPP_DECL CTimerSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTimerSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTimerSelector object

    */
    CTimerSelector(const CTimerSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTimerSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CTimerSelector object to assign.

    Return: Object reference with the value set.
    */
    const CTimerSelector& operator = (const CTimerSelector& object);
    /**
    Get the current value.
    Return: The value as TimerSelector
    */
    operator TimerSelector() const;
    /**
    Set the current value.
    Parameter:
        value The TimerSelector value to be written.

    Return: The CTimerSelector object
    */
    CTimerSelector& operator = (TimerSelector value);
    /**
    Set the current value.
    Parameter:
        value The TimerSelector value to be written.

    Return: The CTimerSelector object
    */
    CTimerSelector& Set(TimerSelector value);
    /**
    Get the current value.
    Return: The value as TimerSelector
    */
    TimerSelector Get() const;
};

/**
 Valid values for TimerTriggerActivation
 */
enum class TimerTriggerActivation {
    AnyEdge = 0,  // Starts counting on the Falling or Rising Edge of the selected trigger signal.
    FallingEdge,  // Starts counting on the Falling Edge of the selected trigger signal.
    LevelHigh,  // Counts as long as the selected trigger signal level is High.
    LevelLow,  // Counts as long as the selected trigger signal level is Low.
    RisingEdge  // Starts counting on the Rising Edge of the selected trigger signal.
};

/**
Class to control Feature TimerTriggerActivation
*/
class NEOAPI_CPP_DECL CTimerTriggerActivation : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTimerTriggerActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTimerTriggerActivation object

    */
    CTimerTriggerActivation(const CTimerTriggerActivation& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTimerTriggerActivation() {}
    /**
    Assignment operator
    Parameter:
        object The CTimerTriggerActivation object to assign.

    Return: Object reference with the value set.
    */
    const CTimerTriggerActivation& operator = (const CTimerTriggerActivation& object);
    /**
    Get the current value.
    Return: The value as TimerTriggerActivation
    */
    operator TimerTriggerActivation() const;
    /**
    Set the current value.
    Parameter:
        value The TimerTriggerActivation value to be written.

    Return: The CTimerTriggerActivation object
    */
    CTimerTriggerActivation& operator = (TimerTriggerActivation value);
    /**
    Set the current value.
    Parameter:
        value The TimerTriggerActivation value to be written.

    Return: The CTimerTriggerActivation object
    */
    CTimerTriggerActivation& Set(TimerTriggerActivation value);
    /**
    Get the current value.
    Return: The value as TimerTriggerActivation
    */
    TimerTriggerActivation Get() const;
};

/**
 Valid values for TimerTriggerSource
 */
enum class TimerTriggerSource {
    AcquisitionEnd = 0,  // Starts with the reception of the Acquisition End.
    AcquisitionStart,  // Starts with the reception of the Acquisition Start.
    AcquisitionTrigger,  // Starts with the reception of the Acquisition Trigger.
    AcquisitionTriggerMissed,  // Starts with the reception of a missed Acquisition Trigger.
    Action0,  // Starts with the assertion of the chosen action signal.
    Action1,  // Starts with the assertion of the chosen action signal.
    Action2,  // Starts with the assertion of the chosen action signal.
    Counter0End,  // Starts with the reception of the Counter End.
    Counter0Start,  // Starts with the reception of the Counter Start.
    Counter1End,  // Starts with the reception of the Counter End.
    Counter1Start,  // Starts with the reception of the Counter Start.
    Counter2End,  // Starts with the reception of the Counter End.
    Counter2Start,  // Starts with the reception of the Counter Start.
    Encoder0,  // Starts with the reception of the Encoder output signal.
    Encoder1,  // Starts with the reception of the Encoder output signal.
    Encoder2,  // Starts with the reception of the Encoder output signal.
    ExposureEnd,  // Starts with the reception of the Exposure End.
    ExposureStart,  // Starts with the reception of the Exposure Start.
    FrameBurstEnd,  // Starts with the reception of the Frame Burst End.
    FrameBurstStart,  // Starts with the reception of the Frame Burst Start.
    FrameEnd,  // Starts with the reception of the Frame End.
    FrameStart,  // Starts with the reception of the Frame Start.
    FrameTransferSkipped,  // FrameTransferSkipped AVAILABLE: Always
    FrameTrigger,  // Starts with the reception of the Frame Start Trigger.
    FrameTriggerMissed,  // Starts with the reception of a missed Frame Trigger.
    Line0,  // Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line1,  // Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line2,  // Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    LineEnd,  // Starts with the reception of the Line End.
    LineStart,  // Starts with the reception of the Line Start.
    LineTrigger,  // Starts with the reception of the Line Start Trigger.
    LineTriggerMissed,  // Starts with the reception of a missed Line Trigger.
    LinkTrigger0,  // Starts with the reception of the chosen Link Trigger.
    LinkTrigger1,  // Starts with the reception of the chosen Link Trigger.
    LinkTrigger2,  // Starts with the reception of the chosen Link Trigger.
    LogicBlock0,  // Starts with the reception of the Logic Block output signal.
    LogicBlock1,  // Starts with the reception of the Logic Block output signal.
    LogicBlock2,  // Starts with the reception of the Logic Block output signal.
    Off,  // Disables the Timer trigger.
    Software,  // Starts when the trigger was generated by the software. AVAILABLE: Always
    SoftwareSignal0,  // Starts on the reception of the Software Signal.
    SoftwareSignal1,  // Starts on the reception of the Software Signal.
    SoftwareSignal2,  // Starts on the reception of the Software Signal.
    Timer0End,  // Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
    Timer0Start,  // Starts with the reception of the Timer Start.
    Timer1End,  // Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
    Timer1Start,  // Starts with the reception of the Timer Start.
    Timer2End,  // Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
    Timer2Start,  // Starts with the reception of the Timer Start.
    TriggerSkipped,  // Starts when a trigger was skipped. AVAILABLE: Always
    UserOutput0,  // Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput1,  // Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput2  // Specifies which User Output bit signal to use as internal source for the trigger.
};

/**
Class to control Feature TimerTriggerSource
*/
class NEOAPI_CPP_DECL CTimerTriggerSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTimerTriggerSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTimerTriggerSource object

    */
    CTimerTriggerSource(const CTimerTriggerSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTimerTriggerSource() {}
    /**
    Assignment operator
    Parameter:
        object The CTimerTriggerSource object to assign.

    Return: Object reference with the value set.
    */
    const CTimerTriggerSource& operator = (const CTimerTriggerSource& object);
    /**
    Get the current value.
    Return: The value as TimerTriggerSource
    */
    operator TimerTriggerSource() const;
    /**
    Set the current value.
    Parameter:
        value The TimerTriggerSource value to be written.

    Return: The CTimerTriggerSource object
    */
    CTimerTriggerSource& operator = (TimerTriggerSource value);
    /**
    Set the current value.
    Parameter:
        value The TimerTriggerSource value to be written.

    Return: The CTimerTriggerSource object
    */
    CTimerTriggerSource& Set(TimerTriggerSource value);
    /**
    Get the current value.
    Return: The value as TimerTriggerSource
    */
    TimerTriggerSource Get() const;
};

/**
 Valid values for TransferControlMode
 */
enum class TransferControlMode {
    Automatic = 0,  // Automatic
    Basic,  // Basic
    UserControlled  // User Controlled
};

/**
Class to control Feature TransferControlMode
*/
class NEOAPI_CPP_DECL CTransferControlMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTransferControlMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTransferControlMode object

    */
    CTransferControlMode(const CTransferControlMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTransferControlMode() {}
    /**
    Assignment operator
    Parameter:
        object The CTransferControlMode object to assign.

    Return: Object reference with the value set.
    */
    const CTransferControlMode& operator = (const CTransferControlMode& object);
    /**
    Get the current value.
    Return: The value as TransferControlMode
    */
    operator TransferControlMode() const;
    /**
    Set the current value.
    Parameter:
        value The TransferControlMode value to be written.

    Return: The CTransferControlMode object
    */
    CTransferControlMode& operator = (TransferControlMode value);
    /**
    Set the current value.
    Parameter:
        value The TransferControlMode value to be written.

    Return: The CTransferControlMode object
    */
    CTransferControlMode& Set(TransferControlMode value);
    /**
    Get the current value.
    Return: The value as TransferControlMode
    */
    TransferControlMode Get() const;
};

/**
 Valid values for TransferOperationMode
 */
enum class TransferOperationMode {
    Continuous = 0,  // Continuous
    MultiBlock  // Multi Block
};

/**
Class to control Feature TransferOperationMode
*/
class NEOAPI_CPP_DECL CTransferOperationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTransferOperationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTransferOperationMode object

    */
    CTransferOperationMode(const CTransferOperationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTransferOperationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CTransferOperationMode object to assign.

    Return: Object reference with the value set.
    */
    const CTransferOperationMode& operator = (const CTransferOperationMode& object);
    /**
    Get the current value.
    Return: The value as TransferOperationMode
    */
    operator TransferOperationMode() const;
    /**
    Set the current value.
    Parameter:
        value The TransferOperationMode value to be written.

    Return: The CTransferOperationMode object
    */
    CTransferOperationMode& operator = (TransferOperationMode value);
    /**
    Set the current value.
    Parameter:
        value The TransferOperationMode value to be written.

    Return: The CTransferOperationMode object
    */
    CTransferOperationMode& Set(TransferOperationMode value);
    /**
    Get the current value.
    Return: The value as TransferOperationMode
    */
    TransferOperationMode Get() const;
};

/**
 Valid values for TransferSelector
 */
enum class TransferSelector {
    All = 0,  // The transfer features control all the data streams simultaneously.
    Stream0,  // The transfer features control the data stream 0.
    Stream1,  // The transfer features control the data stream 1.
    Stream2,  // The transfer features control the data stream 2.
    Stream3,  // The transfer features control the data stream 3, used for memory part 3. AVAILABLE: Always
    Stream4  // The transfer features control the data stream 4, used for memory part 4. AVAILABLE: Always
};

/**
Class to control Feature TransferSelector
*/
class NEOAPI_CPP_DECL CTransferSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTransferSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTransferSelector object

    */
    CTransferSelector(const CTransferSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTransferSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CTransferSelector object to assign.

    Return: Object reference with the value set.
    */
    const CTransferSelector& operator = (const CTransferSelector& object);
    /**
    Get the current value.
    Return: The value as TransferSelector
    */
    operator TransferSelector() const;
    /**
    Set the current value.
    Parameter:
        value The TransferSelector value to be written.

    Return: The CTransferSelector object
    */
    CTransferSelector& operator = (TransferSelector value);
    /**
    Set the current value.
    Parameter:
        value The TransferSelector value to be written.

    Return: The CTransferSelector object
    */
    CTransferSelector& Set(TransferSelector value);
    /**
    Get the current value.
    Return: The value as TransferSelector
    */
    TransferSelector Get() const;
};

/**
 Valid values for TransferStatusSelector
 */
enum class TransferStatusSelector {
    Paused = 0,  // Data blocks transmission is suspended immediately.
    QueueOverflow,  // Data blocks queue is in overflow state.
    Stopped,  // Data blocks transmission is stopped.
    Stopping,  // Data blocks transmission is stopping. The current block transmission will be completed and the transfer state will stop.
    Streaming  // Data blocks are transmitted when enough data is available.
};

/**
Class to control Feature TransferStatusSelector
*/
class NEOAPI_CPP_DECL CTransferStatusSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTransferStatusSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTransferStatusSelector object

    */
    CTransferStatusSelector(const CTransferStatusSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTransferStatusSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CTransferStatusSelector object to assign.

    Return: Object reference with the value set.
    */
    const CTransferStatusSelector& operator = (const CTransferStatusSelector& object);
    /**
    Get the current value.
    Return: The value as TransferStatusSelector
    */
    operator TransferStatusSelector() const;
    /**
    Set the current value.
    Parameter:
        value The TransferStatusSelector value to be written.

    Return: The CTransferStatusSelector object
    */
    CTransferStatusSelector& operator = (TransferStatusSelector value);
    /**
    Set the current value.
    Parameter:
        value The TransferStatusSelector value to be written.

    Return: The CTransferStatusSelector object
    */
    CTransferStatusSelector& Set(TransferStatusSelector value);
    /**
    Get the current value.
    Return: The value as TransferStatusSelector
    */
    TransferStatusSelector Get() const;
};

/**
 Valid values for TriggerActivation
 */
enum class TriggerActivation {
    AnyEdge = 0,  // Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
    FallingEdge,  // Specifies that the trigger is considered valid on the falling edge of the source signal.
    LevelHigh,  // Specifies that the trigger is considered valid as long as the level of the source signal is high.
    LevelLow,  // Specifies that the trigger is considered valid as long as the level of the source signal is low.
    RisingEdge  // Specifies that the trigger is considered valid on the rising edge of the source signal.
};

/**
Class to control Feature TriggerActivation
*/
class NEOAPI_CPP_DECL CTriggerActivation : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTriggerActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTriggerActivation object

    */
    CTriggerActivation(const CTriggerActivation& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTriggerActivation() {}
    /**
    Assignment operator
    Parameter:
        object The CTriggerActivation object to assign.

    Return: Object reference with the value set.
    */
    const CTriggerActivation& operator = (const CTriggerActivation& object);
    /**
    Get the current value.
    Return: The value as TriggerActivation
    */
    operator TriggerActivation() const;
    /**
    Set the current value.
    Parameter:
        value The TriggerActivation value to be written.

    Return: The CTriggerActivation object
    */
    CTriggerActivation& operator = (TriggerActivation value);
    /**
    Set the current value.
    Parameter:
        value The TriggerActivation value to be written.

    Return: The CTriggerActivation object
    */
    CTriggerActivation& Set(TriggerActivation value);
    /**
    Get the current value.
    Return: The value as TriggerActivation
    */
    TriggerActivation Get() const;
};

/**
 Valid values for TriggerMode
 */
enum class TriggerMode {
    Off = 0,  // Disables the selected trigger.
    On  // Enable the selected trigger.
};

/**
Class to control Feature TriggerMode
*/
class NEOAPI_CPP_DECL CTriggerMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTriggerMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTriggerMode object

    */
    CTriggerMode(const CTriggerMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTriggerMode() {}
    /**
    Assignment operator
    Parameter:
        object The CTriggerMode object to assign.

    Return: Object reference with the value set.
    */
    const CTriggerMode& operator = (const CTriggerMode& object);
    /**
    Get the current value.
    Return: The value as TriggerMode
    */
    operator TriggerMode() const;
    /**
    Set the current value.
    Parameter:
        value The TriggerMode value to be written.

    Return: The CTriggerMode object
    */
    CTriggerMode& operator = (TriggerMode value);
    /**
    Set the current value.
    Parameter:
        value The TriggerMode value to be written.

    Return: The CTriggerMode object
    */
    CTriggerMode& Set(TriggerMode value);
    /**
    Get the current value.
    Return: The value as TriggerMode
    */
    TriggerMode Get() const;
};

/**
 Valid values for TriggerOverlap
 */
enum class TriggerOverlap {
    Off = 0,  // No trigger overlap is permitted.
    PreviousFrame,  // Trigger is accepted (latched) at any time during the capture of the previous frame.
    PreviousLine,  // Trigger is accepted (latched) at any time during the capture of the previous line.
    ReadOut  // Trigger is accepted immediately after the exposure period.
};

/**
Class to control Feature TriggerOverlap
*/
class NEOAPI_CPP_DECL CTriggerOverlap : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTriggerOverlap(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTriggerOverlap object

    */
    CTriggerOverlap(const CTriggerOverlap& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTriggerOverlap() {}
    /**
    Assignment operator
    Parameter:
        object The CTriggerOverlap object to assign.

    Return: Object reference with the value set.
    */
    const CTriggerOverlap& operator = (const CTriggerOverlap& object);
    /**
    Get the current value.
    Return: The value as TriggerOverlap
    */
    operator TriggerOverlap() const;
    /**
    Set the current value.
    Parameter:
        value The TriggerOverlap value to be written.

    Return: The CTriggerOverlap object
    */
    CTriggerOverlap& operator = (TriggerOverlap value);
    /**
    Set the current value.
    Parameter:
        value The TriggerOverlap value to be written.

    Return: The CTriggerOverlap object
    */
    CTriggerOverlap& Set(TriggerOverlap value);
    /**
    Get the current value.
    Return: The value as TriggerOverlap
    */
    TriggerOverlap Get() const;
};

/**
 Valid values for TriggerSelector
 */
enum class TriggerSelector {
    AcquisitionActive = 0,  // Selects a trigger that controls the duration of the Acquisition of one or many frames. The Acquisition is activated when the trigger signal becomes active and terminated when it goes back to the inactive state.
    AcquisitionEnd,  // Selects a trigger that ends the Acquisition of one or many frames according to AcquisitionMode.
    AcquisitionStart,  // Selects a trigger that starts the Acquisition of one or many frames according to AcquisitionMode.
    ExposureActive,  // Selects a trigger controlling the duration of the exposure of one frame (or Line).
    ExposureEnd,  // Selects a trigger controlling the end of the exposure of one Frame (or Line).
    ExposureStart,  // Selects a trigger controlling the start of the exposure of one Frame (or Line).
    FrameActive,  // Selects a trigger controlling the duration of one frame (mainly used in linescan mode).
    FrameBurstActive,  // Selects a trigger controlling the duration of the capture of the bursts of frames in an acquisition.
    FrameBurstEnd,  // Selects a trigger ending the capture of the bursts of frames in an acquisition.
    FrameBurstStart,  // Selects a trigger starting the capture of the bursts of frames in an acquisition. AcquisitionBurstFrameCount controls the length of each burst unless a FrameBurstEnd trigger is active. The total number of frames captured is also conditioned by AcquisitionFrameCount if AcquisitionMode is MultiFrame.
    FrameEnd,  // Selects a trigger ending the capture of one frame (mainly used in linescan mode).
    FrameStart,  // Selects a trigger starting the capture of one frame.
    LineStart,  // Selects a trigger starting the capture of one Line of a Frame (mainly used in linescan mode).
    MultiSlopeExposureLimit1  // Selects a trigger controlling the first duration of a multi-slope exposure. Exposure is continued according to the pre-defined multi-slope settings.
};

/**
Class to control Feature TriggerSelector
*/
class NEOAPI_CPP_DECL CTriggerSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTriggerSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTriggerSelector object

    */
    CTriggerSelector(const CTriggerSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTriggerSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CTriggerSelector object to assign.

    Return: Object reference with the value set.
    */
    const CTriggerSelector& operator = (const CTriggerSelector& object);
    /**
    Get the current value.
    Return: The value as TriggerSelector
    */
    operator TriggerSelector() const;
    /**
    Set the current value.
    Parameter:
        value The TriggerSelector value to be written.

    Return: The CTriggerSelector object
    */
    CTriggerSelector& operator = (TriggerSelector value);
    /**
    Set the current value.
    Parameter:
        value The TriggerSelector value to be written.

    Return: The CTriggerSelector object
    */
    CTriggerSelector& Set(TriggerSelector value);
    /**
    Get the current value.
    Return: The value as TriggerSelector
    */
    TriggerSelector Get() const;
};

/**
 Valid values for TriggerSource
 */
enum class TriggerSource {
    Action0 = 0,  // Specifies which Action command to use as internal source for the trigger.
    Action1,  // Specifies which Action command to use as internal source for the trigger.
    Action2,  // Specifies which Action command to use as internal source for the trigger.
    All,  // All trigger sources are active. AVAILABLE: (ExposureMode != TriggerWidth)
    CC1,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC2,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC3,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC4,  // Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    Counter0End,  // Specifies which of the Counter signal to use as internal source for the trigger.
    Counter0Start,  // Specifies which of the Counter signal to use as internal source for the trigger.
    Counter1End,  // Specifies which of the Counter signal to use as internal source for the trigger.
    Counter1Start,  // Specifies which of the Counter signal to use as internal source for the trigger.
    Counter2End,  // Specifies which of the Counter signal to use as internal source for the trigger.
    Counter2Start,  // Specifies which of the Counter signal to use as internal source for the trigger.
    Encoder0,  // Specifies which Encoder signal to use as internal source for the trigger.
    Encoder1,  // Specifies which Encoder signal to use as internal source for the trigger.
    Encoder2,  // Specifies which Encoder signal to use as internal source for the trigger.
    Line0,  // Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
    Line1,  // Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
    Line2,  // Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
    Line3,  // Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal. AVAILABLE: Always
    LinkTrigger0,  // Specifies which Link Trigger to use as source for the trigger (received from the transport layer).
    LinkTrigger1,  // Specifies which Link Trigger to use as source for the trigger (received from the transport layer).
    LinkTrigger2,  // Specifies which Link Trigger to use as source for the trigger (received from the transport layer).
    LogicBlock0,  // Specifies which Logic Block signal to use as internal source for the trigger.
    LogicBlock1,  // Specifies which Logic Block signal to use as internal source for the trigger.
    LogicBlock2,  // Specifies which Logic Block signal to use as internal source for the trigger.
    Off,  // No trigger source is active. AVAILABLE: (ExposureMode = Timed)
    Software,  // Specifies that the trigger source will be generated by software using the TriggerSoftware command.
    SoftwareSignal0,  // Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
    SoftwareSignal1,  // Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
    SoftwareSignal2,  // Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
    Timer0End,  // Specifies which Timer signal to use as internal source for the trigger.
    Timer0Start,  // Specifies which Timer signal to use as internal source for the trigger.
    Timer1End,  // Specifies which Timer signal to use as internal source for the trigger.
    Timer1Start,  // Specifies which Timer signal to use as internal source for the trigger.
    Timer2End,  // Specifies which Timer signal to use as internal source for the trigger.
    Timer2Start,  // Specifies which Timer signal to use as internal source for the trigger.
    UserOutput0,  // Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput1,  // Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput2  // Specifies which User Output bit signal to use as internal source for the trigger.
};

/**
Class to control Feature TriggerSource
*/
class NEOAPI_CPP_DECL CTriggerSource : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CTriggerSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CTriggerSource object

    */
    CTriggerSource(const CTriggerSource& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CTriggerSource() {}
    /**
    Assignment operator
    Parameter:
        object The CTriggerSource object to assign.

    Return: Object reference with the value set.
    */
    const CTriggerSource& operator = (const CTriggerSource& object);
    /**
    Get the current value.
    Return: The value as TriggerSource
    */
    operator TriggerSource() const;
    /**
    Set the current value.
    Parameter:
        value The TriggerSource value to be written.

    Return: The CTriggerSource object
    */
    CTriggerSource& operator = (TriggerSource value);
    /**
    Set the current value.
    Parameter:
        value The TriggerSource value to be written.

    Return: The CTriggerSource object
    */
    CTriggerSource& Set(TriggerSource value);
    /**
    Get the current value.
    Return: The value as TriggerSource
    */
    TriggerSource Get() const;
};

/**
 Valid values for UserOutputSelector
 */
enum class UserOutputSelector {
    UserOutput0 = 0,  // Selects the bit 0 of the User Output register.
    UserOutput1,  // Selects the bit 1 of the User Output register.
    UserOutput2,  // Selects the bit 2 of the User Output register.
    UserOutput3,  // Selects the bit 2 of the User Output register. AVAILABLE: Always
    UserOutput4  // Selects the bit 3 of the User Output register. AVAILABLE: Always
};

/**
Class to control Feature UserOutputSelector
*/
class NEOAPI_CPP_DECL CUserOutputSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CUserOutputSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CUserOutputSelector object

    */
    CUserOutputSelector(const CUserOutputSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CUserOutputSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CUserOutputSelector object to assign.

    Return: Object reference with the value set.
    */
    const CUserOutputSelector& operator = (const CUserOutputSelector& object);
    /**
    Get the current value.
    Return: The value as UserOutputSelector
    */
    operator UserOutputSelector() const;
    /**
    Set the current value.
    Parameter:
        value The UserOutputSelector value to be written.

    Return: The CUserOutputSelector object
    */
    CUserOutputSelector& operator = (UserOutputSelector value);
    /**
    Set the current value.
    Parameter:
        value The UserOutputSelector value to be written.

    Return: The CUserOutputSelector object
    */
    CUserOutputSelector& Set(UserOutputSelector value);
    /**
    Get the current value.
    Return: The value as UserOutputSelector
    */
    UserOutputSelector Get() const;
};

/**
 Valid values for UserSetDefault
 */
enum class UserSetDefault {
    Default = 0,  // Select the factory setting user set.
    UserSet0,  // Select the user set 0.
    UserSet1,  // Select the user set 1.
    UserSet2,  // Select the user set 2. AVAILABLE: (UserSet2 was saved before)
    UserSet3  // Select the user set 3. AVAILABLE: (UserSet3 was saved before)
};

/**
Class to control Feature UserSetDefault
*/
class NEOAPI_CPP_DECL CUserSetDefault : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CUserSetDefault(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CUserSetDefault object

    */
    CUserSetDefault(const CUserSetDefault& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CUserSetDefault() {}
    /**
    Assignment operator
    Parameter:
        object The CUserSetDefault object to assign.

    Return: Object reference with the value set.
    */
    const CUserSetDefault& operator = (const CUserSetDefault& object);
    /**
    Get the current value.
    Return: The value as UserSetDefault
    */
    operator UserSetDefault() const;
    /**
    Set the current value.
    Parameter:
        value The UserSetDefault value to be written.

    Return: The CUserSetDefault object
    */
    CUserSetDefault& operator = (UserSetDefault value);
    /**
    Set the current value.
    Parameter:
        value The UserSetDefault value to be written.

    Return: The CUserSetDefault object
    */
    CUserSetDefault& Set(UserSetDefault value);
    /**
    Get the current value.
    Return: The value as UserSetDefault
    */
    UserSetDefault Get() const;
};

/**
 Valid values for UserSetFeatureSelector
 */
enum class UserSetFeatureSelector {
    AcquisitionFrameCount = 0,  // Number of frames to acquire in MultiFrame Acquisition mode. AVAILABLE: Always.
    AcquisitionFrameRate,  // Controls the acquisition rate (in Hertz) at which the frames are captured. AVAILABLE: Always
    AcquisitionFrameRateEnable,  // Controls if the AcquisitionFrameRate feature is writable and used to control the acquisition rate. AVAILABLE: Always
    AcquisitionMode,  // Sets the acquisition mode of the device. It defines mainly the number of frames to capture during an acquisition and the way the acquisition stops. AVAILABLE: Always
    ActionDeviceKey,  // Provides the device key that allows the device to check the validity of action commands. The device internal assertion of an action signal is only authorized if the ActionDeviceKey and the action device key value in the protocol message are equal. AVAILABLE: Always
    ActionGroupKey,  // Provides the key that the device will use to validate the action on reception of the action protocol message. AVAILABLE: Always
    ActionGroupMask,  // Provides the mask that the device will use to validate the action on reception of the action protocol message. AVAILABLE: Always
    AutoFeatureHeight,  // Height of the selected Auto Feature Region (in pixels). AVAILABLE: Always.
    AutoFeatureOffsetX,  // Horizontal offset from the origin to the Auto Feature Region (in pixels). AVAILABLE: Always.
    AutoFeatureOffsetY,  // Vertical offset from the origin to the Auto Feature Region (in pixels). AVAILABLE: Always.
    AutoFeatureRegionMode,  // Controls the mode of the selected Auto Feature Region. AVAILABLE: Always.
    AutoFeatureRegionReference,  // The Reference Region of interest. The Auto Feature Region is part of this region and all Auto Feature Region features are refs to this Reference Region. AVAILABLE: Always.
    AutoFeatureWidth,  // Width of the selected Auto Feature Region (in pixels). AVAILABLE: Always.
    BOPFShift,  // Shift Factor for 8bit pixel format caculated from 12 bit mode. AVAILABLE: Always.
    BalanceWhiteAuto,  // Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted. AVAILABLE: Always.
    BinningHorizontal,  // Number of horizontal photo-sensitive cells to combine together. AVAILABLE: Always
    BinningHorizontalMode,  // Sets the mode to use to combine horizontal photo-sensitive cells together when BinningHorizontal is used. AVAILABLE: Always
    BinningVertical,  // Number of vertical photo-sensitive cells to combine together. AVAILABLE: Always
    BinningVerticalMode,  // Sets the mode used to combine horizontal photo-sensitive cells together when BinningVertical is used. AVAILABLE: Always
    BlackLevel,  // Controls the analog black level as an absolute physical value. AVAILABLE: Always
    BrightnessAutoNominalValue,  // Sets the nominal value for brightness in percent of full scale. It will be adjust with consider the setting in BrightnessAutoPriority. AVAILABLE: Always.
    BrightnessAutoPriority,  // The feature set the highest priority auto feature to adjust the brightness. AVAILABLE: Always.
    ChunkEnable,  // Enables the inclusion of the selected Chunk data in the payload of the image. AVAILABLE: Always
    ChunkModeActive,  // Activates the inclusion of Chunk data in the payload of the image. AVAILABLE: Always
    ColorTransformationAuto,  // Controls the mode for automatic adjusting the gains of the active transformation matrix. AVAILABLE: Always.
    ColorTransformationValue,  // Represents the value of the selected Gain factor or Offset inside the Transformation matrix. AVAILABLE: Always.
    CounterDuration,  // Sets the duration (or number of events) before the CounterEnd event is generated. AVAILABLE: Always
    CounterEventActivation,  // Selects the Activation mode Event Source signal. AVAILABLE: Always
    CounterEventSource,  // Select the events that will be the source to increment the Counter. AVAILABLE: Always
    CounterResetActivation,  // Selects the Activation mode of the Counter Reset Source signal. AVAILABLE: Always
    CounterResetSource,  // Selects the signals that will be the source to reset the Counter. AVAILABLE: Always
    DefectPixelCorrection,  // Enable the correction of defect pixels. AVAILABLE: Always
    DeviceLinkThroughputLimit,  // Limits the maximum bandwidth of the data that will be streamed out by the device on the selected Link. If necessary, delays will be uniformly inserted between transport layer packets in order to control the peak bandwidth. AVAILABLE: Always
    DeviceSpecificFeatureList,  // Device - Specific - Feature - List
    DeviceTemperatureStatusTransition,  // Temperature threshold for selected status transition in degrees Celsius (C). AVAILABLE: Always
    EventNotification,  // Activate or deactivate the notification to the host application of the occurrence of the selected Event. AVAILABLE: Always
    ExposureAuto,  // Sets the automatic exposure mode when ExposureMode is Timed. The exact algorithm used to implement this control is device-specific. AVAILABLE: Always.
    ExposureAutoMaxValue,  // Maximal value of ExposureTime calculable by exposure auto algorithm. AVAILABLE: Always.
    ExposureAutoMinValue,  // Minimal value of ExposureTime calculable by exposure auto algorithm. AVAILABLE: Always.
    ExposureMode,  // Sets the operation mode of the Exposure (or shutter). AVAILABLE: Always
    ExposureTime,  // Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off. This controls the duration where the photosensitive cells are exposed to light. AVAILABLE: Always
    FixedPatternNoiseCorrection,  // Fixed pattern noise correction. AVAILABLE: Always
    FrameCounter,  // Sets the frame counter, which is part of the chunk data too. AVAILABLE: Always
    Gain,  // Controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal. AVAILABLE: Always
    GainAuto,  // Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific. AVAILABLE: Always.
    GainAutoMaxValue,  // Maximal value of Gain calculable by gain auto algorithm. AVAILABLE: (GainSelector = All).
    GainAutoMinValue,  // Minimal value of Gain calculable by gain auto algorithm. AVAILABLE: (GainSelector = All).
    Gamma,  // Controls the gamma correction of pixel intensity. This is typically used to compensate for non-linearity of the display system (such as CRT). AVAILABLE: Always.
    GevSCFTD,  // This feature indicates the delay (in timestamp counter unit) to insert between each block (image) for this stream channel. AVAILABLE: Always
    GevSCPD,  // Controls the delay (in timestamp counter unit) to insert between each packet for this stream channel. This can be used as a crude flow-control mechanism if the application or the network infrastructure cannot keep up with the packets coming from the device. AVAILABLE: Always
    Height,  // Height of the image provided by the device (in pixels). AVAILABLE: Always
    LUTContent,  // Describes the content of the selected LUT. AVAILABLE: Always.
    LUTEnable,  // Activates the selected LUT. AVAILABLE: Always.
    LUTValue,  // Returns the Value at entry LUTIndex of the LUT selected by LUTSelector. AVAILABLE: Always.
    LineDebouncerHighTimeAbs,  // Sets the absolute value of the selected line debouncer time in microseconds for switch from low to high. AVAILABLE: Always
    LineDebouncerLowTimeAbs,  // Sets the absolute value of the selected line debouncer time in microseconds for switch from high to low AVAILABLE: Always
    LineInverter,  // Controls the inversion of the signal of the selected input or output Line. AVAILABLE: Always
    LineMode,  // Controls if the physical Line is used to Input or Output a signal. AVAILABLE: Always.
    LinePWMDuration,  // Sets the duration in microseconds. AVAILABLE: Always.
    LinePWMDutyCycle,  // Offers the duty cycle in percent. AVAILABLE: Always.
    LinePWMMaxDuration,  // Sets the maximum duration in microseconds. AVAILABLE: Always.
    LinePWMMaxDutyCycle,  // Offers the maximal duty cycle in percent. AVAILABLE: Always.
    LinePWMMode,  // Selects the PWM mode of the selected output line. AVAILABLE: Always.
    LineSource,  // Selects which internal acquisition or I/O source signal to output on the selected Line. LineMode must be Output. AVAILABLE: Always
    OffsetX,  // Horizontal offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    OffsetY,  // Vertical offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    PixelFormat,  // Format of the pixels provided by the device. It represents all the information provided by PixelCoding, PixelSize, PixelColorFilter combined in a single feature. AVAILABLE: Always
    PtpEnable,  // Enable the Precision Time Protocol (PTP). AVAILABLE: Always.
    PtpMode,  // Selects the PTP clock type the device will act as. AVAILABLE: Always.
    ReadoutMode,  // Specifies the operation mode of the readout for the acquisition. AVAILABLE: Always
    ReverseX,  // Flip horizontally the image sent by the device. The Region of interest is applied after the flipping. AVAILABLE: Always
    ReverseY,  // Flip vertically the image sent by the device. The Region of interest is applied after the flipping. AVAILABLE: Always
    SensorADDigitization,  // The feature controls the sensors AD digitization in bits per pixels. AVAILABLE: Always.
    SensorShutterMode,  // Sets the shutter mode of the device. AVAILABLE: Always.
    SequencerMode,  // Controls if the sequencer mechanism is active. AVAILABLE: Always
    SequencerSetNext,  // Specifies the next sequencer set. AVAILABLE: Always
    SequencerSetStart,  // Sets the initial/start sequencer set, which is the first set used within a sequencer. AVAILABLE: Always
    SequencerTriggerActivation,  // Specifies the activation mode of the sequencer trigger. AVAILABLE: Always
    SequencerTriggerSource,  // Specifies the internal signal or physical input line to use as the sequencer trigger source. AVAILABLE: Always
    ShortExposureTimeEnable,  // Controls if short exposure time should be supported. AVAILABLE: Always
    TestPattern,  // Selects the type of test pattern that is generated by the device as image source. AVAILABLE: Always
    TimerDelay,  // Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer. AVAILABLE: Always
    TimerDuration,  // Sets the duration (in microseconds) of the Timer pulse. AVAILABLE: Always
    TimerTriggerActivation,  // Selects the activation mode of the trigger to start the Timer. AVAILABLE: Always
    TimerTriggerSource,  // Selects the source of the trigger to start the Timer. AVAILABLE: Always
    TransferStart,  // Starts the streaming of data blocks out of the device. This feature must be available when the TransferControlMode is set to "UserControled". If the TransferStart feature is not writable (locked), the application should not start the transfer and should avoid using the feature until it becomes writable again. AVAILABLE: Always
    TransferStop,  // Stops the streaming of data Block(s). The current block transmission will be completed. This feature must be available when the TransferControlMode is set to "UserControlled". AVAILABLE: Always
    TriggerActivation,  // Specifies the activation mode of the trigger. AVAILABLE: Always
    TriggerDelay,  // Specifies the delay in microseconds (us) to apply after the trigger reception before activating it. AVAILABLE: Always
    TriggerMode,  // Controls if the selected trigger is active. AVAILABLE: Always
    TriggerSource,  // Specifies the internal signal or physical input Line to use as the trigger source. The selected trigger must have its TriggerMode set to On. AVAILABLE: Always
    UserOutputValue,  // Sets the value of the bit selected by UserOutputSelector. AVAILABLE: Always
    UserOutputValueAll,  // Sets the value of all the bits of the User Output register. It is subject to the UserOutputValueAllMask. AVAILABLE: Always
    Width  // Width of the image provided by the device (in pixels). AVAILABLE: Always
};

/**
Class to control Feature UserSetFeatureSelector
*/
class NEOAPI_CPP_DECL CUserSetFeatureSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CUserSetFeatureSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CUserSetFeatureSelector object

    */
    CUserSetFeatureSelector(const CUserSetFeatureSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CUserSetFeatureSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CUserSetFeatureSelector object to assign.

    Return: Object reference with the value set.
    */
    const CUserSetFeatureSelector& operator = (const CUserSetFeatureSelector& object);
    /**
    Get the current value.
    Return: The value as UserSetFeatureSelector
    */
    operator UserSetFeatureSelector() const;
    /**
    Set the current value.
    Parameter:
        value The UserSetFeatureSelector value to be written.

    Return: The CUserSetFeatureSelector object
    */
    CUserSetFeatureSelector& operator = (UserSetFeatureSelector value);
    /**
    Set the current value.
    Parameter:
        value The UserSetFeatureSelector value to be written.

    Return: The CUserSetFeatureSelector object
    */
    CUserSetFeatureSelector& Set(UserSetFeatureSelector value);
    /**
    Get the current value.
    Return: The value as UserSetFeatureSelector
    */
    UserSetFeatureSelector Get() const;
};

/**
 Valid values for UserSetSelector
 */
enum class UserSetSelector {
    Default = 0,  // Selects the factory setting user set.
    UserSet0,  // Selects the user set 0.
    UserSet1,  // Selects the user set 1.
    UserSet2,  // Selects the user set 2. AVAILABLE: Always
    UserSet3  // Selects the user set 3. AVAILABLE: Always
};

/**
Class to control Feature UserSetSelector
*/
class NEOAPI_CPP_DECL CUserSetSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CUserSetSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CUserSetSelector object

    */
    CUserSetSelector(const CUserSetSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CUserSetSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CUserSetSelector object to assign.

    Return: Object reference with the value set.
    */
    const CUserSetSelector& operator = (const CUserSetSelector& object);
    /**
    Get the current value.
    Return: The value as UserSetSelector
    */
    operator UserSetSelector() const;
    /**
    Set the current value.
    Parameter:
        value The UserSetSelector value to be written.

    Return: The CUserSetSelector object
    */
    CUserSetSelector& operator = (UserSetSelector value);
    /**
    Set the current value.
    Parameter:
        value The UserSetSelector value to be written.

    Return: The CUserSetSelector object
    */
    CUserSetSelector& Set(UserSetSelector value);
    /**
    Get the current value.
    Return: The value as UserSetSelector
    */
    UserSetSelector Get() const;
};

/**
 Valid values for boCalibrationDataConfigurationMode
 */
enum class boCalibrationDataConfigurationMode {
    Off = 0,  // Disables the bo calibration data configuration mode.
    On  // Enables the bo calibration data configuration mode.
};

/**
Class to control Feature boCalibrationDataConfigurationMode
*/
class NEOAPI_CPP_DECL CboCalibrationDataConfigurationMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboCalibrationDataConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboCalibrationDataConfigurationMode object

    */
    CboCalibrationDataConfigurationMode(const CboCalibrationDataConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboCalibrationDataConfigurationMode() {}
    /**
    Assignment operator
    Parameter:
        object The CboCalibrationDataConfigurationMode object to assign.

    Return: Object reference with the value set.
    */
    const CboCalibrationDataConfigurationMode& operator = (const CboCalibrationDataConfigurationMode& object);
    /**
    Get the current value.
    Return: The value as boCalibrationDataConfigurationMode
    */
    operator boCalibrationDataConfigurationMode() const;
    /**
    Set the current value.
    Parameter:
        value The boCalibrationDataConfigurationMode value to be written.

    Return: The CboCalibrationDataConfigurationMode object
    */
    CboCalibrationDataConfigurationMode& operator = (boCalibrationDataConfigurationMode value);
    /**
    Set the current value.
    Parameter:
        value The boCalibrationDataConfigurationMode value to be written.

    Return: The CboCalibrationDataConfigurationMode object
    */
    CboCalibrationDataConfigurationMode& Set(boCalibrationDataConfigurationMode value);
    /**
    Get the current value.
    Return: The value as boCalibrationDataConfigurationMode
    */
    boCalibrationDataConfigurationMode Get() const;
};

/**
 Valid values for boCalibrationMatrixSelector
 */
enum class boCalibrationMatrixSelector {
    CameraMatrix = 0,  // Selects the camera matrix.
    NewCameraMatrix  // Selects the camera matrix with consideration of the geometry distortion.
};

/**
Class to control Feature boCalibrationMatrixSelector
*/
class NEOAPI_CPP_DECL CboCalibrationMatrixSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboCalibrationMatrixSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboCalibrationMatrixSelector object

    */
    CboCalibrationMatrixSelector(const CboCalibrationMatrixSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboCalibrationMatrixSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CboCalibrationMatrixSelector object to assign.

    Return: Object reference with the value set.
    */
    const CboCalibrationMatrixSelector& operator = (const CboCalibrationMatrixSelector& object);
    /**
    Get the current value.
    Return: The value as boCalibrationMatrixSelector
    */
    operator boCalibrationMatrixSelector() const;
    /**
    Set the current value.
    Parameter:
        value The boCalibrationMatrixSelector value to be written.

    Return: The CboCalibrationMatrixSelector object
    */
    CboCalibrationMatrixSelector& operator = (boCalibrationMatrixSelector value);
    /**
    Set the current value.
    Parameter:
        value The boCalibrationMatrixSelector value to be written.

    Return: The CboCalibrationMatrixSelector object
    */
    CboCalibrationMatrixSelector& Set(boCalibrationMatrixSelector value);
    /**
    Get the current value.
    Return: The value as boCalibrationMatrixSelector
    */
    boCalibrationMatrixSelector Get() const;
};

/**
 Valid values for boCalibrationMatrixValueSelector
 */
enum class boCalibrationMatrixValueSelector {
    Value11 = 0,  // Selects matrix value at line 1 column 1.
    Value12,  // Selects matrix value at line 1 column 2.
    Value13,  // Selects matrix value at line 1 column 3.
    Value21,  // Selects matrix value at line 2 column 1.
    Value22,  // Selects matrix value at line 2 column 2.
    Value23,  // Selects matrix value at line 2 column 3.
    Value31,  // Selects matrix value at line 3 column 1.
    Value32,  // Selects matrix value at line 3 column 2.
    Value33  // Selects matrix value at line 3 column 3.
};

/**
Class to control Feature boCalibrationMatrixValueSelector
*/
class NEOAPI_CPP_DECL CboCalibrationMatrixValueSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboCalibrationMatrixValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboCalibrationMatrixValueSelector object

    */
    CboCalibrationMatrixValueSelector(const CboCalibrationMatrixValueSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboCalibrationMatrixValueSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CboCalibrationMatrixValueSelector object to assign.

    Return: Object reference with the value set.
    */
    const CboCalibrationMatrixValueSelector& operator = (const CboCalibrationMatrixValueSelector& object);
    /**
    Get the current value.
    Return: The value as boCalibrationMatrixValueSelector
    */
    operator boCalibrationMatrixValueSelector() const;
    /**
    Set the current value.
    Parameter:
        value The boCalibrationMatrixValueSelector value to be written.

    Return: The CboCalibrationMatrixValueSelector object
    */
    CboCalibrationMatrixValueSelector& operator = (boCalibrationMatrixValueSelector value);
    /**
    Set the current value.
    Parameter:
        value The boCalibrationMatrixValueSelector value to be written.

    Return: The CboCalibrationMatrixValueSelector object
    */
    CboCalibrationMatrixValueSelector& Set(boCalibrationMatrixValueSelector value);
    /**
    Get the current value.
    Return: The value as boCalibrationMatrixValueSelector
    */
    boCalibrationMatrixValueSelector Get() const;
};

/**
 Valid values for boCalibrationVectorSelector
 */
enum class boCalibrationVectorSelector {
    rvec = 0,  // Selects the output rotation vector.
    tvec  // Selects the output translation vector.
};

/**
Class to control Feature boCalibrationVectorSelector
*/
class NEOAPI_CPP_DECL CboCalibrationVectorSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboCalibrationVectorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboCalibrationVectorSelector object

    */
    CboCalibrationVectorSelector(const CboCalibrationVectorSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboCalibrationVectorSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CboCalibrationVectorSelector object to assign.

    Return: Object reference with the value set.
    */
    const CboCalibrationVectorSelector& operator = (const CboCalibrationVectorSelector& object);
    /**
    Get the current value.
    Return: The value as boCalibrationVectorSelector
    */
    operator boCalibrationVectorSelector() const;
    /**
    Set the current value.
    Parameter:
        value The boCalibrationVectorSelector value to be written.

    Return: The CboCalibrationVectorSelector object
    */
    CboCalibrationVectorSelector& operator = (boCalibrationVectorSelector value);
    /**
    Set the current value.
    Parameter:
        value The boCalibrationVectorSelector value to be written.

    Return: The CboCalibrationVectorSelector object
    */
    CboCalibrationVectorSelector& Set(boCalibrationVectorSelector value);
    /**
    Get the current value.
    Return: The value as boCalibrationVectorSelector
    */
    boCalibrationVectorSelector Get() const;
};

/**
 Valid values for boCalibrationVectorValueSelector
 */
enum class boCalibrationVectorValueSelector {
    Value1 = 0,  // Selects vector value 1.
    Value2,  // Selects vector value 2.
    Value3  // Selects vector value 3.
};

/**
Class to control Feature boCalibrationVectorValueSelector
*/
class NEOAPI_CPP_DECL CboCalibrationVectorValueSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboCalibrationVectorValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboCalibrationVectorValueSelector object

    */
    CboCalibrationVectorValueSelector(const CboCalibrationVectorValueSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboCalibrationVectorValueSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CboCalibrationVectorValueSelector object to assign.

    Return: Object reference with the value set.
    */
    const CboCalibrationVectorValueSelector& operator = (const CboCalibrationVectorValueSelector& object);
    /**
    Get the current value.
    Return: The value as boCalibrationVectorValueSelector
    */
    operator boCalibrationVectorValueSelector() const;
    /**
    Set the current value.
    Parameter:
        value The boCalibrationVectorValueSelector value to be written.

    Return: The CboCalibrationVectorValueSelector object
    */
    CboCalibrationVectorValueSelector& operator = (boCalibrationVectorValueSelector value);
    /**
    Set the current value.
    Parameter:
        value The boCalibrationVectorValueSelector value to be written.

    Return: The CboCalibrationVectorValueSelector object
    */
    CboCalibrationVectorValueSelector& Set(boCalibrationVectorValueSelector value);
    /**
    Get the current value.
    Return: The value as boCalibrationVectorValueSelector
    */
    boCalibrationVectorValueSelector Get() const;
};

/**
 Valid values for boGeometryDistortionValueSelector
 */
enum class boGeometryDistortionValueSelector {
    k1 = 0,  // Selects geometry distortion value k1.
    k2,  // Selects geometry distortion value k2.
    k3,  // Selects geometry distortion value k3.
    p1,  // Selects geometry distortion value p1.
    p2  // Selects geometry distortion value p2.
};

/**
Class to control Feature boGeometryDistortionValueSelector
*/
class NEOAPI_CPP_DECL CboGeometryDistortionValueSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboGeometryDistortionValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboGeometryDistortionValueSelector object

    */
    CboGeometryDistortionValueSelector(const CboGeometryDistortionValueSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboGeometryDistortionValueSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CboGeometryDistortionValueSelector object to assign.

    Return: Object reference with the value set.
    */
    const CboGeometryDistortionValueSelector& operator = (const CboGeometryDistortionValueSelector& object);
    /**
    Get the current value.
    Return: The value as boGeometryDistortionValueSelector
    */
    operator boGeometryDistortionValueSelector() const;
    /**
    Set the current value.
    Parameter:
        value The boGeometryDistortionValueSelector value to be written.

    Return: The CboGeometryDistortionValueSelector object
    */
    CboGeometryDistortionValueSelector& operator = (boGeometryDistortionValueSelector value);
    /**
    Set the current value.
    Parameter:
        value The boGeometryDistortionValueSelector value to be written.

    Return: The CboGeometryDistortionValueSelector object
    */
    CboGeometryDistortionValueSelector& Set(boGeometryDistortionValueSelector value);
    /**
    Get the current value.
    Return: The value as boGeometryDistortionValueSelector
    */
    boGeometryDistortionValueSelector Get() const;
};

/**
 Valid values for boSerialConfigBaudRate
 */
enum class boSerialConfigBaudRate {
    Baudrate115200Hz = 0,  // Serial interface clock frequency is 115200 Hz.
    Baudrate1843200Hz,  // Serial interface clock frequency is 1843200 Hz.
    Baudrate19200Hz,  // Serial interface clock frequency is 19200 Hz.
    Baudrate230400Hz,  // Serial interface clock frequency is 230400 Hz.
    Baudrate38400Hz,  // Serial interface clock frequency is 38400 Hz.
    Baudrate460800Hz,  // Serial interface clock frequency is 460800 Hz.
    Baudrate57600Hz,  // Serial interface clock frequency is 57600 Hz.
    Baudrate921600Hz,  // Serial interface clock frequency is 921600 Hz.
    Baudrate9600Hz  // Serial interface clock frequency is 9600 Hz.
};

/**
Class to control Feature boSerialConfigBaudRate
*/
class NEOAPI_CPP_DECL CboSerialConfigBaudRate : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboSerialConfigBaudRate(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboSerialConfigBaudRate object

    */
    CboSerialConfigBaudRate(const CboSerialConfigBaudRate& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboSerialConfigBaudRate() {}
    /**
    Assignment operator
    Parameter:
        object The CboSerialConfigBaudRate object to assign.

    Return: Object reference with the value set.
    */
    const CboSerialConfigBaudRate& operator = (const CboSerialConfigBaudRate& object);
    /**
    Get the current value.
    Return: The value as boSerialConfigBaudRate
    */
    operator boSerialConfigBaudRate() const;
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigBaudRate value to be written.

    Return: The CboSerialConfigBaudRate object
    */
    CboSerialConfigBaudRate& operator = (boSerialConfigBaudRate value);
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigBaudRate value to be written.

    Return: The CboSerialConfigBaudRate object
    */
    CboSerialConfigBaudRate& Set(boSerialConfigBaudRate value);
    /**
    Get the current value.
    Return: The value as boSerialConfigBaudRate
    */
    boSerialConfigBaudRate Get() const;
};

/**
 Valid values for boSerialConfigDataBits
 */
enum class boSerialConfigDataBits {
    Eight = 0,  // Serial data bits are 8.
    Five,  // Serial data bits are 5.
    Seven,  // Serial data bits are 7.
    Six  // Serial data bits are 6.
};

/**
Class to control Feature boSerialConfigDataBits
*/
class NEOAPI_CPP_DECL CboSerialConfigDataBits : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboSerialConfigDataBits(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboSerialConfigDataBits object

    */
    CboSerialConfigDataBits(const CboSerialConfigDataBits& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboSerialConfigDataBits() {}
    /**
    Assignment operator
    Parameter:
        object The CboSerialConfigDataBits object to assign.

    Return: Object reference with the value set.
    */
    const CboSerialConfigDataBits& operator = (const CboSerialConfigDataBits& object);
    /**
    Get the current value.
    Return: The value as boSerialConfigDataBits
    */
    operator boSerialConfigDataBits() const;
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigDataBits value to be written.

    Return: The CboSerialConfigDataBits object
    */
    CboSerialConfigDataBits& operator = (boSerialConfigDataBits value);
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigDataBits value to be written.

    Return: The CboSerialConfigDataBits object
    */
    CboSerialConfigDataBits& Set(boSerialConfigDataBits value);
    /**
    Get the current value.
    Return: The value as boSerialConfigDataBits
    */
    boSerialConfigDataBits Get() const;
};

/**
 Valid values for boSerialConfigParity
 */
enum class boSerialConfigParity {
    Even = 0,  // Serial parity is even.
    Mark,  // Serial parity is mark.
    None,  // Serial parity is none.
    Odd,  // Serial parity is odd.
    Space  // Serial parity is space.
};

/**
Class to control Feature boSerialConfigParity
*/
class NEOAPI_CPP_DECL CboSerialConfigParity : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboSerialConfigParity(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboSerialConfigParity object

    */
    CboSerialConfigParity(const CboSerialConfigParity& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboSerialConfigParity() {}
    /**
    Assignment operator
    Parameter:
        object The CboSerialConfigParity object to assign.

    Return: Object reference with the value set.
    */
    const CboSerialConfigParity& operator = (const CboSerialConfigParity& object);
    /**
    Get the current value.
    Return: The value as boSerialConfigParity
    */
    operator boSerialConfigParity() const;
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigParity value to be written.

    Return: The CboSerialConfigParity object
    */
    CboSerialConfigParity& operator = (boSerialConfigParity value);
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigParity value to be written.

    Return: The CboSerialConfigParity object
    */
    CboSerialConfigParity& Set(boSerialConfigParity value);
    /**
    Get the current value.
    Return: The value as boSerialConfigParity
    */
    boSerialConfigParity Get() const;
};

/**
 Valid values for boSerialConfigStopBits
 */
enum class boSerialConfigStopBits {
    One = 0,  // Serial stop bit is one.
    OnePtFive,  // Serial stop bit is one pt five.
    Two  // Serial stop bits are two.
};

/**
Class to control Feature boSerialConfigStopBits
*/
class NEOAPI_CPP_DECL CboSerialConfigStopBits : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboSerialConfigStopBits(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboSerialConfigStopBits object

    */
    CboSerialConfigStopBits(const CboSerialConfigStopBits& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboSerialConfigStopBits() {}
    /**
    Assignment operator
    Parameter:
        object The CboSerialConfigStopBits object to assign.

    Return: Object reference with the value set.
    */
    const CboSerialConfigStopBits& operator = (const CboSerialConfigStopBits& object);
    /**
    Get the current value.
    Return: The value as boSerialConfigStopBits
    */
    operator boSerialConfigStopBits() const;
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigStopBits value to be written.

    Return: The CboSerialConfigStopBits object
    */
    CboSerialConfigStopBits& operator = (boSerialConfigStopBits value);
    /**
    Set the current value.
    Parameter:
        value The boSerialConfigStopBits value to be written.

    Return: The CboSerialConfigStopBits object
    */
    CboSerialConfigStopBits& Set(boSerialConfigStopBits value);
    /**
    Get the current value.
    Return: The value as boSerialConfigStopBits
    */
    boSerialConfigStopBits Get() const;
};

/**
 Valid values for boSerialMode
 */
enum class boSerialMode {
    Bypass = 0,  // Bypass mode. UART1 of Power and Process Interface and UART0 Interface are connected.
    Off,  // The serial interface is off and shall not be used.
    OpticControl,  // The serial interface shall be used for optic control.
    boSerialControl  // The serial interface shall be used for bo serial control.
};

/**
Class to control Feature boSerialMode
*/
class NEOAPI_CPP_DECL CboSerialMode : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboSerialMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboSerialMode object

    */
    CboSerialMode(const CboSerialMode& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboSerialMode() {}
    /**
    Assignment operator
    Parameter:
        object The CboSerialMode object to assign.

    Return: Object reference with the value set.
    */
    const CboSerialMode& operator = (const CboSerialMode& object);
    /**
    Get the current value.
    Return: The value as boSerialMode
    */
    operator boSerialMode() const;
    /**
    Set the current value.
    Parameter:
        value The boSerialMode value to be written.

    Return: The CboSerialMode object
    */
    CboSerialMode& operator = (boSerialMode value);
    /**
    Set the current value.
    Parameter:
        value The boSerialMode value to be written.

    Return: The CboSerialMode object
    */
    CboSerialMode& Set(boSerialMode value);
    /**
    Get the current value.
    Return: The value as boSerialMode
    */
    boSerialMode Get() const;
};

/**
 Valid values for boSerialSelector
 */
enum class boSerialSelector {
    UART0 = 0,  // Selects the UART0 Interface which can be used, for example, to control optical components.
    UART1  // Selects the UART1 Interface which is part of the Power and Process Interface and can be used for RS232 communication.
};

/**
Class to control Feature boSerialSelector
*/
class NEOAPI_CPP_DECL CboSerialSelector : public EnumerationFeature {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

        name Name of the Feature

    */
    CboSerialSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
    Copy-Constructor
    Parameter:
        feature A CboSerialSelector object

    */
    CboSerialSelector(const CboSerialSelector& feature) : EnumerationFeature(feature) {}
    /**
    Destructor
    */
    virtual ~CboSerialSelector() {}
    /**
    Assignment operator
    Parameter:
        object The CboSerialSelector object to assign.

    Return: Object reference with the value set.
    */
    const CboSerialSelector& operator = (const CboSerialSelector& object);
    /**
    Get the current value.
    Return: The value as boSerialSelector
    */
    operator boSerialSelector() const;
    /**
    Set the current value.
    Parameter:
        value The boSerialSelector value to be written.

    Return: The CboSerialSelector object
    */
    CboSerialSelector& operator = (boSerialSelector value);
    /**
    Set the current value.
    Parameter:
        value The boSerialSelector value to be written.

    Return: The CboSerialSelector object
    */
    CboSerialSelector& Set(boSerialSelector value);
    /**
    Get the current value.
    Return: The value as boSerialSelector
    */
    boSerialSelector Get() const;
};

/**
Class to controll GenICam features
*/
class NEOAPI_CPP_DECL FeatureAccess {
 public:
    /**
    Constructor
    Parameter:
        cam Pointer to the camera

    */
    FeatureAccess(CamBase* cam);
    /**
    Copy-Constructor
    Parameter:
        access A FeatureAccess object

    */
    FeatureAccess(const FeatureAccess& access);
    /**
    Destructor
    */
    virtual ~FeatureAccess();

    /**
    Assignment Operator is not implemented
    Parameter:
        object The FeatureAccess object to assign.

    Return: Object reference with all features copied.
    */
    const FeatureAccess& operator = (const FeatureAccess& object) = delete;

    /**
    Aborts the Acquisition immediately. This will end the capture without completing the current Frame or waiting on a trigger. If no Acquisition is in progress, the command is ignored.
    */
    CommandFeature AcquisitionAbort;
    /**
    Number of frames to acquire in MultiFrame Acquisition mode.
    */
    IntegerFeature AcquisitionFrameCount;
    /**
    Controls the acquisition rate (in Hertz) at which the frames are captured.
    */
    DoubleFeature AcquisitionFrameRate;
    /**
    Controls if the AcquisitionFrameRate feature is writable and used to control the acquisition rate. Otherwise, the acquisition rate is implicitly controlled by the combination of other features like ExposureTime, etc...
    */
    BoolFeature AcquisitionFrameRateEnable;
    /**
    Returns the maximal acquisition rate (in Hertz) at which the frames are captured.
    */
    DoubleFeature AcquisitionFrameRateLimit;
    /**
    Sets the acquisition mode of the device. It defines mainly the number of frames to capture during an acquisition and the way the acquisition stops.
    */
    CAcquisitionMode AcquisitionMode;
    /**
    Starts the Acquisition of the device. The number of frames captured is specified by AcquisitionMode.
    */
    CommandFeature AcquisitionStart;
    /**
    Controls if the Acquisition of the device starts automatically at device start or not.
    */
    BoolFeature AcquisitionStartAuto;
    /**
    Reads the state of the internal acquisition signal selected using AcquisitionStatusSelector.
    */
    BoolFeature AcquisitionStatus;
    /**
    Selects the internal acquisition signal to read using AcquisitionStatus.
    */
    CAcquisitionStatusSelector AcquisitionStatusSelector;
    /**
    Stops the Acquisition of the device at the end of the current Frame. It is mainly used when AcquisitionMode is Continuous but can be used in any acquisition mode.
    */
    CommandFeature AcquisitionStop;
    /**
    Provides the device key that allows the device to check the validity of action commands. The device internal assertion of an action signal is only authorized if the ActionDeviceKey and the action device key value in the protocol message are equal.
    */
    IntegerFeature ActionDeviceKey;
    /**
    Provides the key that the device will use to validate the action on reception of the action protocol message.
    */
    IntegerFeature ActionGroupKey;
    /**
    Provides the mask that the device will use to validate the action on reception of the action protocol message.
    */
    IntegerFeature ActionGroupMask;
    /**
    Selects to which Action Signal further Action settings apply.
    */
    IntegerFeature ActionSelector;
    /**
    Sets the aperture (also called iris, f-number, f-stop or f/#) of the lens. The lower the f/# the more light goes through the lens (the "faster" the lens) and the smaller the depth of field.
    */
    DoubleFeature Aperture;
    /**
    Initializes the aperture and makes it ready for use. The aperture position after initialization is implementation dependent. This feature is only implemented if an additional initialization is required after OpticControllerInitialize.
    */
    CommandFeature ApertureInitialize;
    /**
    Reads the status of the aperture.
    */
    CApertureStatus ApertureStatus;
    /**
    ApertureStepper controls the stepper value of the aperture. 0 is the maximum opening.
    */
    IntegerFeature ApertureStepper;
    /**
    Returns the Cycle Time of auto feature control loop in milliseconds for once and continuous mode.
    */
    DoubleFeature AutoFeatureCycleTime;
    /**
    Sets the height of the selected Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureHeight;
    /**
    Sets the horizontal offset from the origin to the Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureOffsetX;
    /**
    Sets the vertical offset from the origin to the Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureOffsetY;
    /**
    Controls the mode of the selected Auto Feature Region.
    */
    CAutoFeatureRegionMode AutoFeatureRegionMode;
    /**
    Selects the Reference Region of interest. The Auto Feature Region is part of this region and all Auto Feature Region features refers to this Reference Region.
    */
    CAutoFeatureRegionReference AutoFeatureRegionReference;
    /**
    Selects the region of interest to control. The RegionSelector feature allows devices that are able to extract multiple regions out of an image, to configure the features of those individual regions independently.
    */
    CAutoFeatureRegionSelector AutoFeatureRegionSelector;
    /**
    Width of the selected Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureWidth;
    /**
    Enables the Averaging of the camera over at minimum 2 images.
    */
    BoolFeature AveragingEnable;
    /**
    Sets the number of images using for Averaging of the camera.
    */
    IntegerFeature AveragingImageCount;
    /**
    Returns the reciprocal value of AveragingImageCount.
    */
    DoubleFeature AveragingNormalization;
    /**
    Selects the shift factor for 8bit pixel format calculated from 12 bit mode.
    */
    CBOPFShift BOPFShift;
    /**
    Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted.
    */
    CBalanceWhiteAuto BalanceWhiteAuto;
    /**
    Returns the status of BalanceWhiteAuto.
    */
    CBalanceWhiteAutoStatus BalanceWhiteAutoStatus;
    /**
    Sets the baud rate of the RS232 interface.
    */
    CBaudrate Baudrate;
    /**
    Number of horizontal photo-sensitive cells to combine together. This reduces the horizontal resolution (width) of the image.
    */
    IntegerFeature BinningHorizontal;
    /**
    Sets the mode to use to combine horizontal photo-sensitive cells together when BinningHorizontal is used.
    */
    CBinningHorizontalMode BinningHorizontalMode;
    /**
    Sets the number of horizontal and vertical photo-sensitive cells to combine together calculated in camera.
    */
    IntegerFeature BinningRegion0;
    /**
    Selects which binning engine is controlled by the BinningHorizontal and BinningVertical features.
    */
    CBinningSelector BinningSelector;
    /**
    Sets the number of horizontal and vertical photo-sensitive cells to combine together calculated in sensor.
    */
    IntegerFeature BinningSensor;
    /**
    Number of vertical photo-sensitive cells to combine together. This reduces the vertical resolution (height) of the image.
    */
    IntegerFeature BinningVertical;
    /**
    Sets the mode to use to combine vertical photo-sensitive cells together when BinningVertical is used.
    */
    CBinningVerticalMode BinningVerticalMode;
    /**
    Enables the feature BitShift of 2 for using LSBs with pixelformat Mono8.
    */
    BoolFeature BitShift;
    /**
    Controls the analog black level as an absolute physical value. This represents a DC offset applied to the video signal.
    */
    IntegerFeature BlackLevel;
    /**
    Enables the Black Level Correction.
    */
    BoolFeature BlackLevelCorrectionEnable;
    /**
    Sets the Black Level Correction Threshold.
    */
    IntegerFeature BlackLevelCorrectionThreshold;
    /**
    Controls the analog black level as a raw integer value. This represents a DC offset applied to the video signal.
    */
    IntegerFeature BlackLevelRaw;
    /**
    Selects which Black Level is controlled by the various Black Level features.
    */
    CBlackLevelSelector BlackLevelSelector;
    /**
    Activates the black reference correction of the sensor.
    */
    BoolFeature BlackReferenceCorrectionEnable;
    /**
    Controls the sensor internal feature for avoiding the black sun effect.
    */
    CBlackSunSuppression BlackSunSuppression;
    /**
    Aborts a running sequencer set.
    */
    BoolFeature BoSequencerAbort;
    /**
    Sets the sequencer sets number of horizontal photo-sensitive cells to combine together. This increases the intensity (or signal to noise ratio) of the pixels and reduces the horizontal resolution (width) of the image.
    */
    IntegerFeature BoSequencerBinningHorizontal;
    /**
    Sets the sequencer sets number of vertical photo-sensitive cells to combine together. This increases the intensity (or signal to noise ratio) of the pixels and reduces the vertical resolution (height) of the image.
    */
    IntegerFeature BoSequencerBinningVertical;
    /**
    Enables the sequencer for special multi-frame mode. Normal acquisition will be stopped.
    */
    CBoSequencerEnable BoSequencerEnable;
    /**
    Sets the sequencer sets exposure time in us.
    */
    DoubleFeature BoSequencerExposure;
    /**
    Sets the Sequencer number of frames per trigger.
    */
    IntegerFeature BoSequencerFramesPerTrigger;
    /**
    Sets the sequencer sets global Gain.
    */
    DoubleFeature BoSequencerGain;
    /**
    Sets the Sequencers height of the image provided by the device (in pixels).
    */
    IntegerFeature BoSequencerHeight;
    /**
    Selects the Sequencers output lines.
    */
    CBoSequencerIOSelector BoSequencerIOSelector;
    /**
    Returns the current status of the selected Sequencer output.
    */
    BoolFeature BoSequencerIOStatus;
    /**
    Returns if the sequencer is running.
    */
    BoolFeature BoSequencerIsRunning;
    /**
    Sets the number of Loops for the sequencer sets.
    */
    IntegerFeature BoSequencerLoops;
    /**
    Specifies the running mode of the sequencer.
    */
    CBoSequencerMode BoSequencerMode;
    /**
    Sets the number of sets to configure.
    */
    IntegerFeature BoSequencerNumberOfSets;
    /**
    Sets the Offset X for the selected sequencer set.
    */
    IntegerFeature BoSequencerOffsetX;
    /**
    Sets the Offset Y for the selected sequencer set.
    */
    IntegerFeature BoSequencerOffsetY;
    /**
    Sets the number of digitized samples outputted simultaneously by the camera A/D conversion stage for the sequencer.
    */
    CBoSequencerSensorDigitizationTaps BoSequencerSensorDigitizationTaps;
    /**
    Returns the index of the active set of the running sequencer.
    */
    IntegerFeature BoSequencerSetActive;
    /**
    Sets the number of sets to configure.
    */
    IntegerFeature BoSequencerSetNumberOfSets;
    /**
    Sets the sequencer sets Read Out Time in us for the current format settings.
    */
    IntegerFeature BoSequencerSetReadOutTime;
    /**
    Sets the number of repeats of a single parameter set.
    */
    IntegerFeature BoSequencerSetRepeats;
    /**
    Selects the sequencer set to configure.
    */
    IntegerFeature BoSequencerSetSelector;
    /**
    Starts or stopps the configured sequence.
    */
    CBoSequencerStart BoSequencerStart;
    /**
    Sets the Sequencers width of the image provided by the device (in pixels).
    */
    IntegerFeature BoSequencerWidth;
    /**
    Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific.
    */
    DoubleFeature BrightnessAutoNominalValue;
    /**
    Sets the highest priority auto feature to adjust the brightness.
    */
    CBrightnessAutoPriority BrightnessAutoPriority;
    /**
    Enables the Brightness Correction. Brightness Correction is available for binning only.
    */
    CBrightnessCorrection BrightnessCorrection;
    /**
    Indicates the factor of brightness correction in binning.
    */
    DoubleFeature BrightnessCorrectionFactor;
    /**
    Controls the low time in Clock Cycles for the Frame Valid signal between two frames.
    */
    IntegerFeature CLFVALLowTime;
    /**
    Controls the low time in Clock Cycles for the Line Valid signal between two lines.
    */
    IntegerFeature CLLVALLowTime;
    /**
    Controls the number of retransmissions allowed when a message channel message times out.
    */
    IntegerFeature CLMCRC;
    /**
    Provides the transmission timeout value in milliseconds.
    */
    IntegerFeature CLMCTT;
    /**
    Adds a calibration offset to compensate for an individual "roll" angle of the camera, introduced by mounting tolerances. The offset is added to all type of output data that incorporates an angle, like false color representation and angle of polarization data. The offset is without effect to raw data and to degree of linear polarization data.
    */
    DoubleFeature CalibrationAngleOfPolarizationOffset;
    /**
    Activates the calibration of the four polarized light channels by applying matrix calculations and an angle offset.
    */
    BoolFeature CalibrationEnable;
    /**
    Selects the color calibration matrix.
    */
    CCalibrationMatrixColorSelector CalibrationMatrixColorSelector;
    /**
    Represents the value of the selected gain factor inside the calibration matrix.
    */
    DoubleFeature CalibrationMatrixValue;
    /**
    Selects the gain factor of the selected calibration matrix.
    */
    CCalibrationMatrixValueSelector CalibrationMatrixValueSelector;
    /**
    Returns the request ID of the action command that triggered the image.
    */
    IntegerFeature ChunkActionRequestID;
    /**
    Returns the IP Adress of the action command source that triggered the image.
    */
    IntegerFeature ChunkActionSourceIP;
    /**
    Returns the number of horizontal and vertical photo-sensitive cells to combine together calculated in camera.
    */
    IntegerFeature ChunkBinningRegion0;
    /**
    Returns the number of horizontal and vertical photo-sensitive cells to combine together calculated in sensor.
    */
    IntegerFeature ChunkBinningSensor;
    /**
    Enables the inclusion of the selected Chunk data in the payload of the image.
    */
    BoolFeature ChunkEnable;
    /**
    Activates the inclusion of Chunk data in the transmitted payload.
    */
    BoolFeature ChunkModeActive;
    /**
    Selects which Chunk to enable or control.
    */
    CChunkSelector ChunkSelector;
    /**
    Returns the number of received trigger at the time of the FrameStart event.
    */
    IntegerFeature ChunkTriggerCounter;
    /**
    This Camera Link specific feature describes the configuration used by the camera. It helps especially when a camera is capable of operation in a non-standard configuration, and when the features PixelSize, SensorDigitizationTaps, and DeviceTapGeometry do not provide enough information for interpretation of the image data provided by the camera.
    */
    CClConfiguration ClConfiguration;
    /**
    This Camera Link specific feature describes the time multiplexing of the camera link connection to transfer more than the configuration allows, in one single clock.
    */
    CClTimeSlotsCount ClTimeSlotsCount;
    /**
    Controls the mode for automatic adjusting the gains of the active transformation matrix.
    */
    CColorTransformationAuto ColorTransformationAuto;
    /**
    Activates the selected Color Transformation module.
    */
    BoolFeature ColorTransformationEnable;
    /**
    Selects the color transformation factory list tuned to the given color temeperature.
    */
    CColorTransformationFactoryListSelector ColorTransformationFactoryListSelector;
    /**
    sRGB Gamma 1: Camera was calibrated for the color space sRGB Gamma 1.
    */
    StringFeature ColorTransformationOutputColorSpace;
    /**
    Resets the ColorTransformation to the selected ColorTransformationFactoryList.
    */
    CommandFeature ColorTransformationResetToFactoryList;
    /**
    Selects which Color Transformation module is controlled by the various Color Transformation features.
    */
    CColorTransformationSelector ColorTransformationSelector;
    /**
    Represents the value of the selected Gain factor or Offset inside the Transformation matrix.
    */
    DoubleFeature ColorTransformationValue;
    /**
    Selects the Gain factor or Offset of the Transformation matrix to access in the selected Color Transformation module.
    */
    CColorTransformationValueSelector ColorTransformationValueSelector;
    /**
    Controls if the selected component streaming is active.
    */
    BoolFeature ComponentEnable;
    /**
    Selects a component to activate/deactivate its data streaming.
    */
    CComponentSelector ComponentSelector;
    /**
    Enables the Concatenation mode.
    */
    IntegerFeature ConcatenationEnable;
    /**
    Sets the duration (or number of events) before the CounterEnd event is generated.
    */
    IntegerFeature CounterDuration;
    /**
    Selects the Activation mode Event Source signal.
    */
    CCounterEventActivation CounterEventActivation;
    /**
    Select the events that will be the source to increment the Counter.
    */
    CCounterEventSource CounterEventSource;
    /**
    Does a software reset of the selected Counter and starts it. The counter starts counting events immediately after the reset unless a Counter trigger is active. CounterReset can be used to reset the Counter independently from the CounterResetSource. To disable the counter temporarily, set CounterEventSource to Off.
    */
    CommandFeature CounterReset;
    /**
    Selects the Activation mode of the Counter Reset Source signal.
    */
    CCounterResetActivation CounterResetActivation;
    /**
    Selects the signals that will be the source to reset the Counter.
    */
    CCounterResetSource CounterResetSource;
    /**
    Selects which Counter to configure.
    */
    CCounterSelector CounterSelector;
    /**
    Reads or writes the current value of the selected Counter.
    */
    IntegerFeature CounterValue;
    /**
    Reads the value of the selected Counter when it was reset by a trigger or by an explicit CounterReset command.
    */
    IntegerFeature CounterValueAtReset;
    /**
    Sets one byte of custom special data.
    */
    IntegerFeature CustomData;
    /**
    Controls if the custom data configuration mode is active.
    */
    CCustomDataConfigurationMode CustomDataConfigurationMode;
    /**
    Selects the index of the custom data byte array.
    */
    IntegerFeature CustomDataSelector;
    /**
    Horizontal sub-sampling of the image. This reduces the horizontal resolution (width) of the image by the specified horizontal decimation factor.
    */
    IntegerFeature DecimationHorizontal;
    /**
    Sets the mode used to reduce the horizontal resolution when DecimationHorizontal is used.
    */
    CDecimationHorizontalMode DecimationHorizontalMode;
    /**
    Vertical sub-sampling of the image. This reduces the vertical resolution (height) of the image by the specified vertical decimation factor.
    */
    IntegerFeature DecimationVertical;
    /**
    Sets the mode used to reduce the Vertical resolution when DecimationVertical is used.
    */
    CDecimationVerticalMode DecimationVerticalMode;
    /**
    Enables the correction of defect pixels.
    */
    BoolFeature DefectPixelCorrection;
    /**
    Determines if the pixel correction is active for the selected entry.
    */
    BoolFeature DefectPixelListEntryActive;
    /**
    Sets the X position of the pixel.
    */
    IntegerFeature DefectPixelListEntryPosX;
    /**
    Sets the Y position of the pixel.
    */
    IntegerFeature DefectPixelListEntryPosY;
    /**
    Sets the index to the defect pixel correction list.
    */
    IntegerFeature DefectPixelListIndex;
    /**
    Selects which Defect Pixel List to control.
    */
    CDefectPixelListSelector DefectPixelListSelector;
    /**
    Character set used by the strings of the device.
    */
    CDeviceCharacterSet DeviceCharacterSet;
    /**
    Returns the frequency of the selected Clock.
    */
    DoubleFeature DeviceClockFrequency;
    /**
    Selects the clock frequency to access from the device.
    */
    CDeviceClockSelector DeviceClockSelector;
    /**
    Indicates the number of event channels supported by the device.
    */
    IntegerFeature DeviceEventChannelCount;
    /**
    Identifier of the product family of the device.
    */
    StringFeature DeviceFamilyName;
    /**
    Version of the firmware in the device.
    */
    StringFeature DeviceFirmwareVersion;
    /**
    Source control for frontside UART interface.
    */
    CDeviceFrontUARTSource DeviceFrontUARTSource;
    /**
    Major version of the GenCP protocol supported by the device.
    */
    IntegerFeature DeviceGenCPVersionMajor;
    /**
    Minor version of the GenCP protocol supported by the device.
    */
    IntegerFeature DeviceGenCPVersionMinor;
    /**
    Returns if the license at the device is valid or not for the license type, selected by the DeviceLicenseTypeSelector feature.
    */
    CDeviceLicense DeviceLicense;
    /**
    Selects the available License types.
    */
    CDeviceLicenseTypeSelector DeviceLicenseTypeSelector;
    /**
    Indicates the command timeout of the specified Link. This corresponds to the maximum response time of the device for a command sent on that link.
    */
    DoubleFeature DeviceLinkCommandTimeout;
    /**
    Activate or deactivate the Link's heartbeat.
    */
    CDeviceLinkHeartbeatMode DeviceLinkHeartbeatMode;
    /**
    Controls the current heartbeat timeout of the specific Link.
    */
    DoubleFeature DeviceLinkHeartbeatTimeout;
    /**
    Selects which Link of the device to control.
    */
    CDeviceLinkSelector DeviceLinkSelector;
    /**
    Indicates the speed of transmission negotiated on the specified Link.
    */
    IntegerFeature DeviceLinkSpeed;
    /**
    Limits the maximum bandwidth of the data that will be streamed out by the device on the selected Link. If necessary, delays will be uniformly inserted between transport layer packets in order to control the peak bandwidth.
    */
    IntegerFeature DeviceLinkThroughputLimit;
    /**
    Controls if the DeviceLinkThroughputLimit is active. When disabled, lower level TL specific features are expected to control the throughput. When enabled, DeviceLinkThroughputLimit controls the overall throughput.
    */
    CDeviceLinkThroughputLimitMode DeviceLinkThroughputLimitMode;
    /**
    Manufacturer information about the device.
    */
    StringFeature DeviceManufacturerInfo;
    /**
    Returns the Device Manufacturer Version.
    */
    IntegerFeature DeviceManufacturerVersion;
    /**
    Model of the device.
    */
    StringFeature DeviceModelName;
    /**
    Endianness of the registers of the device.
    */
    CDeviceRegistersEndianness DeviceRegistersEndianness;
    /**
    Resets the device to its power up state. After reset, the device must be rediscovered.
    */
    CommandFeature DeviceReset;
    /**
    Resets the device to its delivery state.
    */
    CommandFeature DeviceResetToDeliveryState;
    /**
    Major version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
    */
    IntegerFeature DeviceSFNCVersionMajor;
    /**
    Minor version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
    */
    IntegerFeature DeviceSFNCVersionMinor;
    /**
    Sub minor version of Standard Features Naming Convention that was used to create the device's GenICam XML.
    */
    IntegerFeature DeviceSFNCVersionSubMinor;
    /**
    Scan type of the sensor of the device.
    */
    CDeviceScanType DeviceScanType;
    /**
    Returns if selected sensor is connected.
    */
    BoolFeature DeviceSensorConnected;
    /**
    Returns if selected image sensor is initialized.
    */
    BoolFeature DeviceSensorInitialized;
    /**
    Selects which sensor is controlled by the various sensor specific features.
    */
    CDeviceSensorSelector DeviceSensorSelector;
    /**
    Specifies the type of the sensor.
    */
    CDeviceSensorType DeviceSensorType;
    /**
    Specifies the version of the CMOSIS sensor.
    */
    CDeviceSensorVersion DeviceSensorVersion;
    /**
    Device's serial number. This string is a unique identifier of the device.
    */
    StringFeature DeviceSerialNumber;
    /**
    This feature controls the baud rate used by the selected serial port.
    */
    CDeviceSerialPortBaudRate DeviceSerialPortBaudRate;
    /**
    Selects which serial port of the device to control.
    */
    CDeviceSerialPortSelector DeviceSerialPortSelector;
    /**
    Indicates the number of streaming channels supported by the device.
    */
    IntegerFeature DeviceStreamChannelCount;
    /**
    Endianness of multi-byte pixel data for this stream.
    */
    CDeviceStreamChannelEndianness DeviceStreamChannelEndianness;
    /**
    Specifies the stream packet size, in bytes, to send on the selected channel for a Transmitter or specifies the maximum packet size supported by a receiver.
    */
    IntegerFeature DeviceStreamChannelPacketSize;
    /**
    Selects the stream channel to control.
    */
    IntegerFeature DeviceStreamChannelSelector;
    /**
    Reports the type of the stream channel.
    */
    CDeviceStreamChannelType DeviceStreamChannelType;
    /**
    Transport Layer type of the device.
    */
    CDeviceTLType DeviceTLType;
    /**
    Major version of the Transport Layer of the device.
    */
    IntegerFeature DeviceTLVersionMajor;
    /**
    Minor version of the Transport Layer of the device.
    */
    IntegerFeature DeviceTLVersionMinor;
    /**
    Sub minor version of the Transport Layer of the device.
    */
    IntegerFeature DeviceTLVersionSubMinor;
    /**
    This device tap geometry feature describes the geometrical properties characterizing the taps of a camera as presented at the output of the device.
    */
    CDeviceTapGeometry DeviceTapGeometry;
    /**
    Device temperature in degrees Celsius (C). It is measured at the location selected by DeviceTemperatureSelector.
    */
    DoubleFeature DeviceTemperature;
    /**
    Returns if the device operates in a critical temperature range.
    */
    BoolFeature DeviceTemperatureExceeded;
    /**
    Enables the Peltier element.
    */
    BoolFeature DeviceTemperaturePeltierEnable;
    /**
    Selects the location within the device, where the temperature will be measured.
    */
    CDeviceTemperatureSelector DeviceTemperatureSelector;
    /**
    Returns the current temperature status of the device.
    */
    CDeviceTemperatureStatus DeviceTemperatureStatus;
    /**
    Sets the temperature threshold for the selected status transition in degrees Celsius.
    */
    IntegerFeature DeviceTemperatureStatusTransition;
    /**
    Selects which temperature transition is controlled by the feature DeviceTemperatureStatusTransition.
    */
    CDeviceTemperatureStatusTransitionSelector DeviceTemperatureStatusTransitionSelector;
    /**
    Returns if the device operates in critical temperature range.
    */
    BoolFeature DeviceTemperatureUnderrun;
    /**
    Returns the device type.
    */
    CDeviceType DeviceType;
    /**
    Returns the USB3 Vision unique ID which allows consistent identification of devices.
    */
    StringFeature DeviceUSB3VisionGUID;
    /**
    User-programmable device identifier.
    */
    StringFeature DeviceUserID;
    /**
    Name of the manufacturer of the device.
    */
    StringFeature DeviceVendorName;
    /**
    Version of the device.
    */
    StringFeature DeviceVersion;
    /**
    Controls the device version.
    */
    IntegerFeature DeviceVersionControl;
    /**
    Returns the number of discarded events.
    */
    IntegerFeature DiscardedEventCounter;
    /**
    Controls whether the Energy Efficient / Green Ethernet mode (802.3az) in the PHY is activated or not. A device reboot is needed for changes to take effect.
    */
    BoolFeature EnergyEfficientEthernetEnable;
    /**
    Activate or deactivate the notification to the host application of the occurrence of the selected Event.
    */
    CEventNotification EventNotification;
    /**
    Selects which Event to signal to the host application.
    */
    CEventSelector EventSelector;
    /**
    EventSensor1ConcatenationAvailableTimestamp
    */
    IntegerFeature EventSensor1ConcatenationAvailable;
    /**
    Returns the Timestamp of the Sensor 1 Concatenation Available Event.
    */
    IntegerFeature EventSensor1ConcatenationAvailableTimestamp;
    /**
    EventSensor1ConcatenationEmptyTimestamp
    */
    IntegerFeature EventSensor1ConcatenationEmpty;
    /**
    Returns the Timestamp of the Sensor 1 Concatenation Empty Event.
    */
    IntegerFeature EventSensor1ConcatenationEmptyTimestamp;
    /**
    EventSensor1ExposureEndTimestamp
    */
    IntegerFeature EventSensor1ExposureEnd;
    /**
    Returns the Timestamp of the Sensor 1 Exposure End Event. It can be used to determine precisely when the event occured.
    */
    IntegerFeature EventSensor1ExposureEndTimestamp;
    /**
    EventSensor1ExposureStartTimestamp
    */
    IntegerFeature EventSensor1ExposureStart;
    /**
    Returns the Timestamp of the Sensor 1 Exposure Start Event.
    */
    IntegerFeature EventSensor1ExposureStartTimestamp;
    /**
    EventSensor1ReadoutReadoutTimestamp
    */
    IntegerFeature EventSensor1FrameEnd;
    /**
    Returns the Timestamp of the Sensor 1 Frame End Event.
    */
    IntegerFeature EventSensor1FrameEndTimestamp;
    /**
    EventSensor1FrameStartTimestamp
    */
    IntegerFeature EventSensor1FrameStart;
    /**
    Returns the Timestamp of the Sensor 1 Frame Start Event.
    */
    IntegerFeature EventSensor1FrameStartTimestamp;
    /**
    EventSensor1TriggerReadyTimestamp
    */
    IntegerFeature EventSensor1TriggerReady;
    /**
    Returns the Timestamp of the Sensor 1 Trigger Ready Event.
    */
    IntegerFeature EventSensor1TriggerReadyTimestamp;
    /**
    EventSensor1TriggerSkippedTimestamp
    */
    IntegerFeature EventSensor1TriggerSkipped;
    /**
    Returns the Timestamp of the Sensor 1 Trigger Skipped Event.
    */
    IntegerFeature EventSensor1TriggerSkippedTimestamp;
    /**
    EventSensor2ConcatenationAvailableTimestamp
    */
    IntegerFeature EventSensor2ConcatenationAvailable;
    /**
    Returns the Timestamp of the Sensor 2 Concatenation Available Event.
    */
    IntegerFeature EventSensor2ConcatenationAvailableTimestamp;
    /**
    EventSensor2ConcatenationEmptyTimestamp
    */
    IntegerFeature EventSensor2ConcatenationEmpty;
    /**
    Returns the Timestamp of the Sensor 2 Concatenation Empty Event.
    */
    IntegerFeature EventSensor2ConcatenationEmptyTimestamp;
    /**
    EventSensor2ExposureEndTimestamp
    */
    IntegerFeature EventSensor2ExposureEnd;
    /**
    Returns the Timestamp of the Sensor 2 Exposure End Event. It can be used to determine precisely when the event occured.
    */
    IntegerFeature EventSensor2ExposureEndTimestamp;
    /**
    EventSensor2ExposureStartTimestamp
    */
    IntegerFeature EventSensor2ExposureStart;
    /**
    Returns the Timestamp of the Sensor 2 Exposure Start Event.
    */
    IntegerFeature EventSensor2ExposureStartTimestamp;
    /**
    EventSensor2FrameEndTimestamp
    */
    IntegerFeature EventSensor2FrameEnd;
    /**
    Returns the Timestamp of the Sensor 2 Frame End Event.
    */
    IntegerFeature EventSensor2FrameEndTimestamp;
    /**
    EventSensor2FrameStartTimestamp
    */
    IntegerFeature EventSensor2FrameStart;
    /**
    Returns the Timestamp of the Sensor 2 Frame Start Event.
    */
    IntegerFeature EventSensor2FrameStartTimestamp;
    /**
    EventSensor2TriggerReadyTimestamp
    */
    IntegerFeature EventSensor2TriggerReady;
    /**
    Returns the Timestamp of the Sensor 2 Trigger Ready Event.
    */
    IntegerFeature EventSensor2TriggerReadyTimestamp;
    /**
    EventSensor2TriggerSkippedTimestamp
    */
    IntegerFeature EventSensor2TriggerSkipped;
    /**
    Returns the Timestamp of the Sensor 2 Trigger Skipped Event.
    */
    IntegerFeature EventSensor2TriggerSkippedTimestamp;
    /**
    EventSensorInitializationFailedTimestamp
    */
    IntegerFeature EventSensorInitializationFailed;
    /**
    Returns the Timestamp of the Sensor Initialization Failed Event. It can be used to determine precisely when the event occurred.
    */
    IntegerFeature EventSensorInitializationFailedTimestamp;
    /**
    Returns the unique Identifier of the bo Serial UART0 Read Ready type of Event.
    */
    IntegerFeature EventboSerialUART0ReadReady;
    /**
    Returns the Timestamp of the bo Serial UART0 Read Ready Event.
    */
    IntegerFeature EventboSerialUART0ReadReadyTimestamp;
    /**
    Returns the unique Identifier of the bo Serial UART1 Read Ready type of Event.
    */
    IntegerFeature EventboSerialUART1ReadReady;
    /**
    Returns the Timestamp of the bo Serial UART1 Read Ready Event.
    */
    IntegerFeature EventboSerialUART1ReadReadyTimestamp;
    /**
    Sets the automatic exposure mode when ExposureMode is Timed. The exact algorithm used to implement this control is device-specific.
    */
    CExposureAuto ExposureAuto;
    /**
    Sets the maximal value of ExposureTime calculable by exposure auto algorithm.
    */
    DoubleFeature ExposureAutoMaxValue;
    /**
    Sets the minimal value of ExposureTime calculable by exposure auto algorithm.
    */
    DoubleFeature ExposureAutoMinValue;
    /**
    Sets the offset correction value that the camera applies to each even line in the "Exposure Lines" region when it is located on an even line.
    */
    IntegerFeature ExposureLinesOffsetEven;
    /**
    Sets the offset correction value that the camera applies to each odd line in the "Exposure Lines" region when it is located on an even line.
    */
    IntegerFeature ExposureLinesOffsetOdd;
    /**
    Sets the operation mode of the Exposure.
    */
    CExposureMode ExposureMode;
    /**
    Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off. This controls the duration where the photosensitive cells are exposed to light.
    */
    DoubleFeature ExposureTime;
    /**
    Returns the maximum value of the exposure time gap.
    */
    DoubleFeature ExposureTimeGapMax;
    /**
    Returns the minimum value of the exposure time gap.
    */
    DoubleFeature ExposureTimeGapMin;
    /**
    Defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
    */
    RegisterFeature FileAccessBuffer;
    /**
    Controls the Length of the mapping between the device file storage and the FileAccessBuffer.
    */
    IntegerFeature FileAccessLength;
    /**
    Controls the Offset of the mapping between the device file storage and the FileAccessBuffer.
    */
    IntegerFeature FileAccessOffset;
    /**
    Selects the access mode in which a file is opened in the device.
    */
    CFileOpenMode FileOpenMode;
    /**
    Executes the operation selected by FileOperationSelector on the selected file.
    */
    CommandFeature FileOperationExecute;
    /**
    Represents the file operation result. For Read or Write operations, the number of successfully read/written bytes is returned.
    */
    IntegerFeature FileOperationResult;
    /**
    Selects the target operation for the selected file in the device. This Operation is executed when the FileOperationExecute feature is called.
    */
    CFileOperationSelector FileOperationSelector;
    /**
    Represents the file operation execution status.
    */
    CFileOperationStatus FileOperationStatus;
    /**
    Selects the target file in the device.
    */
    CFileSelector FileSelector;
    /**
    Represents the size of the selected file in bytes.
    */
    IntegerFeature FileSize;
    /**
    Enables the Fixed Pattern Noise Correction.
    */
    BoolFeature FixedPatternNoiseCorrection;
    /**
    Focal length in millimeters (mm).
    */
    DoubleFeature FocalLength;
    /**
    Initializes the focal length and makes it ready for use. The focal length position after initialization is implementation dependent. This feature is only implemented if an additional initialization is required after OpticControllerInitialize.
    */
    CommandFeature FocalLengthInitialize;
    /**
    Reads the status of the focal length.
    */
    CFocalLengthStatus FocalLengthStatus;
    /**
    Sets the focal power (in diopters/dpt). This is mostly used for liquid lenses and indicates how much a liquid lens focuses.
    */
    DoubleFeature FocalPower;
    /**
    Initializes the focus and makes it ready for use. The focus position after initialization is implementation dependent. This feature is only implemented if an additional initialization is required after OpticControllerInitialize.
    */
    CommandFeature FocusInitialize;
    /**
    Reads the status of the focus.
    */
    CFocusStatus FocusStatus;
    /**
    FocusStepper controls the stepper value of the focus. E.g. ObjectSensorDistance or FocalPower. 0 is the closest focus.
    */
    IntegerFeature FocusStepper;
    /**
    Sets the frame counter. The frame counter will be incremented with every image taken by the camera. It can be manipulated by writing the features value.
    */
    IntegerFeature FrameCounter;
    /**
    Enables the 64 bit block ID length.
    */
    BoolFeature GVSPConfigurationBlockID64Bit;
    /**
    Controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal.
    */
    DoubleFeature Gain;
    /**
    Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific.
    */
    CGainAuto GainAuto;
    /**
    Sets the maximal value of Gain calculable by gain auto algorithm.
    */
    DoubleFeature GainAutoMaxValue;
    /**
    Sets the minimal value of Gain calculable by gain auto algorithm.
    */
    DoubleFeature GainAutoMinValue;
    /**
    Selects which Gain is controlled by the various Gain features.
    */
    CGainSelector GainSelector;
    /**
    Controls the gamma correction of pixel intensity. This is typically used to compensate for non-linearity of the display system (such as CRT).
    */
    DoubleFeature Gamma;
    /**
    Returns a preliminary GenDC Descriptor that can be used as reference for the data Container to be streamed out by the device in its current configuration. This information can be used to set up the receiver in advance to be ready for the data Containers to come.
    */
    RegisterFeature GenDCDescriptor;
    /**
    Returns the GenDC Container data Flow mapping table that will be used to transport the GenDC Container.
    */
    RegisterFeature GenDCFlowMappingTable;
    /**
    Controls the device's streaming format.
    */
    CGenDCStreamingMode GenDCStreamingMode;
    /**
    Returns whether the current device data streaming format is GenDC. This value is conditioned by the GenDCStreamingMode.
    */
    CGenDCStreamingStatus GenDCStreamingStatus;
    /**
    Controls the device access privilege of an application.
    */
    CGevCCP GevCCP;
    /**
    Reports the default gateway IP address of the given logical link.
    */
    IntegerFeature GevCurrentDefaultGateway;
    /**
    Reports the IP address for the given logical link.
    */
    IntegerFeature GevCurrentIPAddress;
    /**
    Controls whether the DHCP IP configuration scheme is activated on the given logical link.
    */
    BoolFeature GevCurrentIPConfigurationDHCP;
    /**
    Controls whether the Link Local Address IP configuration scheme is activated on the given logical link.
    */
    BoolFeature GevCurrentIPConfigurationLLA;
    /**
    Controls whether the PersistentIP configuration scheme is activated on the given logical link.
    */
    BoolFeature GevCurrentIPConfigurationPersistentIP;
    /**
    Reports the subnet mask of the given logical link.
    */
    IntegerFeature GevCurrentSubnetMask;
    /**
    Indicates the maximum randomized delay the device will wait to acknowledge a discovery command.
    */
    IntegerFeature GevDiscoveryAckDelay;
    /**
    Indicates the first URL to the GenICam XML device description file. The First URL is used as the first choice by the application to retrieve the GenICam XML device description file.
    */
    StringFeature GevFirstURL;
    /**
    Enables the generation of extended status codes.
    */
    BoolFeature GevGVCPExtendedStatusCodes;
    /**
    Selects the GigE Vision version to control extended status codes for.
    */
    CGevGVCPExtendedStatusCodesSelector GevGVCPExtendedStatusCodesSelector;
    /**
    Enables the generation of PENDING_ACK.
    */
    BoolFeature GevGVCPPendingAck;
    /**
    Reports the current IP configuration status.
    */
    CGevIPConfigurationStatus GevIPConfigurationStatus;
    /**
    Selects which logical link to control.
    */
    IntegerFeature GevInterfaceSelector;
    /**
    MAC address of the logical link.
    */
    IntegerFeature GevMACAddress;
    /**
    Controls the destination IP address for the message channel.
    */
    IntegerFeature GevMCDA;
    /**
    Controls the port to which the device must send messages. Setting this value to 0 closes the message channel.
    */
    IntegerFeature GevMCPHostPort;
    /**
    Controls the number of retransmissions allowed when a message channel message times out.
    */
    IntegerFeature GevMCRC;
    /**
    This feature indicates the source port for the message channel.
    */
    IntegerFeature GevMCSP;
    /**
    Provides the transmission timeout value in milliseconds.
    */
    IntegerFeature GevMCTT;
    /**
    Controls whether incoming PAUSE Frames are handled on the given logical link.
    */
    BoolFeature GevPAUSEFrameReception;
    /**
    Controls whether PAUSE Frames can be generated on the given logical link.
    */
    BoolFeature GevPAUSEFrameTransmission;
    /**
    Controls the persistent default gateway for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
    */
    IntegerFeature GevPersistentDefaultGateway;
    /**
    Controls the Persistent IP address for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
    */
    IntegerFeature GevPersistentIPAddress;
    /**
    Controls the Persistent subnet mask associated with the Persistent IP address on this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
    */
    IntegerFeature GevPersistentSubnetMask;
    /**
    Returns the address of the primary application.
    */
    IntegerFeature GevPrimaryApplicationIPAddress;
    /**
    Returns the UDP source port of the primary application.
    */
    IntegerFeature GevPrimaryApplicationSocket;
    /**
    Controls the key to use to authenticate primary application switchover requests.
    */
    IntegerFeature GevPrimaryApplicationSwitchoverKey;
    /**
    Enables the camera to continue to stream, for this stream channel, if its control channel is closed or regardless of the reception of any ICMP messages (such as destination unreachable messages).
    */
    BoolFeature GevSCCFGUnconditionalStreaming;
    /**
    Controls the destination IP address of the selected stream channel to which a GVSP transmitter must send data stream or the destination IP address from which a GVSP receiver may receive data stream.
    */
    IntegerFeature GevSCDA;
    /**
    Indicates the delay in timestamp counter unit to insert between each block (image) for the selected Stream Channel.
    */
    IntegerFeature GevSCFTD;
    /**
    Controls the delay (in GEV timestamp counter unit) to insert between each packet for this stream channel. This can be used as a crude flow-control mechanism if the application or the network infrastructure cannot keep up with the packets coming from the device.
    */
    IntegerFeature GevSCPD;
    /**
    Controls the port of the selected channel to which a GVSP transmitter must send data stream or the port from which a GVSP receiver may receive data stream. Setting this value to 0 closes the stream channel.
    */
    IntegerFeature GevSCPHostPort;
    /**
    Index of the logical link to use.
    */
    IntegerFeature GevSCPInterfaceIndex;
    /**
    The state of this feature is copied into the "do not fragment" bit of IP header of each stream packet. It can be used by the application to prevent IP fragmentation of packets on the stream channel.
    */
    BoolFeature GevSCPSDoNotFragment;
    /**
    Sends a test packet. When this feature is set, the device will fire one test packet.
    */
    BoolFeature GevSCPSFireTestPacket;
    /**
    This GigE Vision specific feature corresponds to DeviceStreamChannelPacketSize and should be kept in sync with it. It specifies the stream packet size, in bytes, to send on the selected channel for a GVSP transmitter or specifies the maximum packet size supported by a GVSP receiver.
    */
    IntegerFeature GevSCPSPacketSize;
    /**
    Indicates the source port of the stream channel.
    */
    IntegerFeature GevSCSP;
    /**
    Indicates the second URL to the GenICam XML device description file. This URL is an alternative if the application was unsuccessful to retrieve the device description file using the first URL.
    */
    StringFeature GevSecondURL;
    /**
    Selects the stream channel to control.
    */
    IntegerFeature GevStreamChannelSelector;
    /**
    Returns if the selected GEV option is supported.
    */
    BoolFeature GevSupportedOption;
    /**
    Selects the GEV option to interrogate for existing support.
    */
    CGevSupportedOptionSelector GevSupportedOptionSelector;
    /**
    Enables the High Dynamic Range mode of the camera.
    */
    BoolFeature HDREnable;
    /**
    Enables the TriggerAutoMode mode for HDR Mode of the camera.
    */
    BoolFeature HDREnableTriggerAutoMode;
    /**
    Sets the ratio of the total exposure time for the selected slope.
    */
    IntegerFeature HDRExposureRatio;
    /**
    Returns the ratio of the total exposure time for the selected slope expressed in percent.
    */
    DoubleFeature HDRExposureRatioPercent;
    /**
    Returns the exposure time for bright areas of image. This value represents the short exposure time, which is derived from (long) ExposureTime divided by HDRExposureTimeRatio.
    */
    DoubleFeature HDRExposureTimeBrightArea;
    /**
    Returns the exposure time for dark areas of image. This value represents the long exposure timea and is equal to the specified value of the standard feature ExposureTime.
    */
    DoubleFeature HDRExposureTimeDarkArea;
    /**
    Sets the exposure time ratio for HDR mode. Valid values are only power-of-two numbers. The feature will snap to next/previous valid value when current value is incremented/decremented, else it will round to nearest valid value.
    */
    IntegerFeature HDRExposureTimeRatio;
    /**
    Returns the sensor gain for bright areas of image. This value represents the lower gain used as offset for the HDR image.
    */
    IntegerFeature HDRGainBrightArea;
    /**
    Returns the sensor gain for dark areas of image. This value represents the higher gain, which is derived from lower gain and HDRGainRatio.
    */
    IntegerFeature HDRGainDarkArea;
    /**
    Returns the gain ratio for HDR mode.
    */
    DoubleFeature HDRGainRatio;
    /**
    Selects the gain ratio for HDR mode.
    */
    CHDRGainRatioSelector HDRGainRatioSelector;
    /**
    Selects the index of the HDR element to access.
    */
    IntegerFeature HDRIndex;
    /**
    Sets the saturation threshold of the selected slope.
    */
    IntegerFeature HDRPotentialAbs;
    /**
    Enables the calculation of an interleaved HDR image of the sensor to an HDR image. If this feature is disabled while HDR is enabled the interleaved HDR image of the sensor will be output.
    */
    BoolFeature HDRProcessingEnable;
    /**
    Enables smoothing of normalized neighbor pixels in HDR mode.
    */
    BoolFeature HDRProcessingSmoothingEnable;
    /**
    Specifies the upper threshold to determine valid pixels for HDR processing.
    */
    IntegerFeature HDRProcessingThresholdMax;
    /**
    Specifies the lower threshold to determine valid pixels for HDR processing.
    */
    IntegerFeature HDRProcessingThresholdMin;
    /**
    Enables the split view of interleaved HDR image.
    */
    BoolFeature HDRSplitviewEnable;
    /**
    Sets the gradient at selected grid point for HDR tone-mapping transfer curve.
    */
    DoubleFeature HDRTonemappingCurveGradient;
    /**
    Sets the grid point for HDR tone-mapping transfer curve.
    */
    IntegerFeature HDRTonemappingCurveGridpoint;
    /**
    Sets the index of grid point for the user-defined tone-mapping curve.
    */
    IntegerFeature HDRTonemappingCurveGridpointIndex;
    /**
    Sets the offset at selected grid point for HDR tone-mapping transfer curve.
    */
    IntegerFeature HDRTonemappingCurveOffset;
    /**
    Selects the predefined transfer curve for global tone-mapping of the calculated HDR image.
    */
    CHDRTonemappingCurvePresetSelector HDRTonemappingCurvePresetSelector;
    /**
    Resets the tone-mapping curve to the selected HDRTonemappingCurvePreset.
    */
    CommandFeature HDRTonemappingCurveResetToPreset;
    /**
    Enables the tone-mapping of calculated HDR image. If this feature is deactivated HDR pixels are only cropped to width of specified output pixelformat and HDR information will be lost..
    */
    BoolFeature HDRTonemappingEnable;
    /**
    Specifies the statistical maximal pixel value for local tone-mapping of the calculated HDR image.
    */
    IntegerFeature HDRTonemappingMax;
    /**
    Specifies the statistical mean value for local tone-mapping of the calculated HDR image.
    */
    IntegerFeature HDRTonemappingMean;
    /**
    Enables the HQ Mode of the camera with lower sensor frequency.
    */
    BoolFeature HQModeEnable;
    /**
    Height of the image provided by the device (in pixels).
    */
    IntegerFeature Height;
    /**
    Maximum height of the image (in pixels). This dimension is calculated after vertical binning, decimation or any other function changing the vertical dimension of the image.
    */
    IntegerFeature HeightMax;
    /**
    Returns the high conversion gain of the sensor.
    */
    DoubleFeature HighConversionGain;
    /**
    Enables the high conversion gain mode inside the sensor.
    */
    BoolFeature HighConversionGainEnable;
    /**
    Control the rate of the produced compressed stream.
    */
    DoubleFeature ImageCompressionBitrate;
    /**
    When JPEG is selected as the compression format, a device might optionally offer better control over JPEG-specific options through this feature.
    */
    CImageCompressionJPEGFormatOption ImageCompressionJPEGFormatOption;
    /**
    Enable a specific image compression mode as the base mode for image transfer.
    */
    CImageCompressionMode ImageCompressionMode;
    /**
    Control the quality of the produced compressed stream.
    */
    IntegerFeature ImageCompressionQuality;
    /**
    Two rate controlling options are offered: fixed bit rate or fixed quality. The exact implementation to achieve one or the other is vendor-specific.
    */
    CImageCompressionRateOption ImageCompressionRateOption;
    /**
    Describe the Version of Image Compression implementation.
    */
    StringFeature ImageCompressionVersion;
    /**
    Returns the data of the image. The size of the image itself is given in the Length element of the feature. The start address is stored in the element Address of the feature.
    */
    RegisterFeature ImageData;
    /**
    Enables the feature ImageData. If it is switch off the feature ImageData is not available.
    */
    BoolFeature ImageDataEnable;
    /**
    Returns the interface speed mode as string.
    */
    CInterfaceSpeedMode InterfaceSpeedMode;
    /**
    Specifies the content of the selected LUT.
    */
    CLUTContent LUTContent;
    /**
    Activates the selected LUT.
    */
    BoolFeature LUTEnable;
    /**
    Control the index (offset) of the coefficient to access in the selected LUT.
    */
    IntegerFeature LUTIndex;
    /**
    Selects which LUT to control.
    */
    CLUTSelector LUTSelector;
    /**
    Returns the Value at entry LUTIndex of the LUT selected by LUTSelector.
    */
    IntegerFeature LUTValue;
    /**
    Enables Lens Distortion Correction.
    */
    BoolFeature LensDistortionCorrectionEnable;
    /**
    Sets the absolute value of the selected line debouncer time in microseconds for switch from low to high.
    */
    DoubleFeature LineDebouncerHighTime;
    /**
    Sets the absolute value of the selected line debouncer time in microseconds for switch from low to high.
    */
    DoubleFeature LineDebouncerHighTimeAbs;
    /**
    Sets the absolute value of the selected line debouncer time in microseconds for switch from high to low.
    */
    DoubleFeature LineDebouncerLowTime;
    /**
    Sets the absolute value of the selected line debouncer time in microseconds for switch from high to low.
    */
    DoubleFeature LineDebouncerLowTimeAbs;
    /**
    Controls the current electrical format of the selected physical input or output Line.
    */
    CLineFormat LineFormat;
    /**
    Controls the inversion of the signal of the selected input or output Line.
    */
    BoolFeature LineInverter;
    /**
    Returns the minimal length of a line internal reading by the camera in pixels.
    */
    IntegerFeature LineLengthMin;
    /**
    Controls if the physical Line is used to Input or Output a signal.
    */
    CLineMode LineMode;
    /**
    Enables the line PWM configuration mode.
    */
    CLinePWMConfigurationMode LinePWMConfigurationMode;
    /**
    Sets the duration in microseconds.
    */
    IntegerFeature LinePWMDuration;
    /**
    Sets the duty cycle in percent.
    */
    IntegerFeature LinePWMDutyCycle;
    /**
    Sets the maximum duration in microseconds.
    */
    IntegerFeature LinePWMMaxDuration;
    /**
    Sets the maximal duty cycle in percent.
    */
    IntegerFeature LinePWMMaxDutyCycle;
    /**
    Enables the line PWM configuration mode.
    */
    CLinePWMMode LinePWMMode;
    /**
    Returns the off time included in the PWM Period in microseconds.
    */
    IntegerFeature LinePWMOffTime;
    /**
    Returns the period time calculated of the given Duration and Duty Cycle in microseconds.
    */
    IntegerFeature LinePWMPeriodTime;
    /**
    Counter and Timer Control
    */
    StringFeature LinePWMVersion;
    /**
    Selects the physical line (or pin) of the external device connector or the virtual line of the Transport Layer to configure.
    */
    CLineSelector LineSelector;
    /**
    Selects which internal acquisition or I/O source signal to output on the selected Line. LineMode must be Output.
    */
    CLineSource LineSource;
    /**
    Returns the current status of the selected input or output Line.
    */
    BoolFeature LineStatus;
    /**
    Returns the current status of all available Line signals at time of polling in a single bitfield.
    */
    IntegerFeature LineStatusAll;
    /**
    Returns the number of lost events.
    */
    IntegerFeature LostEventCounter;
    /**
    Enables the Median filter.
    */
    BoolFeature MedianFilterEnable;
    /**
    Returns the active memory part to write the images in.
    */
    CMemoryActivePart MemoryActivePart;
    /**
    Returns the number of filled memory blocks.
    */
    IntegerFeature MemoryFilledBlocks;
    /**
    Returns the number of free memory blocks.
    */
    IntegerFeature MemoryFreeBlocks;
    /**
    Returns the maximum number of available memory blocks.It depends on partial scan features, pixelformat and selected acquisition format.
    */
    IntegerFeature MemoryMaxBlocks;
    /**
    Controls the mode to use the memory.
    */
    CMemoryMode MemoryMode;
    /**
    Returns the index of the actual used memory block.
    */
    IntegerFeature MemoryPartActiveBlock;
    /**
    Sest the number of available memory blocks in the selected memory part.
    */
    IntegerFeature MemoryPartBlocks;
    /**
    Returns the number of filled memory blocks in the selected memory part.
    */
    IntegerFeature MemoryPartFilledBlocks;
    /**
    Returns the number of free memory blocks in the selected memory part.
    */
    IntegerFeature MemoryPartFreeBlocks;
    /**
    Writes to the command switch the active memory part incremental.
    */
    CommandFeature MemoryPartIncrementSoftware;
    /**
    Selects the source to switch the active memory part.
    */
    CMemoryPartIncrementSource MemoryPartIncrementSource;
    /**
    Selects the mode to use for the selected memory part.
    */
    CMemoryPartMode MemoryPartMode;
    /**
    Sets the ratio of preview images transmitted to host. A Value of 0 means no images are transmitted. A Value of 1 means every image will be transmitted and so on.
    */
    IntegerFeature MemoryPartPreviewRatio;
    /**
    Selects on of the available memory parts.
    */
    CMemoryPartSelector MemoryPartSelector;
    /**
    Horizontal offset from the origin to the region of interest (in pixels).
    */
    IntegerFeature OffsetX;
    /**
    Vertical offset from the origin to the region of interest (in pixels).
    */
    IntegerFeature OffsetY;
    /**
    Closes the optic controller connection and prepares it for removal.
    */
    CommandFeature OpticControllerDisconnect;
    /**
    Name of the device family of the optic controller.
    */
    StringFeature OpticControllerFamilyName;
    /**
    Version of the firmware in the optic controller.
    */
    StringFeature OpticControllerFirmwareVersion;
    /**
    Initializes the optic controller and makes it ready for use.
    */
    CommandFeature OpticControllerInitialize;
    /**
    Model name of the optic controller.
    */
    StringFeature OpticControllerModelName;
    /**
    Selects which optic controller to configure.
    */
    COpticControllerSelector OpticControllerSelector;
    /**
    Serial number of the optic controller.
    */
    StringFeature OpticControllerSerialNumber;
    /**
    Reads the status of the optic controller.
    */
    COpticControllerStatus OpticControllerStatus;
    /**
    Temperature of the optic controller in degrees Celsius (C).
    */
    DoubleFeature OpticControllerTemperature;
    /**
    Enables the thermal compensation of the optic controller. This automatically adjusts the focus value of the optic controller to keep the same focus when temperature changes.
    */
    BoolFeature OpticControllerThermalCompensation;
    /**
    Name of the manufacturer of the optic controller.
    */
    StringFeature OpticControllerVendorName;
    /**
    Version of the optic controller.
    */
    StringFeature OpticControllerVersion;
    /**
    PIN to unlock the camera stream.
    */
    IntegerFeature PIN;
    /**
    Enables the partial scan readout.
    */
    CPartialScanEnabled PartialScanEnabled;
    /**
    Provides the number of bytes transferred for each data buffer or chunk on the stream channel. This includes any end-of-line, end-of-frame statistics or other stamp data. This is the total size of data payload for a data block.
    */
    IntegerFeature PayloadSize;
    /**
    Returns the physical pixel size X in um.
    */
    DoubleFeature PhysicalPixelSizeX;
    /**
    Returns the physical pixel size Y in um.
    */
    DoubleFeature PhysicalPixelSizeY;
    /**
    Enables the dark pixel and warm pixel correction.
    */
    BoolFeature PixelCorrectionEnable;
    /**
    Sets the threshold for Pixel correction.
    */
    IntegerFeature PixelCorrectionThreshold;
    /**
    Format of the pixels provided by the device. It represents all the information provided by PixelSize, PixelColorFilter combined in a single feature.
    */
    CPixelFormat PixelFormat;
    /**
    Indicates the expected accuracy of the device PTP clock when it is the grandmaster, or in the event it becomes the grandmaster.
    */
    CPtpClockAccuracy PtpClockAccuracy;
    /**
    Returns the latched clock ID of the PTP device.
    */
    IntegerFeature PtpClockID;
    /**
    Sets the offset which will be added or subtracted to the cameras internal timestamp.
    */
    IntegerFeature PtpClockOffset;
    /**
    Sets the mode to handle PtpClockOffset for command PtpClockOffsetSet.
    */
    CPtpClockOffsetMode PtpClockOffsetMode;
    /**
    Sets PtpClockOffset active like described in PtpClockOffsetMode.
    */
    CommandFeature PtpClockOffsetSet;
    /**
    Latches the current values from the device's PTP clock data set.
    */
    CommandFeature PtpDataSetLatch;
    /**
    Sets the offset which will be added or subtracted to the cameras internal timestamp increment.
    */
    IntegerFeature PtpDriftOffset;
    /**
    Sets the mode to handle PtpDriftOffset for command PtpDriftOffsetSet.
    */
    CPtpDriftOffsetMode PtpDriftOffsetMode;
    /**
    Sets PtpDriftOffset active like described in PtpDriftOffsetMode.
    */
    CommandFeature PtpDriftOffsetSet;
    /**
    Enables the Precision Time Protocol (PTP).
    */
    BoolFeature PtpEnable;
    /**
    Returns the latched grandmaster clock ID of the PTP device. The grandmaster clock ID is the clock ID of the current grandmaster clock.
    */
    IntegerFeature PtpGrandmasterClockID;
    /**
    Sets ki value of servos pi controller if PtpUseControllerTestSettings = True.
    */
    DoubleFeature PtpKi;
    /**
    Sets kp value of servos pi controller if PtpUseControllerTestSettings = True.
    */
    DoubleFeature PtpKp;
    /**
    Selects the PTP clock type the device will act as.
    */
    CPtpMode PtpMode;
    /**
    Returns the latched offset from the PTP master clock in nanoseconds.
    */
    IntegerFeature PtpOffsetFromMaster;
    /**
    Returns the latched parent clock ID of the PTP device. The parent clock ID is the clock ID of the current master clock.
    */
    IntegerFeature PtpParentClockID;
    /**
    Returns the latched state of the clock servo. When the servo is in a locked state, the value returned is 'Locked'. When the servo is in a non-locked state, a device-specific value can be returned to give specific information. If no device-specific value is available to describe the current state of the clock servo, the value should be 'Unknown'.
    */
    CPtpServoStatus PtpServoStatus;
    /**
    Sets the threshold of time difference to Ptp Master Clock for transition PtpServoStatus Unknown to Locked.
    */
    IntegerFeature PtpServoStatusThreshold;
    /**
    Returns the latched state of the PTP clock.
    */
    CPtpStatus PtpStatus;
    /**
    Returns the latched sync message interval from the PTP master clock in milliseconds.
    */
    DoubleFeature PtpSyncMessageInterval;
    /**
    Returns if the latched sync message interval from the PTP master clock is supported by the device. An unsupported sync message interval may result in PtpServoStatus instability.
    */
    CPtpSyncMessageIntervalStatus PtpSyncMessageIntervalStatus;
    /**
    Sets the offset which will be added or subtracted to the ptp ethernet Rx and/or Tx timestamps.
    */
    IntegerFeature PtpTimestampOffset;
    /**
    Sets the mode to handle PtpTimestampOffset for command PtpTimestampOffsetSet.
    */
    CPtpTimestampOffsetMode PtpTimestampOffsetMode;
    /**
    Sets PtpTimestampOffset active like described in PtpTimestampOffsetMode.
    */
    CommandFeature PtpTimestampOffsetSet;
    /**
    Uses PtpKp and PtpKi as pi controller values.
    */
    BoolFeature PtpUseControllerTestSettings;
    /**
    Selects the number of image buffers filled with data of sensor output. If all buffers full the oldest buffer will be overwritten.
    */
    CReadOutBuffering ReadOutBuffering;
    /**
    Returns the Readout Time in us for current format settings.
    */
    IntegerFeature ReadOutTime;
    /**
    Specifies the operation mode of the readout for the acquisition.
    */
    CReadoutMode ReadoutMode;
    /**
    Returns the acquisition mode of the regions.
    */
    CRegionAcquisitionMode RegionAcquisitionMode;
    /**
    Returns the configuration mode of the regions.
    */
    CRegionConfigurationMode RegionConfigurationMode;
    /**
    Returns a unique Identifier value that corresponds to the selected Region.
    */
    IntegerFeature RegionIDValue;
    /**
    Controls if the selected Region of interest is active and streaming.
    */
    CRegionMode RegionMode;
    /**
    Selects the Region of interest to control. The RegionSelector feature allows devices that are able to extract multiple regions out of an image, to configure the features of those individual regions independently.
    */
    CRegionSelector RegionSelector;
    /**
    Returns the transfer mode of the regions.
    */
    CRegionTransferMode RegionTransferMode;
    /**
    Returns the Version of Multi ROI implementation.
    */
    StringFeature RegionVersion;
    /**
    Flip horizontally the image sent by the device. The Region of interest is applied after the flipping.
    */
    BoolFeature ReverseX;
    /**
    Flip vertically the image sent by the device. The Region of interest is applied after the flipping.
    */
    BoolFeature ReverseY;
    /**
    Controls the length of a serial acknowledge message from RS232 to the device.
    */
    IntegerFeature RxAcknowledgeLength;
    /**
    Returns the number of discarded messages in receiving direction.
    */
    IntegerFeature RxDiscardedMessages;
    /**
    Returns the received data if available.
    */
    RegisterFeature RxFiFo;
    /**
    Returns the length of the current received message in the RS232-Rx FIFO and 0 if no message was received.
    */
    IntegerFeature RxFiFoMessageLength;
    /**
    Sets the number of attempts to receive a message if direct receiving was not successful.
    */
    IntegerFeature RxRetryCount;
    /**
    Sets the maximum delay between to received bytes for recognition of message ends in bit times.
    */
    IntegerFeature RxSynchronizationDelay;
    /**
    Sets the maximum delay between to received bytes for recognition of message ends in us.
    */
    DoubleFeature RxSynchronizationDelayNormalized;
    /**
    Controls the streaming operation.
    */
    CSIControl SIControl;
    /**
    Returns the size of the first final Payload Transfer.
    */
    IntegerFeature SIPayloadFinalTransfer1Size;
    /**
    Returns the size of the second final Payload Transfer.
    */
    IntegerFeature SIPayloadFinalTransfer2Size;
    /**
    Returns the expected number of Payload Transfers.
    */
    IntegerFeature SIPayloadTransferCount;
    /**
    Returns the expected size of a single Payload Transfer.
    */
    IntegerFeature SIPayloadTransferSize;
    /**
    Controls the sensors AD digitization in bits per pixels.
    */
    CSensorADDigitization SensorADDigitization;
    /**
    Controls if the sensor adjustment configuration mode is active
    */
    CSensorCutConfigurationMode SensorCutConfigurationMode;
    /**
    The start point of pixel 0 on a line for sensor selected sensor source. It is programmed during sensor adjustment.
    */
    IntegerFeature SensorCutX;
    /**
    The start point of line 0 for in the image for sensor selected sensor source. It is programmed during sensor adjustment.
    */
    IntegerFeature SensorCutY;
    /**
    Number of digitized samples outputted simultaneously by the camera A/D conversion stage.
    */
    CSensorDigitizationTaps SensorDigitizationTaps;
    /**
    Enables the Sensor Effect Correction.
    */
    BoolFeature SensorEffectCorrection;
    /**
    Returns the number of lost frames because of sensor FIFO overflow.
    */
    IntegerFeature SensorFiFoOverflowCounter;
    /**
    Resets the Sensor FIFO overflow counter to 0.
    */
    CommandFeature SensorFiFoOverflowCounterReset;
    /**
    Effective height of the sensor in pixels.
    */
    IntegerFeature SensorHeight;
    /**
    Product name of the imaging Sensor.
    */
    StringFeature SensorName;
    /**
    Physical size (pitch) in the y direction of a photo sensitive pixel unit.
    */
    DoubleFeature SensorPixelHeight;
    /**
    Physical size (pitch) in the x direction of a photo sensitive pixel unit.
    */
    DoubleFeature SensorPixelWidth;
    /**
    Specifies the shutter mode of the device.
    */
    CSensorShutterMode SensorShutterMode;
    /**
    Number of taps of the camera sensor.
    */
    CSensorTaps SensorTaps;
    /**
    Effective width of the sensor in pixels.
    */
    IntegerFeature SensorWidth;
    /**
    Controls if the sequencer configuration mode is active.
    */
    CSequencerConfigurationMode SequencerConfigurationMode;
    /**
    Enables the selected feature and make it active in all the sequencer sets.
    */
    BoolFeature SequencerFeatureEnable;
    /**
    Selects which sequencer features to control.
    */
    CSequencerFeatureSelector SequencerFeatureSelector;
    /**
    Controls if the sequencer mechanism is active.
    */
    CSequencerMode SequencerMode;
    /**
    Selects to which branching path further path settings applies.
    */
    IntegerFeature SequencerPathSelector;
    /**
    Contains the currently active sequencer set.
    */
    IntegerFeature SequencerSetActive;
    /**
    Loads the sequencer set selected by SequencerSetSelector in the device. Even if SequencerMode is off, this will change the device state to the configuration of the selected set.
    */
    CommandFeature SequencerSetLoad;
    /**
    Specifies the next sequencer set.
    */
    IntegerFeature SequencerSetNext;
    /**
    Saves the current device state to the sequencer set selected by the SequencerSetSelector.
    */
    CommandFeature SequencerSetSave;
    /**
    Selects the sequencer set to which further feature settings applies.
    */
    IntegerFeature SequencerSetSelector;
    /**
    Sets the initial/start sequencer set, which is the first set used within a sequencer.
    */
    IntegerFeature SequencerSetStart;
    /**
    Specifies the activation mode of the sequencer trigger.
    */
    CSequencerTriggerActivation SequencerTriggerActivation;
    /**
    Specifies the internal signal or physical input line to use as the sequencer trigger source.
    */
    CSequencerTriggerSource SequencerTriggerSource;
    /**
    Starts Shading Calibration.
    */
    CommandFeature ShadingCalibrationStart;
    /**
    Enables Shading Correction.
    */
    BoolFeature ShadingEnable;
    /**
    Returns the maximum gain for Shading.
    */
    IntegerFeature ShadingMaxGain;
    /**
    Returns the Port Address for Shading as a hexadecimal value.
    */
    IntegerFeature ShadingPortAddress;
    /**
    Selects the Shading Port Address.
    */
    CShadingSelector ShadingSelector;
    /**
    Returns the number of pixels as border at x direction.
    */
    IntegerFeature ShadingXBorder;
    /**
    Returns the number of pixels as border at y direction.
    */
    IntegerFeature ShadingYBorder;
    /**
    Enables the Sharpening.
    */
    BoolFeature SharpeningEnable;
    /**
    Sets the factor for Sharpening.
    */
    IntegerFeature SharpeningFactor;
    /**
    Selects the Sharpening Mode.
    */
    CSharpeningMode SharpeningMode;
    /**
    Sets the value of the Sharpening Sensitivity Threshold.
    */
    IntegerFeature SharpeningSensitivityThreshold;
    /**
    Sets the value of the Sharpening Sensitivity Threshold.
    */
    IntegerFeature SharpeningSensitvityThreshold;
    /**
    Controls if short exposure time should be supported. Note if this feature is enabled one cannot use the sequencer.
    */
    BoolFeature ShortExposureTimeEnable;
    /**
    Enables the correction of Shutter Line and Exposure Lines when set to True, disables it when set to False.
    */
    BoolFeature ShutterLineCorrectionEnable;
    /**
    Sets the offset correction value that the camera applies to the even line in the "Shutter Line" region.
    */
    IntegerFeature ShutterLineOffsetEven;
    /**
    Sets the offset correction value that the camera applies to the odd line in the "Shutter Line" region.
    */
    IntegerFeature ShutterLineOffsetOdd;
    /**
    Controls or returns the number of sources supported by the device.
    */
    IntegerFeature SourceCount;
    /**
    Returns a unique Identifier value that correspond to the selected Source.
    */
    CSourceID SourceID;
    /**
    Returns a unique Identifier value that correspond to the selected Source.
    */
    IntegerFeature SourceIDValue;
    /**
    Selects the source to control.
    */
    CSourceSelector SourceSelector;
    /**
    Returns if the selected MAC address table entry is valid or not.
    */
    BoolFeature SwitchMACAddressTableEntryIsValid;
    /**
    Provides the MAC address of the selected MAC address table entry.
    */
    IntegerFeature SwitchMACAddressTableEntryMACAddress;
    /**
    Provides the port number of the selected MAC address table entry.
    */
    IntegerFeature SwitchMACAddressTableEntryPortNumber;
    /**
    Selects the MAC addresses table entry for the MAC address table entry related features.
    */
    IntegerFeature SwitchMACAddressTableEntrySelector;
    /**
    Provides the number MAC addresses at switches MAC address table.
    */
    IntegerFeature SwitchNumberOfMACAddresses;
    /**
    Provides the number of ports of the switch.
    */
    IntegerFeature SwitchNumberOfPorts;
    /**
    Returns the value of the broadcast valid counter.
    */
    IntegerFeature SwitchPortBroadcastValidCounter;
    /**
    Returns the value of the buffer full counter.
    */
    IntegerFeature SwitchPortBufferFullCounter;
    /**
    Provides the buffer size at the selected port.
    */
    IntegerFeature SwitchPortBufferSize;
    /**
    Returns the value of the CRC error counter.
    */
    IntegerFeature SwitchPortCRCErrorCounter;
    /**
    Returns the value of the multicast valid counter.
    */
    IntegerFeature SwitchPortMulticastValidCounter;
    /**
    Provides the number of buffers at the selected port.
    */
    IntegerFeature SwitchPortNumberOfBuffers;
    /**
    Returns the value of the PAUSE frame reception counter.
    */
    IntegerFeature SwitchPortPAUSEFrameReceptionCounter;
    /**
    Returns the value of the Packet size error counter.
    */
    IntegerFeature SwitchPortPacketSizeErrorCounter;
    /**
    Selects the port for the port related features.
    */
    CSwitchPortSelector SwitchPortSelector;
    /**
    Returns the value of the unicast valid counter.
    */
    IntegerFeature SwitchPortUnicastValidCounter;
    /**
    Provides the switch version.
    */
    IntegerFeature SwitchVersion;
    /**
    Used by the Transport Layer to prevent critical features from changing during acquisition.
    */
    IntegerFeature TLParamsLocked;
    /**
    Generates a Test Event.
    */
    CommandFeature TestEventGenerate;
    /**
    Selects the type of test pattern that is generated by the device as image source.
    */
    CTestPattern TestPattern;
    /**
    Selects which test pattern generator is controlled by the TestPattern feature.
    */
    CTestPatternGeneratorSelector TestPatternGeneratorSelector;
    /**
    This feature allows setting a device in test mode and to output a specific payload format for validation of data streaming. This feature is intended solely for test purposes. The data can be real acquired data or any test pattern.
    */
    CTestPayloadFormatMode TestPayloadFormatMode;
    /**
    Tests the device's pending acknowledge feature. When this feature is written, the device waits a time period corresponding to the value of TestPendingAck before acknowledging the write.
    */
    IntegerFeature TestPendingAck;
    /**
    Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer.
    */
    DoubleFeature TimerDelay;
    /**
    Sets the duration (in microseconds) of the Timer pulse.
    */
    DoubleFeature TimerDuration;
    /**
    Selects which Timer to configure.
    */
    CTimerSelector TimerSelector;
    /**
    Selects the activation mode of the trigger to start the Timer.
    */
    CTimerTriggerActivation TimerTriggerActivation;
    /**
    Selects the source of the trigger to start the Timer.
    */
    CTimerTriggerSource TimerTriggerSource;
    /**
    Latches the current timestamp counter into TimestampLatchValue.
    */
    CommandFeature TimestampLatch;
    /**
    Returns the latched value of the timestamp counter.
    */
    IntegerFeature TimestampLatchValue;
    /**
    Returns the latched value of the Ptp timestamp in days since 01.01.1970 00:00:00.
    */
    IntegerFeature TimestampLatchValuePtpDays;
    /**
    Returns the latched value of the Ptp timestamp in hours since 00:00 AM.
    */
    IntegerFeature TimestampLatchValuePtpHours;
    /**
    Returns the latched value of the Ptp timestamp in minutes since the last hour.
    */
    IntegerFeature TimestampLatchValuePtpMinutes;
    /**
    Returns the latched value of the Ptp timestamp in nanoseconds since the last second.
    */
    IntegerFeature TimestampLatchValuePtpNanoseconds;
    /**
    Returns the latched value of the Ptp timestamp counters in seconds since the last minute.
    */
    IntegerFeature TimestampLatchValuePtpSeconds;
    /**
    Resets the current value of the device timestamp counter.
    */
    CommandFeature TimestampReset;
    /**
    Selects the control method for the transfers.
    */
    CTransferControlMode TransferControlMode;
    /**
    Selects the operation mode of the transfer.
    */
    CTransferOperationMode TransferOperationMode;
    /**
    Selects which stream transfers are currently controlled by the selected Transfer features.
    */
    CTransferSelector TransferSelector;
    /**
    Starts the streaming of data blocks out of the device. This feature must be available when the TransferControlMode is set to "UserControlled". If the TransferStart feature is not writable (locked), the application should not start the transfer and should avoid using the feature until it becomes writable again.
    */
    CommandFeature TransferStart;
    /**
    Reads the status of the Transfer module signal selected by TransferStatusSelector.
    */
    BoolFeature TransferStatus;
    /**
    Selects which status of the transfer module to read.
    */
    CTransferStatusSelector TransferStatusSelector;
    /**
    Stops the streaming of data Block(s). The current block transmission will be completed. This feature must be available when the TransferControlMode is set to "UserControlled".
    */
    CommandFeature TransferStop;
    /**
    Specifies the activation mode of the trigger.
    */
    CTriggerActivation TriggerActivation;
    /**
    Latches the current timestamp counter into TimestampLatchValue.
    */
    CommandFeature TriggerCounterLatch;
    /**
    Returns the latched value of the trigger counter.
    */
    IntegerFeature TriggerCounterLatchValue;
    /**
    Resets the current value of the device trigger counter.
    */
    CommandFeature TriggerCounterReset;
    /**
    Specifies the delay in microseconds (us) to apply after the trigger reception before activating it.
    */
    DoubleFeature TriggerDelay;
    /**
    Generates the test event if the event channel for this event is enabled.
    */
    CommandFeature TriggerEventTest;
    /**
    Controls if the selected trigger is active.
    */
    CTriggerMode TriggerMode;
    /**
    Specifies the type trigger overlap permitted with the previous frame or line. This defines when a valid trigger will be accepted (or latched) for a new frame or a new line.
    */
    CTriggerOverlap TriggerOverlap;
    /**
    Selects the type of trigger to configure.
    */
    CTriggerSelector TriggerSelector;
    /**
    Generates an internal trigger. TriggerSource must be set to Software.
    */
    CommandFeature TriggerSoftware;
    /**
    Specifies the internal signal or physical input Line to use as the trigger source. The selected trigger must have its TriggerMode set to On.
    */
    CTriggerSource TriggerSource;
    /**
    Sets the delay between two consecutive bytes inside a sent message in bit times.
    */
    IntegerFeature TxByteDelay;
    /**
    Sets the delay between two consecutive bytes inside a sent message in us.
    */
    DoubleFeature TxByteDelayNormalized;
    /**
    Sets the Length of a serial command message from device to RS232.
    */
    IntegerFeature TxCommandoLength;
    /**
    Returns the number of unsent or discarded messages in sending direction.
    */
    IntegerFeature TxDiscardedMessages;
    /**
    Writes into the FIFO for sending messages over RS232.
    */
    RegisterFeature TxFiFo;
    /**
    Returns the number of RS232-Tx FIFO buffers currently free and usable.
    */
    IntegerFeature TxFiFoFreeBufferCount;
    /**
    Sets the minimal delay between last and first byte of two consecutive sent messages in bit times.
    */
    IntegerFeature TxMessageDelay;
    /**
    Returns the minimal delay between last and first byte of two consecutive sent messages in us.
    */
    DoubleFeature TxMessageDelayNormalized;
    /**
    Sets the number of attempts to resend a message if direct sending was not successful.
    */
    IntegerFeature TxRetryCount;
    /**
    Enables the streaming support for USB 2.0. Note, changing features value causes in an automatically reset of the device!
    */
    BoolFeature USB2SupportEnable;
    /**
    Selects which bit of the User Output register will be set by UserOutputValue.
    */
    CUserOutputSelector UserOutputSelector;
    /**
    Sets the value of the bit selected by UserOutputSelector.
    */
    BoolFeature UserOutputValue;
    /**
    Sets the value of all the bits of the User Output register. It is subject to the UserOutputValueAllMask.
    */
    IntegerFeature UserOutputValueAll;
    /**
    Returns the data of the selected UserSet. The size of the UserSet itself is given in the Length element of the feature. The start address is stored in the element Address of the feature. The feature is only available if the feature UserSetDataEnable is switched on.
    */
    RegisterFeature UserSetData;
    /**
    Enables the feature UserSetData. If it is switch to off the feature UserSetData is not available.
    */
    BoolFeature UserSetDataEnable;
    /**
    Selects the feature User Set to load and make active by default when the device is reset.
    */
    CUserSetDefault UserSetDefault;
    /**
    Enables the selected feature and make it active in all the UserSets.
    */
    BoolFeature UserSetFeatureEnable;
    /**
    Selects which individual UserSet feature to control.
    */
    CUserSetFeatureSelector UserSetFeatureSelector;
    /**
    Loads the User Set specified by UserSetSelector to the device and makes it active.
    */
    CommandFeature UserSetLoad;
    /**
    Save the User Set specified by UserSetSelector to the non-volatile memory of the device.
    */
    CommandFeature UserSetSave;
    /**
    Selects the feature User Set to load, save or configure.
    */
    CUserSetSelector UserSetSelector;
    /**
    Sets the selector for the Start Address of a single UserSet where the UserSet Data can read from.
    */
    IntegerFeature UserSetStartAddressSelector;
    /**
    Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted.
    */
    CommandFeature WhiteBalance;
    /**
    Width of the image provided by the device (in pixels).
    */
    IntegerFeature Width;
    /**
    Maximum width of the image (in pixels). The dimension is calculated after horizontal binning, decimation or any other function changing the horizontal dimension of the image.
    */
    IntegerFeature WidthMax;
    /**
    Reports the number of discarded action command due to wrong action command parameters (DeviceKey, GroupKey, GroupMask).
    */
    IntegerFeature aActionCommandMACCtrlFramesError;
    /**
    Reports the number of received action command packets.
    */
    IntegerFeature aActionCommandMACCtrlFramesReceived;
    /**
    Reports the number of received PAUSE frames.
    */
    IntegerFeature aPAUSEMACCtrlFramesReceived;
    /**
    Reports the number of discarded packets due to wrong MAC address or wrong IP protocol or wrong UDP port or CRC error.
    */
    IntegerFeature aPacketMACCtrlFramesError;
    /**
    Reports the number of packets which cannot be received due to full receive buffers.
    */
    IntegerFeature aPacketMACCtrlFramesLost;
    /**
    Reports the number of correct received packets.
    */
    IntegerFeature aPacketMACCtrlFramesReceived;
    /**
    Reports the number of discarded resend packets due to wrong stream channel index or full resend queue.
    */
    IntegerFeature aResendMACCtrlFramesError;
    /**
    Reports the number of received resend packets.
    */
    IntegerFeature aResendMACCtrlFramesReceived;
    /**
    Angular aperture of the lens as the angular size of the lens aperture as seen from the focal point in degree.
    */
    DoubleFeature boCalibrationAngularAperture;
    /**
    Controls if the calibration data configuration mode is active.
    */
    CboCalibrationDataConfigurationMode boCalibrationDataConfigurationMode;
    /**
    Saves the current calibration data.
    */
    CommandFeature boCalibrationDataSave;
    /**
    Version of the calibration data.
    */
    StringFeature boCalibrationDataVersion;
    /**
    Focal length in millimeters (mm).
    */
    DoubleFeature boCalibrationFocalLength;
    /**
    Selects the calibration matrix.
    */
    CboCalibrationMatrixSelector boCalibrationMatrixSelector;
    /**
    Selected value of calibration matrix.
    */
    DoubleFeature boCalibrationMatrixValue;
    /**
    Value selector of calibration matrix.
    */
    CboCalibrationMatrixValueSelector boCalibrationMatrixValueSelector;
    /**
    Selects the calibration vector.
    */
    CboCalibrationVectorSelector boCalibrationVectorSelector;
    /**
    Selected value of calibration vector.
    */
    DoubleFeature boCalibrationVectorValue;
    /**
    Value selector of calibration vector.
    */
    CboCalibrationVectorValueSelector boCalibrationVectorValueSelector;
    /**
    Selected Value of geometry distortion.
    */
    DoubleFeature boGeometryDistortionValue;
    /**
    Value Selector of geometry distortion.
    */
    CboGeometryDistortionValueSelector boGeometryDistortionValueSelector;
    /**
    Buffer for exchanging ASCII data over the serial interface. This buffer uses the same memory as boSerialBinaryReadBuffer.
    */
    StringFeature boSerialASCIIReadBuffer;
    /**
    Buffer for exchanging ASCII data over the serial interface. This buffer uses the same memory as boSerialBinaryWriteBuffer.
    */
    StringFeature boSerialASCIIWriteBuffer;
    /**
    Buffer for exchanging binary data over the serial interface. This buffer uses the same memory as boSerialASCIIReadBuffer.
    */
    RegisterFeature boSerialBinaryReadBuffer;
    /**
    Buffer for exchanging binary data over the serial interface. This buffer uses the same memory as boSerialASCIIWriteBuffer.
    */
    RegisterFeature boSerialBinaryWriteBuffer;
    /**
    When refreshed number of available data bytes for read are shown.
    */
    IntegerFeature boSerialBytesAvailableForRead;
    /**
    Length of data read with last SerialRead command.
    */
    IntegerFeature boSerialBytesRead;
    /**
    Length of data to read.
    */
    IntegerFeature boSerialBytesToRead;
    /**
    Length of data to write.
    */
    IntegerFeature boSerialBytesToWrite;
    /**
    Length of data written with last boSerialWrite command.
    */
    IntegerFeature boSerialBytesWritten;
    /**
    Serial interface clock frequency.
    */
    CboSerialConfigBaudRate boSerialConfigBaudRate;
    /**
    Number of data bits.
    */
    CboSerialConfigDataBits boSerialConfigDataBits;
    /**
    Serial interface parity.
    */
    CboSerialConfigParity boSerialConfigParity;
    /**
    Number of stop bits.
    */
    CboSerialConfigStopBits boSerialConfigStopBits;
    /**
    States the interface mode of the serial interface.
    */
    CboSerialMode boSerialMode;
    /**
    Command to read data from serial interface.
    */
    CommandFeature boSerialRead;
    /**
    Selects which serial interface to configure.
    */
    CboSerialSelector boSerialSelector;
    /**
    Result of the serial error detection mechanism. The value is reset with each read access.
    */
    IntegerFeature boSerialStatus;
    /**
    Command to write data to serial interface.
    */
    CommandFeature boSerialWrite;
    /**
    Enables the eVA Applet.
    */
    BoolFeature eVAAppletEnable;
    /**
    Sets the number of overlapped images if eVA applet is enabled.
    */
    IntegerFeature eVAAppletOverlappedImages;
};
}
#endif  // _NEOAPI_FEATUREACCESS_HPP__
