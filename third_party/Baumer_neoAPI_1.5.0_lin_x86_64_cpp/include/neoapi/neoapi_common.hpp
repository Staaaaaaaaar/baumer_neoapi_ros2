/* \file neoapi_common.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.
 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
 */
#ifndef _NEOAPI_COMMON_HPP__
#define _NEOAPI_COMMON_HPP__

#include <string.h>
#include <cstddef>
#include <cstdint>

#define NEOAPI_CPP_TYPE
#if defined(_WIN32)
#ifdef neoapi_cpp_EXPORTS
#define NEOAPI_CPP_DECL __declspec(dllexport)
#else
#define NEOAPI_CPP_DECL __declspec(dllimport)
#endif
#elif defined(__GNUC__) && (__GNUC__ >= 4) && (defined(__linux__) || defined(__APPLE__))
#define NEOAPI_CPP_DECL __attribute__((visibility("default")))
#undef NEOAPI_CPP_TYPE
#define NEOAPI_CPP_TYPE __attribute__((visibility("default")))
#else
#define NEOAPI_CPP_DECL
#endif

class StringData;
class NeoStringListData;
class NeoStringListIteratorData;
class CamExceptionData;

namespace NeoAPI {

/**
Provides a String object to aid the development with different compilers
Unfortunately the C++ string object is not stable, which means the standard string object <std::string>
cannot be linked if the compiler version does not match. To overcome this nuisance this Object
provides a string wrapper which is compatible with <std::string>
*/
class NEOAPI_CPP_DECL NeoString {
 public:
    /**
    Constructor
    */
    NeoString();

    /**
    Parameter:
        object A NeoString Object

    */
    NeoString(const NeoString& object);

    /**
    Parameter:
        text A const char pointer

    */
    NeoString(const char* text);

    /**
    Destructor
    */
    virtual ~NeoString();

    /**
    Provides the "="" operator
    Parameter:
        text A const char pointer to some text

    Return: The NeoString Object
    */
    const NeoString& operator= (const char * text);

    /**
    Parameter:
        object A String object

    Return: The NeoString Object
    */
    const NeoString& operator= (const NeoString& object);

    /**
    Provides the "==" operator
    Parameter:
        object A NeoString object

    Return: True if equal otherwise false
    */
    bool operator== (const NeoString& object);

    /**
    Provides the "==" operator
    Parameter:
        object A NeoString object

    Return: True if equal otherwise false
    */
    bool operator== (const NeoString& object) const;

    /**
    Parameter:
        text A const char pointer to some text

    Return: True if equal otherwise false
    */
    bool operator== (const char* text);

    /**
    Parameter:
        text A const char pointer to some text

    Return: True if equal otherwise false
    */
    bool operator== (const char* text) const;

    /**
    Provides the "!=" operator
    Parameter:
        object A NeoString object

    Return: True if not equal otherwise false
    */
    bool operator!= (const NeoString& object);

    /**
    Provides the "!=" operator
    Parameter:
        object A NeoString object

    Return: True if not equal otherwise false
    */
    bool operator!= (const NeoString& object) const;

    /**
    Parameter:
        text A const char pointer to some text

    Return: True if not equal otherwise false
    */
    bool operator!= (const char* text);

    /**
    Parameter:
        text A const char pointer to some text

    Return: True if not equal otherwise false
    */
    bool operator!= (const char* text) const;

    /**
    provides a c-style null-terminated string
    Return: The pointer to a null-terminated string
    */
    const char* c_str() const;

    /**
    Provides the const char *() operator
    Return: Const char pointer
    */
    operator const char *() const;

    /**
    Provides the length of the String
    Return: The number of characters in this object
    */
    size_t length() const;

 protected:
    /**
    Holds all internal data
    */
    StringData* data_;
};

/**
Provides iterator functionality for the StringList
*/
class NEOAPI_CPP_DECL NeoStringListIterator {
 public:
    /**
    Constructor
    */
    NeoStringListIterator();

    /**
    Constructor
    Parameter:
        object A NeoStringListIterator object

    */
    NeoStringListIterator(const NeoStringListIterator& object);

    /**
    Destructor
    */
    virtual ~NeoStringListIterator();

    /**
    Provides the "=" operator
    Parameter:
        object A NeoStringListIterator object

    Return: The NeoStringListIterator object
    */
    const NeoStringListIterator& operator= (const NeoStringListIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A NeoStringListIterator

    Return: bool
    */
    virtual bool operator==(const NeoStringListIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A NeoStringListIterator

    Return: bool
    */
    virtual bool operator==(const NeoStringListIterator& object) const;

    /**
    provides the "=!" operator
    Parameter:
        object A NeoStringListIterator

    Return: bool
    */
    virtual bool operator!=(const NeoStringListIterator& object);

    /**
    provides the "=!" operator
    Parameter:
        object A NeoStringListIterator

    Return: bool
    */
    virtual bool operator!=(const NeoStringListIterator& object) const;

    /**
    provides the "++" operator
    Return: NeoStringListIterator
    */
    NeoStringListIterator& operator++();

    /**
    provides the "++" operator
    Return: NeoStringListIterator object
    */
    NeoStringListIterator operator++(int);

    /**
    provides the "*" operator
    Return: The NeoString object
    */
    NeoString& operator*();

 protected:
    /**
    Internal data store
    */
    NeoStringListIteratorData* data_;
};


/**
Provides iterator functionality for the StringList
*/
class NEOAPI_CPP_DECL NeoStringListConstIterator {
 public:
    /**
    Constructor
    */
    NeoStringListConstIterator();

    /**
    Constructor
    Parameter:
        object A NeoStringListConstIterator object

    */
    NeoStringListConstIterator(const NeoStringListConstIterator& object);

    /**
    Destructor
    */
    virtual ~NeoStringListConstIterator();

    /**
    Provides the "=" operator
    Parameter:
        object A NeoStringListConstIterator object

    Return: The NeoStringListConstIterator object
    */
    const NeoStringListConstIterator& operator = (const NeoStringListConstIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A NeoStringListConstIterator

    Return: bool
    */
    virtual bool operator==(const NeoStringListConstIterator& object);

    /**
    provides the "==" operator
    Parameter:
        object A NeoStringListConstIterator

    Return: bool
    */
    virtual bool operator==(const NeoStringListConstIterator& object) const;

    /**
    provides the "=!" operator
    Parameter:
        object A NeoStringListConstIterator

    Return: bool
    */
    virtual bool operator!=(const NeoStringListConstIterator& object);

    /**
    provides the "=!" operator
    Parameter:
        object A NeoStringListConstIterator

    Return: bool
    */
    virtual bool operator!=(const NeoStringListConstIterator& object) const;

    /**
    provides the "++" operator
    Return: NeoStringListConstIterator
    */
    NeoStringListConstIterator& operator++();

    /**
    provides the "++" operator
    Return: NeoStringListConstIterator object
    */
    NeoStringListConstIterator operator++(int);

    /**
    provides the "*" operator
    Return: The NeoString object
    */
    const NeoString& operator*() const;

 protected:
    /**
    Internal data store
    */
    NeoStringListIteratorData* data_;
};


/**
Provides list functionality for strings
This class will help you to iterate through a list of strings, it implements iterator functionality and can be used as below.
~~~{.cpp}
include <iostream>
include "neoapi/neoapi.hpp"
NeoAPI::Cam camera = NeoAPI::Cam();
camera.Connect();
NeoAPI::NeoStringList a = camera.GetAvailableChunks();
for (NeoAPI::NeoStringList::iterator i = a.begin(); i != a.end(); ++i)
{
std::cout << *i << std::endl;
}
for (int i = 0; i < a.size(); i++)
{
std::cout << a[i]<< std::endl;
}
for (NeoAPI::NeoString i : a)
{
std::cout << i << std::endl;
}
~~~
*/
class NEOAPI_CPP_DECL NeoStringList {
 public:
    /**
    Constructor
    */
    NeoStringList();

    /**
    Constructor
    Parameter:
        object A NeoStringList object

    */
    NeoStringList(const NeoStringList& object);

    /**
    Destructor
    */
    virtual ~NeoStringList();

    /**
     The "=" operator.
     Parameter:
         object A NeoStringList object

     Return: The NeoStringList object
     */
    virtual NeoStringList& operator = (const NeoStringList& object);

    /**
    Provides the array access operator
    Parameter:
        index The index of the NeoString to access

    Return: The NeoString object
    */
    virtual NeoString& operator[](size_t index);

    /**
    Deletes the element at the end of the queue
    */
    void pop_back();

    /**
    Adds an element to the end of a list
    Parameter:
        val The element added to the end of the list

    */
    void push_back(const NeoString& val);

    /**
    Erases all the elements of a list
    */
    void clear();

   /**
    Provides the number of strings in this list
    Return: The number of strings
    */
    virtual size_t size() const;

    /**
    Provides iterator functionality
    */
    typedef NeoAPI::NeoStringListIterator iterator;

    /**
    Provides iterator functionality
    */
    typedef NeoAPI::NeoStringListConstIterator const_iterator;

    /**
    Provides iterator functionality
    Return: iterator
    */
    virtual iterator begin();

    /**
    Provides iterator functionality
    Return: iterator
    */
    virtual const_iterator begin() const;

    /**
    Provides iterator functionality
    Return: iterator
    */
    virtual iterator end();

    /**
    Provides iterator functionality
    Return: iterator
    */
    virtual const_iterator end() const;

    /**
Get an iterator by value
Parameter:
    value The value to look for

Return: iterator
*/
    virtual iterator find(const NeoString& value);

    /**
    Get an iterator by value
    Parameter:
        value The value to look for

    Return: iterator
    */
    virtual const_iterator find(const NeoString& value) const;

 protected:
    /**
    internal data store
    */
    NeoStringListData* data_;
};

/**
Base neoAPI Exception class
*/
class NEOAPI_CPP_DECL NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit NeoException(const char* description);

    /**
    Copy-Constructor
    Parameter:
        object An NeoException object

    */
    NeoException(const NeoException& object);

    /**
    Destructor
    */
    virtual ~NeoException();

    /**
    The "=" operator
    Parameter:
        object An NeoException object

    Return: The NeoException object
    */
    const NeoException& operator = (const NeoException& object);

    /**
    Get the Description of the thrown Exception
    Return: The Description of the thrown Exception
    */
    const char* GetDescription();

 private:
    /**
    internal data store
    */
    CamExceptionData* data_;
};

/**
No camera connected Exception
*/
class NEOAPI_CPP_DECL NotConnectedException : public NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit NotConnectedException(const char* description);

    /**
    Destroy the NotConnectedException object
    */
    virtual ~NotConnectedException();
};

/**
Camera not accessible Exception
*/
class NEOAPI_CPP_DECL NoAccessException : public NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit NoAccessException(const char* description);

    /**
    Destructor
    */
    virtual ~NoAccessException();
};

/**
Feature not accessible Exception
*/
class NEOAPI_CPP_DECL FeatureAccessException : public NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit FeatureAccessException(const char* description);

    /**
    Destructor
    */
    virtual ~FeatureAccessException();
};

/**
Requesting an image while holding all available image resources
*/
class NEOAPI_CPP_DECL NoImageBufferException : public NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit NoImageBufferException(const char* description);

    /**
    Destructor
    */
    virtual ~NoImageBufferException();
};

/**
File not accessible Exception
*/
class NEOAPI_CPP_DECL FileAccessException : public NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit FileAccessException(const char* description);

    /**
    Destructor
    */
    virtual ~FileAccessException();
};

/**
Invalid Arguments Exception
*/
class NEOAPI_CPP_DECL InvalidArgumentException : public NeoException {
 public:
    /**
    Constructor
    Parameter:
        description A description

    */
    explicit InvalidArgumentException(const char* description);

    /**
    Destructor
    */
    virtual ~InvalidArgumentException();
};
}  // namespace NeoAPI
#endif  // _NEOAPI_COMMON_HPP__
