/**
This file is part of the NeoAPI. It provides the C++ API Interface.
Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
*/
#ifndef _NEOAPI_EVENT_HPP__
#define _NEOAPI_EVENT_HPP__

#include "neoapi_common.hpp"
#include "neoapi_featureaccess.hpp"

class EventData;

namespace NeoAPI {

/**
Provides access to events
This class provides an easy way to work with events. It provides access to camera events
as well as plug and play events.
The Class has a set of methods to get information about an event.
More information about the events of your specific camera can be found in the documentation of your
camera available at the member area of the [Baumer Website](https://vt.baumer.com).
*/
class NEOAPI_CPP_DECL NeoEvent {
 public:
    /**
    Constructor
    */
    NeoEvent();

    /**
    Parameter:
        object A NeoEvent object

    */
    NeoEvent(const NeoEvent& object);

    /**
    Destructor
    */
    virtual ~NeoEvent();

    /**
    Provides the "=" operator.
    Parameter:
        object A NeoEvent object

    Return: The NeoEvent object
    */
    const NeoEvent& operator = (const NeoEvent& object);

    /**
    Check if the event is empty or filled with data
    Return: False if the event is filled with data, otherwise true
    see also at Cam::GetEvent()
    see also at Cam::GetPnPEvent()
    */
    virtual bool IsEmpty() const;

    /**
    Get the name of the NeoEvent object.
    Return: The name of the Feature object, empty if the event does not contain any data.
    */
    virtual NeoString GetName() const;

    /**
    Get the timestamp of the NeoEvent object.
    Return: The timestamp of the Feature object, zero if the event does not contain any data.
    */
    virtual uint64_t GetTimestamp() const;

    /**
    Get the id of the NeoEvent object.
    Return: The id of the Feature object, zero if the event does not contain any data.
    */
    virtual uint64_t GetId() const;

    /**
    Get the id of the camera.
    Return: The id of the camera, empty if the event does not contain any data.
    */
    virtual NeoString GetCameraId() const;

 protected:
    /**
    Stores internal data
    */
    EventData* data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_EVENT_HPP__
