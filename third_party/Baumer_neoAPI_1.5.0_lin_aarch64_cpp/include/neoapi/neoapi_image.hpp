
#ifndef _NEOAPI_IMAGE_HPP__
#define _NEOAPI_IMAGE_HPP__

#include "neoapi_common.hpp"
#include "neoapi_featureaccess.hpp"
#include "neoapi_image_converter.hpp"
#include "neoapi_image_info.hpp"

class ImageData;

namespace NeoAPI {

class BufferBase;
class ConverterSettings;

/**
Provides an object to get access to image data and its properties
The Image object is used to retrieve, store and convert images obtained from a camera.
Image provides a set of methodes to get information about, and work with an image (such as pixelformat,
size and offset).
When retrieving an image from a camera,
the Image object will reference an image-buffer without copying it's data for performance reasons.
If you copy the Image object using the "=" operator the image data will still not be copied but referenced.
If you want to copy image data please use the Image::Copy() or Image::Convert() methods
*/
class NEOAPI_CPP_DECL Image : public ImageInfo {
 public:
    /**
    Constructor
    */
    Image();

    /**
    Copy-Constructor
    Parameter:
        object An Image object

    */
    Image(const Image& object);

    /**
    Destructor
    */
    virtual ~Image();

    /**
    The "=" operator of the Image object
    Parameter:
        object An Image object

    Return: The Image object
    */
    const Image& operator = (const Image& object);

    /**
    Check if the image is empty or filled with data
    Return: False if the image is filled with data, otherwise true
    see also at CamBase::GetImage()
    */
    virtual bool IsEmpty() const;

    /**
     gives information if this image is the last image in a buffer
     Return: true if image is the last image in a buffer, otherwise false
     */
    virtual bool IsLastImage() const;

    /**
    Get a list with available PixelFormats for Convert
    Return: list of available PixelFormats
    see also at CamBase::GetImage()
    */
    virtual const NeoStringList& GetAvailablePixelFormats() const;

    /**
    Indicates whether the PixelFormat is available for conversion
    Parameter:
        pixelformat The target PixelFormat name

    Return: True if the pixelformat is available to work with, otherwise false
    */
    virtual bool IsPixelFormatAvailable(const NeoString& pixelformat) const;

    /**
    Get the Index of the image inside the buffer, returns zero as long the image is not filled with data
        Only when the image belongs to a GenDC buffer this value will be greater than one.
        Return: The Index of the image
    see also at CamBase::GetImage()
    */
    virtual uint64_t GetImageIndex() const;

    /**
    Get the ID of the buffer, returns zero as long the image is not filled with data
        The buffer ID allows to track which buffers have been received and if there is a gap which might show that an
    buffer was missed and not processed.
        Return: The ID of the buffer holding the image
    see also at CamBase::GetImage()
    */
    virtual uint64_t GetBufferID() const;

    /**
    Get the timestamp of the image, returns zero as long the image is not filled with data
        The image timestamp allows to track when images have been recorded and if there is a gap which might show that an
    image was missed and not transfered.
        Return: The timestamp of the image
    see also at CamBase::GetImage()
    */
    virtual uint64_t GetTimestamp() const;

    /**
    Get a pointer to the image data, returns nullptr as long as the image is not filled with data.
    Return: The pointer to image data
    see also at CamBase::GetImage()
    */
    virtual void* GetImageData() const;

    /**
    Get a list of all available chunk features of the image
    Return: A list of available chunk features
    see also at FeatureList
    */
    virtual FeatureList& GetChunkList() const;

    /**
    Copies the Image object and its image data
    Return: A new Image object
    NoImageBufferException The image could not be copied.
    see also at CamBase::GetImage()
    */
    virtual Image Copy() const;

    /**
    Save the image in bmp format at the given path
        If no path is given, the image will be stored where the executable is started
        Parameter:
        filename The filename or path for the saved image

    FileAccessException The image could not be saved at the given Path
    see also at CamBase::GetImage()
    */
    virtual void Save(const NeoString& filename) const;

    /**
    Convert the Image to another PixelFormat
        A camera can stream images in different formats. However this might not be the format you need to work with the
    image data. You can use this method to convert an image from one format to another. (e.g. convert BayerRG8 to BGR to work with the image data using OpenCV).
        Please see NeoAPI::PixelFormat for a list of possible formats
        Parameter:
        pixelformat The target PixelFormat name

    Return: A new Image in requested PixelFormat
    see also at Image::GetAvailablePixelFormats()
    see also at Image::IsPixelFormatAvailable()
    */
    virtual Image Convert(const NeoString& pixelformat) const;

    /**
    Convert the Image based on the provided settings
        A camera can stream images in different formats. However this might not be the format you need to work with the
    image data. You can use this method to convert an image from one format to another. (e.g. convert BayerRG8 to BGR to work with the image data using OpenCV).
        Additionally you may want to apply sharpening or want to change the color temperature. This can be achieved by providing the corresponding settings.
        Please see NeoAPI::PixelFormat for a list of possible formats
        Parameter:
        settings  The settings for the converted image.

    Return: A new Image with requested Settings
    */
    virtual Image Convert(const ConverterSettings& settings) const;

    /**
    Get access to a object inherited by NeoAPI::BufferBase and used by this image.
        Return: UserBuffer object
    */
    template <typename T> T GetUserBuffer() const {
        return dynamic_cast<T>(_GetUserBuffer());
    }

 protected:
    /**
    Get access to the NeoAPI::BufferBase used by this image.
        This function should not used directly. Use Image.GetUserBuffer() instead.
    Return: NeoAPI::BufferBase object
    see also at Image.GetUserBuffer()
        */
    virtual BufferBase* _GetUserBuffer() const;

    /**
    Holds all internal data
    */
    ImageData* data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_IMAGE_HPP__
