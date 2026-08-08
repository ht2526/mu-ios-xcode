#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<pure.assetdb.AssetType,pure.assetdb.AssetSheet>
struct Dictionary_2_tE1841532583B554DE50E5D9339D6302319686187;
// System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset>
struct Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B;
// System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,System.Object>
struct Dictionary_2_tEB17CEC429191B63A2A3ABAC251C77668F44CDF3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset>
struct Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,pure.native.NativeHandler>
struct Dictionary_2_t9ADD3BFB4A8D131846EC643ECCFF56929E18C7A1;
// System.Collections.Generic.HashSet`1<pure.ui.IUIDropable>
struct HashSet_1_t3621F71569DF36004D973BB1F2AC2874FC43C7A2;
// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614;
// System.Collections.Generic.IEqualityComparer`1<pure.utils.mathTools.HashCode>
struct IEqualityComparer_1_t63822C18CC88DEBFD7B4B22BDFF51FE038181B93;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// pure.ui.IValueField`1<System.String>
struct IValueField_1_tD177D5CA626BE5AB3BC6B20881F366F7D113497A;
// System.Collections.Generic.Dictionary`2/KeyCollection<pure.utils.mathTools.HashCode,pure.assetdb.Asset>
struct KeyCollection_tABE65A9C2B2EEC153F1EA0CA555604301A712D90;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,pure.assetdb.Asset>
struct KeyCollection_t63421237D1FB076D9AFD8F3E5F9D6BD41A87A4EF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.Queue`1<pure.scene.ExceptionHandler_Dll/Slot>
struct Queue_1_t61E70D7AB9CFD23C298318C88823D09133190917;
// pure.utils.events.SimpleEvent`1<pure.ui.DragStatus>
struct SimpleEvent_1_t7AD229B9AA200764B94D6EFCC1420690CA6AE6CF;
// pure.utils.events.SimpleEvent`1<System.String>
struct SimpleEvent_1_t26BC47FA98E4F5EE39D35F1BB307324D54F40C4B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<pure.utils.mathTools.HashCode,pure.assetdb.Asset>
struct ValueCollection_tA6039647D6210FE2D9D4E887838E5BD1EDEDF784;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,pure.assetdb.Asset>
struct ValueCollection_t4A2D9FFD6114A8AD7DC9A4164EFB8F580071B6EC;
// System.Collections.Generic.Dictionary`2/Entry<pure.utils.mathTools.HashCode,pure.assetdb.Asset>[]
struct EntryU5BU5D_t87FC49FC8EF0D43FCA94BCF21329F8C972BE679E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,pure.assetdb.Asset>[]
struct EntryU5BU5D_tDE991497359B98788FF82A8F99AE08CADFAE7E3B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// main.AClicker
struct AClicker_tD7C12988911B4F4499CD799E87C90116766012CD;
// main.AOTUsing
struct AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528;
// main.AStepper
struct AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92;
// main.AText
struct AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Assembly
struct Assembly_t;
// pure.assetdb.AssetDB
struct AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// main.DragSystem
struct DragSystem_t4B54E22EA4FE6A62667A0639FC396D11D745E14C;
// pure.ui.DragSystem_Dll
struct DragSystem_Dll_t20D8821FDFFFDB582906403FFE5D50BE56B647F1;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// main.ExceptionHandler
struct ExceptionHandler_tC1B85A7CF63CDD64C0EFF01DC527DE2AA72B9879;
// pure.scene.ExceptionHandler_Dll
struct ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// pure.assetdb.GameArguments
struct GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D;
// main.GameDataWatcher
struct GameDataWatcher_t34031746E5FC015AAFF09CC7D432CB2A33627985;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// main.GameStarter
struct GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C;
// pure.scene.GetSceneInfoCallback
struct GetSceneInfoCallback_t484DA88462DC61ED84E098E229FD92F3CFCDD88E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// pure.scene.HotfixExceptionCallback
struct HotfixExceptionCallback_tAEE3C44E4E09399D117535D04CE578EE3DE0201C;
// pure.assetdb.IAotLoader
struct IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// pure.native.INativeInterface
struct INativeInterface_tA4EC980DCBB738BBA0F57BEF469EA7A921BF02AD;
// pure.utils.json.JsonArray
struct JsonArray_t69B99B278D499A517F00C89FB30490D2D046AEAB;
// pure.utils.json.JsonNode
struct JsonNode_tD7C33676C1E37BBE9F81BE59BEBB18F07132667C;
// main.LayerSetting
struct LayerSetting_tB4A4BCE217870927B3BCEE8D1C8A3E60CC06F27A;
// pure.ui.LayerSetting_Dll
struct LayerSetting_Dll_tB71CC4A8CB39DDCBC9B64EBB466023C38D81F106;
// pure.net.LoadQueue
struct LoadQueue_t4803BEFFD8DB80BBF3A1DDDBAC5AF52950F0B796;
// XLua.LuaFunction
struct LuaFunction_t4E9D7C794521042F0703BB77D17A37DD5C6ABFE5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// main.NativeBridge
struct NativeBridge_t715A577EF887D7FF37D0028EBD2D388868601817;
// pure.native.NativeBridge_Dll
struct NativeBridge_Dll_t85DBD64CE5428CE1CB8C89D9FBEEF09934E37D87;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// pure.ui.PClickable_Dll
struct PClickable_Dll_t9657F1C3254144AB9E27CBE50BFBCD0D7A167BF9;
// pure.ui.PImage_Dll
struct PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6;
// main.PreloadImage
struct PreloadImage_t94ED7718C3F46F3E92211F9F02E2FF324CED16B2;
// main.PreloadText
struct PreloadText_tBD5762938C1E13C5F5F7A061A52C33A8CDC00FAF;
// main.PreloadUIPrefabRoot
struct PreloadUIPrefabRoot_tE94C95E20B60568B32F3D4C142206F746EBC4A36;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// pure.utils.events.SimpleEvent
struct SimpleEvent_t11583E0D3ADA6518F93DF2CFFB38A064402CEE98;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// pure.ui.UIPrefabRoot_Dll
struct UIPrefabRoot_Dll_tF460B85B042DB7DE31083467CFB6FE8391F86125;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// pure.assetdb.UpLoadHotfixMetaCallback
struct UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// pure.assetdb.AssetSheet/AssetMapReserveCallback
struct AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48;
// main.GameStarter/<load_hotfix>d__8
struct U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79;
// main.GameStarter/<start_aot>d__7
struct U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27;
// main.GameStarter/<start_game>d__5
struct U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5;
// main.GameStarter/<start_hotfix>d__9
struct U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorType_t2719C9EFD4BE3BDFAA0E523621EFF5BBF6E0DB5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetLoadLog_t4DA9830DAB528BF1AF02FB445670178E6E5529F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetUtils_t85E1BFD5E0794A2F35B91BF4BD43F16AE40ECA81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileTools_t0FDED701F84CC1A92D4602A54113AFBDE6AFACAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameTicker_t1E886BC5B96BEC603DBBEF9F6CF9778BBCE1CD3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HotfixDll_tFD498AE6E41B480BC240E95D3C88C1339BE0DEBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderProperty_t625FA536CBA9625A15B4BBF8F53780471C4A5609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06A5CE19843B9CB70997E656C7EEBF594B405A63;
IL2CPP_EXTERN_C String_t* _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6;
IL2CPP_EXTERN_C String_t* _stringLiteral126EECB08A2AFC69A6B38D33A2CD2CBB60C9AC89;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD57D6EC4E24C9B0FB328523650FAE1AC32923A;
IL2CPP_EXTERN_C String_t* _stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960;
IL2CPP_EXTERN_C String_t* _stringLiteral47DAE3A2715B6E7B25BF2B0A7200616EB6CD6D64;
IL2CPP_EXTERN_C String_t* _stringLiteral51D70BC29AF350AC37AA0E4C5D5EE75592C82D86;
IL2CPP_EXTERN_C String_t* _stringLiteral543AED8A8913A2DCF3883A807BB21AFC84AB539F;
IL2CPP_EXTERN_C String_t* _stringLiteral554571D55E9D21ECAD0EC943A1178FA512E67F58;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53;
IL2CPP_EXTERN_C String_t* _stringLiteralB3FF2350A4DF5936FC31181B793F2F165C42E94F;
IL2CPP_EXTERN_C String_t* _stringLiteralC15B120D9939C995F9E2082A02F32F1DF3557755;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4;
IL2CPP_EXTERN_C String_t* _stringLiteralD46BBCDBAE2DA074CEAC7C9ED6DCAEA4E3DADA3F;
IL2CPP_EXTERN_C String_t* _stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854;
IL2CPP_EXTERN_C String_t* _stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A4D33D92A6C9512FAE653F4C136EED92A0B2FD;
IL2CPP_EXTERN_C const RuntimeMethod* AStepper_on_click_m4A4B29D97E7464747F970BF9806D0344C5C77795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_EnsureCapacity_m0F5683BE6C74B41FC7D856F7C957E0A0F1E761FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_EnsureCapacity_m2ED1A02BACD208924652AAF03B3FD225FB25EE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameStarter_reserve_map_m155AE0002F86B161EE954E50307C3936FD12AC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HotfixMeta_load_metadata_m97BB5A108C5C946A41AF182089A1E0C81916FD5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cload_hotfixU3Ed__8_System_Collections_IEnumerator_Reset_mADDE99C81A339FED1A120B367A35FA3BFBDC395D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cstart_aotU3Ed__7_System_Collections_IEnumerator_Reset_m8B2106815643099E4BBCA1C0BCC073A8C7A90921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cstart_gameU3Ed__5_System_Collections_IEnumerator_Reset_mD1B90C3E1E2A8D1276E8F97DF9253332F9AD7BA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cstart_hotfixU3Ed__9_MoveNext_mCF0CDC1DF703A77B711B9E4AEEBC8F40ACA83FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cstart_hotfixU3Ed__9_System_Collections_IEnumerator_Reset_mB3A22B5B9DF56E7C396E3E7D51D2BFF63C5A2754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GrassLoader_tC2CB12FDE86AD6742CDBBAF1E0C0A92CA084B9ED_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OssClient_t288A250A489C3B044AADFC40C5E6EB99113A75C6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProvideDataList_t7207E930D9C2491A2480F8E804C9F97DBD12B75D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProvideData_t40F6F06EC2D11A07B3F0AEE643A0833FF8E3B17E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TMP_FontUtilities_tE6B60D0F6B0C8A47625B671136D02E9529675D76_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TMP_TextParsingUtilities_tF6AF6ED06ADFB8C71F4C1D713D677D821A1AB6FA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TMP_TextUtilities_tD7ED516E31C2AA0EB607D587C0BB0FE71A8BB934_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextMeshProUtility_tADCDAFE6F50091A24760EB57C2DAE1591561A0E4_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB6FFE003B639CC2432838E6FE87F117C42B006B5 
{
};

// System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset>
struct Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t87FC49FC8EF0D43FCA94BCF21329F8C972BE679E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tABE65A9C2B2EEC153F1EA0CA555604301A712D90* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA6039647D6210FE2D9D4E887838E5BD1EDEDF784* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset>
struct Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDE991497359B98788FF82A8F99AE08CADFAE7E3B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t63421237D1FB076D9AFD8F3E5F9D6BD41A87A4EF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4A2D9FFD6114A8AD7DC9A4164EFB8F580071B6EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// pure.assetdb.AssetLoadLog
struct AssetLoadLog_t4DA9830DAB528BF1AF02FB445670178E6E5529F8  : public RuntimeObject
{
};

// pure.assetdb.AssetSheet
struct AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset> pure.assetdb.AssetSheet::_map
	Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913* ____map_1;
	// System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset> pure.assetdb.AssetSheet::_guids
	Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B* ____guids_2;
	// pure.assetdb.AssetType pure.assetdb.AssetSheet::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_3;
	// pure.assetdb.AssetDB pure.assetdb.AssetSheet::_db
	AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53* ____db_4;
};

// pure.assetdb.BreakStep
struct BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33  : public RuntimeObject
{
};

// pure.assetdb.GameArguments
struct GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D  : public RuntimeObject
{
	// System.String pure.assetdb.GameArguments::androidPackage
	String_t* ___androidPackage_0;
	// pure.assetdb.EntryLogPolicy pure.assetdb.GameArguments::entryLog
	int32_t ___entryLog_1;
	// pure.assetdb.AssetLogPolicy pure.assetdb.GameArguments::assetLog
	int32_t ___assetLog_2;
	// pure.assetdb.AssetReadMode pure.assetdb.GameArguments::readMode
	int32_t ___readMode_3;
	// pure.net.ServerMode pure.assetdb.GameArguments::serverMode
	int32_t ___serverMode_4;
	// pure.assetdb.BindMethod pure.assetdb.GameArguments::bindMethod
	int32_t ___bindMethod_5;
	// pure.assetdb.AssetLoadMethod pure.assetdb.GameArguments::animLoadMethod
	int32_t ___animLoadMethod_6;
	// System.Boolean pure.assetdb.GameArguments::bindAsync
	bool ___bindAsync_7;
	// System.Boolean pure.assetdb.GameArguments::pcDebuging
	bool ___pcDebuging_8;
	// System.Boolean pure.assetdb.GameArguments::forceNoNewwork
	bool ___forceNoNewwork_9;
	// pure.ui.LayerSetting_Dll pure.assetdb.GameArguments::layerSetting
	LayerSetting_Dll_tB71CC4A8CB39DDCBC9B64EBB466023C38D81F106* ___layerSetting_10;
	// System.String[] pure.assetdb.GameArguments::configURIs
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___configURIs_11;
	// System.Int32 pure.assetdb.GameArguments::uriIndex
	int32_t ___uriIndex_12;
	// System.String[] pure.assetdb.GameArguments::assemblies
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___assemblies_13;
	// System.String pure.assetdb.GameArguments::activity
	String_t* ___activity_14;
	// System.String pure.assetdb.GameArguments::configData
	String_t* ___configData_15;
	// UnityEngine.GameObject pure.assetdb.GameArguments::root
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root_16;
	// System.String pure.assetdb.GameArguments::entrance
	String_t* ___entrance_17;
};

// main.HotfixMeta
struct HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// pure.native.NativeManager
struct NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// main.GameStarter/<load_hotfix>d__8
struct U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79  : public RuntimeObject
{
	// System.Int32 main.GameStarter/<load_hotfix>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object main.GameStarter/<load_hotfix>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// main.GameStarter main.GameStarter/<load_hotfix>d__8::<>4__this
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator main.GameStarter/<load_hotfix>d__8::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_3;
};

// main.GameStarter/<start_aot>d__7
struct U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27  : public RuntimeObject
{
	// System.Int32 main.GameStarter/<start_aot>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object main.GameStarter/<start_aot>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// main.GameStarter main.GameStarter/<start_aot>d__7::<>4__this
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator main.GameStarter/<start_aot>d__7::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_3;
};

// main.GameStarter/<start_game>d__5
struct U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5  : public RuntimeObject
{
	// System.Int32 main.GameStarter/<start_game>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object main.GameStarter/<start_game>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// main.GameStarter main.GameStarter/<start_game>d__5::<>4__this
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator main.GameStarter/<start_game>d__5::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_3;
};

// main.GameStarter/<start_hotfix>d__9
struct U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164  : public RuntimeObject
{
	// System.Int32 main.GameStarter/<start_hotfix>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object main.GameStarter/<start_hotfix>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// main.GameStarter main.GameStarter/<start_hotfix>d__9::<>4__this
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator main.GameStarter/<start_hotfix>d__9::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_3;
};

// pure.assetdb.AotLoaderSetting
struct AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58 
{
	// System.String pure.assetdb.AotLoaderSetting::bar
	String_t* ___bar_0;
	// System.String pure.assetdb.AotLoaderSetting::prefab
	String_t* ___prefab_1;
};
// Native definition for P/Invoke marshalling of pure.assetdb.AotLoaderSetting
struct AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58_marshaled_pinvoke
{
	char* ___bar_0;
	char* ___prefab_1;
};
// Native definition for COM marshalling of pure.assetdb.AotLoaderSetting
struct AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58_marshaled_com
{
	Il2CppChar* ___bar_0;
	Il2CppChar* ___prefab_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// pure.assetdb.VersionData
struct VersionData_tA6D95961A59D86880D45351C7AC2BFBC1CDB5461 
{
	// System.Int64 pure.assetdb.VersionData::<version>k__BackingField
	int64_t ___U3CversionU3Ek__BackingField_0;
	// System.Int64 pure.assetdb.VersionData::<sdkVer>k__BackingField
	int64_t ___U3CsdkVerU3Ek__BackingField_1;
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

// pure.assetdb.AssetDB/BufferSize
struct BufferSize_tA384A63D5259ABDD3A8E0F1DE986D025D9D495B8 
{
	// System.Int32 pure.assetdb.AssetDB/BufferSize::strings
	int32_t ___strings_0;
	// System.Int32 pure.assetdb.AssetDB/BufferSize::datas
	int32_t ___datas_1;
	// System.Int32 pure.assetdb.AssetDB/BufferSize::total
	int32_t ___total_2;
};

// pure.assetdb.AssetDB
struct AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53  : public RuntimeObject
{
	// System.Boolean pure.assetdb.AssetDB::partRead
	bool ___partRead_9;
	// pure.assetdb.AssetDB/BufferSize pure.assetdb.AssetDB::bufferSize
	BufferSize_tA384A63D5259ABDD3A8E0F1DE986D025D9D495B8 ___bufferSize_10;
	// pure.utils.fileTools.StoragePath pure.assetdb.AssetDB::<storage>k__BackingField
	int32_t ___U3CstorageU3Ek__BackingField_11;
	// pure.assetdb.VersionData pure.assetdb.AssetDB::<version>k__BackingField
	VersionData_tA6D95961A59D86880D45351C7AC2BFBC1CDB5461 ___U3CversionU3Ek__BackingField_12;
	// System.Int32 pure.assetdb.AssetDB::streamLoaded
	int32_t ___streamLoaded_13;
	// System.Int64 pure.assetdb.AssetDB::versionCode
	int64_t ___versionCode_14;
	// System.Collections.Generic.Dictionary`2<pure.assetdb.AssetType,pure.assetdb.AssetSheet> pure.assetdb.AssetDB::_sheets
	Dictionary_2_tE1841532583B554DE50E5D9339D6302319686187* ____sheets_15;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// pure.assetdb.UpLoadHotfixMetaCallback
struct UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539  : public MulticastDelegate_t
{
};

// pure.assetdb.AssetSheet/AssetMapReserveCallback
struct AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// main.AOTUsing
struct AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// pure.scene.ExceptionHandler_Dll
struct ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// pure.scene.ExceptionHandler_Dll/LogStorage pure.scene.ExceptionHandler_Dll::logStorage
	int32_t ___logStorage_7;
	// System.Int32 pure.scene.ExceptionHandler_Dll::maxSameCount
	int32_t ___maxSameCount_8;
	// System.String[] pure.scene.ExceptionHandler_Dll::ignores
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ignores_9;
	// UnityEngine.Coroutine pure.scene.ExceptionHandler_Dll::_delay
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____delay_10;
	// System.Collections.Generic.Queue`1<pure.scene.ExceptionHandler_Dll/Slot> pure.scene.ExceptionHandler_Dll::_queue
	Queue_1_t61E70D7AB9CFD23C298318C88823D09133190917* ____queue_11;
	// XLua.LuaFunction pure.scene.ExceptionHandler_Dll::_push_to_lua
	LuaFunction_t4E9D7C794521042F0703BB77D17A37DD5C6ABFE5* ____push_to_lua_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> pure.scene.ExceptionHandler_Dll::_history
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____history_13;
};

// main.GameDataWatcher
struct GameDataWatcher_t34031746E5FC015AAFF09CC7D432CB2A33627985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// main.GameStarter
struct GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// pure.assetdb.GameArguments main.GameStarter::args
	GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* ___args_4;
	// System.String main.GameStarter::hotfixBar
	String_t* ___hotfixBar_5;
	// System.String main.GameStarter::hotfixPrefab
	String_t* ___hotfixPrefab_6;
	// main.AStepper main.GameStarter::stepper
	AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* ___stepper_7;
};

// pure.ui.LayerSetting_Dll
struct LayerSetting_Dll_tB71CC4A8CB39DDCBC9B64EBB466023C38D81F106  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas[] pure.ui.LayerSetting_Dll::canvas
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* ___canvas_4;
};

// pure.native.NativeBridge_Dll
struct NativeBridge_Dll_t85DBD64CE5428CE1CB8C89D9FBEEF09934E37D87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// pure.ui.UIPrefabRoot_Dll
struct UIPrefabRoot_Dll_tF460B85B042DB7DE31083467CFB6FE8391F86125  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// pure.ui.UIType pure.ui.UIPrefabRoot_Dll::type
	int32_t ___type_4;
};

// main.AStepper
struct AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// main.AText main.AStepper::text
	AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363* ___text_4;
	// main.AClicker main.AStepper::clicker
	AClicker_tD7C12988911B4F4499CD799E87C90116766012CD* ___clicker_5;
};

// pure.ui.DragSystem_Dll
struct DragSystem_Dll_t20D8821FDFFFDB582906403FFE5D50BE56B647F1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform pure.ui.DragSystem_Dll::_layer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____layer_5;
	// UnityEngine.EventSystems.EventSystem pure.ui.DragSystem_Dll::_eventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____eventSystem_6;
	// pure.utils.events.SimpleEvent`1<pure.ui.DragStatus> pure.ui.DragSystem_Dll::_events
	SimpleEvent_1_t7AD229B9AA200764B94D6EFCC1420690CA6AE6CF* ____events_7;
	// System.Collections.Generic.HashSet`1<pure.ui.IUIDropable> pure.ui.DragSystem_Dll::_droplist
	HashSet_1_t3621F71569DF36004D973BB1F2AC2874FC43C7A2* ____droplist_8;
};

// main.ExceptionHandler
struct ExceptionHandler_tC1B85A7CF63CDD64C0EFF01DC527DE2AA72B9879  : public ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// main.LayerSetting
struct LayerSetting_tB4A4BCE217870927B3BCEE8D1C8A3E60CC06F27A  : public LayerSetting_Dll_tB71CC4A8CB39DDCBC9B64EBB466023C38D81F106
{
};

// main.NativeBridge
struct NativeBridge_t715A577EF887D7FF37D0028EBD2D388868601817  : public NativeBridge_Dll_t85DBD64CE5428CE1CB8C89D9FBEEF09934E37D87
{
};

// main.PreloadUIPrefabRoot
struct PreloadUIPrefabRoot_tE94C95E20B60568B32F3D4C142206F746EBC4A36  : public UIPrefabRoot_Dll_tF460B85B042DB7DE31083467CFB6FE8391F86125
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// main.DragSystem
struct DragSystem_t4B54E22EA4FE6A62667A0639FC396D11D745E14C  : public DragSystem_Dll_t20D8821FDFFFDB582906403FFE5D50BE56B647F1
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// pure.ui.PClickable_Dll
struct PClickable_Dll_t9657F1C3254144AB9E27CBE50BFBCD0D7A167BF9  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// pure.utils.events.SimpleEvent`1<System.String> pure.ui.PClickable_Dll::_events
	SimpleEvent_1_t26BC47FA98E4F5EE39D35F1BB307324D54F40C4B* ____events_20;
	// UnityEngine.AudioSource pure.ui.PClickable_Dll::sound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sound_21;
};

// main.AClicker
struct AClicker_tD7C12988911B4F4499CD799E87C90116766012CD  : public PClickable_Dll_t9657F1C3254144AB9E27CBE50BFBCD0D7A167BF9
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// main.AText
struct AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363  : public Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62
{
};

// pure.ui.PImage_Dll
struct PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6  : public Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E
{
	// System.Boolean pure.ui.PImage_Dll::hole
	bool ___hole_60;
	// System.Boolean pure.ui.PImage_Dll::useSlice
	bool ___useSlice_61;
	// System.Boolean pure.ui.PImage_Dll::forceRebuild
	bool ___forceRebuild_62;
};

// main.PreloadText
struct PreloadText_tBD5762938C1E13C5F5F7A061A52C33A8CDC00FAF  : public Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62
{
};

// main.PreloadImage
struct PreloadImage_t94ED7718C3F46F3E92211F9F02E2FF324CED16B2  : public PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset>

// System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset>

// System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset>

// System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset>

// System.Reflection.Assembly

// System.Reflection.Assembly

// pure.assetdb.AssetLoadLog
struct AssetLoadLog_t4DA9830DAB528BF1AF02FB445670178E6E5529F8_StaticFields
{
	// pure.assetdb.AssetLogPolicy pure.assetdb.AssetLoadLog::policy
	int32_t ___policy_0;
};

// pure.assetdb.AssetLoadLog

// pure.assetdb.AssetSheet
struct AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_StaticFields
{
	// pure.assetdb.AssetSheet/AssetMapReserveCallback pure.assetdb.AssetSheet::reserveCB
	AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48* ___reserveCB_0;
};

// pure.assetdb.AssetSheet

// pure.assetdb.BreakStep
struct BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_StaticFields
{
	// System.Boolean pure.assetdb.BreakStep::nextStep
	bool ___nextStep_0;
	// pure.assetdb.EntryLogPolicy pure.assetdb.BreakStep::policy
	int32_t ___policy_1;
	// System.Collections.Generic.HashSet`1<UnityEngine.Object> pure.assetdb.BreakStep::s_locked
	HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* ___s_locked_2;
	// pure.ui.IValueField`1<System.String> pure.assetdb.BreakStep::s_text
	RuntimeObject* ___s_text_3;
};

// pure.assetdb.BreakStep

// pure.assetdb.GameArguments

// pure.assetdb.GameArguments

// main.HotfixMeta
struct HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_StaticFields
{
	// System.String[] main.HotfixMeta::metadatas
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___metadatas_0;
};

// main.HotfixMeta

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// pure.native.NativeManager
struct NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_StaticFields
{
	// pure.native.INativeInterface pure.native.NativeManager::native
	RuntimeObject* ___native_0;
	// System.String pure.native.NativeManager::AndroidPackage
	String_t* ___AndroidPackage_1;
	// System.String pure.native.NativeManager::debugConfigHttp
	String_t* ___debugConfigHttp_2;
	// pure.native.INativeInterface pure.native.NativeManager::fake
	RuntimeObject* ___fake_3;
	// System.Collections.Generic.Dictionary`2<System.String,pure.native.NativeHandler> pure.native.NativeManager::handlers
	Dictionary_2_t9ADD3BFB4A8D131846EC643ECCFF56929E18C7A1* ___handlers_4;
	// System.Boolean pure.native.NativeManager::s_network_closed
	bool ___s_network_closed_5;
	// pure.utils.json.JsonNode pure.native.NativeManager::sdkInfo
	JsonNode_tD7C33676C1E37BBE9F81BE59BEBB18F07132667C* ___sdkInfo_6;
	// pure.utils.json.JsonNode pure.native.NativeManager::configInfo
	JsonNode_tD7C33676C1E37BBE9F81BE59BEBB18F07132667C* ___configInfo_7;
	// System.Int32 pure.native.NativeManager::uniqueId
	int32_t ___uniqueId_8;
};

// pure.native.NativeManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// main.GameStarter/<load_hotfix>d__8

// main.GameStarter/<load_hotfix>d__8

// main.GameStarter/<start_aot>d__7

// main.GameStarter/<start_aot>d__7

// main.GameStarter/<start_game>d__5

// main.GameStarter/<start_game>d__5

// main.GameStarter/<start_hotfix>d__9

// main.GameStarter/<start_hotfix>d__9

// pure.assetdb.AotLoaderSetting

// pure.assetdb.AotLoaderSetting

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Void

// System.Void

// pure.assetdb.AssetDB
struct AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53_StaticFields
{
	// pure.assetdb.AssetReadMode pure.assetdb.AssetDB::readMode
	int32_t ___readMode_4;
	// pure.net.LoadQueue pure.assetdb.AssetDB::loader
	LoadQueue_t4803BEFFD8DB80BBF3A1DDDBAC5AF52950F0B796* ___loader_5;
	// pure.net.LoadQueue pure.assetdb.AssetDB::background
	LoadQueue_t4803BEFFD8DB80BBF3A1DDDBAC5AF52950F0B796* ___background_6;
	// pure.assetdb.AssetDB pure.assetdb.AssetDB::<instance>k__BackingField
	AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53* ___U3CinstanceU3Ek__BackingField_7;
	// pure.utils.events.SimpleEvent pure.assetdb.AssetDB::<onAssetManagerUpdate>k__BackingField
	SimpleEvent_t11583E0D3ADA6518F93DF2CFFB38A064402CEE98* ___U3ConAssetManagerUpdateU3Ek__BackingField_8;
};

// pure.assetdb.AssetDB

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.NotSupportedException

// System.NotSupportedException

// pure.assetdb.UpLoadHotfixMetaCallback

// pure.assetdb.UpLoadHotfixMetaCallback

// pure.assetdb.AssetSheet/AssetMapReserveCallback

// pure.assetdb.AssetSheet/AssetMapReserveCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// main.AOTUsing
struct AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_StaticFields
{
	// System.Type[] main.AOTUsing::usingTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___usingTypes_4;
};

// main.AOTUsing

// pure.scene.ExceptionHandler_Dll
struct ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4_StaticFields
{
	// pure.scene.GetSceneInfoCallback pure.scene.ExceptionHandler_Dll::sceneInfoRetriever
	GetSceneInfoCallback_t484DA88462DC61ED84E098E229FD92F3CFCDD88E* ___sceneInfoRetriever_4;
	// pure.scene.HotfixExceptionCallback pure.scene.ExceptionHandler_Dll::hotfixCallback
	HotfixExceptionCallback_tAEE3C44E4E09399D117535D04CE578EE3DE0201C* ___hotfixCallback_5;
	// UnityEngine.Application/LogCallback pure.scene.ExceptionHandler_Dll::s_logcallback
	LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___s_logcallback_6;
	// System.Text.StringBuilder pure.scene.ExceptionHandler_Dll::s_builder
	StringBuilder_t* ___s_builder_14;
	// System.Text.StringBuilder pure.scene.ExceptionHandler_Dll::s_tools
	StringBuilder_t* ___s_tools_15;
	// pure.utils.json.JsonArray pure.scene.ExceptionHandler_Dll::s_lualog
	JsonArray_t69B99B278D499A517F00C89FB30490D2D046AEAB* ___s_lualog_16;
};

// pure.scene.ExceptionHandler_Dll

// main.GameDataWatcher

// main.GameDataWatcher

// main.GameStarter

// main.GameStarter

// pure.ui.LayerSetting_Dll

// pure.ui.LayerSetting_Dll

// pure.native.NativeBridge_Dll

// pure.native.NativeBridge_Dll

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// pure.ui.UIPrefabRoot_Dll

// pure.ui.UIPrefabRoot_Dll

// main.AStepper

// main.AStepper

// pure.ui.DragSystem_Dll
struct DragSystem_Dll_t20D8821FDFFFDB582906403FFE5D50BE56B647F1_StaticFields
{
	// pure.ui.DragSystem_Dll pure.ui.DragSystem_Dll::<instacne>k__BackingField
	DragSystem_Dll_t20D8821FDFFFDB582906403FFE5D50BE56B647F1* ___U3CinstacneU3Ek__BackingField_4;
};

// pure.ui.DragSystem_Dll

// main.ExceptionHandler

// main.ExceptionHandler

// main.LayerSetting

// main.LayerSetting

// main.NativeBridge

// main.NativeBridge

// main.PreloadUIPrefabRoot

// main.PreloadUIPrefabRoot

// main.DragSystem

// main.DragSystem

// pure.ui.PClickable_Dll

// pure.ui.PClickable_Dll

// main.AClicker

// main.AClicker

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// main.AText

// main.AText

// pure.ui.PImage_Dll
struct PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6_StaticFields
{
	// UnityEngine.Vector2[] pure.ui.PImage_Dll::vertexScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vertexScratch_58;
	// UnityEngine.Vector2[] pure.ui.PImage_Dll::uvScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvScratch_59;
};

// pure.ui.PImage_Dll

// main.PreloadText

// main.PreloadText

// main.PreloadImage

// main.PreloadImage
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m151CD39687FF49A4A3EBFE2865E4159D1B939328_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,System.Object>::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m8BC6BF0B510BAA855A7CB1BDFFF19A045A945247_gshared (Dictionary_2_tEB17CEC429191B63A2A3ABAC251C77668F44CDF3* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;

// System.Void pure.ui.PClickable_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PClickable_Dll__ctor_mEDF5BDF59B1CF2192A9CAD08EA058B35A363DEF6 (PClickable_Dll_t9657F1C3254144AB9E27CBE50BFBCD0D7A167BF9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void pure.assetdb.BreakStep::SetText(pure.ui.IValueField`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BreakStep_SetText_mC80048C5F084931DB4CFD8C0464DDF8079A5016C_inline (RuntimeObject* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void pure.ui.PClickable_Dll::AddListener(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PClickable_Dll_AddListener_m47403719DBB0DB5FA28E50143DE696903032B348 (PClickable_Dll_t9657F1C3254144AB9E27CBE50BFBCD0D7A167BF9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_action, const RuntimeMethod* method) ;
// System.Void pure.assetdb.BreakStep::Lock(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakStep_Lock_mCCEBBB01C474FCB54A5FF3A3925D8EFDF899BEC4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_o, const RuntimeMethod* method) ;
// System.Void pure.assetdb.BreakStep::Unlock(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakStep_Unlock_mE883919AABB69D821475358247C8063CD881E958 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_o, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text__ctor_mE28BC6E42B4715F23401A9379C9681867A0631C1 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void pure.ui.DragSystem_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragSystem_Dll__ctor_m3996293EB8D44AE70CE8566F687C64C6C4686BE3 (DragSystem_Dll_t20D8821FDFFFDB582906403FFE5D50BE56B647F1* __this, const RuntimeMethod* method) ;
// System.Void pure.scene.ExceptionHandler_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_Dll__ctor_m9980C89BFB7E5E54C87DC9809D2A6FC23821C1C1 (ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Collections.IEnumerator main.GameStarter::start_game()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_start_game_mC63F4A99FEBCB7E3915F69CA0F685D39670ACAE4 (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void main.GameStarter/<start_game>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_gameU3Ed__5__ctor_mE6A3045843E8AE587EB841FF5CE9447B7008EF5C (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset>::EnsureCapacity(System.Int32)
inline int32_t Dictionary_2_EnsureCapacity_m0F5683BE6C74B41FC7D856F7C957E0A0F1E761FF (Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913*, int32_t, const RuntimeMethod*))Dictionary_2_EnsureCapacity_m151CD39687FF49A4A3EBFE2865E4159D1B939328_gshared)(__this, ___0_capacity, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset>::EnsureCapacity(System.Int32)
inline int32_t Dictionary_2_EnsureCapacity_m2ED1A02BACD208924652AAF03B3FD225FB25EE43 (Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B*, int32_t, const RuntimeMethod*))Dictionary_2_EnsureCapacity_m8BC6BF0B510BAA855A7CB1BDFFF19A045A945247_gshared)(__this, ___0_capacity, method);
}
// System.Void main.GameStarter/<start_aot>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_aotU3Ed__7__ctor_m77DA97C5C95396614FAC543A5B38EAC6EAC8A00F (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void main.GameStarter/<load_hotfix>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cload_hotfixU3Ed__8__ctor_m2AE8AEB91CC85E8CB0B17495C68554F2E6EDF422 (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void main.GameStarter/<start_hotfix>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_hotfixU3Ed__9__ctor_mBF7D0807F173CF368439015B8FA92F284686A812 (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void pure.assetdb.GameArguments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameArguments__ctor_m222B1A1CC747B15B827A2B51822CDF4A719DE397 (GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void main.AStepper::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AStepper_Begin_m054A77B03A06478608E779967D27471A04F538D7 (AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator main.GameStarter::start_aot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_start_aot_mB16BDC04FF141397268240B040B0CCB002181CDE (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator main.GameStarter::load_hotfix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_load_hotfix_m338AA8CA774A796AEAB3189C2CF965261CE19DC1 (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator main.GameStarter::start_hotfix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_start_hotfix_m70F7EB314CEE66C4E043F183EE6C7E7F23B10217 (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) ;
// System.Void main.AStepper::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AStepper_Stop_m017281C41C34C357CDD8330CB5CD0B2648E16BE1 (AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void pure.utils.fileTools.FileTools::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileTools_Start_m4A671A72016714A76DF2D52771B0C1CF179BAF8A (const RuntimeMethod* method) ;
// System.Void pure.assetdb.AssetSheet/AssetMapReserveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetMapReserveCallback__ctor_m4EACAF4A1F1107841CCF8BD9FAA7A5D49E90A191 (AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void pure.ticker.GameTicker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameTicker_Start_m4E5B8400D74D022EE458E31395B5F41F75B4B8EA (const RuntimeMethod* method) ;
// System.String pure.assetdb.GameArguments::GetConfigURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameArguments_GetConfigURL_m7AF246D7BF993B30561F28D02E4CDB429429E418 (GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* __this, const RuntimeMethod* method) ;
// System.Void pure.assetdb.AssetUtils::ResetAddressBook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetUtils_ResetAddressBook_m2F06FCA942FE96AC297388BAE8E6895F14618728 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator pure.assetdb.BreakStep::Pause(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BreakStep_Pause_m2D447F746C20B5E68215C82324DE79C03A9033D6 (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void pure.physic.NavDll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDll_Start_m53453A3B6A387C6E77E094176DECA395723D8768 (const RuntimeMethod* method) ;
// System.Void pure.cpp.GameCppDll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCppDll_Start_mEFF0CB608F49B381E29DC178E33FFBFCCB46F75B (const RuntimeMethod* method) ;
// System.Void pure.cpp.GameCppDll::SetPackageName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCppDll_SetPackageName_m80667275925EC5E0EBCC49B4954F3DA2C7455878 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 pure.utils.material.ShaderProperty::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderProperty_Init_m539FFDE7B100C6207C1147D3F5FF0DDA5775B00C (const RuntimeMethod* method) ;
// System.Int32 pure.utils.animation.AnimatorType::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorType_init_mE36AF259C78329DFD5495FD2FC5C973392A6D203 (const RuntimeMethod* method) ;
// pure.assetdb.IAotLoader pure.assetdb.AotLoaderFactory::GetLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AotLoaderFactory_GetLoader_mAA22E171067660DF4F083D0B7DB730DF91D77FA2 (const RuntimeMethod* method) ;
// pure.assetdb.UpLoadHotfixMetaCallback main.HotfixMeta::GetMetaUploader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539* HotfixMeta_GetMetaUploader_m82225031077B870B7DE34D703787F0A93B9AE262 (const RuntimeMethod* method) ;
// System.Boolean pure.assetdb.HotfixDll::TryGet(System.String,System.Reflection.Assembly&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HotfixDll_TryGet_m51653E75BB9216847F662A0C4460BA4C62411C7C (String_t* ___0_n, Assembly_t** ___1_a, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dllBytes, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void pure.assetdb.UpLoadHotfixMetaCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpLoadHotfixMetaCallback__ctor_mF8A4B8D19D679C0D5DC94994BBB7B29FBF505F0B (UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void pure.ui.LayerSetting_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerSetting_Dll__ctor_mD41D4490DF845C0A6F03094402DDD21AC38702A6 (LayerSetting_Dll_tB71CC4A8CB39DDCBC9B64EBB466023C38D81F106* __this, const RuntimeMethod* method) ;
// System.Void pure.native.NativeBridge_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_Dll__ctor_mA3115A0F857AC21085557CF85B047A6C9DDFF9AA (NativeBridge_Dll_t85DBD64CE5428CE1CB8C89D9FBEEF09934E37D87* __this, const RuntimeMethod* method) ;
// System.Void pure.ui.PImage_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PImage_Dll__ctor_mFB7B3E5B1283E3C23129FAB15F8530F4DE87159C (PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6* __this, const RuntimeMethod* method) ;
// System.Void pure.ui.UIPrefabRoot_Dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPrefabRoot_Dll__ctor_mA5B879C32014F2F3C4AE6787F334A35149427A77 (UIPrefabRoot_Dll_tF460B85B042DB7DE31083467CFB6FE8391F86125* __this, const RuntimeMethod* method) ;
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
// System.Void main.AClicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AClicker__ctor_m039C5A6F6D4A9E62ADAD0D914E729463D13A6CE0 (AClicker_tD7C12988911B4F4499CD799E87C90116766012CD* __this, const RuntimeMethod* method) 
{
	{
		PClickable_Dll__ctor_mEDF5BDF59B1CF2192A9CAD08EA058B35A363DEF6(__this, NULL);
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
// System.Void main.AOTUsing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTUsing_Start_m4DB3ACAAF8D208231138E5147746A294E5F56B10 (AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126EECB08A2AFC69A6B38D33A2CD2CBB60C9AC89);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	{
		// foreach (var u in usingTypes) {
		il2cpp_codegen_runtime_class_init_inline(AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ((AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_StaticFields*)il2cpp_codegen_static_fields_for(AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var))->___usingTypes_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		// foreach (var u in usingTypes) {
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Type_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Debug.Log($"start {u.Name}");
		Type_t* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral126EECB08A2AFC69A6B38D33A2CD2CBB60C9AC89, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		// foreach (var u in usingTypes) {
		int32_t L_9 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void main.AOTUsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTUsing__ctor_m330643B1452BFB95EB82EDA3ACF850B4ABD29F42 (AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void main.AOTUsing::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTUsing__cctor_m12770342B65C8AAC5FEC7A010B758FC21E85072D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassLoader_tC2CB12FDE86AD6742CDBBAF1E0C0A92CA084B9ED_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OssClient_t288A250A489C3B044AADFC40C5E6EB99113A75C6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideDataList_t7207E930D9C2491A2480F8E804C9F97DBD12B75D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideData_t40F6F06EC2D11A07B3F0AEE643A0833FF8E3B17E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_FontUtilities_tE6B60D0F6B0C8A47625B671136D02E9529675D76_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_TextParsingUtilities_tF6AF6ED06ADFB8C71F4C1D713D677D821A1AB6FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_TextUtilities_tD7ED516E31C2AA0EB607D587C0BB0FE71A8BB934_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUtility_tADCDAFE6F50091A24760EB57C2DAE1591561A0E4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//         public static Type[] usingTypes = {
		//             typeof(GrassLoader),
		//             typeof(TextMeshProUtility),
		//             typeof(TMP_Asset),
		//             typeof(TMP_FontUtilities),
		//             typeof(TMP_TextUtilities),
		//             typeof(TMP_TextParsingUtilities),
		//             typeof(ProvideData),
		//             typeof(ProvideDataList),
		// #if !UNITY_WEBGL
		//             typeof(OssClient),
		// #endif
		//         };
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GrassLoader_tC2CB12FDE86AD6742CDBBAF1E0C0A92CA084B9ED_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (TextMeshProUtility_tADCDAFE6F50091A24760EB57C2DAE1591561A0E4_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (TMP_FontUtilities_tE6B60D0F6B0C8A47625B671136D02E9529675D76_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t*)L_12);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (TMP_TextUtilities_tD7ED516E31C2AA0EB607D587C0BB0FE71A8BB934_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (Type_t*)L_15);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (TMP_TextParsingUtilities_tF6AF6ED06ADFB8C71F4C1D713D677D821A1AB6FA_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (Type_t*)L_18);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (ProvideData_t40F6F06EC2D11A07B3F0AEE643A0833FF8E3B17E_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (Type_t*)L_21);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ProvideDataList_t7207E930D9C2491A2480F8E804C9F97DBD12B75D_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (Type_t*)L_24);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_25 = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (OssClient_t288A250A489C3B044AADFC40C5E6EB99113A75C6_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(8), (Type_t*)L_27);
		((AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_StaticFields*)il2cpp_codegen_static_fields_for(AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var))->___usingTypes_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_StaticFields*)il2cpp_codegen_static_fields_for(AOTUsing_t8C165868300B06E82D560EA8B6FC5F40734A8528_il2cpp_TypeInfo_var))->___usingTypes_4), (void*)L_25);
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
// System.Void main.AStepper::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AStepper_Begin_m054A77B03A06478608E779967D27471A04F538D7 (AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AStepper_on_click_m4A4B29D97E7464747F970BF9806D0344C5C77795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BreakStep.SetText(text);
		AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363* L_0 = __this->___text_4;
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		BreakStep_SetText_mC80048C5F084931DB4CFD8C0464DDF8079A5016C_inline(L_0, NULL);
		// clicker.AddListener(on_click);
		AClicker_tD7C12988911B4F4499CD799E87C90116766012CD* L_1 = __this->___clicker_5;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_2, NULL, (intptr_t)((void*)AStepper_on_click_m4A4B29D97E7464747F970BF9806D0344C5C77795_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		PClickable_Dll_AddListener_m47403719DBB0DB5FA28E50143DE696903032B348(L_1, L_2, NULL);
		// BreakStep.Lock(this);
		BreakStep_Lock_mCCEBBB01C474FCB54A5FF3A3925D8EFDF899BEC4(__this, NULL);
		// }
		return;
	}
}
// System.Void main.AStepper::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AStepper_Stop_m017281C41C34C357CDD8330CB5CD0B2648E16BE1 (AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BreakStep.Unlock(this);
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		BreakStep_Unlock_mE883919AABB69D821475358247C8063CD881E958(__this, NULL);
		// }
		return;
	}
}
// System.Void main.AStepper::on_click(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AStepper_on_click_m4A4B29D97E7464747F970BF9806D0344C5C77795 (String_t* ___0__, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BreakStep.nextStep = true;
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		((BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_StaticFields*)il2cpp_codegen_static_fields_for(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var))->___nextStep_0 = (bool)1;
		// }
		return;
	}
}
// System.Void main.AStepper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AStepper__ctor_m262762F6DAE4590944643754CBF8439DD619BD5A (AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* __this, const RuntimeMethod* method) 
{
	{
		UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337(__this, NULL);
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
// System.Void main.AText::SetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AText_SetValue_m85B4223ADE88286C0530BC23B7416552A928290C (AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363* __this, String_t* ___0_val, const RuntimeMethod* method) 
{
	{
		// this.text = val;
		String_t* L_0 = ___0_val;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.String main.AText::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AText_GetValue_m6CA2E6BEB3C9D5B64BBC8A5A2C0FFF382DC0BD15 (AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363* __this, const RuntimeMethod* method) 
{
	{
		// return this.text;
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		return L_0;
	}
}
// System.Void main.AText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AText__ctor_m2C9EDC818058B1BED860012D80B11EE3C67F6961 (AText_tFA0E2D0EFC829AB6C117E9FAE1C909C8A4627363* __this, const RuntimeMethod* method) 
{
	{
		Text__ctor_mE28BC6E42B4715F23401A9379C9681867A0631C1(__this, NULL);
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
// System.Void main.DragSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragSystem__ctor_m36C327D253BA4C8FCDA805F4D2DE22BD15F4FA8F (DragSystem_t4B54E22EA4FE6A62667A0639FC396D11D745E14C* __this, const RuntimeMethod* method) 
{
	{
		DragSystem_Dll__ctor_m3996293EB8D44AE70CE8566F687C64C6C4686BE3(__this, NULL);
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
// System.Void main.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_mF5FBD6F5B96D3C17DE146613D1BAA1F2D8D02DCF (ExceptionHandler_tC1B85A7CF63CDD64C0EFF01DC527DE2AA72B9879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionHandler_Dll_tF7BB8070240A126B595AFF09262A45D8697BCBD4_il2cpp_TypeInfo_var);
		ExceptionHandler_Dll__ctor_m9980C89BFB7E5E54C87DC9809D2A6FC23821C1C1(__this, NULL);
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
// System.Void main.GameDataWatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataWatcher__ctor_m68ED47871CF7E0530F425435B526E248802AD1C8 (GameDataWatcher_t34031746E5FC015AAFF09CC7D432CB2A33627985* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void main.GameStarter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStarter_Awake_mE0324986348EA7CB24991D15F86CCD407CBC0EFE (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetLoadLog_t4DA9830DAB528BF1AF02FB445670178E6E5529F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A4D33D92A6C9512FAE653F4C136EED92A0B2FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BreakStep.policy = args.entryLog;
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_0 = __this->___args_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___entryLog_1;
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		((BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_StaticFields*)il2cpp_codegen_static_fields_for(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var))->___policy_1 = L_1;
		// AssetLoadLog.policy = args.assetLog;
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_2 = __this->___args_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___assetLog_2;
		((AssetLoadLog_t4DA9830DAB528BF1AF02FB445670178E6E5529F8_StaticFields*)il2cpp_codegen_static_fields_for(AssetLoadLog_t4DA9830DAB528BF1AF02FB445670178E6E5529F8_il2cpp_TypeInfo_var))->___policy_0 = L_3;
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		// args.root = gameObject;
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_5 = __this->___args_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		L_5->___root_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___root_16), (void*)L_6);
		// Debug.Log("game awake now");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF0A4D33D92A6C9512FAE653F4C136EED92A0B2FD, NULL);
		// StartCoroutine(start_game());
		RuntimeObject* L_7;
		L_7 = GameStarter_start_game_mC63F4A99FEBCB7E3915F69CA0F685D39670ACAE4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator main.GameStarter::start_game()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_start_game_mC63F4A99FEBCB7E3915F69CA0F685D39670ACAE4 (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* L_0 = (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5*)il2cpp_codegen_object_new(U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cstart_gameU3Ed__5__ctor_mE6A3045843E8AE587EB841FF5CE9447B7008EF5C(L_0, 0, NULL);
		U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void main.GameStarter::reserve_map(System.Collections.Generic.Dictionary`2<System.String,pure.assetdb.Asset>,System.Collections.Generic.Dictionary`2<pure.utils.mathTools.HashCode,pure.assetdb.Asset>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStarter_reserve_map_m155AE0002F86B161EE954E50307C3936FD12AC56 (Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913* ___0_a, Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B* ___1_b, int32_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_EnsureCapacity_m0F5683BE6C74B41FC7D856F7C957E0A0F1E761FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_EnsureCapacity_m2ED1A02BACD208924652AAF03B3FD225FB25EE43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// a.EnsureCapacity(size);
		Dictionary_2_tD8C27153947FCF0DFC260E605BA96E24F9A63913* L_0 = ___0_a;
		int32_t L_1 = ___2_size;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Dictionary_2_EnsureCapacity_m0F5683BE6C74B41FC7D856F7C957E0A0F1E761FF(L_0, L_1, Dictionary_2_EnsureCapacity_m0F5683BE6C74B41FC7D856F7C957E0A0F1E761FF_RuntimeMethod_var);
		// b.EnsureCapacity(size);
		Dictionary_2_tD8E815BB5969B6DF79C283BEB3F9D7CCC31C1F9B* L_3 = ___1_b;
		int32_t L_4 = ___2_size;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Dictionary_2_EnsureCapacity_m2ED1A02BACD208924652AAF03B3FD225FB25EE43(L_3, L_4, Dictionary_2_EnsureCapacity_m2ED1A02BACD208924652AAF03B3FD225FB25EE43_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator main.GameStarter::start_aot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_start_aot_mB16BDC04FF141397268240B040B0CCB002181CDE (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* L_0 = (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27*)il2cpp_codegen_object_new(U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cstart_aotU3Ed__7__ctor_m77DA97C5C95396614FAC543A5B38EAC6EAC8A00F(L_0, 0, NULL);
		U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator main.GameStarter::load_hotfix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_load_hotfix_m338AA8CA774A796AEAB3189C2CF965261CE19DC1 (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* L_0 = (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79*)il2cpp_codegen_object_new(U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cload_hotfixU3Ed__8__ctor_m2AE8AEB91CC85E8CB0B17495C68554F2E6EDF422(L_0, 0, NULL);
		U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator main.GameStarter::start_hotfix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStarter_start_hotfix_m70F7EB314CEE66C4E043F183EE6C7E7F23B10217 (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* L_0 = (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164*)il2cpp_codegen_object_new(U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cstart_hotfixU3Ed__9__ctor_mBF7D0807F173CF368439015B8FA92F284686A812(L_0, 0, NULL);
		U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void main.GameStarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStarter__ctor_m7E9F67F0949A27048E40EE79F3BF5956BFC4C1DC (GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A5CE19843B9CB70997E656C7EEBF594B405A63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameArguments args = new GameArguments();
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_0 = (GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D*)il2cpp_codegen_object_new(GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameArguments__ctor_m222B1A1CC747B15B827A2B51822CDF4A719DE397(L_0, NULL);
		__this->___args_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args_4), (void*)L_0);
		// public string hotfixBar = "sub_0/bar";
		__this->___hotfixBar_5 = _stringLiteral06A5CE19843B9CB70997E656C7EEBF594B405A63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hotfixBar_5), (void*)_stringLiteral06A5CE19843B9CB70997E656C7EEBF594B405A63);
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
// System.Void main.GameStarter/<start_game>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_gameU3Ed__5__ctor_mE6A3045843E8AE587EB841FF5CE9447B7008EF5C (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void main.GameStarter/<start_game>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_gameU3Ed__5_System_IDisposable_Dispose_mA03D824B5B69D97800B64858EF353293C1019CF3 (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean main.GameStarter/<start_game>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cstart_gameU3Ed__5_MoveNext_m4A89D1AB3813B2E3EC3BD60FCBFA2404DD9163F9 (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00d5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (stepper) {
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_3 = V_1;
		NullCheck(L_3);
		AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* L_4 = L_3->___stepper_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// stepper.Begin();
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_6 = V_1;
		NullCheck(L_6);
		AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* L_7 = L_6->___stepper_7;
		NullCheck(L_7);
		AStepper_Begin_m054A77B03A06478608E779967D27471A04F538D7(L_7, NULL);
	}

IL_0045:
	{
		// IEnumerator e = start_aot();
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = GameStarter_start_aot_mB16BDC04FF141397268240B040B0CCB002181CDE(L_8, NULL);
		__this->___U3CeU3E5__2_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_9);
		goto IL_006a;
	}

IL_0053:
	{
		// while (e.MoveNext()) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006a:
	{
		// while (e.MoveNext()) yield return null;
		RuntimeObject* L_10 = __this->___U3CeU3E5__2_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// IEnumerator e = load_hotfix();
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = GameStarter_load_hotfix_m338AA8CA774A796AEAB3189C2CF965261CE19DC1(L_12, NULL);
		__this->___U3CeU3E5__2_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_13);
		goto IL_00a3;
	}

IL_008c:
	{
		// while (e.MoveNext()) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_009c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a3:
	{
		// while (e.MoveNext()) yield return null;
		RuntimeObject* L_14 = __this->___U3CeU3E5__2_3;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
		if (L_15)
		{
			goto IL_008c;
		}
	}
	{
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// IEnumerator e = start_hotfix();
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = GameStarter_start_hotfix_m70F7EB314CEE66C4E043F183EE6C7E7F23B10217(L_16, NULL);
		__this->___U3CeU3E5__2_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_17);
		goto IL_00dc;
	}

IL_00c5:
	{
		// while (e.MoveNext()) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dc:
	{
		// while (e.MoveNext()) yield return null;
		RuntimeObject* L_18 = __this->___U3CeU3E5__2_3;
		NullCheck(L_18);
		bool L_19;
		L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
		if (L_19)
		{
			goto IL_00c5;
		}
	}
	{
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// if (stepper) {
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_20 = V_1;
		NullCheck(L_20);
		AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* L_21 = L_20->___stepper_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_0108;
		}
	}
	{
		// stepper.Stop();
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_23 = V_1;
		NullCheck(L_23);
		AStepper_t9767685A832D4DEA80806E19ACFAC9CB952E7D92* L_24 = L_23->___stepper_7;
		NullCheck(L_24);
		AStepper_Stop_m017281C41C34C357CDD8330CB5CD0B2648E16BE1(L_24, NULL);
	}

IL_0108:
	{
		// }
		return (bool)0;
	}
}
// System.Object main.GameStarter/<start_game>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cstart_gameU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCE9A0E371112AD2156A8E3991560564D4124518E (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void main.GameStarter/<start_game>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_gameU3Ed__5_System_Collections_IEnumerator_Reset_mD1B90C3E1E2A8D1276E8F97DF9253332F9AD7BA0 (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cstart_gameU3Ed__5_System_Collections_IEnumerator_Reset_mD1B90C3E1E2A8D1276E8F97DF9253332F9AD7BA0_RuntimeMethod_var)));
	}
}
// System.Object main.GameStarter/<start_game>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cstart_gameU3Ed__5_System_Collections_IEnumerator_get_Current_m9A6CDD01157514B3F6A043E001AA39208C1FF2F8 (U3Cstart_gameU3Ed__5_tCB270C4B20C1A4035BA803BC34D325C5A85212B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void main.GameStarter/<start_aot>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_aotU3Ed__7__ctor_m77DA97C5C95396614FAC543A5B38EAC6EAC8A00F (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void main.GameStarter/<start_aot>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_aotU3Ed__7_System_IDisposable_Dispose_mD2A6296267864CB9721DF5238DC4E45124173839 (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean main.GameStarter/<start_aot>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cstart_aotU3Ed__7_MoveNext_mC9774160D50F7102F72854DFC4E9D262C358DBDE (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorType_t2719C9EFD4BE3BDFAA0E523621EFF5BBF6E0DB5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetUtils_t85E1BFD5E0794A2F35B91BF4BD43F16AE40ECA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileTools_t0FDED701F84CC1A92D4602A54113AFBDE6AFACAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStarter_reserve_map_m155AE0002F86B161EE954E50307C3936FD12AC56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameTicker_t1E886BC5B96BEC603DBBEF9F6CF9778BBCE1CD3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProperty_t625FA536CBA9625A15B4BBF8F53780471C4A5609_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15B120D9939C995F9E2082A02F32F1DF3557755);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD46BBCDBAE2DA074CEAC7C9ED6DCAEA4E3DADA3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0097;
			}
			case 2:
			{
				goto IL_00ee;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FileTools.Start();
		il2cpp_codegen_runtime_class_init_inline(FileTools_t0FDED701F84CC1A92D4602A54113AFBDE6AFACAC_il2cpp_TypeInfo_var);
		FileTools_Start_m4A671A72016714A76DF2D52771B0C1CF179BAF8A(NULL);
		// AssetSheet.reserveCB = reserve_map;
		AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48* L_3 = (AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48*)il2cpp_codegen_object_new(AssetMapReserveCallback_t53F21EE4257D5CED7EB31298AE1C8B7FDDDF2B48_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AssetMapReserveCallback__ctor_m4EACAF4A1F1107841CCF8BD9FAA7A5D49E90A191(L_3, NULL, (intptr_t)((void*)GameStarter_reserve_map_m155AE0002F86B161EE954E50307C3936FD12AC56_RuntimeMethod_var), NULL);
		((AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_StaticFields*)il2cpp_codegen_static_fields_for(AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_il2cpp_TypeInfo_var))->___reserveCB_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_StaticFields*)il2cpp_codegen_static_fields_for(AssetSheet_t920A46FD4CE48209C73EEBBC6F89DCE5ED311B25_il2cpp_TypeInfo_var))->___reserveCB_0), (void*)L_3);
		// AssetDB.readMode = AssetReadMode.AssetBundle;
		il2cpp_codegen_runtime_class_init_inline(AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53_il2cpp_TypeInfo_var);
		((AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53_StaticFields*)il2cpp_codegen_static_fields_for(AssetDB_t8E8BEDF924BC66EA646FD860F00634743E352A53_il2cpp_TypeInfo_var))->___readMode_4 = 1;
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// GameTicker.Start();
		il2cpp_codegen_runtime_class_init_inline(GameTicker_t1E886BC5B96BEC603DBBEF9F6CF9778BBCE1CD3B_il2cpp_TypeInfo_var);
		GameTicker_Start_m4E5B8400D74D022EE458E31395B5F41F75B4B8EA(NULL);
		// NativeManager.debugConfigHttp = args.GetConfigURL();
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_4 = V_1;
		NullCheck(L_4);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_5 = L_4->___args_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameArguments_GetConfigURL_m7AF246D7BF993B30561F28D02E4CDB429429E418(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var);
		((NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_StaticFields*)il2cpp_codegen_static_fields_for(NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var))->___debugConfigHttp_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_StaticFields*)il2cpp_codegen_static_fields_for(NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var))->___debugConfigHttp_2), (void*)L_6);
		// NativeManager.AndroidPackage = args.androidPackage;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_7 = V_1;
		NullCheck(L_7);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_8 = L_7->___args_4;
		NullCheck(L_8);
		String_t* L_9 = L_8->___androidPackage_0;
		((NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_StaticFields*)il2cpp_codegen_static_fields_for(NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var))->___AndroidPackage_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_StaticFields*)il2cpp_codegen_static_fields_for(NativeManager_t5C95FD9495BCCF7F669837D4DAB3266B18D4A392_il2cpp_TypeInfo_var))->___AndroidPackage_1), (void*)L_9);
		// AssetUtils.ResetAddressBook();
		il2cpp_codegen_runtime_class_init_inline(AssetUtils_t85E1BFD5E0794A2F35B91BF4BD43F16AE40ECA81_il2cpp_TypeInfo_var);
		AssetUtils_ResetAddressBook_m2F06FCA942FE96AC297388BAE8E6895F14618728(NULL);
		// IEnumerator e = BreakStep.Pause("start cpp dll");
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = BreakStep_Pause_m2D447F746C20B5E68215C82324DE79C03A9033D6(_stringLiteralD46BBCDBAE2DA074CEAC7C9ED6DCAEA4E3DADA3F, NULL);
		__this->___U3CeU3E5__2_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_10);
		goto IL_009e;
	}

IL_0087:
	{
		// while (e.MoveNext()) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0097:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_009e:
	{
		// while (e.MoveNext()) yield return null;
		RuntimeObject* L_11 = __this->___U3CeU3E5__2_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
		if (L_12)
		{
			goto IL_0087;
		}
	}
	{
		// NavDll.Start();
		NavDll_Start_m53453A3B6A387C6E77E094176DECA395723D8768(NULL);
		// GameCppDll.Start();
		GameCppDll_Start_mEFF0CB608F49B381E29DC178E33FFBFCCB46F75B(NULL);
		// GameCppDll.SetPackageName(args.androidPackage);
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_13 = V_1;
		NullCheck(L_13);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_14 = L_13->___args_4;
		NullCheck(L_14);
		String_t* L_15 = L_14->___androidPackage_0;
		GameCppDll_SetPackageName_m80667275925EC5E0EBCC49B4954F3DA2C7455878(L_15, NULL);
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// IEnumerator e = BreakStep.Pause("static const property init");
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = BreakStep_Pause_m2D447F746C20B5E68215C82324DE79C03A9033D6(_stringLiteralC15B120D9939C995F9E2082A02F32F1DF3557755, NULL);
		__this->___U3CeU3E5__2_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_16);
		goto IL_00f5;
	}

IL_00de:
	{
		// while (e.MoveNext()) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ee:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f5:
	{
		// while (e.MoveNext()) yield return null;
		RuntimeObject* L_17 = __this->___U3CeU3E5__2_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
		if (L_18)
		{
			goto IL_00de;
		}
	}
	{
		// ShaderProperty.Init();
		il2cpp_codegen_runtime_class_init_inline(ShaderProperty_t625FA536CBA9625A15B4BBF8F53780471C4A5609_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = ShaderProperty_Init_m539FFDE7B100C6207C1147D3F5FF0DDA5775B00C(NULL);
		// AnimatorType.init();
		il2cpp_codegen_runtime_class_init_inline(AnimatorType_t2719C9EFD4BE3BDFAA0E523621EFF5BBF6E0DB5C_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = AnimatorType_init_mE36AF259C78329DFD5495FD2FC5C973392A6D203(NULL);
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object main.GameStarter/<start_aot>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cstart_aotU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7203284395F1507856C1C9BD9757701E8A1BE2B3 (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void main.GameStarter/<start_aot>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_aotU3Ed__7_System_Collections_IEnumerator_Reset_m8B2106815643099E4BBCA1C0BCC073A8C7A90921 (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cstart_aotU3Ed__7_System_Collections_IEnumerator_Reset_m8B2106815643099E4BBCA1C0BCC073A8C7A90921_RuntimeMethod_var)));
	}
}
// System.Object main.GameStarter/<start_aot>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cstart_aotU3Ed__7_System_Collections_IEnumerator_get_Current_m7BB3E98DD07408B181DF400200B9CFF851DD995A (U3Cstart_aotU3Ed__7_tF4DA802014A7020EA2739B120FC095DB08471D27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void main.GameStarter/<load_hotfix>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cload_hotfixU3Ed__8__ctor_m2AE8AEB91CC85E8CB0B17495C68554F2E6EDF422 (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void main.GameStarter/<load_hotfix>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cload_hotfixU3Ed__8_System_IDisposable_Dispose_mDEF5A15AABBEDE6F637B5A6BA958331B82236A6B (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean main.GameStarter/<load_hotfix>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cload_hotfixU3Ed__8_MoveNext_m7313032A7E32BA1DBA6AF4722B92C8B48303ACF0 (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral554571D55E9D21ECAD0EC943A1178FA512E67F58);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_00e6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IEnumerator e = BreakStep.Pause("load hot fix");
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = BreakStep_Pause_m2D447F746C20B5E68215C82324DE79C03A9033D6(_stringLiteral554571D55E9D21ECAD0EC943A1178FA512E67F58, NULL);
		__this->___U3CeU3E5__2_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_3);
		goto IL_0052;
	}

IL_003b:
	{
		// while (e.MoveNext()) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0052:
	{
		// while (e.MoveNext()) yield return null;
		RuntimeObject* L_4 = __this->___U3CeU3E5__2_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// IAotLoader aot = AotLoaderFactory.GetLoader();
		RuntimeObject* L_6;
		L_6 = AotLoaderFactory_GetLoader_mAA22E171067660DF4F083D0B7DB730DF91D77FA2(NULL);
		V_2 = L_6;
		// aot.loaderBar = new AotLoaderSetting {
		//     bar = hotfixBar,
		//     prefab = hotfixPrefab
		// };
		RuntimeObject* L_7 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58));
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___hotfixBar_5;
		(&V_3)->___bar_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___bar_0), (void*)L_9);
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->___hotfixPrefab_6;
		(&V_3)->___prefab_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___prefab_1), (void*)L_11);
		AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58 L_12 = V_3;
		NullCheck(L_7);
		InterfaceActionInvoker1< AotLoaderSetting_tCE250C81DD84F4F23467965BCEF435F2D0F2DC58 >::Invoke(0 /* System.Void pure.assetdb.IAotLoader::set_loaderBar(pure.assetdb.AotLoaderSetting) */, IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var, L_7, L_12);
		// aot.root = gameObject;
		RuntimeObject* L_13 = V_2;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* System.Void pure.assetdb.IAotLoader::set_root(UnityEngine.GameObject) */, IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var, L_13, L_15);
		// aot.assemblies = args.assemblies;
		RuntimeObject* L_16 = V_2;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_17 = V_1;
		NullCheck(L_17);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_18 = L_17->___args_4;
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___assemblies_13;
		NullCheck(L_16);
		InterfaceActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(3 /* System.Void pure.assetdb.IAotLoader::set_assemblies(System.String[]) */, IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var, L_16, L_19);
		// aot.metadatas = HotfixMeta.metadatas;
		RuntimeObject* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ((HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_StaticFields*)il2cpp_codegen_static_fields_for(HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var))->___metadatas_0;
		NullCheck(L_20);
		InterfaceActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(4 /* System.Void pure.assetdb.IAotLoader::set_metadatas(System.String[]) */, IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var, L_20, L_21);
		// aot.metaUploader = HotfixMeta.GetMetaUploader();
		RuntimeObject* L_22 = V_2;
		UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539* L_23;
		L_23 = HotfixMeta_GetMetaUploader_m82225031077B870B7DE34D703787F0A93B9AE262(NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539* >::Invoke(2 /* System.Void pure.assetdb.IAotLoader::set_metaUploader(pure.assetdb.UpLoadHotfixMetaCallback) */, IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var, L_22, L_23);
		// IEnumerator e = aot.Start();
		RuntimeObject* L_24 = V_2;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IEnumerator pure.assetdb.IAotLoader::Start() */, IAotLoader_t0331900DEF97777C282B2D5D1B69C295163000EF_il2cpp_TypeInfo_var, L_24);
		__this->___U3CeU3E5__2_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_25);
		goto IL_00ed;
	}

IL_00d6:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00e6:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ed:
	{
		// while (e.MoveNext()) {
		RuntimeObject* L_26 = __this->___U3CeU3E5__2_3;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_00d6;
		}
	}
	{
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object main.GameStarter/<load_hotfix>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cload_hotfixU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3FB685B8D061F0C71578CF8882F5A139FC3880E6 (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void main.GameStarter/<load_hotfix>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cload_hotfixU3Ed__8_System_Collections_IEnumerator_Reset_mADDE99C81A339FED1A120B367A35FA3BFBDC395D (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cload_hotfixU3Ed__8_System_Collections_IEnumerator_Reset_mADDE99C81A339FED1A120B367A35FA3BFBDC395D_RuntimeMethod_var)));
	}
}
// System.Object main.GameStarter/<load_hotfix>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cload_hotfixU3Ed__8_System_Collections_IEnumerator_get_Current_mC1C62B20B8A07AB048FF921B97F48ACAE0B42490 (U3Cload_hotfixU3Ed__8_t9283CFC5AEB583090CA92983E3F10B2095EBDD79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void main.GameStarter/<start_hotfix>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_hotfixU3Ed__9__ctor_mBF7D0807F173CF368439015B8FA92F284686A812 (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void main.GameStarter/<start_hotfix>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_hotfixU3Ed__9_System_IDisposable_Dispose_mF708DC33BBA4B90812C1CF5312B6601CD3F83587 (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean main.GameStarter/<start_hotfix>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cstart_hotfixU3Ed__9_MoveNext_mCF0CDC1DF703A77B711B9E4AEEBC8F40ACA83FDC (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HotfixDll_tFD498AE6E41B480BC240E95D3C88C1339BE0DEBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51D70BC29AF350AC37AA0E4C5D5EE75592C82D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* V_1 = NULL;
	Assembly_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	Type_t* G_B7_0 = NULL;
	Type_t* G_B6_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!HotfixDll.TryGet("hotfix", out Assembly a)) {
		il2cpp_codegen_runtime_class_init_inline(HotfixDll_tFD498AE6E41B480BC240E95D3C88C1339BE0DEBF_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = HotfixDll_TryGet_m51653E75BB9216847F662A0C4460BA4C62411C7C(_stringLiteral51D70BC29AF350AC37AA0E4C5D5EE75592C82D86, (&V_2), NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// throw new Exception("Assemly game is nil");
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2CD57D6EC4E24C9B0FB328523650FAE1AC32923A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cstart_hotfixU3Ed__9_MoveNext_mCF0CDC1DF703A77B711B9E4AEEBC8F40ACA83FDC_RuntimeMethod_var)));
	}

IL_003a:
	{
		// Type type = a.GetType(args.activity);
		Assembly_t* L_6 = V_2;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_7 = V_1;
		NullCheck(L_7);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_8 = L_7->___args_4;
		NullCheck(L_8);
		String_t* L_9 = L_8->___activity_14;
		NullCheck(L_6);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(34 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_6, L_9);
		// if (type == null) {
		Type_t* L_11 = L_10;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, (Type_t*)NULL, NULL);
		G_B6_0 = L_11;
		if (!L_12)
		{
			G_B7_0 = L_11;
			goto IL_006f;
		}
	}
	{
		// throw new Exception($"{args.activity} is nil");
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_13 = V_1;
		NullCheck(L_13);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_14 = L_13->___args_4;
		NullCheck(L_14);
		String_t* L_15 = L_14->___activity_14;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral543AED8A8913A2DCF3883A807BB21AFC84AB539F)), NULL);
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cstart_hotfixU3Ed__9_MoveNext_mCF0CDC1DF703A77B711B9E4AEEBC8F40ACA83FDC_RuntimeMethod_var)));
	}

IL_006f:
	{
		// MethodInfo call = type.GetMethod("Start", BindingFlags.Static | BindingFlags.Public);
		NullCheck(G_B7_0);
		MethodInfo_t* L_18;
		L_18 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(G_B7_0, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, ((int32_t)24), NULL);
		V_3 = L_18;
		// if (call == null) {
		MethodInfo_t* L_19 = V_3;
		bool L_20;
		L_20 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_19, (MethodInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		// throw new Exception($"{args.activity}.Start is nil");
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_21 = V_1;
		NullCheck(L_21);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_22 = L_21->___args_4;
		NullCheck(L_22);
		String_t* L_23 = L_22->___activity_14;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47DAE3A2715B6E7B25BF2B0A7200616EB6CD6D64)), NULL);
		Exception_t* L_25 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cstart_hotfixU3Ed__9_MoveNext_mCF0CDC1DF703A77B711B9E4AEEBC8F40ACA83FDC_RuntimeMethod_var)));
	}

IL_00a0:
	{
		// IEnumerator e = (IEnumerator)call.Invoke(null, new object[] { args });
		MethodInfo_t* L_26 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		GameStarter_tB8FE30FB6267606466D310033B17A850B3A6B49C* L_29 = V_1;
		NullCheck(L_29);
		GameArguments_tD4701D5FC4061266979498F145F6E4E64438362D* L_30 = L_29->___args_4;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		NullCheck(L_26);
		RuntimeObject* L_31;
		L_31 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_26, NULL, L_28, NULL);
		__this->___U3CeU3E5__2_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_31, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_31, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var)));
		goto IL_00da;
	}

IL_00c3:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00da:
	{
		// while (e.MoveNext()) {
		RuntimeObject* L_32 = __this->___U3CeU3E5__2_3;
		NullCheck(L_32);
		bool L_33;
		L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
		if (L_33)
		{
			goto IL_00c3;
		}
	}
	{
		// }
		__this->___U3CeU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)(RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object main.GameStarter/<start_hotfix>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cstart_hotfixU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3E50C388736641D377A8B975CCB5AD636FBEAC22 (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void main.GameStarter/<start_hotfix>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cstart_hotfixU3Ed__9_System_Collections_IEnumerator_Reset_mB3A22B5B9DF56E7C396E3E7D51D2BFF63C5A2754 (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cstart_hotfixU3Ed__9_System_Collections_IEnumerator_Reset_mB3A22B5B9DF56E7C396E3E7D51D2BFF63C5A2754_RuntimeMethod_var)));
	}
}
// System.Object main.GameStarter/<start_hotfix>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cstart_hotfixU3Ed__9_System_Collections_IEnumerator_get_Current_mC8CBF7598EA05401A0EAAC5B7D85C6806FA6A0E4 (U3Cstart_hotfixU3Ed__9_tAD9A0088216F307D0E9612177D381D7A37CAE164* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Int32 main.HotfixMeta::load_metadata(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HotfixMeta_load_metadata_m97BB5A108C5C946A41AF182089A1E0C81916FD5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, String_t* ___1_meta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FF2350A4DF5936FC31181B793F2F165C42E94F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(buffer, HomologousImageMode.SuperSet);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8(L_0, 1, NULL);
		V_0 = L_1;
		// if (err != LoadImageErrorCode.OK) {
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.LogError($"load meta {meta} fail, err:{err}");
		String_t* L_3 = ___1_meta;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB3FF2350A4DF5936FC31181B793F2F165C42E94F, L_3, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
	}

IL_0021:
	{
		// return (int)err;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// pure.assetdb.UpLoadHotfixMetaCallback main.HotfixMeta::GetMetaUploader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539* HotfixMeta_GetMetaUploader_m82225031077B870B7DE34D703787F0A93B9AE262 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HotfixMeta_load_metadata_m97BB5A108C5C946A41AF182089A1E0C81916FD5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return load_metadata;
		UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539* L_0 = (UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539*)il2cpp_codegen_object_new(UpLoadHotfixMetaCallback_tB427B069B4BF1CEC983829156D46D410F2925539_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UpLoadHotfixMetaCallback__ctor_mF8A4B8D19D679C0D5DC94994BBB7B29FBF505F0B(L_0, NULL, (intptr_t)((void*)HotfixMeta_load_metadata_m97BB5A108C5C946A41AF182089A1E0C81916FD5E_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void main.HotfixMeta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotfixMeta__cctor_m96469E38E78FB2B030858998D732DA198277C281 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		//     public static readonly string[] metadatas = {
		//     "System.Core.dll",
		//     "UnityEngine.AssetBundleModule.dll",
		//     "UnityEngine.CoreModule.dll",
		//     "mscorlib.dll",
		//     "xlua.dll",
		//     "pure.dll"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE55DA8BFEECF6A3A4DBF25AE911B7F07FF3F8FC6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE38392B6AB79BD81134C1B8D9B779194D9533854);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral37AF0185C110E1E87AF6C544CFFB2494F0B30960);
		((HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_StaticFields*)il2cpp_codegen_static_fields_for(HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var))->___metadatas_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_StaticFields*)il2cpp_codegen_static_fields_for(HotfixMeta_t500F23F16D2D34F75CB5299F47A84F03F52C75A0_il2cpp_TypeInfo_var))->___metadatas_0), (void*)L_6);
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
// System.Void main.LayerSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerSetting__ctor_m009C4DC374B03476FDCB5AFB3BC623F1C8ACFFF7 (LayerSetting_tB4A4BCE217870927B3BCEE8D1C8A3E60CC06F27A* __this, const RuntimeMethod* method) 
{
	{
		LayerSetting_Dll__ctor_mD41D4490DF845C0A6F03094402DDD21AC38702A6(__this, NULL);
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
// System.Void main.NativeBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge__ctor_mA9F0F641E91A0117293B2F519A46AD6A8996AF7A (NativeBridge_t715A577EF887D7FF37D0028EBD2D388868601817* __this, const RuntimeMethod* method) 
{
	{
		NativeBridge_Dll__ctor_mA3115A0F857AC21085557CF85B047A6C9DDFF9AA(__this, NULL);
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
// System.Void main.PreloadImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreloadImage__ctor_m73F15D28C362C4234984190AD3B386F01125F1CA (PreloadImage_t94ED7718C3F46F3E92211F9F02E2FF324CED16B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PImage_Dll_tF99B9F22114F266197ED2E2BDFA392CD542E6ED6_il2cpp_TypeInfo_var);
		PImage_Dll__ctor_mFB7B3E5B1283E3C23129FAB15F8530F4DE87159C(__this, NULL);
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
// System.Void main.PreloadText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreloadText__ctor_m05331922C97570C40CCD34A5A50A3DEACFEBC6AA (PreloadText_tBD5762938C1E13C5F5F7A061A52C33A8CDC00FAF* __this, const RuntimeMethod* method) 
{
	{
		Text__ctor_mE28BC6E42B4715F23401A9379C9681867A0631C1(__this, NULL);
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
// System.Void main.PreloadUIPrefabRoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreloadUIPrefabRoot__ctor_mDF34A0693DEC8663FDFCE2B5625A8E10F9E1C7ED (PreloadUIPrefabRoot_tE94C95E20B60568B32F3D4C142206F746EBC4A36* __this, const RuntimeMethod* method) 
{
	{
		UIPrefabRoot_Dll__ctor_mA5B879C32014F2F3C4AE6787F334A35149427A77(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BreakStep_SetText_mC80048C5F084931DB4CFD8C0464DDF8079A5016C_inline (RuntimeObject* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var);
		((BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_StaticFields*)il2cpp_codegen_static_fields_for(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var))->___s_text_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_StaticFields*)il2cpp_codegen_static_fields_for(BreakStep_tBBF2E42AFC9E09D461A11D9624B54ED978345A33_il2cpp_TypeInfo_var))->___s_text_3), (void*)L_0);
		return;
	}
}
