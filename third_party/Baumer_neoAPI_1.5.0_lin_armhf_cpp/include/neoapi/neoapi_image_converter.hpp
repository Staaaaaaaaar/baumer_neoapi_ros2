/* Copyright 2021 Baumer Optronic */
#ifndef  CPP_SRC_NEOAPI_IMAGE_CONVERTER_H_
#define  CPP_SRC_NEOAPI_IMAGE_CONVERTER_H_

#include <string>
#include <memory>
#include "neoapi_common.hpp"

class ConverterSettingsData;
class ColorMatrixData;

namespace NeoAPI {

/**
Class for the Color Transformation Matrix
This class provides methods to configure the Color Matrix for color cameras. The
Color Matrix can be used to achieve ideal color representation of an image during de-bayering.
After setting suitable values for the color matrix elements, you can pass the instance
to a NeoAPI::ConverterSettings instance which can than be used with the
NeoAPI::Image::Convert method to apply the settings to an image.
*/
class NEOAPI_CPP_DECL ColorMatrix {
 public:
    /**
    Valid names for the Color Matrix elements
        First number describes the row, second the column of the element, see SFNC
    */
    enum class Gain {
        Gain00 = 0,  // The red contribution to the red pixels (multiplicative factor)
        Gain01,  // The green contribution to the red pixels (multiplicative factor)
        Gain02,  // The blue contribution to the red pixels (multiplicative factor)
        Gain10,  // The red contribution to the green pixels (multiplicative factor)
        Gain11,  // The green contribution to the green pixels (multiplicative factor)
        Gain12,  // The blue contribution to the blue pixels (multiplicative factor)
        Gain20,  // The red contribution to the blue pixels (multiplicative factor)
        Gain21,  // The green contribution to the blue pixels (multiplicative factor)
        Gain22,  // The blue contribution to the blue pixels (multiplicative factor)
    };

    /**
    Constructor
    */
    ColorMatrix();
    /**
    Copy-Constructor
    Parameter:
        object An ColorMatrix object

    */
    ColorMatrix(const ColorMatrix& object);

    /**
    Destructor
    */
    virtual ~ColorMatrix();

    /**
    The "=" operator of the Image object
    Parameter:
        object An Image object

    Return: The Image object
    */
    virtual ColorMatrix& operator=(const ColorMatrix& object);


    /**
    Get the value of a matrix element
    Parameter:
        gain_selector  Selects a component.

    Return: The value of the selected component
    */
    virtual double GetValue(Gain gain_selector) const;

    /**
    Set the value of a matrix element
    Parameter:
        gain_selector  Selects a component.

        value  The new value for this component.

    Return: The ColorMatrix object
    */
    virtual ColorMatrix& SetValue(Gain gain_selector, double value);

 protected:
    /**
    Holds all internal data
    */
    ColorMatrixData* data_;
};

/**
Image post processing settings
This class provides methods to configure image conversions.
You can pass an instance to the NeoAPI::Image::Convert method to apply the settings to an image convertion.
USAGE:
*/
class NEOAPI_CPP_DECL ConverterSettings {
 public:
    /**
    Valid values for sharpening
    */
    enum class Sharpening {
        Off = 0,  // The Sharpening Mode is off.
        Global,  // Sharpening in every area of the image, independent of the content.
        Adaptive,  // No sharpening in homogeneous image areas.
        ActiveNoiseReduction  // The Sharpening Mode is Active Noise Reduction.
    };

    /**
    Valid values for demosaicing
    */
    enum class Demosaicing {
        Bilinear3x3 = 0,  // Bilinear 3x3
        Baumer5x5,  // Baumer 5x5
        NearestNeighbor,  // Nearest Neighbor
    };

    /**
    Constructor
    */
    ConverterSettings();

    /**
    Copy-Constructor
    Parameter:
        object A ConverterSettings object

    */
    ConverterSettings(const ConverterSettings& object);

    /**
    Destructor
    */
    virtual ~ConverterSettings();

    /**
    The "=" operator of the ConverterSettings object
    Parameter:
        object An ConverterSettings object

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& operator=(const ConverterSettings& object);

    /**
    Set the target PixelFormat for a conversion
        A camera can stream images in different formats. However this might not be the format you need to work with the
    image data. You can use this setting to convert an image from one format to another. (e.g. convert BayerRG8 to
    BGR to work with the image data using OpenCV).
        Parameter:
        format The target PixelFormat name

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& SetDebayerFormat(const NeoString& format);

    /**
    Get the target PixelFormat for a conversion
    Return: The target PixelFormat
    */
    virtual NeoString GetDebayerFormat() const;

    /**
    Set the target SharpeningMode for a conversion
    Parameter:
        mode  The SharpeningMode for the converted image.

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& SetSharpeningMode(Sharpening mode);

    /**
    Get the target SharpeningMode for a conversion
    Return: The target SharpeningMode
    */
    virtual Sharpening GetSharpeningMode() const;

    /**
    Set the target DemosaicingMethod for a conversion
    Parameter:
        method  The DemosaicingMethod for the converted image.

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& SetDemosaicingMethod(Demosaicing method);

    /**
    Get the target DemosaicingMethod for a conversion
    Return: The target DemosaicingMethod
    */
    virtual Demosaicing GetDemosaicingMethod() const;

    /**
    Set the target SharpeningFactor for a conversion
    Parameter:
        factor  The SharpeningFactor for the converted image.

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& SetSharpeningFactor(uint32_t factor);

    /**
    Get the target SharpeningFactor for a conversion
    Return: The target SharpeningFactor
    */
    virtual uint32_t GetSharpeningFactor() const;

    /**
    Set the target SharpeningSensitivityThreshold for a conversion
    Parameter:
        threshold  The SharpeningSensitivityThreshold for the converted image.

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& SetSharpeningSensitivityThreshold(uint32_t threshold);

    /**
    Get the target SharpeningSensitivityThreshold for a conversion
    Return: The target SharpeningSensitivityThreshold
    */
    virtual uint32_t GetSharpeningSensitivityThreshold() const;

    /**
    Set the target ColorTransformationMatrix for a conversion
    Parameter:
        matrix  The ColorMatrix for the converted image.

    Return: The ConverterSettings object
    */
    virtual ConverterSettings& SetColorTransformationMatrix(const ColorMatrix& matrix);

    /**
    Get the target ColorTransformationMatrix for a conversion
    Return: The target ColorTransformationMatrix
    */
    virtual ColorMatrix& GetColorTransformationMatrix() const;

 protected:
    /**
    Holds all internal data
    */
    ConverterSettingsData* data_;
};
}  // namespace NeoAPI
#endif  // CPP_SRC_NEOAPI_IMAGE_CONVERTER_H_
