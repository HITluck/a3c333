// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.7.0
//
// <auto-generated>
//
// Generated from file `agent.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <agent.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::IceInternal::DefaultValueFactoryInit<::DataPool::InitParamManager> iceC_DataPool_InitParamManager_init("::DataPool::InitParamManager");

const ::IceInternal::DefaultValueFactoryInit<::DataPool::InitParamPool> iceC_DataPool_InitParamPool_init("::DataPool::InitParamPool");

const ::std::string iceC_DataPool_Manager_ids[2] =
{
    "::DataPool::Manager",
    "::Ice::Object"
};
const ::std::string iceC_DataPool_Manager_ops[] =
{
    "closePool",
    "createPool",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};
const ::std::string iceC_DataPool_Manager_createPool_name = "createPool";
const ::std::string iceC_DataPool_Manager_closePool_name = "closePool";

const ::std::string iceC_DataPool_Pool_ids[2] =
{
    "::DataPool::Pool",
    "::Ice::Object"
};
const ::std::string iceC_DataPool_Pool_ops[] =
{
    "getPid",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};
const ::std::string iceC_DataPool_Pool_shutdown_name = "shutdown";
const ::std::string iceC_DataPool_Pool_getPid_name = "getPid";

const ::std::string iceC_DataPool_SubBatchPool_ids[2] =
{
    "::DataPool::SubBatchPool",
    "::Ice::Object"
};
const ::std::string iceC_DataPool_SubBatchPool_ops[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

bool
DataPool::Manager::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_Manager_ids, iceC_DataPool_Manager_ids + 2, s);
}

::std::vector<::std::string>
DataPool::Manager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_DataPool_Manager_ids[0], &iceC_DataPool_Manager_ids[2]);
}

::std::string
DataPool::Manager::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::Manager::ice_staticId()
{
    static const ::std::string typeId = "::DataPool::Manager";
    return typeId;
}

bool
DataPool::Manager::_iceD_createPool(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::shared_ptr<::DataPool::InitParamPool> iceP_param;
    istr->readAll(iceP_param);
    istr->readPendingValues();
    inS.endReadParams();
    ::DataPool::PoolInfo ret = this->createPool(::std::move(iceP_param), current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}

bool
DataPool::Manager::_iceD_closePool(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_name;
    istr->readAll(iceP_name);
    inS.endReadParams();
    this->closePool(::std::move(iceP_name), current);
    inS.writeEmptyParams();
    return true;
}

bool
DataPool::Manager::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_DataPool_Manager_ops, iceC_DataPool_Manager_ops + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_DataPool_Manager_ops)
    {
        case 0:
        {
            return _iceD_closePool(in, current);
        }
        case 1:
        {
            return _iceD_createPool(in, current);
        }
        case 2:
        {
            return _iceD_ice_id(in, current);
        }
        case 3:
        {
            return _iceD_ice_ids(in, current);
        }
        case 4:
        {
            return _iceD_ice_isA(in, current);
        }
        case 5:
        {
            return _iceD_ice_ping(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

bool
DataPool::Pool::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_Pool_ids, iceC_DataPool_Pool_ids + 2, s);
}

::std::vector<::std::string>
DataPool::Pool::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_DataPool_Pool_ids[0], &iceC_DataPool_Pool_ids[2]);
}

::std::string
DataPool::Pool::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::Pool::ice_staticId()
{
    static const ::std::string typeId = "::DataPool::Pool";
    return typeId;
}

bool
DataPool::Pool::_iceD_shutdown(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    inS.readEmptyParams();
    this->shutdown(current);
    inS.writeEmptyParams();
    return true;
}

bool
DataPool::Pool::_iceD_getPid(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    inS.readEmptyParams();
    int ret = this->getPid(current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}

bool
DataPool::Pool::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_DataPool_Pool_ops, iceC_DataPool_Pool_ops + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_DataPool_Pool_ops)
    {
        case 0:
        {
            return _iceD_getPid(in, current);
        }
        case 1:
        {
            return _iceD_ice_id(in, current);
        }
        case 2:
        {
            return _iceD_ice_ids(in, current);
        }
        case 3:
        {
            return _iceD_ice_isA(in, current);
        }
        case 4:
        {
            return _iceD_ice_ping(in, current);
        }
        case 5:
        {
            return _iceD_shutdown(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

bool
DataPool::SubBatchPool::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_SubBatchPool_ids, iceC_DataPool_SubBatchPool_ids + 2, s);
}

::std::vector<::std::string>
DataPool::SubBatchPool::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_DataPool_SubBatchPool_ids[0], &iceC_DataPool_SubBatchPool_ids[2]);
}

::std::string
DataPool::SubBatchPool::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::SubBatchPool::ice_staticId()
{
    static const ::std::string typeId = "::DataPool::SubBatchPool";
    return typeId;
}

DataPool::InitParamManager::~InitParamManager()
{
}

const ::std::string&
DataPool::InitParamManager::ice_staticId()
{
    static const ::std::string typeId = "::DataPool::InitParamManager";
    return typeId;
}

DataPool::InitParamPool::~InitParamPool()
{
}

const ::std::string&
DataPool::InitParamPool::ice_staticId()
{
    static const ::std::string typeId = "::DataPool::InitParamPool";
    return typeId;
}

void
DataPool::ManagerPrx::_iceI_createPool(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::DataPool::PoolInfo>>& outAsync, const ::std::shared_ptr<::DataPool::InitParamPool>& iceP_param, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_DataPool_Manager_createPool_name);
    outAsync->invoke(iceC_DataPool_Manager_createPool_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_param);
            ostr->writePendingValues();
        },
        nullptr);
}

void
DataPool::ManagerPrx::_iceI_closePool(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::std::string& iceP_name, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_DataPool_Manager_closePool_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_name);
        },
        nullptr);
}

::std::shared_ptr<::Ice::ObjectPrx>
DataPool::ManagerPrx::_newInstance() const
{
    return ::IceInternal::createProxy<ManagerPrx>();
}

const ::std::string&
DataPool::ManagerPrx::ice_staticId()
{
    return DataPool::Manager::ice_staticId();
}

void
DataPool::PoolPrx::_iceI_shutdown(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_DataPool_Pool_shutdown_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        nullptr,
        nullptr);
}

void
DataPool::PoolPrx::_iceI_getPid(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<int>>& outAsync, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_DataPool_Pool_getPid_name);
    outAsync->invoke(iceC_DataPool_Pool_getPid_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        nullptr,
        nullptr);
}

::std::shared_ptr<::Ice::ObjectPrx>
DataPool::PoolPrx::_newInstance() const
{
    return ::IceInternal::createProxy<PoolPrx>();
}

const ::std::string&
DataPool::PoolPrx::ice_staticId()
{
    return DataPool::Pool::ice_staticId();
}

::std::shared_ptr<::Ice::ObjectPrx>
DataPool::SubBatchPoolPrx::_newInstance() const
{
    return ::IceInternal::createProxy<SubBatchPoolPrx>();
}

const ::std::string&
DataPool::SubBatchPoolPrx::ice_staticId()
{
    return DataPool::SubBatchPool::ice_staticId();
}

namespace Ice
{
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_DataPool_Manager_createPool_name = "createPool";

const ::std::string iceC_DataPool_Manager_closePool_name = "closePool";

const ::std::string iceC_DataPool_Pool_shutdown_name = "shutdown";

const ::std::string iceC_DataPool_Pool_getPid_name = "getPid";

}
::IceProxy::Ice::Object* ::IceProxy::DataPool::upCast(::IceProxy::DataPool::InitParamManager* p) { return p; }

void
::IceProxy::DataPool::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::DataPool::InitParamManager>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::DataPool::InitParamManager;
        v->_copyFrom(proxy);
    }
}

::IceProxy::Ice::Object*
IceProxy::DataPool::InitParamManager::_newInstance() const
{
    return new InitParamManager;
}

const ::std::string&
IceProxy::DataPool::InitParamManager::ice_staticId()
{
    return ::DataPool::InitParamManager::ice_staticId();
}
::IceProxy::Ice::Object* ::IceProxy::DataPool::upCast(::IceProxy::DataPool::InitParamPool* p) { return p; }

void
::IceProxy::DataPool::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::DataPool::InitParamPool>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::DataPool::InitParamPool;
        v->_copyFrom(proxy);
    }
}

::IceProxy::Ice::Object*
IceProxy::DataPool::InitParamPool::_newInstance() const
{
    return new InitParamPool;
}

const ::std::string&
IceProxy::DataPool::InitParamPool::ice_staticId()
{
    return ::DataPool::InitParamPool::ice_staticId();
}
::IceProxy::Ice::Object* ::IceProxy::DataPool::upCast(::IceProxy::DataPool::Manager* p) { return p; }

void
::IceProxy::DataPool::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::DataPool::Manager>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::DataPool::Manager;
        v->_copyFrom(proxy);
    }
}

::Ice::AsyncResultPtr
IceProxy::DataPool::Manager::_iceI_begin_createPool(const ::DataPool::InitParamPoolPtr& iceP_param, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_DataPool_Manager_createPool_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_DataPool_Manager_createPool_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_DataPool_Manager_createPool_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_param);
        ostr->writePendingValues();
        result->endWriteParams();
        result->invoke(iceC_DataPool_Manager_createPool_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::DataPool::PoolInfo
IceProxy::DataPool::Manager::end_createPool(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_DataPool_Manager_createPool_name);
    ::DataPool::PoolInfo ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::DataPool::Manager::_iceI_begin_closePool(const ::std::string& iceP_name, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_DataPool_Manager_closePool_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_DataPool_Manager_closePool_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_name);
        result->endWriteParams();
        result->invoke(iceC_DataPool_Manager_closePool_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::DataPool::Manager::end_closePool(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_DataPool_Manager_closePool_name);
}

::IceProxy::Ice::Object*
IceProxy::DataPool::Manager::_newInstance() const
{
    return new Manager;
}

const ::std::string&
IceProxy::DataPool::Manager::ice_staticId()
{
    return ::DataPool::Manager::ice_staticId();
}
::IceProxy::Ice::Object* ::IceProxy::DataPool::upCast(::IceProxy::DataPool::Pool* p) { return p; }

void
::IceProxy::DataPool::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::DataPool::Pool>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::DataPool::Pool;
        v->_copyFrom(proxy);
    }
}

::Ice::AsyncResultPtr
IceProxy::DataPool::Pool::_iceI_begin_shutdown(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_DataPool_Pool_shutdown_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_DataPool_Pool_shutdown_name, ::Ice::Normal, context);
        result->writeEmptyParams();
        result->invoke(iceC_DataPool_Pool_shutdown_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::DataPool::Pool::end_shutdown(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_DataPool_Pool_shutdown_name);
}

::Ice::AsyncResultPtr
IceProxy::DataPool::Pool::_iceI_begin_getPid(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_DataPool_Pool_getPid_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_DataPool_Pool_getPid_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_DataPool_Pool_getPid_name, ::Ice::Normal, context);
        result->writeEmptyParams();
        result->invoke(iceC_DataPool_Pool_getPid_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::Ice::Int
IceProxy::DataPool::Pool::end_getPid(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_DataPool_Pool_getPid_name);
    ::Ice::Int ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::IceProxy::Ice::Object*
IceProxy::DataPool::Pool::_newInstance() const
{
    return new Pool;
}

const ::std::string&
IceProxy::DataPool::Pool::ice_staticId()
{
    return ::DataPool::Pool::ice_staticId();
}
::IceProxy::Ice::Object* ::IceProxy::DataPool::upCast(::IceProxy::DataPool::SubBatchPool* p) { return p; }

void
::IceProxy::DataPool::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::DataPool::SubBatchPool>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::DataPool::SubBatchPool;
        v->_copyFrom(proxy);
    }
}

::IceProxy::Ice::Object*
IceProxy::DataPool::SubBatchPool::_newInstance() const
{
    return new SubBatchPool;
}

const ::std::string&
IceProxy::DataPool::SubBatchPool::ice_staticId()
{
    return ::DataPool::SubBatchPool::ice_staticId();
}

DataPool::InitParamManager::~InitParamManager()
{
}

::Ice::Object* DataPool::upCast(::DataPool::InitParamManager* p) { return p; }

::Ice::ObjectPtr
DataPool::InitParamManager::ice_clone() const
{
    ::Ice::Object* p = new InitParamManager(*this);
    return p;
}

namespace
{
const ::std::string iceC_DataPool_InitParamManager_ids[2] =
{
    "::DataPool::InitParamManager",
    "::Ice::Object"
};

}

bool
DataPool::InitParamManager::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_InitParamManager_ids, iceC_DataPool_InitParamManager_ids + 2, s);
}

::std::vector< ::std::string>
DataPool::InitParamManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_DataPool_InitParamManager_ids[0], &iceC_DataPool_InitParamManager_ids[2]);
}

const ::std::string&
DataPool::InitParamManager::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::InitParamManager::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::DataPool::InitParamManager";
    return typeId;
#else
    return iceC_DataPool_InitParamManager_ids[0];
#endif
}

void
DataPool::InitParamManager::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::DataPool::InitParamManager, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
DataPool::InitParamManager::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::DataPool::InitParamManager, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

namespace
{
const ::IceInternal::DefaultValueFactoryInit< ::DataPool::InitParamManager> iceC_DataPool_InitParamManager_init("::DataPool::InitParamManager");
}

::Ice::ValueFactoryPtr
DataPool::InitParamManager::ice_factory()
{
    return ::IceInternal::factoryTable->getValueFactory(::DataPool::InitParamManager::ice_staticId());
}

void
DataPool::_icePatchObjectPtr(InitParamManagerPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::DataPool::InitParamManagerPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::DataPool::InitParamManager::ice_staticId(), v);
    }
}

DataPool::InitParamPool::~InitParamPool()
{
}

::Ice::Object* DataPool::upCast(::DataPool::InitParamPool* p) { return p; }

::Ice::ObjectPtr
DataPool::InitParamPool::ice_clone() const
{
    ::Ice::Object* p = new InitParamPool(*this);
    return p;
}

namespace
{
const ::std::string iceC_DataPool_InitParamPool_ids[2] =
{
    "::DataPool::InitParamPool",
    "::Ice::Object"
};

}

bool
DataPool::InitParamPool::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_InitParamPool_ids, iceC_DataPool_InitParamPool_ids + 2, s);
}

::std::vector< ::std::string>
DataPool::InitParamPool::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_DataPool_InitParamPool_ids[0], &iceC_DataPool_InitParamPool_ids[2]);
}

const ::std::string&
DataPool::InitParamPool::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::InitParamPool::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::DataPool::InitParamPool";
    return typeId;
#else
    return iceC_DataPool_InitParamPool_ids[0];
#endif
}

void
DataPool::InitParamPool::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::DataPool::InitParamPool, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
DataPool::InitParamPool::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::DataPool::InitParamPool, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

namespace
{
const ::IceInternal::DefaultValueFactoryInit< ::DataPool::InitParamPool> iceC_DataPool_InitParamPool_init("::DataPool::InitParamPool");
}

::Ice::ValueFactoryPtr
DataPool::InitParamPool::ice_factory()
{
    return ::IceInternal::factoryTable->getValueFactory(::DataPool::InitParamPool::ice_staticId());
}

void
DataPool::_icePatchObjectPtr(InitParamPoolPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::DataPool::InitParamPoolPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::DataPool::InitParamPool::ice_staticId(), v);
    }
}

DataPool::Manager::~Manager()
{
}

::Ice::Object* DataPool::upCast(::DataPool::Manager* p) { return p; }


namespace
{
const ::std::string iceC_DataPool_Manager_ids[2] =
{
    "::DataPool::Manager",
    "::Ice::Object"
};

}

bool
DataPool::Manager::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_Manager_ids, iceC_DataPool_Manager_ids + 2, s);
}

::std::vector< ::std::string>
DataPool::Manager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_DataPool_Manager_ids[0], &iceC_DataPool_Manager_ids[2]);
}

const ::std::string&
DataPool::Manager::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::Manager::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::DataPool::Manager";
    return typeId;
#else
    return iceC_DataPool_Manager_ids[0];
#endif
}

bool
DataPool::Manager::_iceD_createPool(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::DataPool::InitParamPoolPtr iceP_param;
    istr->read(iceP_param);
    istr->readPendingValues();
    inS.endReadParams();
    ::DataPool::PoolInfo ret = this->createPool(iceP_param, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}

bool
DataPool::Manager::_iceD_closePool(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_name;
    istr->read(iceP_name);
    inS.endReadParams();
    this->closePool(iceP_name, current);
    inS.writeEmptyParams();
    return true;
}

namespace
{
const ::std::string iceC_DataPool_Manager_all[] =
{
    "closePool",
    "createPool",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

bool
DataPool::Manager::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_DataPool_Manager_all, iceC_DataPool_Manager_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_DataPool_Manager_all)
    {
        case 0:
        {
            return _iceD_closePool(in, current);
        }
        case 1:
        {
            return _iceD_createPool(in, current);
        }
        case 2:
        {
            return _iceD_ice_id(in, current);
        }
        case 3:
        {
            return _iceD_ice_ids(in, current);
        }
        case 4:
        {
            return _iceD_ice_isA(in, current);
        }
        case 5:
        {
            return _iceD_ice_ping(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
DataPool::Manager::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::DataPool::Manager, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
DataPool::Manager::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::DataPool::Manager, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
DataPool::_icePatchObjectPtr(ManagerPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::DataPool::ManagerPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::DataPool::Manager::ice_staticId(), v);
    }
}

DataPool::Pool::~Pool()
{
}

::Ice::Object* DataPool::upCast(::DataPool::Pool* p) { return p; }


namespace
{
const ::std::string iceC_DataPool_Pool_ids[2] =
{
    "::DataPool::Pool",
    "::Ice::Object"
};

}

bool
DataPool::Pool::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_Pool_ids, iceC_DataPool_Pool_ids + 2, s);
}

::std::vector< ::std::string>
DataPool::Pool::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_DataPool_Pool_ids[0], &iceC_DataPool_Pool_ids[2]);
}

const ::std::string&
DataPool::Pool::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::Pool::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::DataPool::Pool";
    return typeId;
#else
    return iceC_DataPool_Pool_ids[0];
#endif
}

bool
DataPool::Pool::_iceD_shutdown(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    inS.readEmptyParams();
    this->shutdown(current);
    inS.writeEmptyParams();
    return true;
}

bool
DataPool::Pool::_iceD_getPid(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    inS.readEmptyParams();
    ::Ice::Int ret = this->getPid(current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}

namespace
{
const ::std::string iceC_DataPool_Pool_all[] =
{
    "getPid",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

}

bool
DataPool::Pool::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_DataPool_Pool_all, iceC_DataPool_Pool_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_DataPool_Pool_all)
    {
        case 0:
        {
            return _iceD_getPid(in, current);
        }
        case 1:
        {
            return _iceD_ice_id(in, current);
        }
        case 2:
        {
            return _iceD_ice_ids(in, current);
        }
        case 3:
        {
            return _iceD_ice_isA(in, current);
        }
        case 4:
        {
            return _iceD_ice_ping(in, current);
        }
        case 5:
        {
            return _iceD_shutdown(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
DataPool::Pool::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::DataPool::Pool, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
DataPool::Pool::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::DataPool::Pool, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
DataPool::_icePatchObjectPtr(PoolPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::DataPool::PoolPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::DataPool::Pool::ice_staticId(), v);
    }
}

DataPool::SubBatchPool::~SubBatchPool()
{
}

::Ice::Object* DataPool::upCast(::DataPool::SubBatchPool* p) { return p; }


namespace
{
const ::std::string iceC_DataPool_SubBatchPool_ids[2] =
{
    "::DataPool::SubBatchPool",
    "::Ice::Object"
};

}

bool
DataPool::SubBatchPool::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_DataPool_SubBatchPool_ids, iceC_DataPool_SubBatchPool_ids + 2, s);
}

::std::vector< ::std::string>
DataPool::SubBatchPool::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_DataPool_SubBatchPool_ids[0], &iceC_DataPool_SubBatchPool_ids[2]);
}

const ::std::string&
DataPool::SubBatchPool::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
DataPool::SubBatchPool::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::DataPool::SubBatchPool";
    return typeId;
#else
    return iceC_DataPool_SubBatchPool_ids[0];
#endif
}

void
DataPool::SubBatchPool::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::DataPool::SubBatchPool, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
DataPool::SubBatchPool::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::DataPool::SubBatchPool, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
DataPool::_icePatchObjectPtr(SubBatchPoolPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::DataPool::SubBatchPoolPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::DataPool::SubBatchPool::ice_staticId(), v);
    }
}

namespace Ice
{
}

#endif
