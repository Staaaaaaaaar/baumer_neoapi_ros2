
#ifndef _NEOAPI_IMAGE_INFO_HPP__
#define _NEOAPI_IMAGE_INFO_HPP__

#include "neoapi_common.hpp"

class ImageInfoData;

namespace NeoAPI {

/**
Valid values for image compression
*/
enum class NeoImageCompression {
    RAW = 0,  // No compression other than pixelformat
    Jpeg  // Jpeg compression
};

/**
Provides an object to get access to image properties even before streaming
The ImageInfo object give access to basic image information like width and height.
These informations can be obtained by the camera even before the streaming starts.
*/
class NEOAPI_CPP_DECL ImageInfo {
 public:
    /**
    Constructor
    */
    ImageInfo();

    /**
    Copy-Constructor
    Parameter:
        object An ImageInfo object

    */
    ImageInfo(const ImageInfo &object);

    /**
    Destructor
    */
    virtual ~ImageInfo();

    /**
    The "=" operator of the ImageInfo object
    Parameter:
        object An ImageInfo object

    Return: The ImageInfo object
    */
    const ImageInfo& operator = (const ImageInfo& object);

    /**
    Get the height of the image in pixel, returns zero as long the image is not filled with data.
    Return: The height of the image in pixel.
    */
    virtual uint64_t GetHeight() const;

    /**
     Return the y offset in pixel.
     Return: The y offset in pixel
     */
    virtual uint64_t GetYOffset() const;

    /**
     Return the number of extra bytes transmitted at the end of the image.
     Return: The y padding of the image in byte.
     */
    virtual uint64_t GetYPadding() const;

    /**
    Get the width of the image in pixel, returns zero as long the image is not filled with data.
    Return: The width of the image in pixel.
    */
    virtual uint64_t GetWidth() const;

    /**
     Return the x offset in pixel.
     Return: The x offset in pixel
     */
    virtual uint64_t GetXOffset() const;

    /**
     Return the the number of extra bytes transmitted at the end of each line.
     Return: The x padding of the image in byte
     */
    virtual uint64_t GetXPadding() const;

    /**
    Get the pixelformat of the image, returns an empty string as long the image is not filled with data
        The GenICam SFNC defines many different PixelFormats which are used to transfer image data from a camera such
    as RGB, YUV and BayerRG. Knowledge about it is essential so the image can be converted to a format needed to
    process it
        Return: The PixelFormat of the Image
    */
    virtual NeoString GetPixelFormat() const;

    /**
     Get the whole size of the image in bytes
     Return: the image size in bytes
     */
    virtual uint64_t GetSize() const;

    /**
     Return the group id of the image
     Return: the group id
     */
    virtual uint64_t GetGroupID() const;

    /**
     Return the source id of the image
     Return: the source id
     */
    virtual uint64_t GetSourceID() const;

    /**
     Return the region id of the image
     Return: the region id
     */
    virtual uint64_t GetRegionID() const;

    /**
    Get compression method of the image
    Return: The compression method
    */
    virtual NeoImageCompression GetCompression() const;

    /**
     Give information if the memory segment in a buffer is shared with other components
     Return: true if segment is shared with other components, otherwise false
     */
    virtual bool IsSegmentShared() const;

    /**
     Get the image data offset related to the begin of the memory segment in the buffer
     Return: the offset of the image data
     */
    virtual uint64_t GetSegmentOffset() const;

    /**
     Get the whole size of the memory segment in the buffer
     Return: the memory size in bytes
     */
    virtual uint64_t GetSegmentSize() const;

    /**
     Get the index of the memory segment in the buffer
     Return: the segment id
     */
    virtual uint32_t GetSegmentIndex() const;

 protected:
    /**
    Holds all internal data
    */
    ImageInfoData* info_data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_IMAGE_INFO_HPP__
