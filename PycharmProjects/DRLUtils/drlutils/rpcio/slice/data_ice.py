# -*- coding: utf-8 -*-
# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.6.3
#
# <auto-generated>
#
# Generated from file `data.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

from sys import version_info as _version_info_
import Ice, IcePy
import Ice_Identity_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Start of module DataFlow
_M_DataFlow = Ice.openModule('DataFlow')
__name__ = 'DataFlow'

if '_t_ByteSeq' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_ByteSeq = IcePy.defineSequence('::DataFlow::ByteSeq', (), IcePy._t_byte)

if '_t_Shape' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_Shape = IcePy.defineSequence('::DataFlow::Shape', (), IcePy._t_int)

if '_t_FloatSeq' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_FloatSeq = IcePy.defineSequence('::DataFlow::FloatSeq', (), IcePy._t_float)

if '_t_IntSeq' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_IntSeq = IcePy.defineSequence('::DataFlow::IntSeq', (), IcePy._t_int)

if 'NDType' not in _M_DataFlow.__dict__:
    _M_DataFlow.NDType = Ice.createTempClass()
    class NDType(Ice.EnumBase):

        def __init__(self, _n, _v):
            Ice.EnumBase.__init__(self, _n, _v)

        def valueOf(self, _n):
            if _n in self._enumerators:
                return self._enumerators[_n]
            return None
        valueOf = classmethod(valueOf)

    NDType.ndtFloat32 = NDType("ndtFloat32", 0)
    NDType.ndtUint8 = NDType("ndtUint8", 1)
    NDType.ndtInt32 = NDType("ndtInt32", 2)
    NDType.ndtInt64 = NDType("ndtInt64", 3)
    NDType.ndtUnknown = NDType("ndtUnknown", 4)
    NDType._enumerators = { 0:NDType.ndtFloat32, 1:NDType.ndtUint8, 2:NDType.ndtInt32, 3:NDType.ndtInt64, 4:NDType.ndtUnknown }

    _M_DataFlow._t_NDType = IcePy.defineEnum('::DataFlow::NDType', NDType, (), NDType._enumerators)

    _M_DataFlow.NDType = NDType
    del NDType

if 'NDArray' not in _M_DataFlow.__dict__:
    _M_DataFlow.NDArray = Ice.createTempClass()
    class NDArray(Ice.Object):
        def __init__(self, dtype=_M_DataFlow.NDType.ndtFloat32, shape=None, buffer=None):
            self.dtype = dtype
            self.shape = shape
            self.buffer = buffer

        def ice_ids(self, current=None):
            return ('::DataFlow::NDArray', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::NDArray'

        def ice_staticId():
            return '::DataFlow::NDArray'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_NDArray)

        __repr__ = __str__

    _M_DataFlow.NDArrayPrx = Ice.createTempClass()
    class NDArrayPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.NDArrayPrx.ice_checkedCast(proxy, '::DataFlow::NDArray', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.NDArrayPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::NDArray'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_NDArrayPrx = IcePy.defineProxy('::DataFlow::NDArray', NDArrayPrx)

    _M_DataFlow._t_NDArray = IcePy.defineClass('::DataFlow::NDArray', NDArray, -1, (), False, False, None, (), (
        ('dtype', (), _M_DataFlow._t_NDType, False, 0),
        ('shape', (), _M_DataFlow._t_Shape, False, 0),
        ('buffer', (), _M_DataFlow._t_ByteSeq, False, 0)
    ))
    NDArray._ice_type = _M_DataFlow._t_NDArray

    _M_DataFlow.NDArray = NDArray
    del NDArray

    _M_DataFlow.NDArrayPrx = NDArrayPrx
    del NDArrayPrx

if '_t_NDArrayList' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_NDArrayList = IcePy.defineSequence('::DataFlow::NDArrayList', (), _M_DataFlow._t_NDArray)

if '_t_TensorList' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_TensorList = IcePy.defineSequence('::DataFlow::TensorList', (), _M_DataFlow._t_NDArray)

if '_t_TensorMap' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_TensorMap = IcePy.defineDictionary('::DataFlow::TensorMap', (), IcePy._t_string, _M_DataFlow._t_NDArray)

if 'IOData' not in _M_DataFlow.__dict__:
    _M_DataFlow.IOData = Ice.createTempClass()
    class IOData(Ice.Object):
        def __init__(self, datas=None):
            self.datas = datas

        def ice_ids(self, current=None):
            return ('::DataFlow::IOData', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::IOData'

        def ice_staticId():
            return '::DataFlow::IOData'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_IOData)

        __repr__ = __str__

    _M_DataFlow.IODataPrx = Ice.createTempClass()
    class IODataPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.IODataPrx.ice_checkedCast(proxy, '::DataFlow::IOData', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.IODataPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::IOData'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_IODataPrx = IcePy.defineProxy('::DataFlow::IOData', IODataPrx)

    _M_DataFlow._t_IOData = IcePy.declareClass('::DataFlow::IOData')

    _M_DataFlow._t_IOData = IcePy.defineClass('::DataFlow::IOData', IOData, -1, (), False, False, None, (), (('datas', (), _M_DataFlow._t_NDArrayList, False, 0),))
    IOData._ice_type = _M_DataFlow._t_IOData

    _M_DataFlow.IOData = IOData
    del IOData

    _M_DataFlow.IODataPrx = IODataPrx
    del IODataPrx

if 'IODataPut' not in _M_DataFlow.__dict__:
    _M_DataFlow.IODataPut = Ice.createTempClass()
    class IODataPut(_M_DataFlow.IOData):
        def __init__(self, datas=None, name='', processorIdx=0):
            _M_DataFlow.IOData.__init__(self, datas)
            self.name = name
            self.processorIdx = processorIdx

        def ice_ids(self, current=None):
            return ('::DataFlow::IOData', '::DataFlow::IODataPut', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::IODataPut'

        def ice_staticId():
            return '::DataFlow::IODataPut'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_IODataPut)

        __repr__ = __str__

    _M_DataFlow.IODataPutPrx = Ice.createTempClass()
    class IODataPutPrx(_M_DataFlow.IODataPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.IODataPutPrx.ice_checkedCast(proxy, '::DataFlow::IODataPut', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.IODataPutPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::IODataPut'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_IODataPutPrx = IcePy.defineProxy('::DataFlow::IODataPut', IODataPutPrx)

    _M_DataFlow._t_IODataPut = IcePy.declareClass('::DataFlow::IODataPut')

    _M_DataFlow._t_IODataPut = IcePy.defineClass('::DataFlow::IODataPut', IODataPut, -1, (), False, False, _M_DataFlow._t_IOData, (), (
        ('name', (), IcePy._t_string, False, 0),
        ('processorIdx', (), IcePy._t_int, False, 0)
    ))
    IODataPut._ice_type = _M_DataFlow._t_IODataPut

    _M_DataFlow.IODataPut = IODataPut
    del IODataPut

    _M_DataFlow.IODataPutPrx = IODataPutPrx
    del IODataPutPrx

if 'IODataGet' not in _M_DataFlow.__dict__:
    _M_DataFlow.IODataGet = Ice.createTempClass()
    class IODataGet(_M_DataFlow.IOData):
        def __init__(self, datas=None, epoch=0):
            _M_DataFlow.IOData.__init__(self, datas)
            self.epoch = epoch

        def ice_ids(self, current=None):
            return ('::DataFlow::IOData', '::DataFlow::IODataGet', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::IODataGet'

        def ice_staticId():
            return '::DataFlow::IODataGet'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_IODataGet)

        __repr__ = __str__

    _M_DataFlow.IODataGetPrx = Ice.createTempClass()
    class IODataGetPrx(_M_DataFlow.IODataPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.IODataGetPrx.ice_checkedCast(proxy, '::DataFlow::IODataGet', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.IODataGetPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::IODataGet'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_IODataGetPrx = IcePy.defineProxy('::DataFlow::IODataGet', IODataGetPrx)

    _M_DataFlow._t_IODataGet = IcePy.declareClass('::DataFlow::IODataGet')

    _M_DataFlow._t_IODataGet = IcePy.defineClass('::DataFlow::IODataGet', IODataGet, -1, (), False, False, _M_DataFlow._t_IOData, (), (('epoch', (), IcePy._t_int, False, 0),))
    IODataGet._ice_type = _M_DataFlow._t_IODataGet

    _M_DataFlow.IODataGet = IODataGet
    del IODataGet

    _M_DataFlow.IODataGetPrx = IODataGetPrx
    del IODataGetPrx

if 'IOStreamParam' not in _M_DataFlow.__dict__:
    _M_DataFlow.IOStreamParam = Ice.createTempClass()
    class IOStreamParam(Ice.Object):
        def __init__(self, name=''):
            self.name = name

        def ice_ids(self, current=None):
            return ('::DataFlow::IOStreamParam', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::IOStreamParam'

        def ice_staticId():
            return '::DataFlow::IOStreamParam'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_IOStreamParam)

        __repr__ = __str__

    _M_DataFlow.IOStreamParamPrx = Ice.createTempClass()
    class IOStreamParamPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.IOStreamParamPrx.ice_checkedCast(proxy, '::DataFlow::IOStreamParam', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.IOStreamParamPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::IOStreamParam'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_IOStreamParamPrx = IcePy.defineProxy('::DataFlow::IOStreamParam', IOStreamParamPrx)

    _M_DataFlow._t_IOStreamParam = IcePy.defineClass('::DataFlow::IOStreamParam', IOStreamParam, -1, (), False, False, None, (), (('name', (), IcePy._t_string, False, 0),))
    IOStreamParam._ice_type = _M_DataFlow._t_IOStreamParam

    _M_DataFlow.IOStreamParam = IOStreamParam
    del IOStreamParam

    _M_DataFlow.IOStreamParamPrx = IOStreamParamPrx
    del IOStreamParamPrx

if 'IOStream' not in _M_DataFlow.__dict__:
    _M_DataFlow.IOStream = Ice.createTempClass()
    class IOStream(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::DataFlow::IOStream', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::IOStream'

        def ice_staticId():
            return '::DataFlow::IOStream'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_IOStream)

        __repr__ = __str__

    _M_DataFlow.IOStreamPrx = Ice.createTempClass()
    class IOStreamPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.IOStreamPrx.ice_checkedCast(proxy, '::DataFlow::IOStream', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.IOStreamPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::IOStream'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_IOStreamPrx = IcePy.defineProxy('::DataFlow::IOStream', IOStreamPrx)

    _M_DataFlow._t_IOStream = IcePy.defineClass('::DataFlow::IOStream', IOStream, -1, (), False, False, None, (), ())
    IOStream._ice_type = _M_DataFlow._t_IOStream

    _M_DataFlow.IOStream = IOStream
    del IOStream

    _M_DataFlow.IOStreamPrx = IOStreamPrx
    del IOStreamPrx

if 'ObjectBase' not in _M_DataFlow.__dict__:
    _M_DataFlow.ObjectBase = Ice.createTempClass()
    class ObjectBase(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::DataFlow::ObjectBase', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::ObjectBase'

        def ice_staticId():
            return '::DataFlow::ObjectBase'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_ObjectBase)

        __repr__ = __str__

    _M_DataFlow.ObjectBasePrx = Ice.createTempClass()
    class ObjectBasePrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.ObjectBasePrx.ice_checkedCast(proxy, '::DataFlow::ObjectBase', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.ObjectBasePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::ObjectBase'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_ObjectBasePrx = IcePy.defineProxy('::DataFlow::ObjectBase', ObjectBasePrx)

    _M_DataFlow._t_ObjectBase = IcePy.defineClass('::DataFlow::ObjectBase', ObjectBase, -1, (), False, False, None, (), ())
    ObjectBase._ice_type = _M_DataFlow._t_ObjectBase

    _M_DataFlow.ObjectBase = ObjectBase
    del ObjectBase

    _M_DataFlow.ObjectBasePrx = ObjectBasePrx
    del ObjectBasePrx

if '_t_EventParamMap' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_EventParamMap = IcePy.defineDictionary('::DataFlow::EventParamMap', (), IcePy._t_string, _M_DataFlow._t_ObjectBase)

if 'InitServerParams' not in _M_DataFlow.__dict__:
    _M_DataFlow.InitServerParams = Ice.createTempClass()
    class InitServerParams(Ice.Object):
        def __init__(self, epoch=0):
            self.epoch = epoch

        def ice_ids(self, current=None):
            return ('::DataFlow::InitServerParams', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::InitServerParams'

        def ice_staticId():
            return '::DataFlow::InitServerParams'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_InitServerParams)

        __repr__ = __str__

    _M_DataFlow.InitServerParamsPrx = Ice.createTempClass()
    class InitServerParamsPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.InitServerParamsPrx.ice_checkedCast(proxy, '::DataFlow::InitServerParams', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.InitServerParamsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::InitServerParams'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_InitServerParamsPrx = IcePy.defineProxy('::DataFlow::InitServerParams', InitServerParamsPrx)

    _M_DataFlow._t_InitServerParams = IcePy.defineClass('::DataFlow::InitServerParams', InitServerParams, -1, (), False, False, None, (), (('epoch', (), IcePy._t_int, False, 0),))
    InitServerParams._ice_type = _M_DataFlow._t_InitServerParams

    _M_DataFlow.InitServerParams = InitServerParams
    del InitServerParams

    _M_DataFlow.InitServerParamsPrx = InitServerParamsPrx
    del InitServerParamsPrx

if 'FlowDir' not in _M_DataFlow.__dict__:
    _M_DataFlow.FlowDir = Ice.createTempClass()
    class FlowDir(Ice.EnumBase):

        def __init__(self, _n, _v):
            Ice.EnumBase.__init__(self, _n, _v)

        def valueOf(self, _n):
            if _n in self._enumerators:
                return self._enumerators[_n]
            return None
        valueOf = classmethod(valueOf)

    FlowDir.fdRecv = FlowDir("fdRecv", 0)
    FlowDir.fdSend = FlowDir("fdSend", 1)
    FlowDir._enumerators = { 0:FlowDir.fdRecv, 1:FlowDir.fdSend }

    _M_DataFlow._t_FlowDir = IcePy.defineEnum('::DataFlow::FlowDir', FlowDir, (), FlowDir._enumerators)

    _M_DataFlow.FlowDir = FlowDir
    del FlowDir

if 'DSStatus' not in _M_DataFlow.__dict__:
    _M_DataFlow.DSStatus = Ice.createTempClass()
    class DSStatus(Ice.Object):
        def __init__(self, epoch=0):
            self.epoch = epoch

        def ice_ids(self, current=None):
            return ('::DataFlow::DSStatus', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::DSStatus'

        def ice_staticId():
            return '::DataFlow::DSStatus'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_DSStatus)

        __repr__ = __str__

    _M_DataFlow.DSStatusPrx = Ice.createTempClass()
    class DSStatusPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.DSStatusPrx.ice_checkedCast(proxy, '::DataFlow::DSStatus', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.DSStatusPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::DSStatus'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_DSStatusPrx = IcePy.defineProxy('::DataFlow::DSStatus', DSStatusPrx)

    _M_DataFlow._t_DSStatus = IcePy.defineClass('::DataFlow::DSStatus', DSStatus, -1, (), False, False, None, (), (('epoch', (), IcePy._t_int, False, 0),))
    DSStatus._ice_type = _M_DataFlow._t_DSStatus

    _M_DataFlow.DSStatus = DSStatus
    del DSStatus

    _M_DataFlow.DSStatusPrx = DSStatusPrx
    del DSStatusPrx

if '_t_DTypeList' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_DTypeList = IcePy.defineSequence('::DataFlow::DTypeList', (), _M_DataFlow._t_NDType)

if '_t_ShapeList' not in _M_DataFlow.__dict__:
    _M_DataFlow._t_ShapeList = IcePy.defineSequence('::DataFlow::ShapeList', (), _M_DataFlow._t_Shape)

if 'BatchDataProcessorStatus' not in _M_DataFlow.__dict__:
    _M_DataFlow.BatchDataProcessorStatus = Ice.createTempClass()
    class BatchDataProcessorStatus(Ice.Object):
        def __init__(self, batchIdxStart=0, batchSize=0, packetCount=0, dtypes=None, shapes=None):
            self.batchIdxStart = batchIdxStart
            self.batchSize = batchSize
            self.packetCount = packetCount
            self.dtypes = dtypes
            self.shapes = shapes

        def ice_ids(self, current=None):
            return ('::DataFlow::BatchDataProcessorStatus', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::BatchDataProcessorStatus'

        def ice_staticId():
            return '::DataFlow::BatchDataProcessorStatus'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_BatchDataProcessorStatus)

        __repr__ = __str__

    _M_DataFlow.BatchDataProcessorStatusPrx = Ice.createTempClass()
    class BatchDataProcessorStatusPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.BatchDataProcessorStatusPrx.ice_checkedCast(proxy, '::DataFlow::BatchDataProcessorStatus', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.BatchDataProcessorStatusPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::BatchDataProcessorStatus'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_BatchDataProcessorStatusPrx = IcePy.defineProxy('::DataFlow::BatchDataProcessorStatus', BatchDataProcessorStatusPrx)

    _M_DataFlow._t_BatchDataProcessorStatus = IcePy.defineClass('::DataFlow::BatchDataProcessorStatus', BatchDataProcessorStatus, -1, (), False, False, None, (), (
        ('batchIdxStart', (), IcePy._t_int, False, 0),
        ('batchSize', (), IcePy._t_int, False, 0),
        ('packetCount', (), IcePy._t_long, False, 0),
        ('dtypes', (), _M_DataFlow._t_DTypeList, False, 0),
        ('shapes', (), _M_DataFlow._t_ShapeList, False, 0)
    ))
    BatchDataProcessorStatus._ice_type = _M_DataFlow._t_BatchDataProcessorStatus

    _M_DataFlow.BatchDataProcessorStatus = BatchDataProcessorStatus
    del BatchDataProcessorStatus

    _M_DataFlow.BatchDataProcessorStatusPrx = BatchDataProcessorStatusPrx
    del BatchDataProcessorStatusPrx

if 'ExceptionClosed' not in _M_DataFlow.__dict__:
    _M_DataFlow.ExceptionClosed = Ice.createTempClass()
    class ExceptionClosed(Ice.UserException):
        def __init__(self):
            pass

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_name = 'DataFlow::ExceptionClosed'

    _M_DataFlow._t_ExceptionClosed = IcePy.defineException('::DataFlow::ExceptionClosed', ExceptionClosed, (), False, None, ())
    ExceptionClosed._ice_type = _M_DataFlow._t_ExceptionClosed

    _M_DataFlow.ExceptionClosed = ExceptionClosed
    del ExceptionClosed

if 'DataServer' not in _M_DataFlow.__dict__:
    _M_DataFlow.DataServer = Ice.createTempClass()
    class DataServer(Ice.Object):
        def __init__(self):
            if Ice.getType(self) == _M_DataFlow.DataServer:
                raise RuntimeError('DataFlow.DataServer is an abstract class')

        def ice_ids(self, current=None):
            return ('::DataFlow::DataServer', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::DataServer'

        def ice_staticId():
            return '::DataFlow::DataServer'
        ice_staticId = staticmethod(ice_staticId)

        def init(self, params, current=None):
            pass

        def getStatus(self, current=None):
            pass

        def getBatchDataProcessorStatus(self, name, processorIdx, current=None):
            pass

        def putData(self, data, current=None):
            pass

        def getData(self, name, processorIdx, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_DataServer)

        __repr__ = __str__

    _M_DataFlow.DataServerPrx = Ice.createTempClass()
    class DataServerPrx(Ice.ObjectPrx):

        def init(self, params, _ctx=None):
            return _M_DataFlow.DataServer._op_init.invoke(self, ((params, ), _ctx))

        def begin_init(self, params, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_DataFlow.DataServer._op_init.begin(self, ((params, ), _response, _ex, _sent, _ctx))

        def end_init(self, _r):
            return _M_DataFlow.DataServer._op_init.end(self, _r)

        def getStatus(self, _ctx=None):
            return _M_DataFlow.DataServer._op_getStatus.invoke(self, ((), _ctx))

        def begin_getStatus(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_DataFlow.DataServer._op_getStatus.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getStatus(self, _r):
            return _M_DataFlow.DataServer._op_getStatus.end(self, _r)

        def getBatchDataProcessorStatus(self, name, processorIdx, _ctx=None):
            return _M_DataFlow.DataServer._op_getBatchDataProcessorStatus.invoke(self, ((name, processorIdx), _ctx))

        def begin_getBatchDataProcessorStatus(self, name, processorIdx, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_DataFlow.DataServer._op_getBatchDataProcessorStatus.begin(self, ((name, processorIdx), _response, _ex, _sent, _ctx))

        def end_getBatchDataProcessorStatus(self, _r):
            return _M_DataFlow.DataServer._op_getBatchDataProcessorStatus.end(self, _r)

        def putData(self, data, _ctx=None):
            return _M_DataFlow.DataServer._op_putData.invoke(self, ((data, ), _ctx))

        def begin_putData(self, data, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_DataFlow.DataServer._op_putData.begin(self, ((data, ), _response, _ex, _sent, _ctx))

        def end_putData(self, _r):
            return _M_DataFlow.DataServer._op_putData.end(self, _r)

        def getData(self, name, processorIdx, _ctx=None):
            return _M_DataFlow.DataServer._op_getData.invoke(self, ((name, processorIdx), _ctx))

        def begin_getData(self, name, processorIdx, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_DataFlow.DataServer._op_getData.begin(self, ((name, processorIdx), _response, _ex, _sent, _ctx))

        def end_getData(self, _r):
            return _M_DataFlow.DataServer._op_getData.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.DataServerPrx.ice_checkedCast(proxy, '::DataFlow::DataServer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.DataServerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::DataServer'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_DataServerPrx = IcePy.defineProxy('::DataFlow::DataServer', DataServerPrx)

    _M_DataFlow._t_DataServer = IcePy.defineClass('::DataFlow::DataServer', DataServer, -1, (), True, False, None, (), ())
    DataServer._ice_type = _M_DataFlow._t_DataServer

    DataServer._op_init = IcePy.Operation('init', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_DataFlow._t_InitServerParams, False, 0),), (), None, ())
    DataServer._op_getStatus = IcePy.Operation('getStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_DataFlow._t_DSStatus, False, 0), ())
    DataServer._op_getBatchDataProcessorStatus = IcePy.Operation('getBatchDataProcessorStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), _M_DataFlow._t_BatchDataProcessorStatus, False, 0), ())
    DataServer._op_putData = IcePy.Operation('putData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_DataFlow._t_IODataPut, False, 0),), (), None, (_M_DataFlow._t_ExceptionClosed,))
    DataServer._op_getData = IcePy.Operation('getData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), _M_DataFlow._t_IODataGet, False, 0), (_M_DataFlow._t_ExceptionClosed,))

    _M_DataFlow.DataServer = DataServer
    del DataServer

    _M_DataFlow.DataServerPrx = DataServerPrx
    del DataServerPrx

if 'EvtEpoch' not in _M_DataFlow.__dict__:
    _M_DataFlow.EvtEpoch = Ice.createTempClass()
    class EvtEpoch(_M_DataFlow.ObjectBase):
        def __init__(self, epoch=0):
            _M_DataFlow.ObjectBase.__init__(self)
            self.epoch = epoch

        def ice_ids(self, current=None):
            return ('::DataFlow::EvtEpoch', '::DataFlow::ObjectBase', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::EvtEpoch'

        def ice_staticId():
            return '::DataFlow::EvtEpoch'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_EvtEpoch)

        __repr__ = __str__

    _M_DataFlow.EvtEpochPrx = Ice.createTempClass()
    class EvtEpochPrx(_M_DataFlow.ObjectBasePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.EvtEpochPrx.ice_checkedCast(proxy, '::DataFlow::EvtEpoch', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.EvtEpochPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::EvtEpoch'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_EvtEpochPrx = IcePy.defineProxy('::DataFlow::EvtEpoch', EvtEpochPrx)

    _M_DataFlow._t_EvtEpoch = IcePy.defineClass('::DataFlow::EvtEpoch', EvtEpoch, -1, (), False, False, _M_DataFlow._t_ObjectBase, (), (('epoch', (), IcePy._t_int, False, 0),))
    EvtEpoch._ice_type = _M_DataFlow._t_EvtEpoch

    _M_DataFlow.EvtEpoch = EvtEpoch
    del EvtEpoch

    _M_DataFlow.EvtEpochPrx = EvtEpochPrx
    del EvtEpochPrx

if 'BatchDataProcessor' not in _M_DataFlow.__dict__:
    _M_DataFlow.BatchDataProcessor = Ice.createTempClass()
    class BatchDataProcessor(Ice.Object):
        def __init__(self):
            if Ice.getType(self) == _M_DataFlow.BatchDataProcessor:
                raise RuntimeError('DataFlow.BatchDataProcessor is an abstract class')

        def ice_ids(self, current=None):
            return ('::DataFlow::BatchDataProcessor', '::Ice::Object')

        def ice_id(self, current=None):
            return '::DataFlow::BatchDataProcessor'

        def ice_staticId():
            return '::DataFlow::BatchDataProcessor'
        ice_staticId = staticmethod(ice_staticId)

        def onEvent(self, params, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_DataFlow._t_BatchDataProcessor)

        __repr__ = __str__

    _M_DataFlow.BatchDataProcessorPrx = Ice.createTempClass()
    class BatchDataProcessorPrx(Ice.ObjectPrx):

        def onEvent(self, params, _ctx=None):
            return _M_DataFlow.BatchDataProcessor._op_onEvent.invoke(self, ((params, ), _ctx))

        def begin_onEvent(self, params, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_DataFlow.BatchDataProcessor._op_onEvent.begin(self, ((params, ), _response, _ex, _sent, _ctx))

        def end_onEvent(self, _r):
            return _M_DataFlow.BatchDataProcessor._op_onEvent.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_DataFlow.BatchDataProcessorPrx.ice_checkedCast(proxy, '::DataFlow::BatchDataProcessor', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_DataFlow.BatchDataProcessorPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::DataFlow::BatchDataProcessor'
        ice_staticId = staticmethod(ice_staticId)

    _M_DataFlow._t_BatchDataProcessorPrx = IcePy.defineProxy('::DataFlow::BatchDataProcessor', BatchDataProcessorPrx)

    _M_DataFlow._t_BatchDataProcessor = IcePy.defineClass('::DataFlow::BatchDataProcessor', BatchDataProcessor, -1, (), True, False, None, (), ())
    BatchDataProcessor._ice_type = _M_DataFlow._t_BatchDataProcessor

    BatchDataProcessor._op_onEvent = IcePy.Operation('onEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_DataFlow._t_EventParamMap, False, 0),), (), None, ())

    _M_DataFlow.BatchDataProcessor = BatchDataProcessor
    del BatchDataProcessor

    _M_DataFlow.BatchDataProcessorPrx = BatchDataProcessorPrx
    del BatchDataProcessorPrx

# End of module DataFlow
