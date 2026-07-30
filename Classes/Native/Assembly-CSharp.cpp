#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// T4GTerrainTileBase[]
struct T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// LuaFunction
struct LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MonoPInvokeWrapperPreserves
struct MonoPInvokeWrapperPreserves_t3D0945FC9FD4F8DFB9C6287DD6DAC3FD8B3800A6;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// T4GNoMeshParentMapOBJMark
struct T4GNoMeshParentMapOBJMark_t896E599A0D45DD59047EFB838098369C72C28C7F;
// T4GTerrainTileBase
struct T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317;
// T4GTerrainTileMain
struct T4GTerrainTileMain_t3206C8DD335F609D6F6FAD1A1D21932AD5B1A9CE;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// sceneBuildAnimController
struct sceneBuildAnimController_t315032D3A91109ECFADE9C678EE192F9D0CCCF41;

IL2CPP_EXTERN_C RuntimeClass* AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____98F790EE3951F22E0FD44B7C95E258EC05EF746C8852BA98A1516F25F1890980_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6;
IL2CPP_EXTERN_C String_t* _stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960;
IL2CPP_EXTERN_C String_t* _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53;
IL2CPP_EXTERN_C String_t* _stringLiteral9874677BBB33BF729B7CFE9169C83329A0F49ACD;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854;
IL2CPP_EXTERN_C String_t* _stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6;
IL2CPP_EXTERN_C String_t* _stringLiteralE75D2BEC76121F70F5B673587DE49DE9EAD114BA;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B;
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// MonoPInvokeWrapperPreserves
struct MonoPInvokeWrapperPreserves_t3D0945FC9FD4F8DFB9C6287DD6DAC3FD8B3800A6  : public RuntimeObject
{
};

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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88__padding[64];
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// LuaFunction
struct LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// T4GNoMeshParentMapOBJMark
struct T4GNoMeshParentMapOBJMark_t896E599A0D45DD59047EFB838098369C72C28C7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String T4GNoMeshParentMapOBJMark::OnlyName
	String_t* ___OnlyName_4;
};

// T4GTerrainTileBase
struct T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String T4GTerrainTileBase::MapName
	String_t* ___MapName_4;
	// System.Int32 T4GTerrainTileBase::PosX
	int32_t ___PosX_5;
	// System.Int32 T4GTerrainTileBase::PosY
	int32_t ___PosY_6;
	// UnityEngine.Texture2D[] T4GTerrainTileBase::Brushs
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___Brushs_7;
	// UnityEngine.Texture2D[] T4GTerrainTileBase::Controls
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___Controls_8;
	// System.Collections.Generic.List`1<System.Int32> T4GTerrainTileBase::brushIndes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___brushIndes_9;
	// UnityEngine.MeshRenderer T4GTerrainTileBase::MeshR
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___MeshR_10;
};

// T4GTerrainTileMain
struct T4GTerrainTileMain_t3206C8DD335F609D6F6FAD1A1D21932AD5B1A9CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// T4GTerrainTileBase[] T4GTerrainTileMain::tileBs
	T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B* ___tileBs_4;
	// UnityEngine.Texture2D[] T4GTerrainTileMain::_brushs
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ____brushs_5;
	// UnityEngine.Texture2D[] T4GTerrainTileMain::_controls
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ____controls_6;
	// System.Int32[] T4GTerrainTileMain::BrushScales
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___BrushScales_7;
	// UnityEngine.Texture2D T4GTerrainTileMain::GrassCfg
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___GrassCfg_8;
	// UnityEngine.Texture2D T4GTerrainTileMain::SafeRoof
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___SafeRoof_9;
	// UnityEngine.Texture2D T4GTerrainTileMain::Light1
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Light1_10;
	// UnityEngine.Texture2D T4GTerrainTileMain::Light2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Light2_11;
	// System.Int32 T4GTerrainTileMain::waterIdx
	int32_t ___waterIdx_12;
	// System.Single T4GTerrainTileMain::_Amplitude
	float ____Amplitude_13;
	// System.Single T4GTerrainTileMain::_AngularVelocity
	float ____AngularVelocity_14;
	// System.Single T4GTerrainTileMain::_Speed
	float ____Speed_15;
	// System.Single T4GTerrainTileMain::_Speed2
	float ____Speed2_16;
	// System.Single T4GTerrainTileMain::Light_power
	float ___Light_power_17;
	// System.Single T4GTerrainTileMain::Light_speed1
	float ___Light_speed1_18;
	// System.Single T4GTerrainTileMain::Light_speed2
	float ___Light_speed2_19;
};

// sceneBuildAnimController
struct sceneBuildAnimController_t315032D3A91109ECFADE9C678EE192F9D0CCCF41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animation sceneBuildAnimController::anim
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___anim_4;
	// System.Boolean sceneBuildAnimController::isLoop
	bool ___isLoop_5;
	// System.Single sceneBuildAnimController::speed
	float ___speed_6;
	// System.Boolean sceneBuildAnimController::isRandomSpeed
	bool ___isRandomSpeed_7;
	// UnityEngine.Vector2 sceneBuildAnimController::RandomRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___RandomRange_8;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::98F790EE3951F22E0FD44B7C95E258EC05EF746C8852BA98A1516F25F1890980
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___98F790EE3951F22E0FD44B7C95E258EC05EF746C8852BA98A1516F25F1890980_0;
};

// <PrivateImplementationDetails>

// MonoPInvokeWrapperPreserves

// MonoPInvokeWrapperPreserves

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// UnityEngine.AnimationState

// UnityEngine.AnimationState

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.AsyncCallback

// System.AsyncCallback

// LuaFunction

// LuaFunction

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Animation

// UnityEngine.Animation

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields
{
	// System.Collections.Generic.IReadOnlyList`1<System.String> AOTGenericReferences::PatchedAOTAssemblyList
	RuntimeObject* ___PatchedAOTAssemblyList_4;
};

// AOTGenericReferences

// T4GNoMeshParentMapOBJMark

// T4GNoMeshParentMapOBJMark

// T4GTerrainTileBase

// T4GTerrainTileBase

// T4GTerrainTileMain

// T4GTerrainTileMain

// sceneBuildAnimController

// sceneBuildAnimController
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// T4GTerrainTileBase[]
struct T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B  : public RuntimeArray
{
	ALIGN_FIELD (8) T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* m_Items[1];

	inline T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* m_Items[1];

	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_wrapMode_mBA7403836E770538E76C12676E18AC80D707F452 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Int32 MonoPInvokeWrapperPreserves::LuaCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoPInvokeWrapperPreserves_LuaCallback_m247A17368FDE8F27BFB0D41CDC6F29830A05DF02 (intptr_t ___0_luaState, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AOTGenericReferences::RefMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences_RefMethods_m17CF257D96D8BC2F232C4C1502905B792D17170C (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AOTGenericReferences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__ctor_m41CBD692FC9B521512E552575AFE7A385DEC71A6 (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AOTGenericReferences::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__cctor_mA46BDC06A6577D725A2E5284A2A34C974CE65F68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75D2BEC76121F70F5B673587DE49DE9EAD114BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
		// {
		//     "System.Core.dll",
		//     "UnityEngine.AndroidJNIModule.dll",
		//     "UnityEngine.AssetBundleModule.dll",
		//     "UnityEngine.CoreModule.dll",
		//     "mscorlib.dll",
		//     "pure.dll",
		//     "xlua.dll",
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteralE75D2BEC76121F70F5B673587DE49DE9EAD114BA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		((AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields*)il2cpp_codegen_static_fields_for(AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var))->___PatchedAOTAssemblyList_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields*)il2cpp_codegen_static_fields_for(AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var))->___PatchedAOTAssemblyList_4), (void*)L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void sceneBuildAnimController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneBuildAnimController_Start_mE83476B5DE4D33787C075A51FFE3E891292A00CC (sceneBuildAnimController_t315032D3A91109ECFADE9C678EE192F9D0CCCF41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* V_1 = NULL;
	float V_2 = 0.0f;
	RuntimeObject* V_3 = NULL;
	{
		// if(anim==null){
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___anim_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// anim=this.gameObject.GetComponent<Animation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_3;
		L_3 = GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54(L_2, GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54_RuntimeMethod_var);
		__this->___anim_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_3);
	}

IL_001f:
	{
		// if(anim!=null){
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_4 = __this->___anim_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00c6;
		}
	}
	{
		// foreach (AnimationState state in anim)
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_6 = __this->___anim_4;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6(L_6, NULL);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_3;
					if (!L_9)
					{
						goto IL_00c5;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00c5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ab_1;
			}

IL_003e_1:
			{
				// foreach (AnimationState state in anim)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				V_1 = ((AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)CastclassSealed((RuntimeObject*)L_12, AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var));
				// if(isLoop){
				bool L_13 = __this->___isLoop_5;
				if (!L_13)
				{
					goto IL_0059_1;
				}
			}
			{
				// state.wrapMode=WrapMode.Loop;
				AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_14 = V_1;
				NullCheck(L_14);
				AnimationState_set_wrapMode_mBA7403836E770538E76C12676E18AC80D707F452(L_14, 2, NULL);
			}

IL_0059_1:
			{
				// if(isRandomSpeed && !RandomRange.Equals(Vector2.zero)){
				bool L_15 = __this->___isRandomSpeed_7;
				if (!L_15)
				{
					goto IL_009f_1;
				}
			}
			{
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___RandomRange_8);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
				L_17 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				bool L_18;
				L_18 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(L_16, L_17, NULL);
				if (L_18)
				{
					goto IL_009f_1;
				}
			}
			{
				// state.speed=speed=Random.Range(RandomRange.x,RandomRange.y);
				AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_19 = V_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___RandomRange_8);
				float L_21 = L_20->___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___RandomRange_8);
				float L_23 = L_22->___y_1;
				float L_24;
				L_24 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_21, L_23, NULL);
				float L_25 = L_24;
				V_2 = L_25;
				__this->___speed_6 = L_25;
				float L_26 = V_2;
				NullCheck(L_19);
				AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D(L_19, L_26, NULL);
				goto IL_00ab_1;
			}

IL_009f_1:
			{
				// state.speed = speed;
				AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_27 = V_1;
				float L_28 = __this->___speed_6;
				NullCheck(L_27);
				AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D(L_27, L_28, NULL);
			}

IL_00ab_1:
			{
				// foreach (AnimationState state in anim)
				RuntimeObject* L_29 = V_0;
				NullCheck(L_29);
				bool L_30;
				L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				if (L_30)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_00c6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void sceneBuildAnimController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneBuildAnimController__ctor_m4C7397A6E2505D0F1077898F1D599ED303EB8F84 (sceneBuildAnimController_t315032D3A91109ECFADE9C678EE192F9D0CCCF41* __this, const RuntimeMethod* method) 
{
	{
		// public bool isLoop=true;
		__this->___isLoop_5 = (bool)1;
		// public float speed=1;
		__this->___speed_6 = (1.0f);
		// public Vector2 RandomRange=Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___RandomRange_8 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void T4GNoMeshParentMapOBJMark::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T4GNoMeshParentMapOBJMark__ctor_mD213BD13FDA23D77FC648C9128ADF4B06EF45DCA (T4GNoMeshParentMapOBJMark_t896E599A0D45DD59047EFB838098369C72C28C7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string OnlyName="";
		__this->___OnlyName_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnlyName_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void T4GTerrainTileBase::RTLPowerChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T4GTerrainTileBase_RTLPowerChange_m701437CE67A4394BD50FFC4659E30A273376AE98 (T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* __this, float ___0_power, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9874677BBB33BF729B7CFE9169C83329A0F49ACD);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	int32_t V_2 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	{
		// if(MeshR!=null){
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___MeshR_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// Material[] mts=MeshR.sharedMaterials;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___MeshR_10;
		NullCheck(L_2);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3;
		L_3 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_2, NULL);
		V_0 = L_3;
		// if(mts!=null && mts.Length>0){
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_5 = V_0;
		NullCheck(L_5);
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_004a;
		}
	}
	{
		// foreach(Material mmt in mts){
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6 = V_0;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0044;
	}

IL_0027:
	{
		// foreach(Material mmt in mts){
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// if(mmt!=null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		// mmt.SetFloat("_lightPower",power);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_3;
		float L_14 = ___0_power;
		NullCheck(L_13);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_13, _stringLiteral9874677BBB33BF729B7CFE9169C83329A0F49ACD, L_14, NULL);
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0044:
	{
		// foreach(Material mmt in mts){
		int32_t L_16 = V_2;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0027;
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void T4GTerrainTileBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T4GTerrainTileBase__ctor_m897EFB4E3B9D741E37EA6C449DB0875764928266 (T4GTerrainTileBase_t80EDCF9F8ECAB3E11092E196AC1EC0262C828317* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string MapName="";
		__this->___MapName_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MapName_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public int PosX=-1;
		__this->___PosX_5 = (-1);
		// public int PosY=-1;
		__this->___PosY_6 = (-1);
		// public List<int> brushIndes=new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___brushIndes_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___brushIndes_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void T4GTerrainTileMain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T4GTerrainTileMain_Update_m206DBC64CB34BBDA6B42F307CC4852AD40B6A6D1 (T4GTerrainTileMain_t3206C8DD335F609D6F6FAD1A1D21932AD5B1A9CE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void T4GTerrainTileMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T4GTerrainTileMain__ctor_m8462CADFE2E509F6D7F60070E7F4C34703BB805B (T4GTerrainTileMain_t3206C8DD335F609D6F6FAD1A1D21932AD5B1A9CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____98F790EE3951F22E0FD44B7C95E258EC05EF746C8852BA98A1516F25F1890980_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public T4GTerrainTileBase[] tileBs=new T4GTerrainTileBase[256];
		T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B* L_0 = (T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B*)(T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B*)SZArrayNew(T4GTerrainTileBaseU5BU5D_tE62F9E4D049346ABDC7095AE28BB8AFEA4C8E10B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___tileBs_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tileBs_4), (void*)L_0);
		// public Texture2D[] _brushs=new Texture2D[16]{null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null};
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_1 = (Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)SZArrayNew(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____brushs_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____brushs_5), (void*)L_1);
		// public Texture2D[] _controls=new Texture2D[16]{null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null};
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_2 = (Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)SZArrayNew(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____controls_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controls_6), (void*)L_2);
		// public int[] BrushScales=new int[16]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____98F790EE3951F22E0FD44B7C95E258EC05EF746C8852BA98A1516F25F1890980_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		__this->___BrushScales_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BrushScales_7), (void*)L_4);
		// public int waterIdx=99;
		__this->___waterIdx_12 = ((int32_t)99);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_Multicast(LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* currentDelegate = reinterpret_cast<LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_luaState, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_OpenInst(LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_luaState, method);
}
int32_t LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_OpenStatic(LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_luaState, method);
}
int32_t LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_OpenStaticInvoker(LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_luaState);
}
int32_t LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_ClosedStaticInvoker(LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_luaState);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27 (LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_luaState);

	return returnValue;
}
// System.Void LuaFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaFunction__ctor_m11418D2E50C361C4C1F6E93B971802FF26C7654E (LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA_Multicast;
}
// System.Int32 LuaFunction::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LuaFunction_Invoke_mA0B819A987EEDBF717CC10BD2FBE060C718359CA (LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_luaState, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LuaFunction::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LuaFunction_BeginInvoke_m56FEE4DD75467288B1C7D7EACE9FF2F9C934F6EA (LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, intptr_t ___0_luaState, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_luaState);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 LuaFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LuaFunction_EndInvoke_m89C6D25DB63B4CC94ED0EA4F3B7C69C5DBFF68F3 (LuaFunction_t32C45E6B6ED7CB508239B5239D0DC968E914EA27* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MonoPInvokeWrapperPreserves_LuaCallback_m247A17368FDE8F27BFB0D41CDC6F29830A05DF02(intptr_t ___0_luaState)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = MonoPInvokeWrapperPreserves_LuaCallback_m247A17368FDE8F27BFB0D41CDC6F29830A05DF02(___0_luaState, NULL);

	return returnValue;
}
// System.Int32 MonoPInvokeWrapperPreserves::LuaCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoPInvokeWrapperPreserves_LuaCallback_m247A17368FDE8F27BFB0D41CDC6F29830A05DF02 (intptr_t ___0_luaState, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Void MonoPInvokeWrapperPreserves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeWrapperPreserves__ctor_m1B3F0CAE561D6115775ECF95D4701C8BE0669F96 (MonoPInvokeWrapperPreserves_t3D0945FC9FD4F8DFB9C6287DD6DAC3FD8B3800A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y_1;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
