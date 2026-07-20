/* \file neoapi_feature.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.

 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided license document for full details.
 */
#ifndef _NEOAPI_FEATURE_HPP__
#define _NEOAPI_FEATURE_HPP__

#include "neoapi_common.hpp"

class FeatureData;
class FeatureListData;
class FeatureListIteratorData;

namespace NeoAPI {
class CamBase;
class FeatureList;
class FeatureListIterator;

/**
Provides access to camera features
This class provides an easy way to work with camera features. It provides access to the GenICam SFNC features
as well as custom features the camera might support.
The Class has a set of methods to get information about and work with a feature (such as type, minimum
and maximum values), find out if a feature is accessible (available/readable/writable) and to read or write features.
More information about the GenICam SFNC (standard feature naming convention) can be found at the [EMVA Website]
(https://www.emva.org/standards-technology/genicam/genicam-downloads/).
More information about the features of your specific camera can be found in the documentation of your
camera available at the member area of the [Baumer Website](https://vt.baumer.com).
*/
class NEOAPI_CPP_DECL Feature {
 public:
    /**
    Constructor
    */
    Feature();

    /**
    Parameter:
        object A Feature object to work with

    */
    Feature(const Feature& object);

    /**
    Destructor
    */
    virtual ~Feature();

    /**
    Provides the "=" operator
    Parameter:
        object A Feature object to work with

    Return: The Feature object
    */
    const Feature& operator = (const Feature& object);

    /**
    Get the current value of the Feature object as integer
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    see also at GetInt
    */
    operator int32_t() const;

    /**
    Get the current value of the Feature object as integer
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    see also at GetInt
    */
    operator long int() const;  // NOLINT

    /**
    Get the current value of the Feature object as integer
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    see also at GetInt
    */
    operator long long int() const;  // NOLINT

    /**
    Get the current value of the Feature object as floating-point number
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    see also at GetDouble
    */
    operator double() const;

    /**
    Get the current value of the Feature object as boolean value
        Only valid for the interface type 'IBoolean'
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    see also at GetBool
    */
    operator bool() const;

    /**
    Get the current value of the Feature object as a string
    Return: The current Feature value
    FeatureAccessException The calling object is not valid
    see also at GetString
    */
    operator NeoString() const;
    /**
    Writes an integer value to the Feature object
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Parameter:
        value An integer value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    see also at SetInt
    */
    Feature& operator = (int32_t value);

    /**
    Writes an integer value to the Feature object
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Parameter:
        value An integer value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    see also at SetInt
    */
    Feature& operator = (int64_t value);

    /**
    This function writes a floating-point value to the Feature object
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Parameter:
        value A floating-point value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    see also at SetDouble
    */
    Feature& operator = (double value);

    /**
    Writes a boolean value to the Feature object
        Only valid for the interface type 'IBoolean'
        Parameter:
        value A boolean value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    see also at SetBool
    */
    Feature& operator = (bool value);

    /**
    Writes a const char* value to the Feature object
    Parameter:
        value A string value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    see also at SetString
    */
    Feature& operator = (const char* value);

    /**
    Writes a String value to the Feature object
    Parameter:
        value A string value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    see also at SetString
    */
    Feature& operator = (const NeoString& value);

    /**
    Get the GenICam data type of the Feature object
        GenICam features can have different interface (data) types. Depending on the interface type, different
    feature access methods are provided
        Return: The interface type of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetInterface() const;

    /**
    Get a short description of the Feature object
    Return: The short description of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetToolTip() const;

    /**
    Get the description of the Feature object
    Return: The description text of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDescription() const;

    /**
    Get the name of the Feature object
    Return: The name of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetName() const;

    /**
    Get the display name of the Feature object
    Return: The display name of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDisplayName() const;

    /**
    Get the recommended visibility (Beginner/Expert/Guru or Invisible) of the Feature object
    Return: A string representing the visibility of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetVisibility() const;

    /**
    Indicates that the Feature object is readable
    Return: True if the Feature object is readable, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable() const;

    /**
    Indicates if a Feature object is writeable
    Return: True if the Feature object is writable, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable() const;

    /**
    Get a value, which recommends the representation type of the Feature object in a GUI
        The presentation is only available for the interface types IFloat and IInteger.
        Possible values are:
    Return: The recommended representation of the Feature object in a GUI
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetRepresentation() const;

    /**
    Get the physical unit of the Feature object, only available for the types 'IFloat' and 'IInteger'
    Return: The physical unit of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetUnit() const;

    /**
    Indicates whether the Feature object is available
        "Not available" or false is equivalent to the access mode 'NA'
        Return: True if the Feature object is available to work with it, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsAvailable() const;

    /**
    Get a list of all possible values of the Feature object
        Only valid for interface type 'IEnumeration'
        Return: The list of all possible values of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual const FeatureList& GetEnumValueList() const;

    /**
    Get the current value of the Feature object as integer
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetInt() const;

    /**
    Writes an integer value to the Feature object
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Parameter:
        value An integer value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetInt(int64_t value);

    /**
    Get the smallest allowed value of the Feature object as integer
        Valid for the interface types 'IInteger' and 'IFloat'
        Return: The smallest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetIntMin() const;

    /**
    Get the largest allowed value of the Feature object as integer
        Valid for the interface types 'IInteger' and 'IFloat'
        Return: The largest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetIntMax() const;

    /**
    Get the allowed step size for the value of the Feature object as integer
        Valid for the interface types 'IInteger' and 'IFloat'
        Return: The allowed step size for the value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetIntInc() const;

    /**
    Get the current value of the Feature object as floating-point number
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetDouble() const;

    /**
    Write a floating-point value to the Feature object
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Parameter:
        value A floating-point value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetDouble(double value);

    /**
    Get the smallest allowed value of the Feature object as a floating-point number
        Valid for the interface types 'IFloat' and 'IInteger'
        Return: The smallest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetDoubleMin() const;

    /**
    Get the largest allowed value of the Feature object as a floating-point number
        Valid for the interface types 'IFloat' and 'IInteger'
        Return: The largest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetDoubleMax() const;

    /**
    Get the allowed step size for the value of the Feature object as a floating-point number
        Valid for the interface types 'IFloat' and 'IInteger'
        Return: The allowed step size for the value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetDoubleInc() const;

    /**
    Get the precision for the corresponding double
        Only valid for the interface type 'IFloat'
        Return: A non-negative number for the precision the double should be displayed
    FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetDoublePrecision() const;

    /**
    Get the maximum allowed string-length of the Feature object
        Only valid for the interface type 'IString'
        Return: The maximum length of the string
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMaxStringLength() const;

    /**
    Get the value of a Feature as a string
    Return: The value of the Feature object
    FeatureAccessException The calling object is not valid.
    */
    virtual NeoString GetString() const;

    /**
    Write the value of a Feature as a string
    Parameter:
        value A string value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid.
    */
    virtual Feature& SetString(const NeoString& value);

    /**
    Executes the command of the Feature object
        Only valid for the interface type 'ICommand'
        Return: The Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual Feature& Execute();

    /**
    Indicates whether the command of the Feature object is still executing
        Only valid for the interface type 'ICommand'. Must be supported by the camera. Currently no Baumer camera is
    supporting this
        Return: False if the command of the Feature object is still been executed, true if it finished executing
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsDone() const;

    /**
    Get the current value of the Feature object as boolean value
        Only valid for the interface type 'IBoolean'
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual bool GetBool() const;

    /**
    Write a boolean value to the Feature object
        Only valid for the interface type 'IBoolean'
        Parameter:
        value A boolean value to be written

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetBool(bool value);

    /**
    Indicates whether the Feature object is a selector
        A selector is a possibility to define feature dependencies. The current value of a selector Feature has an
    impact on the value of another Feature object. Valid for the interface types 'IInteger' and 'IEnumeration'
        Return: True if the Feature object is a selector, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsSelector() const;

    /**
    Get a list of features that depend on this selector Feature
        Valid for the interface types 'IInteger' and 'IEnumeration'
        Return: The list of all features that depend on this selector Feature
    FeatureAccessException The calling object is not valid
    */
    virtual FeatureList& GetSelectedFeatureList() const;

    /**
    Get the length in bytes of the memory pointed to by the Feature object
        Only valid for the interface type 'IRegister'
        Return: The length in bytes of the memory pointed to by the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterLength() const;

    /**
    Get the address of the memory pointed to by the Feature object
        Only valid for the interface type 'IRegister'
        Return: The address of the memory pointed to by the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterAddress() const;

    /**
    Reads the memory pointed to by the Feature object and writes it into the provided buffer
        Only valid for the interface type 'IRegister'
        Parameter:
        buffer The destination buffer into which the read data is copied

        length The size of the destination buffer. The method GetRegisterLength provides the necessary size

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual Feature& GetRegister(void* buffer, uint64_t length);

    /**
    Writes the memory pointed to by the Feature object
        Only valid for the interface type 'IRegister'
        Parameter:
        buffer The buffer for the data to be written

        length The size of the destination buffer. The method GetRegisterLength provides the necessary size

    Return: The Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetRegister(void* buffer, uint64_t length);

 protected:
    /**
    Stores internal data
    */
    FeatureData* data_;
};

/**
Provides list functionality for camera features
*/
class NEOAPI_CPP_DECL FeatureList {
 public:
    /**
    Constructor
    */
    FeatureList();

    /**
    Constructor
    Parameter:
        object A FeatureList object

    */
    FeatureList(const FeatureList& object);

    /**
    Destructor
    */
    virtual ~FeatureList();

    /**
        The "=" operator
                This creates a copy of the other FeatureList object.
                Parameter:
            object A FeatureList object

        Return: The FeatureList object
        */
    virtual FeatureList& operator = (const FeatureList& object);

    /**
    Provides the array access operator
        Parameter:
        name The name of the feature to access

    Return: The Feature object
    */
    virtual Feature& operator[](const NeoString& name);

    /**
    Check if a feature is supported by this camera
        Parameter:
        name The name of the feature to read (SFNC Name)

    Return: True if the feature is supported by the camera
    */
    virtual bool HasFeature(const NeoString& name) const;

    /**
    Indicates that the Feature object is readable
    Parameter:
        name The name of the Feature

    Return: bool True if the Feature object is readable, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable(const NeoString& name) const;

    /**
    Indicates that the Feature object is writeable
    Parameter:
        name The name of the Feature

    Return: bool True if the Feature object is readable, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable(const NeoString& name) const;

    /**
    Provides the number of features in this list
    Return: The number of features
    */
    virtual size_t GetSize() const;

    /**
    Provides iterator functionality
    */
    typedef NeoAPI::FeatureListIterator iterator;

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

    /**
    Get an iterator by feature name
    Parameter:
        name The name of the Feature

    Return: iterator
        */
    virtual iterator find(const NeoString& name) const;

 protected:
    /**
    internal data store
    */
    FeatureListData* data_;
};

/**
Provides iterator functionality for the FeatureList
*/
class NEOAPI_CPP_DECL FeatureListIterator {
 public:
    /**
    Constructor
    */
    FeatureListIterator();

    /**
    Constructor
    Parameter:
        object A FeatureListIterator object

    */
    FeatureListIterator(const FeatureListIterator& object);

    /**
    Destructor
    */
    virtual ~FeatureListIterator();

    /**
    Provides the "=" operator
    Parameter:
        object A FeatureListIterator object

    Return: The FeatureListIterator object
    */
    const FeatureListIterator& operator= (const FeatureListIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A FeatureListIterator

    Return: bool
    */
    virtual bool operator==(const FeatureListIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A FeatureListIterator

    Return: bool
    */
    virtual bool operator==(const FeatureListIterator& object) const;

    /**
    provides the "!=" operator
    Parameter:
        object A FeatureListIterator

    Return: bool
    */
    virtual bool operator!=(const FeatureListIterator& object);

    /**
    provides the "!=" operator
    Parameter:
        object A FeatureListIterator

    Return: bool
    */
    virtual bool operator!=(const FeatureListIterator& object) const;

    /**
    provides the "++" operator
    Return: FeatureListIterator
    */
    FeatureListIterator& operator++();

    /**
    provides the "++" operator
    Return: FeatureListIterator object
    */
    FeatureListIterator operator++(int);

    /**
    provides the "*" operator
    Return: The reference to the Feature object
    */
    Feature& operator*() const;

    /**
    Get the name of the current Feature
    Return: The name as a NeoString
    */
    virtual NeoString GetName() const;

 protected:
    /**
    Internal data store
    */
    FeatureListIteratorData* data_;
};

/**
Base Feature class providing the interface to be used independent of Feature data-type
*/
class NEOAPI_CPP_DECL BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    BaseFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A BaseFeature object

    */
    BaseFeature(const BaseFeature& feature);
    /**
    Destructor
    */
    virtual ~BaseFeature();

    /**
    Provides the "=" operator
    Parameter:
        object A BaseFeature object

    Return: The BaseFeature object
    */
    const BaseFeature& operator = (const BaseFeature& object);

    /**
    Get the GenICam interface type of the Feature object
        Depending on the GenICam interface type, different feature access methods are provided.
    The available interface types are defined in header file bgapi2_def.h.
    See definitions BGAPI2_NODEINTERFACE_xxx
        Return: The interface type of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetInterface() const;

    /**
    Get a short description of the Feature object
    Return: The short description of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetToolTip() const;

    /**
    Get the description of the Feature object
    Return: The description text of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDescription() const;

    /**
    Get the name of the Feature object
    Return: The name of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetName() const;

    /**
    Get the display name of the Feature object
    Return: The display name of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDisplayName() const;

    /**
    Get the recommended visibility (Beginner/Expert/Guru or Invisible) of the Feature object
    Return: A string representing the visibility of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetVisibility() const;

    /**
    Indicates that the Feature object is readable
    Return: True if the Feature object is readable, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable() const;

    /**
    Indicates if a Feature object is writeable
    Return: True if the Feature object is writable, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable() const;

    /**
    Indicates whether the Feature object is available
        "Not available" or false is equivalent to the access mode 'NA'
        Return: True if the Feature object is available to work with it, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsAvailable() const;

 protected:
    /**
    Internal pointer to the camera
    */
    CamBase* cam_;
    /**
    Internal name of the feature
    */
    NeoString name_;
};

/**
Class providing the 'IFloat' interface
*/
class NEOAPI_CPP_DECL DoubleFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    DoubleFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A DoubleFeature object

    */
    DoubleFeature(const DoubleFeature& feature);

    /**
    Destructor
    */
    virtual ~DoubleFeature();

    /**
    Provides the "=" operator
    Parameter:
        object A DoubleFeature object

    Return: The DoubleFeature object
    */
    const DoubleFeature& operator = (const DoubleFeature& object);

    /**
    Get the current value of the Feature object as floating-point number
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    see also at GetDouble
    */
    operator double() const;

    /**
    This function writes a floating-point value to the Feature object
        Parameter:
        value A floating-point value to be written

    Return: The DoubleFeature object
    FeatureAccessException The calling object is not valid
    see also at SetDouble
    */
    DoubleFeature& operator = (double value);


    /**
    Get the current value of the Feature object as floating-point number
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double Get() const;

    /**
    This function writes a floating-point value to the Feature object
        Parameter:
        value A floating-point value to be written

    Return: The DoubleFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual DoubleFeature& Set(double value);

    /**
    Get the smallest allowed value of the Feature object as a floating-point number
        Return: The smallest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetMin() const;

    /**
    Get the largest allowed value of the Feature object as a floating-point number
        Return: The largest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetMax() const;

    /**
    Get the allowed step size for the value of the Feature object as a floating-point number
        Return: The allowed step size for the value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual double GetInc() const;

    /**
    Get the precision for the corresponding double
        Return: A non-negative number for the precision the double should be displayed
    FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetPrecision() const;

    /**
    Get the value of the Feature as a NeoString
    Return: The value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
    Get the physical unit of the Feature object. Only available for the interface types 'IFloat' and 'IInteger'
    Return: The physical unit of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetUnit() const;

    /**
    Get a value, which recommends the representation type of the Feature object in a GUI
        The presentation is only available for the interface types IFloat and IInteger.
        Possible values are:
    Return: The recommended value for the representation of the Feature object in a GUI
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetRepresentation() const;
};

/**
Class providing the 'IInteger' interface
*/
class NEOAPI_CPP_DECL IntegerFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    IntegerFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A IntegerFeature object

    */
    IntegerFeature(const IntegerFeature& feature);

    /**
    Destructor
    */
    virtual ~IntegerFeature();

    /**
    Provides the "=" operator
    Parameter:
        object A IntegerFeature object

    Return: The IntegerFeature object
    */
    const IntegerFeature& operator = (const IntegerFeature& object);

    /**
    Get the current value of the Feature object as integer
        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    see also at GetInt
    */
    operator int64_t() const;

    /**
    Writes an integer value to the Feature object
        Parameter:
        value An integer value to be written

    Return: The IntegerFeature object
    FeatureAccessException The calling object is not valid
    see also at SetInt
    */
    IntegerFeature& operator = (int32_t value);

    /**
    Writes an integer value to the Feature object
        Parameter:
        value An integer value to be written

    Return: The IntegerFeature object
    FeatureAccessException The calling object is not valid
    see also at SetInt
    */
    IntegerFeature& operator = (int64_t value);

    /**
    Get the current value of the Feature object as integer
        Return: The current Feature value
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t Get() const;

    /**
    Writes an integer value to the Feature object
        Parameter:
        value An integer value to be written

    Return: The IntegerFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual IntegerFeature& Set(int64_t value);

    /**
    Get the smallest allowed value of the Feature object as integer
        Return: The smallest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMin() const;

    /**
    Get the largest allowed value of the Feature object as integer
        Return: The largest allowed value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMax() const;

    /**
    Get the allowed step size for the value of the Feature object as integer
        Return: The allowed step size for the value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetInc() const;

    /**
    Get the value of the Feature as a string
    Return: The value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
    Get the physical unit of the Feature object. Only available for the interface types 'IFloat' and 'IInteger'
    Return: The physical unit of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetUnit() const;

    /**
    Get a value, which recommends the representation type of the Feature object in a GUI
        The presentation is only available for the interface types IFloat and IInteger.
        Possible values are:
    Return: The recommended value for the representation of the Feature object in a GUI
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetRepresentation() const;

    /**
    Indicates whether the Feature object is a selector
        A selector is a possibility to define feature dependencies. The current value of a selector Feature has an
    impact on the value of another Feature object
        Return: True if the Feature object is a selector, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsSelector() const;

    /**
    Get a list of features that depend on this selector Feature
        Return: The list of all features that depend on this selector Feature
    FeatureAccessException The calling object is not valid
    */
    virtual FeatureList& GetSelectedFeatureList() const;
};

/**
Class providing the 'IString' interface
*/
class NEOAPI_CPP_DECL StringFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    StringFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A StringFeature object

    */
    StringFeature(const StringFeature& feature);

    /**
    Provides the "=" operator
    Parameter:
        object A StringFeature object

    Return: The StringFeature object
    */
    const StringFeature& operator = (const StringFeature& object);


    /**
    Destructor
    */
    virtual ~StringFeature();

    /**
    Get the current value of the Feature object as a string
    Return: A NeoString object
    */
    operator NeoString() const;

    /**
    Provides the "=" operator
    Parameter:
        value A string value to be written

    Return: The StringFeature object
    FeatureAccessException The calling object is not valid
    see also at SetString
    */
    StringFeature& operator = (const char* value);

    /**
    Parameter:
        value A string value to be written

    Return: The StringFeature object
    FeatureAccessException The calling object is not valid
    see also at SetString
    */
    StringFeature& operator = (const NeoString& value);

    /**
    Get the maximum allowed string-length of the Feature object
        Return: The maximum length of the string
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMaxStringLength() const;

    /**
    Get the value of the Feature as a string
    Return: The value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
    Write the value of the Feature as a string
    Parameter:
        value A string value to be written

    Return: The StringFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual StringFeature& SetString(const NeoString& value);
};

/**
Class providing the 'IBoolean' interface
*/
class NEOAPI_CPP_DECL BoolFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    BoolFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A BoolFeature object

    */
    BoolFeature(const BoolFeature& feature);

    /**
    Destructor
    */
    virtual ~BoolFeature();

    /**
    Provides the "=" operator
    Parameter:
        object A BoolFeature object

    Return: The BoolFeature object
    */
    const BoolFeature& operator = (const BoolFeature& object);

    /**
    Get the current value of the Feature object as boolean value
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    see also at GetBool
    */
    operator bool() const;

    /**
    This function writes a boolean value to the Feature object
        Parameter:
        value A boolean value to be written

    Return: The BoolFeature object
    FeatureAccessException The calling object is not valid
    see also at SetBool
    */
    BoolFeature& operator = (bool value);

    /**
    Get the current value of the Feature object as boolean value
        Return: The current value of the Feature object as boolean value
    FeatureAccessException The calling object is not valid
    */
    virtual bool Get() const;

    /**
    This function writes a boolean value to the Feature object
        Parameter:
        value A boolean value to be written

    Return: The BoolFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual BoolFeature& Set(bool value);

    /**
    Get the value of the Feature as a string
    Return: The value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;
};

/**
Class providing the 'ICommand' interface
*/
class NEOAPI_CPP_DECL CommandFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    CommandFeature(CamBase* cam, const NeoString& name);
    /**
    Copy-Constructor
    Parameter:
        feature A CommandFeature object

    */
    CommandFeature(const CommandFeature& feature);
    /**
    Destructor
    */
    virtual ~CommandFeature();

    /**
    Provides the "=" operator
    Parameter:
        object A CommandFeature object

    Return: The CommandFeature object
    */
    const CommandFeature& operator = (const CommandFeature& object) = delete;

    /**
    Executes the command of the Feature object
    Return: The CommandFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual CommandFeature& Execute();

    /**
    Indicates whether the command of the Feature object is still executing
        Return: False if the command of the Feature object is still been executed, true if it finished executing
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsDone() const;

    /**
    Get the value of the Feature as a string
    Return: The value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;
};

/**
Base class providing the 'IEnumeration' interface
*/
class NEOAPI_CPP_DECL EnumerationFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    EnumerationFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A EnumerationFeature object

    */
    EnumerationFeature(const EnumerationFeature& feature);

    /**
    Destructor
    */
    virtual ~EnumerationFeature();

    /**
    Provides the "=" operator
    Parameter:
        object A EnumerationFeature object

    Return: The EnumerationFeature object
    */
    const EnumerationFeature& operator = (const EnumerationFeature& object);

    /**
    Get a list of all possible values of the Feature object
        Only valid for interface type 'IEnumeration'
        Return: The list of all possible values of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual const FeatureList& GetEnumValueList() const;

    /**
    Get the current value of the Feature object as integer
        Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetInt() const;

    /**
    Writes an integer value to the Feature object
        Parameter:
        value An integer value to be written

    Return: The EnumerationFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual EnumerationFeature& SetInt(int64_t value);

    /**
    Get the current value of the Feature as a string
    Return: The current value of the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
    Write the value of the Feature as a string
    Parameter:
        value A string value to be written

    Return: The EnumerationFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual EnumerationFeature& SetString(const NeoString& value);

    /**
    Indicates whether the Feature object is a selector
        A selector is a possibility to define feature dependencies. The current value of a selector feature has an
    impact on the value of another Feature object
        Return: True if the Feature object is a selector, otherwise false
    FeatureAccessException The calling object is not valid
    */
    virtual bool IsSelector() const;

    /**
    Get a list of features that depend on this selector feature
        Return: The list of all features that depend on this selector Feature
    FeatureAccessException The calling object is not valid
    */
    virtual FeatureList& GetSelectedFeatureList() const;
};

/**
Base class providing the 'IRegister' interface
*/
class NEOAPI_CPP_DECL RegisterFeature : public BaseFeature {
 public:
    /**
    Constructor
    Parameter:
        cam The pointer to the camera

        name The name of the Feature

    */
    RegisterFeature(CamBase* cam, const NeoString& name);

    /**
    Copy-Constructor
    Parameter:
        feature A RegisterFeature object

    */
    RegisterFeature(const RegisterFeature& feature);

    /**
    Provides the "=" operator
    Parameter:
        object A RegisterFeature object

    Return: The RegisterFeature object
    */
    const RegisterFeature& operator = (const RegisterFeature& object) = delete;

    /**
    Destructor
    */
    virtual ~RegisterFeature();

    /**
    Get the length in bytes of the memory pointed to by the Feature object
        Return: The length in bytes of the memory pointed to by the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterLength() const;

    /**
    Get the address of the memory pointed to by the Feature object
        Return: The address of the memory pointed to by the Feature object
    FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterAddress() const;

    /**
    Reads the memory pointed to by the Feature object and writes it into the provided buffer
        Parameter:
        buffer The destination buffer into which the read data is copied

        length The size of the destination buffer. The method GetRegisterLength provides the necessary size

    Return: The RegisterFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual RegisterFeature& GetRegister(void* buffer, uint64_t length);

    /**
    Writes the memory pointed to by the Feature object
        Parameter:
        buffer The buffer for the data to be written

        length The size of the destination buffer. The method GetRegisterLength provides the necessary size

    Return: The RegisterFeature object
    FeatureAccessException The calling object is not valid
    */
    virtual RegisterFeature& SetRegister(void* buffer, uint64_t length);
};

}  // namespace NeoAPI
#endif  // _NEOAPI_FEATURE_HPP__
