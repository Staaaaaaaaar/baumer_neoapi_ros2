/* \file neoapi_camera_info.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.
 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
 */
#ifndef _NEOAPI_CAMERA_INFO_HPP__
#define _NEOAPI_CAMERA_INFO_HPP__
#include "neoapi_common.hpp"
#include "neoapi_camera.hpp"
#include "neoapi_event.hpp"

class CamInfoData;
class CamInfoListIteratorData;
class CamInfoListData;

namespace NeoAPI {

/**
Camera info container class which offers basic information about an available camera
If neoapi.CamInfoList is called it will return a list of cameras, you can use the neoapi.CamInfo() class to get
information about a camera in this list.
*/
class NEOAPI_CPP_DECL CamInfo {
 public:
    /**
    Constructor
    */
    CamInfo();
    /**
    Copy-Constructor
    Parameter:
        object A CamInfo object

    */
    CamInfo(const CamInfo& object);
    /**
    Provides the "=" operator
    Parameter:
        object A CamInfo object

    Return: The CamInfo object
    */
    CamInfo& operator = (const CamInfo& object);
    /**
    Destructor
    */
    virtual ~CamInfo();
    /**
    Get the ID of the camera, this is unique to each camera in combination with a Baumer producer
    Return: The ID
    */
    virtual NeoString GetId() const;
    /**
    Get the camera model name
    Return: The model name
    */
    virtual NeoString GetModelName() const;
    /**
    Get the camera serial number
    Return: The serial number
    */
    virtual NeoString GetSerialNumber() const;
    /**
    Get the transport layer type
    Return: The transport layer type
    */
    virtual NeoString GetTLType() const;
    /**
    Get the camera vendor name
    Return: The vendor name
    */
    virtual NeoString GetVendorName() const;

    /**
    Get the USB3 vision GUID
    Return: The USB3 Vision GUID
    */
    virtual NeoString GetUSB3VisionGUID() const;
    /**
    Get the USB port ID
    Return: The port ID
    */
    virtual NeoString GetUSBPortID() const;

    /**
    Get the cameras ethernet IP address
    Return: The IP address
    */
    virtual NeoString GetGevIpAddress() const;
    /**
    Get the cameras ethernet subnet mask
    Return: The subnet mask
    */
    virtual NeoString GetGevSubnetMask() const;
    /**
    Get the cameras ethernet gateway IP
    Return: The gateway
    */
    virtual NeoString GetGevGateway() const;
    /**
    Get the cameras ethernet MAC address
    Return: The MAC address
    */
    virtual NeoString GetGevMACAddress() const;
    /**
    Check if this camera is available for connection
    Return: true if this camera can be connected, false otherwise
    */
    virtual bool IsConnectable() const;

 protected:
     /**
     internal data store
     */
     CamInfoData* data_;
};

/**
Provides iterator functionality for the CamInfoList
*/
class NEOAPI_CPP_DECL CamInfoListIterator {
 public:
     /**
    Constructor
    */
    CamInfoListIterator();

    /**
    Constructor
    Parameter:
        object A CamInfoListIterator object

    */
    CamInfoListIterator(const CamInfoListIterator& object);

    /**
    Destructor
    */
    virtual ~CamInfoListIterator();

    /**
    Provides the "=" operator
    Parameter:
        object A CamInfoListIterator object

    Return: The CamInfoListIterator object
    */
    const CamInfoListIterator& operator= (const CamInfoListIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A FeatureListIterator

    Return: bool
    */
    virtual bool operator==(const CamInfoListIterator& object) const;


    /**
    provides the "!=" operator
    Parameter:
        object A FeatureListIterator

    Return: bool
    */
    virtual bool operator!=(const CamInfoListIterator& object) const;

    /**
    provides the "++" operator
    Return: CamInfoListIterator
    */
    CamInfoListIterator& operator++();

    /**
    provides the "++" operator
    Return: CamInfoListIterator object
    */
    CamInfoListIterator operator++(int);

    /**
    provides the "*" operator
    Return: The reference to the CamInfo object
    */
    CamInfo& operator*() const;

 protected:
    /**
    internal data store
    */
     CamInfoListIteratorData* data_;
};

/**
Provides a list of physically connected cameras available to be used/connected with neoAPI
You can use this class if you don't know what camera(s) might be connected during program operation. With
the neoapi::CamInfoList::Refresh() method you can update the list to reflect current system status
We provide Plug and Play Events for the CamInfoList class which you can poll or register an callback for.
Those will notify you of any changes on the system. If you get such an event, you still need to call neoapi.
CamInfoList.Refresh() manually to update the list, see \ref events_and_pnp_concepts for details
*/
class NEOAPI_CPP_DECL CamInfoList {
 public:
     /**
    Get the single instance.
    Return: The instance of the CamInfoList
    */
    static CamInfoList& Get() {
        static CamInfoList instance;
        return instance;
    }

    /**
    Deleted copy construct
    */
    CamInfoList(const CamInfoList&) = delete;
    /**
    Deleted move constract
    */
    CamInfoList(const CamInfoList&&) = delete;

    /**
    Deleted copy assign
    */
    void operator=(CamInfoList const&) = delete;
    /**
    Deleted move assign
    */
    void operator=(CamInfoList&&) = delete;

    /**
    Provides the array access operator
    Parameter:
        index The index of the CamInfo to access

    Return: The CamInfo object
    */
    virtual CamInfo& operator[](size_t index);

    /**
    Refresh camera list
    Return: True if the list has changed, otherwise false
    */
    virtual bool Refresh();

    /**
    Provides the current number of cameras in this list
    Return: The number of cameras
    */
    virtual size_t size() const;

    /**
    Get a plug and play event from the camera info list
        The GetPnPEvent method is used to retrieve plug and play events from the camera info list. Those events notify
    you that one ore more camera has been connected or disconnected from the system. If an event is waiting
    to be retrieved, it will return immediately, if no event is available at the time the method is called,
    it will wait for the timeout specified with the parameter timeout (in ms). The default Timeout is 400 ms
        Parameter:
        timeout Timeout in ms to wait for an event, default is 400 ms

    Return: The NeoEvent object with all relevant data, could be empty
    see also at NeoEvent::IsEmpty()
    */
    virtual NeoEvent GetPnPEvent(uint32_t timeout = 400);

    /**
    Delete all events in the event queue
    Return: The CamInfoList object
    */
    virtual CamInfoList& ClearPnPEvents();

    /**
    Enable event callback to get notified of changes of the CamInfoList
    Parameter:
        callback The EventCallback method of the given object will be called for every event data.

    Return: The CamInfoList object
    */
    virtual CamInfoList& EnablePnPEventCallback(const NeoEventCallback& callback);

    /**
    Disable an active event callback
    Return: The CamInfoList object
    */
    virtual CamInfoList& DisablePnPEventCallback();

    /**
    Provides iterator functionality
    */
    typedef CamInfoListIterator iterator;

    /**
    Provides iterator functionality
    Return: iterator
    */
    virtual iterator begin() const;


    /**
    Provides iterator functionality
    Return: iterator
    */
    virtual iterator end() const;

 protected:
    /**
    Constructor
    */
     CamInfoList();
     /**
    Destructor
    */
     virtual ~CamInfoList();

    /**
    internal data store
    */
    CamInfoListData* data_;
};

}  // namespace NeoAPI

#endif  // _NEOAPI_CAMERA_INFO_HPP__
