/* Copyright 2020 Baumer Optronic */
#ifndef _NEOAPI_TRACE_HPP__
#define _NEOAPI_TRACE_HPP__

#include "neoapi_common.hpp"

namespace NeoAPI {
/**
Valid values for trace severity
*/
enum class NeoTraceSeverity {
    All = 0,  // All (including internal)
    Info,  // Info
    Warning,  // Warning
    Error  // Error
};

/**
Trace callback class to derive from an get Trace messages
*/
class NEOAPI_CPP_DECL NeoTraceCallback {
 public:
    /**
    Constructor
    */
    NeoTraceCallback();

    /**
    Destructor
    */
    virtual ~NeoTraceCallback();

    /**
    Overwrite this method to receive trace messages
    Parameter:
        msg The trace message

    */
    virtual void LogCallback(const NeoString& msg);
};

/**
Trace class which offers the possibility to enable trace for different targets
*/
class NEOAPI_CPP_DECL NeoTrace {
 public:
    /**
    Constructor
    */
    NeoTrace();

    /**
    Destructor
    */
    virtual ~NeoTrace();

    /**
    Trace an info message.
    Parameter:
        msg The message to trace.

    */
    void Info(const NeoString& msg) const;

    /**
    Trace an info message.
    Parameter:
        msg The message to trace.

        mod The module or unit name to trace.

        fct The function or device name to trace.

        object The object to trace.

    */
    void Info(const NeoString& msg, const NeoString& mod, const NeoString& fct, void* object = nullptr) const;

    /**
    Trace a warning message.
    Parameter:
        msg The message to trace.

    */
    void Warning(const NeoString& msg) const;

    /**
    Trace a warning message.
    Parameter:
        msg The message to trace.

        mod The module or unit name to trace.

        fct The function or device name to trace.

        object The object to trace.

    */
    void Warning(const NeoString& msg, const NeoString& mod, const NeoString& fct, void* object = nullptr) const;

    /**
    Trace an error message.
    Parameter:
        msg The message to trace.

    */
    void Error(const NeoString& msg) const;

    /**
    Trace an error message.
    Parameter:
        msg The message to trace.

        mod The module or unit name to trace.

        fct The function or device name to trace.

        object The object to trace.

    */
    void Error(const NeoString& msg, const NeoString& mod, const NeoString& fct, void* object = nullptr) const;

    /**
    Enable trace output to file.
    Parameter:
        filename The filename(including folder) to store the trace.

    NotConnectedException No device connected.
    */
    void EnableLogfile(const NeoString& filename) const;

    /**
    Disable trace output to file.
    */
    void DisableLogfile() const;

    /**
    Enable trace callback.
    Parameter:
        callback The LogCallback method of the given object will be called for every trace message.

    */
    void EnableLogCallback(const NeoTraceCallback& callback) const;

    /**
    Disable trace callback.
    */
    void DisableLogCallback() const;

    /**
    Filter trace messages by setting a minimum severity.
    Parameter:
        severity The target severity.

    */
    void SetSeverity(NeoTraceSeverity severity) const;
};
}  // namespace NeoAPI

#endif  // _NEOAPI_TRACE_HPP__
