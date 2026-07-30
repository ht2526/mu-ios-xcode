#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1, T2, T3, T4*, T5, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4, T5 p5, T6* p6)
	{
		void* params[6] = { &p1, &p2, &p3, p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2, T3, T4, T5*, T6, T7*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6 p6, T7* p7)
	{
		void* params[7] = { p1, &p2, &p3, &p4, p5, &p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// XLua.LuaDLL.ObjectRelationshipReport
struct ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611;
// System.String
struct String_t;
// XLua.LuaDLL.TableSizeReport
struct TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// XLua.LuaDLL.lua_CSFunction
struct lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53;

IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// XLua.LuaDLL.ObjectRelationshipReport
struct ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611  : public MulticastDelegate_t
{
};

// XLua.LuaDLL.TableSizeReport
struct TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC  : public MulticastDelegate_t
{
};

// XLua.LuaDLL.lua_CSFunction
struct lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53  : public MulticastDelegate_t
{
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.AsyncCallback

// System.AsyncCallback

// XLua.LuaDLL.ObjectRelationshipReport

// XLua.LuaDLL.ObjectRelationshipReport

// XLua.LuaDLL.TableSizeReport

// XLua.LuaDLL.TableSizeReport

// XLua.LuaDLL.lua_CSFunction

// XLua.LuaDLL.lua_CSFunction
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_Multicast(lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* currentDelegate = reinterpret_cast<lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_L, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_OpenInst(lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_L, method);
}
int32_t lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_OpenStatic(lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_L, method);
}
int32_t lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_OpenStaticInvoker(lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_L);
}
int32_t lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_ClosedStaticInvoker(lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_L);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53 (lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_L);

	return returnValue;
}
// System.Void XLua.LuaDLL.lua_CSFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lua_CSFunction__ctor_mFE440F7700F9A65ACA314A77503A5154DD45DCCB (lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727_Multicast;
}
// System.Int32 XLua.LuaDLL.lua_CSFunction::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t lua_CSFunction_Invoke_m3EB2EE042E7B1D3FE4FBA7CAB28ADC32A704E727 (lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_L, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult XLua.LuaDLL.lua_CSFunction::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lua_CSFunction_BeginInvoke_m91DB18ED87D8E86B6DAB70992547ED0AAAD63A17 (lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, intptr_t ___0_L, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_L);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 XLua.LuaDLL.lua_CSFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t lua_CSFunction_EndInvoke_m6FB53159F54CCF1487424B8FF09ADB42D6CFF51B (lua_CSFunction_tF0CB225FA0EBF84F9BD165B2B56441E09C0BEE53* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_Multicast(TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* currentDelegate = reinterpret_cast<TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_p, ___1_size, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_OpenInst(TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_p, ___1_size, method);
}
void TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_OpenStatic(TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_p, ___1_size, method);
}
void TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_OpenStaticInvoker(TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_p, ___1_size);
}
void TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_ClosedStaticInvoker(TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_p, ___1_size);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC (TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_p, ___1_size);

}
// System.Void XLua.LuaDLL.TableSizeReport::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableSizeReport__ctor_mE8FBF1CA328C072E546745190DF12EC74F092CAD (TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263_Multicast;
}
// System.Void XLua.LuaDLL.TableSizeReport::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableSizeReport_Invoke_mBB47FF5D6C7976B0B987FF22B1878ABEFB286263 (TableSizeReport_t425396E20059F79B17F88868891C669FA6F28AAC* __this, intptr_t ___0_p, int32_t ___1_size, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_p, ___1_size, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_Multicast(ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* currentDelegate = reinterpret_cast<ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, double, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_parent, ___1_child, ___2_type, ___3_key, ___4_d, ___5_key2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_OpenInst(ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, double, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_parent, ___1_child, ___2_type, ___3_key, ___4_d, ___5_key2, method);
}
void ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_OpenStatic(ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, double, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_parent, ___1_child, ___2_type, ___3_key, ___4_d, ___5_key2, method);
}
void ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_OpenStaticInvoker(ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method)
{
	InvokerActionInvoker6< intptr_t, intptr_t, int32_t, String_t*, double, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_parent, ___1_child, ___2_type, ___3_key, ___4_d, ___5_key2);
}
void ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_ClosedStaticInvoker(ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, double, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_parent, ___1_child, ___2_type, ___3_key, ___4_d, ___5_key2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611 (ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, int32_t, char*, double, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_key' to native representation
	char* ____3_key_marshaled = NULL;
	____3_key_marshaled = il2cpp_codegen_marshal_string(___3_key);

	// Marshaling of parameter '___5_key2' to native representation
	char* ____5_key2_marshaled = NULL;
	____5_key2_marshaled = il2cpp_codegen_marshal_string(___5_key2);

	// Native function invocation
	il2cppPInvokeFunc(___0_parent, ___1_child, ___2_type, ____3_key_marshaled, ___4_d, ____5_key2_marshaled);

	// Marshaling cleanup of parameter '___3_key' native representation
	il2cpp_codegen_marshal_free(____3_key_marshaled);
	____3_key_marshaled = NULL;

	// Marshaling cleanup of parameter '___5_key2' native representation
	il2cpp_codegen_marshal_free(____5_key2_marshaled);
	____5_key2_marshaled = NULL;

}
// System.Void XLua.LuaDLL.ObjectRelationshipReport::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRelationshipReport__ctor_mBB5D1BBE1F3F0456C6CFCFC3AE2F3EE0001A4767 (ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9_Multicast;
}
// System.Void XLua.LuaDLL.ObjectRelationshipReport::Invoke(System.IntPtr,System.IntPtr,XLua.LuaDLL.RelationshipType,System.String,System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRelationshipReport_Invoke_m80FFBF3B2542906DA514F4E45FE8D441D873A0E9 (ObjectRelationshipReport_t24F2CA14348ACF2B66D4770B4980F8A398180611* __this, intptr_t ___0_parent, intptr_t ___1_child, int32_t ___2_type, String_t* ___3_key, double ___4_d, String_t* ___5_key2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, double, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_parent, ___1_child, ___2_type, ___3_key, ___4_d, ___5_key2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
