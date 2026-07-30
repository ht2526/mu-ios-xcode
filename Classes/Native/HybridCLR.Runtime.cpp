#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// HybridCLR.ReversePInvokeWrapperGenerationAttribute
struct ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB;


struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD0DFB154750CEF95F40DFD18F49DF0881C0A7176 
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// HybridCLR.RuntimeApi
struct RuntimeApi_tA19E50636DDDC4D8EA30DEC54EE4DFD73CAE62D2  : public RuntimeObject
{
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// HybridCLR.ReversePInvokeWrapperGenerationAttribute
struct ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 HybridCLR.ReversePInvokeWrapperGenerationAttribute::<ReserveWrapperCount>k__BackingField
	int32_t ___U3CReserveWrapperCountU3Ek__BackingField_0;
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

// <Module>

// <Module>

// System.Attribute

// System.Attribute

// HybridCLR.RuntimeApi

// HybridCLR.RuntimeApi

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// HybridCLR.ReversePInvokeWrapperGenerationAttribute

// HybridCLR.ReversePInvokeWrapperGenerationAttribute

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
// System.Void HybridCLR.ReversePInvokeWrapperGenerationAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D (ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB* __this, int32_t ___0_reserveWrapperCount, const RuntimeMethod* method) 
{
	{
		// public ReversePInvokeWrapperGenerationAttribute(int reserveWrapperCount)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// ReserveWrapperCount = reserveWrapperCount;
		int32_t L_0 = ___0_reserveWrapperCount;
		__this->___U3CReserveWrapperCountU3Ek__BackingField_0 = L_0;
		// }
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
// HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dllBytes, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef int32_t (*RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_ftn) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t);
	static RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_ftn)il2cpp_codegen_resolve_icall ("HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_dllBytes, ___1_mode);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
