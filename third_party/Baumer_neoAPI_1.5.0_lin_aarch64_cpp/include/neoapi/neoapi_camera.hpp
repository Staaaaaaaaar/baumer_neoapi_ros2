
#ifndef _NEOAPI_CAMERA_HPP__
#define _NEOAPI_CAMERA_HPP__

#include <vector>
#include "neoapi_common.hpp"
#include "neoapi_image.hpp"
#include "neoapi_featureaccess.hpp"
#include "neoapi_event.hpp"



class FeatureStackData;
class CamData;
class BufferBaseData;

namespace NeoAPI {

class FeatureStack;
class BufferBase;
class NeoEvent;
class CamInfo;
class NeoImageCallback;
class NeoEventCallback;

/**
Base camera class from which other camera classes inherit functionality
This class provides all methods to work with a camera.
You can use it to search and connect a camera, get and set camera features and retrieve images from the camera.
*/
class NEOAPI_CPP_TYPE CamBase {
 public:
    /**
    Constructor
    */
    NEOAPI_CPP_DECL CamBase();

    /**
    Copy-Constructor
    Parameter:
        object A CamBase object

    */
    NEOAPI_CPP_DECL CamBase(const CamBase& object);

    /**
    Destructor
    */
    NEOAPI_CPP_DECL virtual ~CamBase();

    /**
    This function returns the current library version
    Return: The version number in the format "Mayor.Minor.Patch"
    */
    NEOAPI_CPP_DECL static NeoString GetLibraryVersion();

    /**
    The "=" operator
        This creates a copy of the other CamBase object. All copies are linked to the same physical camera.
    That means that every call to Connect, Disconnect, SetFeature,... will effect all copys of a Cam or CamBase Object.
        Parameter:
        object A CamBase object

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL const CamBase& operator = (const CamBase& object);

    /**
    Connect a GenICam camera device to work with it
        The Connect method is called to establish a connection to a GenICam compatible camera device. To connect to
    a specific camera the identifier can be used. The identifier will be used to search for a camera.
        Possible Values for the camera identifier are:
    Parameter:
        identifier A string value with the camera identifier

    Return: The CamBase object
        NoAccessException Cam Device can not be opened NotConnectedException No device matching the given criterias is connected     see also at CamBase::IsConnected()
    */
    NEOAPI_CPP_DECL virtual CamBase& Connect(const NeoString& identifier = "");

    /**
    Disconnect a GenICam camera device
    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& Disconnect();

    /**
    Checks if a camera is connected
        Before using a camera it needs to be connected and initialized. Use the `IsConnected()` method to check if
    your Cam object is connected with a camera and that this camera is ready to be configured and
    stream images.
        Return: True if a camera is connected, otherwise false
        see also at CamBase::Connect()
    */
    NEOAPI_CPP_DECL virtual bool IsConnected() const;

    /**
    Start streaming from this camera. (Streaming is started by Connect)
    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    */
    NEOAPI_CPP_DECL virtual CamBase& StartStreaming();

    /**
    Stop streaming from this camera.
    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    */
    NEOAPI_CPP_DECL virtual CamBase& StopStreaming();

    /**
    Checks if a camera is streaming
    Return: True if a camera is streaming, otherwise false
    */
    NEOAPI_CPP_DECL virtual bool IsStreaming() const;

    /**
    Get a Feature to access to it's properties, see Cam::f for a more convenient way to access features.
        You can use this method in case a camera feature is not accessable through Cam::f.
        Parameter:
        name The name of the feature to retrieve (SFNC Name)

    Return: The Feature object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible.     see also at Cam::f
    see also at Feature
    */
    NEOAPI_CPP_DECL virtual Feature& GetFeature(const NeoString& name) const;

    /**
    Check if a feature is supported by a camera, see Cam::f for a more convenient way to access features.
        You can use this method in case a camera feature is not accessable through Cam::f.
        Parameter:
        name The name of the feature to read (SFNC Name)

    Return: True if the feature is supported by the camera otherwise false
    NoAccessException device is not connected anymore
    NotConnectedException No device connected     see also at Cam::f
    see also at Feature
    */
    NEOAPI_CPP_DECL virtual bool HasFeature(const NeoString& name) const;

    /**
    Indicates that the Feature object is readable.
    Parameter:
        name The name of the Feature

    Return: True if the Feature object is readable, otherwise false
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible
    */
    NEOAPI_CPP_DECL virtual bool IsReadable(const NeoString& name) const;

    /**
    Indicates that the Feature object is writable.
    Parameter:
        name The name of the Feature

    Return: True if the Feature object is readable, otherwise false
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible
    */
    NEOAPI_CPP_DECL virtual bool IsWritable(const NeoString& name) const;

    /**
    Set the value of a feature of the camera, see Cam::f for a more convenient way to access features
        You can use this method in case a camera feature is not accessable through Cam::f
        Parameter:
        name  The name of the feature to write (SFNC Name)

        value An int64_t value which should be written

    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible     see also at Cam::f
    see also at Feature
    */
    NEOAPI_CPP_DECL virtual CamBase& SetFeature(const NeoString& name, int64_t value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value An int32_t value which should be written

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& SetFeature(const NeoString& name, int32_t value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A double value which should be written

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& SetFeature(const NeoString& name, double value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A string value which should be written

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& SetFeature(const NeoString& name, const NeoString& value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A const char* value which should be written

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& SetFeature(const NeoString& name, const char* value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A bool value which should be written

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& SetFeature(const NeoString& name, bool value);

    /**
    Executes an executable SFNC-ICommand-Feature of the camera
        Some Features are used to trigger an action in the camera. The most commonly used one is probably the
    AquisitionStart/AquisitionStop commands. The Execute() method is used to execute one of those features.
        Parameter:
        name The name of the feature to execute (SFNC Name)

    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible
    */
    NEOAPI_CPP_DECL virtual CamBase& Execute(const NeoString& name);

    /**
    Get a list of all available features of the camera
    Return: A list of available Features
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at FeatureList
    */
    NEOAPI_CPP_DECL virtual FeatureList& GetFeatureList();

    /**
    Get a list of all available runtime infos
    Return: A list of available runtime infos
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at FeatureList
    */
    NEOAPI_CPP_DECL virtual FeatureList& GetRuntimeInfoList();

    /**
    Set the value of multiple feature of the camera in one operation
    Parameter:
        featurestack  A set of features to write

    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException One or more features are not accessible
    see also at FeatureStack::Add()
    */
    NEOAPI_CPP_DECL virtual CamBase& WriteFeatureStack(const FeatureStack& featurestack);

    /**
     returns maximum transmitted image count per buffer
     Return: the maximum transmitted image count
     NoAccessException device is not connected anymore
     NotConnectedException No device connected
     */
    NEOAPI_CPP_DECL virtual uint32_t GetImagesPerBuffer();

    /**
    returns a NeoAPI::ImageInfo object that gives basic informations about the image
    and the related buffer segment
    Parameter:
        index  index of the image which information should obtained

    Return: ImageInfo object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    InvalidArgumentException if index is out of bounds
    */
    NEOAPI_CPP_DECL virtual ImageInfo GetImageInfo(uint32_t index);

    //  NEOAPI_CPP_DECL virtual ImageInfo GetImageInfos(uint32_t index);  TOOD(koda) like GetImages

    /**
    Reads the memory region and writes it into the provided buffer
        Parameter:
        address The camera memory address to read from

        buffer The destination buffer into which the read data is copied

        length The size of the destination buffer.

    Return: The CamBase object
    NoAccessException The device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException Read of memory area is not possible
    */
    NEOAPI_CPP_DECL virtual CamBase& ReadMemory(uint64_t address, void* buffer, size_t length);

    /**
    Writes the content of the provieded buffer into the camera memory at the given address
        Parameter:
        address The camera memory address to write to

        buffer The source buffer containing the data to write

        length The size of the source buffer.

    Return: The CamBase object
    NoAccessException The device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException Write of memory area is not possible
    */
    NEOAPI_CPP_DECL virtual CamBase& WriteMemory(uint64_t address, void* buffer, size_t length);

    /**
    Get an image from the camera
        The GetImage method is used to retrieve an image from the camera to work with it. All buffer-handling is
    done internally for you, so that no further setup is needed to acquire an image. In the default
    configuration, the method will always return the latest (newest) image transferred from the camera. please
    refer to the section \ref images_buffers to learn how to configure the buffer-handling to change that
    behavior.
        By default, each camera object creates and uses 10 Buffers to ensure reliable image delivery. You can change
    this default using the SetImageBufferCount() method.
        The time until an image is available can be quite large. Depending on the current state and settings like
    ExposureTime. The time consists out of camera start up time, the exposure time, the readout time of the
    sensor and the time for transport into host memory.
        If no image is available at the time the method is called, it will wait for the timeout specified with the
    parameter timeout (in ms). The default Timeout is 400 ms.
        Parameter:
        timeout Timeout in ms to wait for an image, default is 400 ms

    Return: The Image object with all relevant data, could be empty
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    NoImageBufferException No image buffer available to store data
    see also at CamBase::GetImageBufferCount()
    see also at Image::IsEmpty()
    */
    NEOAPI_CPP_DECL virtual Image GetImage(uint32_t timeout = 400);

    /**
    Return all images from the current buffer
        Parameter:
        timeout Timeout in ms to wait for a buffer, default is 400 ms

    Return: A vector containing all remaining Image objects from the current buffer
    NotConnectedException No device connected
    NoImageBufferException No image buffer available to store data
    see also at CamBase::GetImage()
    */
    std::vector<Image> GetImages(uint32_t timeout = 400) {
        std::vector<Image> images;
        do {
            images.push_back(GetImage(timeout));
        } while (!images.back().IsLastImage());
        return images;
    }

    /**
    Delete the image queue
        Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& ClearImages();

    /**
    Enable image callback.
        Parameter:
        callback The ImageCallback method of the given object will be called for every image data.

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& EnableImageCallback(const NeoImageCallback& callback);

    /**
    Disable image callback.
        Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& DisableImageCallback();

    /**
     In user buffer mode the camera uses buffers provided by AddUserBuffer.
          In this mode memory blocks allocated by other frameworks
     like e.g. OpenCV are used as acquisition buffers for the camera.
          Parameter:
         user_buffers True to enable UserBufferMode, otherwise false (default ist true)

         
     Return: The CamBase object
     */
    NEOAPI_CPP_DECL virtual CamBase& SetUserBufferMode(bool user_buffers = true);

    /**
     In user buffer mode the camera uses buffers provided by AddUserBuffer.
          In this mode memory blocks allocated by other frameworks
     like e.g. OpenCV are used as acquisition buffers for the camera.
          Return: The state of user buffer mode
     */
    NEOAPI_CPP_DECL virtual bool GetUserBufferMode();

    /**
     Add a user allocated memory for use as buffer in UserBufferMode
          A buffer is only used if the buffer has enough memory to handle the incoming data.
     The required memory size may change when the incoming data size changes
     e.g. by modifying the image dimensions.
          Parameter:
         buffer object derived from NeoAPI::BufferBase that should used as buffer

         
     Return: The CamBase object
     InvalidArgumentException  buffer is not initialized correctly or when same memory is already used by another buffer
     */
    NEOAPI_CPP_DECL virtual CamBase& AddUserBuffer(BufferBase* buffer);

    /**
     Revoke a user allocated memory from buffer list
          Image objects that refer to a revoked memory will not be invalidated.
     This means the memory will not used anymore for image acquisition
     but Image objects holded by the user are only valid until the revoked memory is not freed.
          Parameter:
         buffer object derived from NeoAPI::BufferBase that not used anymore by NeoAPI

         
     Return: The CamBase object
     */
    NEOAPI_CPP_DECL virtual CamBase& RevokeUserBuffer(BufferBase* buffer);

    /**
    Set the number of internal used image buffers
        The number of internal image buffers is equal to the maximum images that can be worked on in parallel.
    If you call GetImage without having an free internal image buffer to store the data, the GetImage method
    will not be able to store any new images coming from the camera and will throw an exception.
        As each buffer needs memory to store an incoming image, you should try to reduce the amount of buffers
    where possible.
        Parameter:
        buffercount Image buffer count, if set to zero buffercount will be set to the default of 10 buffers

    Return: The CamBase object
    see also at \ref images_buffers
    */
    NEOAPI_CPP_DECL virtual CamBase& SetImageBufferCount(size_t buffercount = 10);

    /**
    Get the current number of internal or external image buffers
        Provides the current number of internal or externally provided image buffers used to store incoming images
    from the camera until they can be processed
        Return: The current image buffer count
    see also at CamBase::GetImage()
    see also at CamBase::SetImageBufferCount()
    */
    NEOAPI_CPP_DECL virtual size_t GetImageBufferCount();

    /**
    Set the number of internal image buffers to be cycled automatically
        By changing the `SetImageBufferCount()` and `SetImageBufferCycleCount()` the three different buffer modes
    can be configured. Please see @ref images_buffers for details
        Parameter:
        cyclecount Image buffer count

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& SetImageBufferCycleCount(size_t cyclecount = 1);

    /**
    Get the number of internal image buffers to be cycled automatically
    Return: the number of internal image buffers to be cycled automatically
    */
    NEOAPI_CPP_DECL virtual size_t GetImageBufferCycleCount();

    /**
    In synchronous mode the acquisition will restart for every feature change, to ensure new values will
    be reflected in the next image
        When a feature is set to a new value, this change may take some time to take effect. In free running mode the
    camera may transfer one or more images based on the last value. To ensure new values will reflect in the next
    image the acquisition is stopped, the value of the feature is set and the acquisition will be restarted
        Parameter:
        synchronous True to enable SynchronMode, otherwise false (default ist true)

    Return: The CamBase object
    see also at CamBase::GetImage()
    */
    NEOAPI_CPP_DECL virtual CamBase& SetSynchronFeatureMode(bool synchronous = true);

    /**
    In synchronous mode the acquisition will restart for every feature change, to ensure new values will
    be reflected in the next image
        When a feature is set to a new value, this change may take some time to take effect. In free running mode the
    camera may transfer one or more images based on the last value. To ensure new values will reflect in the next
    image the acquisition is stopped, the value of the feature is set and the acquisition will be restarted
        Return: The state of synchronous mode
    see also at CamBase::GetImage()
    */
    NEOAPI_CPP_DECL virtual bool GetSynchronFeatureMode();

    /**
    With AdjustFeatureValueMode enabled feature values will be checked an adjusted where necessary.
        Some Feature can only be changed with a fixed increment. If a feature is set to a value the device can not handle, the value will be adjusted to the next valid value
        Parameter:
        adjust True to adjust feature values, otherwise false (default ist true)

    Return: The CamBase object
    see also at CamBase::GetImage()
    */
    NEOAPI_CPP_DECL virtual CamBase& SetAdjustFeatureValueMode(bool adjust = true);

    /**
    With AdjustFeatureValueMode enabled feature values will be checked an adjusted where necessary.
        Some Feature can only be changed with a fixed increment. If a feature is set to a value the device can not handle, the value will be adjusted to the next valid value
        Return: The state of adjust value mode
    see also at CamBase::GetImage()
    */
    NEOAPI_CPP_DECL virtual bool GetAdjustFeatureValueMode();

    /**
    Query the list of the names of the existing chunk data
        To activate individual chunk data in a targeted manner, you need their names; the list of all names can be read here.
        Return: A list containing all possible chunks for this camera
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    */
    NEOAPI_CPP_DECL virtual const NeoStringList& GetAvailableChunks(void);

    /**
    Allow and disallow all or individual chunk data
        If name is empty all chunk data will processed
        Parameter:
        name of chunk data to enable

    Return: The CamBase object
    FeatureAccessException requesting a specific chunk by name which is not available
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at CamBase::GetAvailableChunks()
    */
    NEOAPI_CPP_DECL virtual CamBase& EnableChunk(const NeoString& name = "");

    /**
    Disallow all or individual chunk data
        If name is empty all chunk data will processed
        Parameter:
        name of chunk data to disable

    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at CamBase::GetAvailableChunks()
    */
    NEOAPI_CPP_DECL virtual CamBase& DisableChunk(const NeoString& name = "");

    /**
    Get a list of event names supported by the camera
        A GenICam camera can support many events which alert to changes of a data item in the camera. Typical sources
    of events are Acquisition, Timer, Counter and I/O lines. To enable individual events use the EventEnable()
    method.
        Return: A list containing the names of possible events
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at CamBase::EventEnable()
    */
    NEOAPI_CPP_DECL virtual const NeoStringList& GetAvailableEvents();

    /**
    Get a list of event names enabled in the camera
        A GenICam camera can support many events which alert to changes of a data item in the camera. Typical sources
    of events are Acquisition, Timer, Counter and I/O lines. To enable individual events use the EventEnable()
    method.
        Return: A list containing the names of enabled events
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at CamBase::EventEnable()
    */
    NEOAPI_CPP_DECL virtual const NeoStringList& GetEnabledEvents();

    /**
    Enable a camera event
        Please be aware that enabling many events can produce quite some traffic on the interface which might impact
    the performance of the camera. To get a list of possible event names please use the GetAvailableEvents() method.
        Parameter:
        name of event to enable

        max_queuesize max number of events in queue

    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at CamBase::GetAvailableEvents()
    */
    NEOAPI_CPP_DECL virtual CamBase& EnableEvent(const NeoString& name, uint32_t max_queuesize = 1000);

    /**
    Disable a camera event
        Parameter:
        name of event to disable

    Return: The CamBase object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at CamBase::GetAvailableEvents()
    */
    NEOAPI_CPP_DECL virtual CamBase& DisableEvent(const NeoString& name);

    /**
    Get an event from the camera
        The GetEvent method is used to retrieve an event from the camera to work with it. If an event is waiting to be
    retrieved, it will return immediately, if no event is available at the time the method is called, it will wait
    for the timeout specified with the parameter timeout (in ms). The default Timeout is 400 ms.
        Parameter:
        name Name of event to wait for, default is empty to wait for any event

        timeout Timeout in ms to wait for an event, default is 400 ms

    Return: The NeoEvent object with all relevant data, could be empty
    see also at CamBase::EventEnable()
    see also at NeoEvent::IsEmpty()
    */
    NEOAPI_CPP_DECL virtual NeoEvent GetEvent(const NeoAPI::NeoString& name = "", uint32_t timeout = 400);

    /**
    Delete the event queue
        Parameter:
        name Name of event to remove from queue, default is empty to drop all events

    Return: The CamBase object
    see also at CamBase::EventEnable()
    */
    NEOAPI_CPP_DECL virtual CamBase& ClearEvents(const NeoAPI::NeoString& name = "");

    /**
    Enable event callback.
        Parameter:
        callback The EventCallback method of the given object will be called for every event data.

        name Name of event to wait for, default is empty to wait for any event

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& EnableEventCallback(const NeoEventCallback& callback,
                                                         const NeoAPI::NeoString& name = "");

    /**
    Disable event callback.
        Parameter:
        name of event to disable

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& DisableEventCallback(const NeoAPI::NeoString& name = "");

    /**
    Checks if a camera is online
        A camera may be offline if a device reset was performed or as consequence of power issues or  the removal of a
    cable. If the camera is offline no access to features is possible and the attemp to access any feature will lead to an exception.
        Return: True if the camera is online and ready to use, otherwise false
    */
    NEOAPI_CPP_DECL virtual bool IsOnline() const;

    /**
    Get the number of times the camera was offline
        This counter will increase every time the camera goes offline and is intended to keep track of pnp events. If
    this number increases over time there is likely an issue with your system which should be fixed.
        Return: The counter of offline events for this camera
    see also at CamBase::IsOnline()
    */
    NEOAPI_CPP_DECL virtual uint64_t GetOfflineCount() const;

    /**
    Get a plug and play event from the camera
        The GetPnPEvent method is used to retrieve an plug and play event from the camera to work with it. If an event
    is waiting to be retrieved, it will return immediately, if no event is available at the time the method is
    called, it will wait for the timeout specified with the parameter timeout (in ms). The default Timeout is 400
    ms.
        Parameter:
        timeout Timeout in ms to wait for an event, default is 400 ms

    Return: The NeoEvent object with all relevant data, could be empty
    see also at NeoEvent::IsEmpty()
    */
    NEOAPI_CPP_DECL virtual NeoEvent GetPnPEvent(uint32_t timeout = 400);

    /**
    Delete the event queue
        Return: The CamBase object
    see also at CamBase::EventEnable()
    */
    NEOAPI_CPP_DECL virtual CamBase& ClearPnPEvents();

    /**
    Enable event callback.
        Parameter:
        callback The EventCallback method of the given object will be called for every event data.

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& EnablePnPEventCallback(const NeoEventCallback& callback);

    /**
    Disable event callback.
    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual CamBase& DisablePnPEventCallback();

    /**
    Get basic information about the camera.
    Return: The camera information
    */
    NEOAPI_CPP_DECL virtual CamInfo GetInfo() const;

 protected:
    /**
    Holds all internal data
    */
    CamData* data_;
};

/**
Main camera class &mdash; connect, set features, retrieve images
This class provides all methods to work with a camera.
You can use it to search and connect a camera, get and set camera features and retrieve images from the camera.
The aim of this Interface is to reduce the complexity associated with the programming of a GenICam camera. The
Interface will also greatly reduce the amount of code necessary to interact with a GenICam camera.
Where ever there is an option the API provides you with a default carefully chosen to work in most circumstances.
However, you can always change those settings once you understand the value of changing it.
More information and the general concepts about the GenICam Standard can be found at the
[EMVA Website](https://www.emva.org/standards-technology/genicam/genicam-downloads/).
USAGE:
*/
class NEOAPI_CPP_TYPE Cam : public CamBase {
 public:
    /**
    Constructor
    */
    NEOAPI_CPP_DECL Cam();

    /**
    Copy-Constructor
    Parameter:
        object A Cam object

    */
    NEOAPI_CPP_DECL Cam(const Cam& object);

    /**
    Destructor
    */
    NEOAPI_CPP_DECL virtual ~Cam();

    /**
    The "=" operator
    Parameter:
        object A Cam object

    Return: The Cam object
    */
    NEOAPI_CPP_DECL const Cam& operator = (const Cam& object);

    /**
    Connect a GenICam camera device to work with it
        The Connect method is called to establish a connection to a GenICam compatible camera device. To connect to
    a specific camera the identifier can be used. The identifier will be used to search for a camera.
        Possible Values for the camera identifier are:
    Parameter:
        identifier A string value with the camera identifier

    Return: The Cam object
        NoAccessException Cam Device can not be opened NotConnectedException No device matching the given criterias is connected     see also at Cam::IsConnected()
    */
    NEOAPI_CPP_DECL virtual Cam& Connect(const NeoString& identifier = "");

    /**
    Disconnect a GenICam camera device
    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& Disconnect();

    /**
    Start streaming from this camera. (Streaming is started by Conncet)
    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    */
    NEOAPI_CPP_DECL virtual Cam& StartStreaming();

    /**
    Stop streaming from this camera.
    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    */
    NEOAPI_CPP_DECL virtual Cam& StopStreaming();

    /**
    Set the value of a feature of the camera, see Cam::f for a more convenient way to access features
        You can use this method in case a camera feature is not accessable through Cam::f
        Parameter:
        name  The name of the feature to write (SFNC Name)

        value An int64_t value which should be written

    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible     see also at Cam::f
    see also at Feature
    */
    NEOAPI_CPP_DECL virtual Cam& SetFeature(const NeoString& name, int64_t value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value The int32_t value which should be written to the feature

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& SetFeature(const NeoString& name, int32_t value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value The double value which should be written to the feature

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& SetFeature(const NeoString& name, double value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value The String value which should be written to the feature

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& SetFeature(const NeoString& name, const NeoString& value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value The const char* value which should be written to the feature

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& SetFeature(const NeoString& name, const char* value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value The bool value which should be written to the feature

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& SetFeature(const NeoString& name, bool value);

    /**
    Executes an exectutable SFNC-ICommand-Feature of the camera
        Some Features are used to trigger an action in the camera. The most commonly used one is probably the
    AquisitionStart/AquisitionStop commands. The Execute() method is used to execute one of those features.
        Parameter:
        name The name of the feature to execute (SFNC Name)

    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException The feature is not accessible
    */
    NEOAPI_CPP_DECL virtual Cam& Execute(const NeoString& name);

    /**
    Set the value of multiple feature of the camera in one operation
    Parameter:
        featurestack  A set of features to write

    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException One or more features are not accessible
    see also at FeatureStack::Add()
    */
    NEOAPI_CPP_DECL virtual Cam& WriteFeatureStack(const FeatureStack& featurestack);

    /**
Reads the memory region and writes it into the provided buffer
Parameter:
    address The camera memory address to read from

    buffer The destination buffer into which the read data is copied

    length The size of the destination buffer.

Return: The Cam object
NoAccessException The device is not connected anymore
NotConnectedException No device connected
FeatureAccessException Read of memory area is not possible
*/
    NEOAPI_CPP_DECL virtual Cam& ReadMemory(uint64_t address, void* buffer, size_t length);

    /**
    Writes the content of the provieded buffer into the camera memory at the given address
        Parameter:
        address The camera memory address to write to

        buffer The source buffer containing the data to write

        length The size of the source buffer.

    Return: The Cam object
    NoAccessException The device is not connected anymore
    NotConnectedException No device connected
    FeatureAccessException Write of memory area is not possible
    */
    NEOAPI_CPP_DECL virtual Cam& WriteMemory(uint64_t address, void* buffer, size_t length);

    /**
    Delete the image queue
        Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& ClearImages();

    /**
    Enable image callback.
        Parameter:
        callback The ImageCallback method of the given object will be called for every image data.

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& EnableImageCallback(const NeoImageCallback& callback);

    /**
    Disable image callback.
    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& DisableImageCallback();

    /**
     In user buffer mode the camera uses buffers provided by AddUserBuffer.
          In this mode memory blocks allocated by other frameworks
     like e.g. OpenCV are used as acquisition buffers for the camera.
          Parameter:
         user_buffers True to enable UserBufferMode, otherwise false (default ist true)

         
     Return: The Cam object
     */
    NEOAPI_CPP_DECL virtual Cam& SetUserBufferMode(bool user_buffers = true);

    /**
     Add a user allocated memory for use as buffer in UserBufferMode
          A buffer is only used if the buffer has enough memory to handle the incoming data.
     The required memory size may change when the incoming data size changes
     e.g. by modifying the image dimensions.
          Parameter:
         buffer object derived from NeoAPI::BufferBase that should used as buffer

         
     Return: The Cam object
     InvalidArgumentException  buffer is not initialized correctly or when same memory is already used by another buffer
     */
    NEOAPI_CPP_DECL virtual Cam& AddUserBuffer(BufferBase* buffer);

    /**
     Revoke a user allocated memory from buffer list
          Image objects that refer to a revoked memory will not be invalidated.
     This means the memory will not used anymore for image acquisition
     but Image objects holded by the user are only valid until the revoked memory is not freed.
          Parameter:
         buffer object derived from NeoAPI::BufferBase

         
     Return: The Cam object
     */
    NEOAPI_CPP_DECL virtual Cam& RevokeUserBuffer(BufferBase* buffer);

    /**
    Set the number of internal used image buffers
        The number of internal image buffers is equal to the maximum images that can be worked on in parallel.
    If you call GetImage without having an free internal image buffer to store the data, the GetImage method
    will not be able to store any new images coming from the camera and will throw an exception.
        As each buffer needs memory to store an incoming image, you should try to reduce the amount of buffers
    where possible
        Parameter:
        buffercount Image buffer count, if set to zero buffercount will be set to the default of 10 buffers

    Return: The Cam object
    see also at \ref images_buffers
    */
    NEOAPI_CPP_DECL virtual Cam& SetImageBufferCount(size_t buffercount = 10);

    /**
    Set the number of internal image buffers to be cycled automatically
        By changing the `SetImageBufferCount()` and `SetImageBufferCycleCount()` the three different buffer modes
    can be configured. Please see @ref images_buffers for details
        Parameter:
        cyclecount Image buffer count

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& SetImageBufferCycleCount(size_t cyclecount = 1);

    /**
    In synchronous mode the acquisition will restart for every feature change, to ensure new values will
    be reflected in the next image
        When a feature is set to a new value, this change may take some time to take effect. In free running mode the
    camera may transfer one or more images based on the last value. To ensure new values will reflect in the next
    image the acquisition is stopped, the value of the feature is set and the acquisition will be restarted
        Parameter:
        synchronous True to enable SynchronMode, otherwise false (default ist true)

    Return: The Cam object
    see also at Cam::GetImage()
    */
    NEOAPI_CPP_DECL virtual Cam& SetSynchronFeatureMode(bool synchronous = true);

    /**
    With AdjustFeatureValueMode enabled feature values will be checked an adjusted where necessary
        Some Feature can only be changed with a fixed increment. If a feature is set to a value the device can not handle, the value will be adjusted to the next valid value
        Parameter:
        adjust True to Adjust feature values, otherwise false (default ist true)

    Return: The Cam object
    see also at Cam::GetImage()
    */
    NEOAPI_CPP_DECL virtual Cam& SetAdjustFeatureValueMode(bool adjust = true);

    /**
    Allow all or individual chunk data
        If name is empty all chunk data will processed
        Parameter:
        name - empty string for all chunk data or name from GetAvailableChunks for special chunk data

    Return: The Cam object
    FeatureAccessException requesting a specific chunk by name which is not available
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at Cam::GetAvailableChunks()
    */
    NEOAPI_CPP_DECL virtual Cam& EnableChunk(const NeoString& name = "");

    /**
    Disallow all or individual chunk data
        If name is empty all chunk data will processed
        Parameter:
        name - empty string for all chunk data or name from GetAvailableChunks for special chunk data

    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at Cam::GetAvailableChunks()
    */
    NEOAPI_CPP_DECL virtual Cam& DisableChunk(const NeoString& name = "");

    /**
    Allow individual events.
        Parameter:
        name of event to enable

        max_queuesize max number of events in queue

    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at Cam::GetAvailableEvents()
    */
    NEOAPI_CPP_DECL virtual Cam& EnableEvent(const NeoString& name, uint32_t max_queuesize = 1000);

    /**
    Disallow individual events.
        Parameter:
        name of event to disable

    Return: The Cam object
    NoAccessException device is not connected anymore
    NotConnectedException No device connected
    see also at Cam::GetAvailableEvents()
    */
    NEOAPI_CPP_DECL virtual Cam& DisableEvent(const NeoString& name);

    /**
    Delete the event queue
        Parameter:
        name Name of event to remove from queue, default is empty to drop all events

    Return: The Cam object
    see also at Cam::EventEnable()
    */
    NEOAPI_CPP_DECL virtual Cam& ClearEvents(const NeoAPI::NeoString& name = "");

    /**
    Enable event callback.
        Parameter:
        callback The EventCallback method of the given object will be called for every event data.

        name Name of event to wait for, default is empty to wait for any event

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& EnableEventCallback(const NeoEventCallback& callback,
                                                     const NeoAPI::NeoString& name = "");

    /**
    Disable event callback.
        Parameter:
        name of event to disable

    Return: The Cam object
    */
    NEOAPI_CPP_DECL virtual Cam& DisableEventCallback(const NeoAPI::NeoString& name = "");

    /**
    Delete the event queue
        Return: The CamBase object
    see also at CamBase::EventEnable()
    */
    NEOAPI_CPP_DECL virtual Cam& ClearPnPEvents();

    /**
    Enable event callback.
        Parameter:
        callback The EventCallback method of the given object will be called for every event data.

    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual Cam& EnablePnPEventCallback(const NeoEventCallback& callback);

    /**
    Disable event callback.
    Return: The CamBase object
    */
    NEOAPI_CPP_DECL virtual Cam& DisablePnPEventCallback();

    /**
    Provides access to the generated camera features
        A GenICam camera has hundreds of features which are used to configure the camera as required. The methode f
    encapsulates all those features
        Return: The FeatureAccess object
    NotConnectedException No device connected
    FeatureAccessException One or more features are not accessible
    */
    NEOAPI_CPP_DECL virtual FeatureAccess& f() const;

 protected:
     
     FeatureAccess* f_;
};

/**
A collection of camera features
The FeatureStack provides you with the ability to write many GenICam Feature values quickly to a camera.
Instead of sending/waiting for validation for each single feature the FeatureStack allows to send many
Features in one operation and only validate the whole operation once
*/
class NEOAPI_CPP_DECL FeatureStack {
 public:
    /**
    Constructor
    */
    FeatureStack();

    /**
    Copy-Constructor
    Parameter:
        object A FeatureStack object

    */
    FeatureStack(const FeatureStack& object);

    /**
    Destructor
    */
    virtual ~FeatureStack();

    /**
    The "=" operator
    Parameter:
        object A FeatureStack object

    Return: The FeatureStack object
    */
    const FeatureStack& operator = (const FeatureStack& object);

    /**
    Add a feature/value pair to the FeatureStack
        Parameter:
        name  The name of the feature to write (SFNC Name)

        value An int32_t value which should be written

    Return: The FeatureStack object
        */
    virtual FeatureStack& Add(const NeoString& name, int32_t value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value An int64_t value which should be written

    Return: The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, int64_t value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A double value which should be written

    Return: The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, double value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A bool value which should be written

    Return: The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, bool value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A const char* value which should be written

    Return: The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, const char* value);

    /**
    Parameter:
        name  The name of the feature to write (SFNC Name)

        value A String value which should be written

    Return: The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, const NeoString& value);

    /**
    Parameter:
        name  The name of the feature to execute (SFNC Name)

    Return: The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name);

    /**
    Remove all features from the collection
    Return: The FeatureStack object
    */
    virtual FeatureStack& Clear();

    /**
    In replace mode register accesses are merged together. Only the merge result is written to the camera
        Use the replace mode to speed up feature changes. In some scenarios, it is desired to write each value
    separately. This may be the case if  some values are to be applied before a SW trigger and some after
        Parameter:
        replace  Combine multiple register accesses if possible

    Return: The FeatureStack object
    */
    virtual FeatureStack& SetReplaceMode(bool replace = true);

    /**
    CamBase::WriteFeatureStack can access the protected data of this class
    Parameter:
        featurestack  A feature collection to write to the camera

    Return: The CamBase object
    */
    friend CamBase& CamBase::WriteFeatureStack(const FeatureStack& featurestack);

 protected:
    /**
    Holds all internal data
    */
    FeatureStackData* data_;
};

/**
Image callback class to derive from an get image data
*/
class NEOAPI_CPP_DECL NeoImageCallback {
 public:
    /**
    Constructor
    */
    NeoImageCallback();

    /**
    Destructor
    */
    virtual ~NeoImageCallback();

    /**
    Overwrite this method to receive image data
    Parameter:
        image The image data

    */
    virtual void ImageCallback(const Image& image);
};

/**
Event callback class to derive from an get event data
*/
class NEOAPI_CPP_DECL NeoEventCallback {
 public:
    /**
    Constructor
    */
    NeoEventCallback();

    /**
    Destructor
    */
    virtual ~NeoEventCallback();

    /**
    Overwrite this method to receive event data
    Parameter:
        event The event data

    */
    virtual void EventCallback(const NeoEvent& event);
};

/**
Base class to derive from for use as user buffer
*/
class NEOAPI_CPP_DECL BufferBase {
 public:
    /**
    Constructor
    */
    BufferBase();

    /**
    Copy-Constructor
    Parameter:
        object A BufferBase object

    */
    BufferBase(const BufferBase& object);

    /**
    Destructor
    */
    virtual ~BufferBase();

    /**
    providing a continues memory block used for a whole buffer
        To obtain the required size Cam::f().PayloadSize.Get() should be used.
        Parameter:
        memory address to the memory

        size   size of the memory

    InvalidArgumentException  when buffer is already assigned to a camera object
    */
    virtual void RegisterMemory(void* memory, size_t size);

    /**
    provide memory used for a specific buffer segment
        To obtain the required size NeoAPI::ImageInfo::GetSegmentSize() should be used.
        Parameter:
        memory       address to the memory

        size         size of the memory

        segment_id   segment identifier

    InvalidArgumentException  when buffer is already assigned to a camera object
    */
    virtual void RegisterSegment(void* memory, size_t size, uint32_t segment_id = 0);

    /**
    unregister all previous assigned memories
        If the buffer object is assigned to a camera the buffer will be revoked automatically.
    */
    virtual void UnregisterMemory();

 protected:
    /**
    Holds all internal data
    */
    BufferBaseData* data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_CAMERA_HPP__
