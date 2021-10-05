#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameUI
struct GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF;
// Guard
struct Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Guard/<FollowPath>d__15
struct U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C;
// Guard/<TurnToFace>d__16
struct U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral60D5F904110294120C4305BA15CB1B4287D59E02;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUI_ShowGameLoseUI_mCE2876BB1DB0C5BB3A0A3CD5499C73EDDE8315C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUI_ShowGameWinUI_m052E47A7937DCE82DFADAE0A55D15DFD9F69C8B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFollowPathU3Ed__15_System_Collections_IEnumerator_Reset_mE9C880FF5050DBFC5068FE490AFE4E888182C016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTurnToFaceU3Ed__16_System_Collections_IEnumerator_Reset_mFDD2FF6A982B595F6B134F02F50A293CE73CF1CC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Guard/<FollowPath>d__15
struct U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C  : public RuntimeObject
{
public:
	// System.Int32 Guard/<FollowPath>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Guard/<FollowPath>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Guard Guard/<FollowPath>d__15::<>4__this
	Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3[] Guard/<FollowPath>d__15::wayPoint
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___wayPoint_3;
	// System.Int32 Guard/<FollowPath>d__15::<targetWaypointIndex>5__2
	int32_t ___U3CtargetWaypointIndexU3E5__2_4;
	// UnityEngine.Vector3 Guard/<FollowPath>d__15::<targetWaypoint>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtargetWaypointU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C, ___U3CU3E4__this_2)); }
	inline Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_wayPoint_3() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C, ___wayPoint_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_wayPoint_3() const { return ___wayPoint_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_wayPoint_3() { return &___wayPoint_3; }
	inline void set_wayPoint_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___wayPoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wayPoint_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetWaypointIndexU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C, ___U3CtargetWaypointIndexU3E5__2_4)); }
	inline int32_t get_U3CtargetWaypointIndexU3E5__2_4() const { return ___U3CtargetWaypointIndexU3E5__2_4; }
	inline int32_t* get_address_of_U3CtargetWaypointIndexU3E5__2_4() { return &___U3CtargetWaypointIndexU3E5__2_4; }
	inline void set_U3CtargetWaypointIndexU3E5__2_4(int32_t value)
	{
		___U3CtargetWaypointIndexU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CtargetWaypointU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C, ___U3CtargetWaypointU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtargetWaypointU3E5__3_5() const { return ___U3CtargetWaypointU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtargetWaypointU3E5__3_5() { return &___U3CtargetWaypointU3E5__3_5; }
	inline void set_U3CtargetWaypointU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtargetWaypointU3E5__3_5 = value;
	}
};


// Guard/<TurnToFace>d__16
struct U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C  : public RuntimeObject
{
public:
	// System.Int32 Guard/<TurnToFace>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Guard/<TurnToFace>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector3 Guard/<TurnToFace>d__16::LookTarget
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LookTarget_2;
	// Guard Guard/<TurnToFace>d__16::<>4__this
	Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * ___U3CU3E4__this_3;
	// System.Single Guard/<TurnToFace>d__16::<targetAngle>5__2
	float ___U3CtargetAngleU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_LookTarget_2() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C, ___LookTarget_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LookTarget_2() const { return ___LookTarget_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LookTarget_2() { return &___LookTarget_2; }
	inline void set_LookTarget_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LookTarget_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C, ___U3CU3E4__this_3)); }
	inline Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetAngleU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C, ___U3CtargetAngleU3E5__2_4)); }
	inline float get_U3CtargetAngleU3E5__2_4() const { return ___U3CtargetAngleU3E5__2_4; }
	inline float* get_address_of_U3CtargetAngleU3E5__2_4() { return &___U3CtargetAngleU3E5__2_4; }
	inline void set_U3CtargetAngleU3E5__2_4(float value)
	{
		___U3CtargetAngleU3E5__2_4 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameUI
struct GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameUI::GameWinUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameWinUI_4;
	// UnityEngine.GameObject GameUI::GameLoseUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameLoseUI_5;
	// UnityEngine.UI.Text GameUI::SecondsToWin
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SecondsToWin_6;
	// System.Boolean GameUI::gameIsOver
	bool ___gameIsOver_7;

public:
	inline static int32_t get_offset_of_GameWinUI_4() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___GameWinUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameWinUI_4() const { return ___GameWinUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameWinUI_4() { return &___GameWinUI_4; }
	inline void set_GameWinUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameWinUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameWinUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_GameLoseUI_5() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___GameLoseUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameLoseUI_5() const { return ___GameLoseUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameLoseUI_5() { return &___GameLoseUI_5; }
	inline void set_GameLoseUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameLoseUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameLoseUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_SecondsToWin_6() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___SecondsToWin_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SecondsToWin_6() const { return ___SecondsToWin_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SecondsToWin_6() { return &___SecondsToWin_6; }
	inline void set_SecondsToWin_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SecondsToWin_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SecondsToWin_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameIsOver_7() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___gameIsOver_7)); }
	inline bool get_gameIsOver_7() const { return ___gameIsOver_7; }
	inline bool* get_address_of_gameIsOver_7() { return &___gameIsOver_7; }
	inline void set_gameIsOver_7(bool value)
	{
		___gameIsOver_7 = value;
	}
};


// Guard
struct Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Guard::PathHolder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PathHolder_5;
	// System.Single Guard::speed
	float ___speed_6;
	// System.Single Guard::delay
	float ___delay_7;
	// UnityEngine.LayerMask Guard::ViewMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___ViewMask_8;
	// UnityEngine.Light Guard::spotlight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___spotlight_9;
	// System.Single Guard::ViewDistance
	float ___ViewDistance_10;
	// System.Single Guard::ViewAngle
	float ___ViewAngle_11;
	// UnityEngine.Transform Guard::PlayerPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PlayerPosition_12;
	// UnityEngine.Color Guard::OriginalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___OriginalColor_13;

public:
	inline static int32_t get_offset_of_PathHolder_5() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___PathHolder_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PathHolder_5() const { return ___PathHolder_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PathHolder_5() { return &___PathHolder_5; }
	inline void set_PathHolder_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PathHolder_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathHolder_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_delay_7() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___delay_7)); }
	inline float get_delay_7() const { return ___delay_7; }
	inline float* get_address_of_delay_7() { return &___delay_7; }
	inline void set_delay_7(float value)
	{
		___delay_7 = value;
	}

	inline static int32_t get_offset_of_ViewMask_8() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___ViewMask_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_ViewMask_8() const { return ___ViewMask_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_ViewMask_8() { return &___ViewMask_8; }
	inline void set_ViewMask_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___ViewMask_8 = value;
	}

	inline static int32_t get_offset_of_spotlight_9() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___spotlight_9)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_spotlight_9() const { return ___spotlight_9; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_spotlight_9() { return &___spotlight_9; }
	inline void set_spotlight_9(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___spotlight_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spotlight_9), (void*)value);
	}

	inline static int32_t get_offset_of_ViewDistance_10() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___ViewDistance_10)); }
	inline float get_ViewDistance_10() const { return ___ViewDistance_10; }
	inline float* get_address_of_ViewDistance_10() { return &___ViewDistance_10; }
	inline void set_ViewDistance_10(float value)
	{
		___ViewDistance_10 = value;
	}

	inline static int32_t get_offset_of_ViewAngle_11() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___ViewAngle_11)); }
	inline float get_ViewAngle_11() const { return ___ViewAngle_11; }
	inline float* get_address_of_ViewAngle_11() { return &___ViewAngle_11; }
	inline void set_ViewAngle_11(float value)
	{
		___ViewAngle_11 = value;
	}

	inline static int32_t get_offset_of_PlayerPosition_12() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___PlayerPosition_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PlayerPosition_12() const { return ___PlayerPosition_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PlayerPosition_12() { return &___PlayerPosition_12; }
	inline void set_PlayerPosition_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PlayerPosition_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerPosition_12), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalColor_13() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7, ___OriginalColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_OriginalColor_13() const { return ___OriginalColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_OriginalColor_13() { return &___OriginalColor_13; }
	inline void set_OriginalColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___OriginalColor_13 = value;
	}
};

struct Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields
{
public:
	// System.Action Guard::OnPlayerSpotted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnPlayerSpotted_4;

public:
	inline static int32_t get_offset_of_OnPlayerSpotted_4() { return static_cast<int32_t>(offsetof(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields, ___OnPlayerSpotted_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnPlayerSpotted_4() const { return ___OnPlayerSpotted_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnPlayerSpotted_4() { return &___OnPlayerSpotted_4; }
	inline void set_OnPlayerSpotted_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnPlayerSpotted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPlayerSpotted_4), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::speed
	float ___speed_4;
	// System.Single Player::smoothMoveTime
	float ___smoothMoveTime_5;
	// System.Single Player::TurnSpeed
	float ___TurnSpeed_6;
	// System.Action Player::OnReachedCheckpoint
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnReachedCheckpoint_7;
	// UnityEngine.Transform Player::CheckPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___CheckPoint_8;
	// System.Single Player::CurrAngle
	float ___CurrAngle_9;
	// System.Single Player::smoothInputMag
	float ___smoothInputMag_10;
	// System.Single Player::smoothVel
	float ___smoothVel_11;
	// UnityEngine.Vector3 Player::Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Velocity_12;
	// System.Boolean Player::disabled
	bool ___disabled_13;
	// UnityEngine.Rigidbody Player::rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbody_14;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_smoothMoveTime_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___smoothMoveTime_5)); }
	inline float get_smoothMoveTime_5() const { return ___smoothMoveTime_5; }
	inline float* get_address_of_smoothMoveTime_5() { return &___smoothMoveTime_5; }
	inline void set_smoothMoveTime_5(float value)
	{
		___smoothMoveTime_5 = value;
	}

	inline static int32_t get_offset_of_TurnSpeed_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___TurnSpeed_6)); }
	inline float get_TurnSpeed_6() const { return ___TurnSpeed_6; }
	inline float* get_address_of_TurnSpeed_6() { return &___TurnSpeed_6; }
	inline void set_TurnSpeed_6(float value)
	{
		___TurnSpeed_6 = value;
	}

	inline static int32_t get_offset_of_OnReachedCheckpoint_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___OnReachedCheckpoint_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnReachedCheckpoint_7() const { return ___OnReachedCheckpoint_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnReachedCheckpoint_7() { return &___OnReachedCheckpoint_7; }
	inline void set_OnReachedCheckpoint_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnReachedCheckpoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReachedCheckpoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_CheckPoint_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___CheckPoint_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_CheckPoint_8() const { return ___CheckPoint_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_CheckPoint_8() { return &___CheckPoint_8; }
	inline void set_CheckPoint_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___CheckPoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckPoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_CurrAngle_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___CurrAngle_9)); }
	inline float get_CurrAngle_9() const { return ___CurrAngle_9; }
	inline float* get_address_of_CurrAngle_9() { return &___CurrAngle_9; }
	inline void set_CurrAngle_9(float value)
	{
		___CurrAngle_9 = value;
	}

	inline static int32_t get_offset_of_smoothInputMag_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___smoothInputMag_10)); }
	inline float get_smoothInputMag_10() const { return ___smoothInputMag_10; }
	inline float* get_address_of_smoothInputMag_10() { return &___smoothInputMag_10; }
	inline void set_smoothInputMag_10(float value)
	{
		___smoothInputMag_10 = value;
	}

	inline static int32_t get_offset_of_smoothVel_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___smoothVel_11)); }
	inline float get_smoothVel_11() const { return ___smoothVel_11; }
	inline float* get_address_of_smoothVel_11() { return &___smoothVel_11; }
	inline void set_smoothVel_11(float value)
	{
		___smoothVel_11 = value;
	}

	inline static int32_t get_offset_of_Velocity_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___Velocity_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Velocity_12() const { return ___Velocity_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Velocity_12() { return &___Velocity_12; }
	inline void set_Velocity_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Velocity_12 = value;
	}

	inline static int32_t get_offset_of_disabled_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___disabled_13)); }
	inline bool get_disabled_13() const { return ___disabled_13; }
	inline bool* get_address_of_disabled_13() { return &___disabled_13; }
	inline void set_disabled_13(bool value)
	{
		___disabled_13 = value;
	}

	inline static int32_t get_offset_of_rigidbody_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___rigidbody_14)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidbody_14() const { return ___rigidbody_14; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidbody_14() { return &___rigidbody_14; }
	inline void set_rigidbody_14(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidbody_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody_14), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mBE0814B07DA8DDD57407CC2F0C8051AEC27D34BC_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Guard::add_OnPlayerSpotted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_add_OnPlayerSpotted_mCC53852FD901E6DB158A4BAA7BBFD66D6BE69C56 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864 (const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mBE0814B07DA8DDD57407CC2F0C8051AEC27D34BC_gshared)(method);
}
// System.Void Player::add_OnReachedCheckpoint(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnReachedCheckpoint_m8FABB16D5D0126A34AA68F45E411F7BDB6D68ABB (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void GameUI::OnGameOver(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_OnGameOver_mDBB1868F4A2FBB7E74452CD9EEB607D37848EC70 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverUI0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB (const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Guard::remove_OnPlayerSpotted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_remove_OnPlayerSpotted_m23385A3F8E7D72D964E80E56ABB8F20691C2F1F4 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Player::remove_OnReachedCheckpoint(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnReachedCheckpoint_mF893397822628B77C1B4A5B11C29A05308D679E4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m7BFB3B329103477AFFBB9F9E059718AB212D5FD7 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Light_get_color_mB587B97487FFA7F7E0415F270283E48D2D901F4B (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Guard::FollowPath(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Guard_FollowPath_m92A7BC427EC51F90F6B6C7579CF9ABFEB2FFC4A2 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___wayPoint0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean Guard::PlayerIsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guard_PlayerIsVisible_m5A660FF19C4805B89C1FF8B8C46A4A20C0B3F777 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m25738A0CE44A9EDC8D2259CD95313E1F5727839D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Guard/<FollowPath>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__15__ctor_m4F3C78212842AD61217EDCB29D364B8F0C10F2BD (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Guard/<TurnToFace>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnToFaceU3Ed__16__ctor_mD6CDBC1450A457D10D6780BC67B98220615A5049 (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m6A298166BC9A889DFB7D69D0B04CFDAB9A008946 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m08A1449DC0D514A70065CD80D067597765BDA5B2 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Player::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Collections.IEnumerator Guard::TurnToFace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Guard_TurnToFace_mE04DE276335210DA10C1420C04FC32D5B8ABC004 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LookTarget0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::MoveTowardsAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_MoveTowardsAngle_m854CEFD9E0C625287A487C0F60E3767A91DDD3E5 (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE (float ___current0, float ___target1, const RuntimeMethod* method);
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
// System.Void GameUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Start_m1CA9A7CB68A0628D1644C61551CDA8280104C4C4 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_ShowGameLoseUI_mCE2876BB1DB0C5BB3A0A3CD5499C73EDDE8315C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_ShowGameWinUI_m052E47A7937DCE82DFADAE0A55D15DFD9F69C8B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Guard.OnPlayerSpotted += ShowGameLoseUI;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)GameUI_ShowGameLoseUI_mCE2876BB1DB0C5BB3A0A3CD5499C73EDDE8315C2_RuntimeMethod_var), /*hidden argument*/NULL);
		Guard_add_OnPlayerSpotted_mCC53852FD901E6DB158A4BAA7BBFD66D6BE69C56(L_0, /*hidden argument*/NULL);
		// FindObjectOfType<Player>().OnReachedCheckpoint += ShowGameWinUI;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864_RuntimeMethod_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)GameUI_ShowGameWinUI_m052E47A7937DCE82DFADAE0A55D15DFD9F69C8B9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Player_add_OnReachedCheckpoint_m8FABB16D5D0126A34AA68F45E411F7BDB6D68ABB(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Update_mE57AADB681290A589171B63C9FBEC05A4291CFC2 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameIsOver)
		bool L_0 = __this->get_gameIsOver_7();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// { SceneManager.LoadScene(0); }
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void GameUI::ShowGameLoseUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_ShowGameLoseUI_mCE2876BB1DB0C5BB3A0A3CD5499C73EDDE8315C2 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	{
		// OnGameOver(GameLoseUI);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameLoseUI_5();
		GameUI_OnGameOver_mDBB1868F4A2FBB7E74452CD9EEB607D37848EC70(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::ShowGameWinUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_ShowGameWinUI_m052E47A7937DCE82DFADAE0A55D15DFD9F69C8B9 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	{
		// OnGameOver(GameWinUI);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameWinUI_4();
		GameUI_OnGameOver_mDBB1868F4A2FBB7E74452CD9EEB607D37848EC70(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::OnGameOver(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_OnGameOver_mDBB1868F4A2FBB7E74452CD9EEB607D37848EC70 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverUI0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_ShowGameLoseUI_mCE2876BB1DB0C5BB3A0A3CD5499C73EDDE8315C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_ShowGameWinUI_m052E47A7937DCE82DFADAE0A55D15DFD9F69C8B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D5F904110294120C4305BA15CB1B4287D59E02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// gameOverUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameOverUI0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// gameIsOver = true;
		__this->set_gameIsOver_7((bool)1);
		// SecondsToWin.text = "Congrats, you won in " + (Mathf.Round(Time.timeSinceLevelLoad * 10) / 10f).ToString() + "s";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_SecondsToWin_6();
		float L_2;
		L_2 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_2, (float)(10.0f))));
		V_0 = ((float)((float)L_3/(float)(10.0f)));
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral60D5F904110294120C4305BA15CB1B4287D59E02, L_4, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// Guard.OnPlayerSpotted -= ShowGameLoseUI;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)GameUI_ShowGameLoseUI_mCE2876BB1DB0C5BB3A0A3CD5499C73EDDE8315C2_RuntimeMethod_var), /*hidden argument*/NULL);
		Guard_remove_OnPlayerSpotted_m23385A3F8E7D72D964E80E56ABB8F20691C2F1F4(L_6, /*hidden argument*/NULL);
		// FindObjectOfType<Player>().OnReachedCheckpoint -= ShowGameWinUI;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7;
		L_7 = Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1CD06E5C130360FE6E864D0F874EAE9A2B73E864_RuntimeMethod_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)GameUI_ShowGameWinUI_m052E47A7937DCE82DFADAE0A55D15DFD9F69C8B9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Player_remove_OnReachedCheckpoint_mF893397822628B77C1B4A5B11C29A05308D679E4(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI__ctor_mFD9EAD5759CDB73EA862B118656581AB9EEF3F38 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Guard::add_OnPlayerSpotted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_add_OnPlayerSpotted_mCC53852FD901E6DB158A4BAA7BBFD66D6BE69C56 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields*)il2cpp_codegen_static_fields_for(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var))->get_OnPlayerSpotted_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields*)il2cpp_codegen_static_fields_for(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var))->get_address_of_OnPlayerSpotted_4()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Guard::remove_OnPlayerSpotted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_remove_OnPlayerSpotted_m23385A3F8E7D72D964E80E56ABB8F20691C2F1F4 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields*)il2cpp_codegen_static_fields_for(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var))->get_OnPlayerSpotted_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields*)il2cpp_codegen_static_fields_for(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var))->get_address_of_OnPlayerSpotted_4()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Guard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_Start_mEFC6BB9943DF6F3439E849173BB6E4A256E6B5B1 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// ViewAngle = spotlight.spotAngle;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0 = __this->get_spotlight_9();
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m7BFB3B329103477AFFBB9F9E059718AB212D5FD7(L_0, /*hidden argument*/NULL);
		__this->set_ViewAngle_11(L_1);
		// OriginalColor = spotlight.color;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2 = __this->get_spotlight_9();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Light_get_color_mB587B97487FFA7F7E0415F270283E48D2D901F4B(L_2, /*hidden argument*/NULL);
		__this->set_OriginalColor_13(L_3);
		// Vector3[] waypoints = new Vector3[PathHolder.childCount];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_PathHolder_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_4, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		// for (int i = 0; i < waypoints.Length; i++)
		V_1 = 0;
		goto IL_006f;
	}

IL_0037:
	{
		// waypoints[i] = PathHolder.GetChild(i).position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = V_0;
		int32_t L_8 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_PathHolder_5();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12);
		// waypoints[i].y = transform.position.y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_y_3(L_17);
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006f:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_19 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		// StartCoroutine(FollowPath(waypoints));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = V_0;
		RuntimeObject* L_22;
		L_22 = Guard_FollowPath_m92A7BC427EC51F90F6B6C7579CF9ABFEB2FFC4A2(__this, L_21, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Guard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_Update_m79836B98D3D45FCA40A4E7B3FA6906A7DB2BE983 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerIsVisible())
		bool L_0;
		L_0 = Guard_PlayerIsVisible_m5A660FF19C4805B89C1FF8B8C46A4A20C0B3F777(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// spotlight.color = Color.red;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_1 = __this->get_spotlight_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_1);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_1, L_2, /*hidden argument*/NULL);
		// if(OnPlayerSpotted != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ((Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields*)il2cpp_codegen_static_fields_for(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var))->get_OnPlayerSpotted_4();
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// OnPlayerSpotted();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_StaticFields*)il2cpp_codegen_static_fields_for(Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7_il2cpp_TypeInfo_var))->get_OnPlayerSpotted_4();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002a:
	{
		// else spotlight.color = OriginalColor;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_5 = __this->get_spotlight_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_OriginalColor_13();
		NullCheck(L_5);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Boolean Guard::PlayerIsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guard_PlayerIsVisible_m5A660FF19C4805B89C1FF8B8C46A4A20C0B3F777 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 dir = PlayerPosition.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_PlayerPosition_12();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// float ValidAngle = Vector3.Angle(transform.forward, dir);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8;
		L_8 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (!Physics.Linecast(transform.position,PlayerPosition.position,ViewMask))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_PlayerPosition_12();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_13 = __this->get_ViewMask_8();
		int32_t L_14;
		L_14 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Physics_Linecast_m25738A0CE44A9EDC8D2259CD95313E1F5727839D(L_10, L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (dir.magnitude <= ViewDistance && Mathf.Abs(ValidAngle) <= ViewAngle / 2)
		float L_16;
		L_16 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_17 = __this->get_ViewDistance_10();
		if ((!(((float)L_16) <= ((float)L_17))))
		{
			goto IL_007b;
		}
	}
	{
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		float L_20 = __this->get_ViewAngle_11();
		if ((!(((float)L_19) <= ((float)((float)((float)L_20/(float)(2.0f)))))))
		{
			goto IL_007b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator Guard::FollowPath(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Guard_FollowPath_m92A7BC427EC51F90F6B6C7579CF9ABFEB2FFC4A2 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___wayPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * L_0 = (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C *)il2cpp_codegen_object_new(U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C_il2cpp_TypeInfo_var);
		U3CFollowPathU3Ed__15__ctor_m4F3C78212842AD61217EDCB29D364B8F0C10F2BD(L_0, 0, /*hidden argument*/NULL);
		U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * L_2 = L_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = ___wayPoint0;
		NullCheck(L_2);
		L_2->set_wayPoint_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Guard::TurnToFace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Guard_TurnToFace_mE04DE276335210DA10C1420C04FC32D5B8ABC004 (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LookTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * L_0 = (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C *)il2cpp_codegen_object_new(U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C_il2cpp_TypeInfo_var);
		U3CTurnToFaceU3Ed__16__ctor_mD6CDBC1450A457D10D6780BC67B98220615A5049(L_0, 0, /*hidden argument*/NULL);
		U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___LookTarget0;
		NullCheck(L_2);
		L_2->set_LookTarget_2(L_3);
		return L_2;
	}
}
// System.Void Guard::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard_OnDrawGizmos_m536BB1DD95189B5B554BF05DDC31BB0B32CB578F (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Vector3 startPosition = PathHolder.GetChild(0).position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_PathHolder_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 previousPosition = startPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		V_1 = L_3;
		// foreach (Transform waypoint in PathHolder)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_PathHolder_5();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0020:
	try
	{// begin try (depth: 1)
		{
			goto IL_0051;
		}

IL_0022:
		{
			// foreach (Transform waypoint in PathHolder)
			RuntimeObject* L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			V_3 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// Gizmos.DrawSphere(waypoint.position, 0.3f);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_3;
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
			Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91(L_9, (0.300000012f), /*hidden argument*/NULL);
			// Gizmos.DrawLine(previousPosition, waypoint.position);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_3;
			NullCheck(L_11);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
			Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_10, L_12, /*hidden argument*/NULL);
			// previousPosition = waypoint.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_3;
			NullCheck(L_13);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
			V_1 = L_14;
		}

IL_0051:
		{
			// foreach (Transform waypoint in PathHolder)
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0022;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005b);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_18 = V_4;
			if (!L_18)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			RuntimeObject* L_19 = V_4;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(91)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// Gizmos.DrawLine(previousPosition, startPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Guard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guard__ctor_mD0122F944BB8D2536C536345C77B74377174A1AE (Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 5;
		__this->set_speed_6((5.0f));
		// public float delay = 0.5f;
		__this->set_delay_7((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::add_OnReachedCheckpoint(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnReachedCheckpoint_m8FABB16D5D0126A34AA68F45E411F7BDB6D68ABB (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnReachedCheckpoint_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnReachedCheckpoint_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_OnReachedCheckpoint(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnReachedCheckpoint_mF893397822628B77C1B4A5B11C29A05308D679E4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnReachedCheckpoint_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnReachedCheckpoint_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Guard.OnPlayerSpotted += Disable;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5_RuntimeMethod_var), /*hidden argument*/NULL);
		Guard_add_OnPlayerSpotted_mCC53852FD901E6DB158A4BAA7BBFD66D6BE69C56(L_0, /*hidden argument*/NULL);
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		__this->set_rigidbody_14(L_1);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 movDir = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(!disabled)
		bool L_1 = __this->get_disabled_13();
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		// movDir = new Vector3(Input.GetAxisRaw("Horizontal"), 0, Input.GetAxisRaw("Vertical")).normalized;
		float L_2;
		L_2 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_3;
		L_3 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0035:
	{
		// float inputMag = movDir.magnitude;
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_6;
		// smoothInputMag = Mathf.SmoothDamp(smoothInputMag, inputMag, ref smoothVel, smoothMoveTime);
		float L_7 = __this->get_smoothInputMag_10();
		float L_8 = V_1;
		float* L_9 = __this->get_address_of_smoothVel_11();
		float L_10 = __this->get_smoothMoveTime_5();
		float L_11;
		L_11 = Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652(L_7, L_8, (float*)L_9, L_10, /*hidden argument*/NULL);
		__this->set_smoothInputMag_10(L_11);
		// Velocity = transform.forward * speed * smoothInputMag;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_smoothInputMag_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		__this->set_Velocity_12(L_17);
		// float angle = Mathf.Atan2(movDir.x, movDir.z)*Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		float L_19 = L_18.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		float L_21 = L_20.get_z_4();
		float L_22;
		L_22 = atan2f(L_19, L_21);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_22, (float)(57.2957802f)));
		// CurrAngle = Mathf.LerpAngle(CurrAngle, angle, TurnSpeed * Time.deltaTime*inputMag);
		float L_23 = __this->get_CurrAngle_9();
		float L_24 = V_2;
		float L_25 = __this->get_TurnSpeed_6();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_27 = V_1;
		float L_28;
		L_28 = Mathf_LerpAngle_m6A298166BC9A889DFB7D69D0B04CFDAB9A008946(L_23, L_24, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), (float)L_27)), /*hidden argument*/NULL);
		__this->set_CurrAngle_9(L_28);
		// }
		return;
	}
}
// System.Void Player::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// disabled = true;
		__this->set_disabled_13((bool)1);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mD7447EDFC86F29A3E5FBDEF7E0139535BD4C5088 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// rigidbody.MoveRotation(Quaternion.Euler(Vector3.up * CurrAngle));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rigidbody_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2 = __this->get_CurrAngle_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_MoveRotation_m08A1449DC0D514A70065CD80D067597765BDA5B2(L_0, L_4, /*hidden argument*/NULL);
		// rigidbody.MovePosition(rigidbody.position + Velocity * Time.deltaTime);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get_rigidbody_14();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get_rigidbody_14();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_Velocity_12();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(L_5, L_11, /*hidden argument*/NULL);
		// if((CheckPoint.localScale * 5).x >=Mathf.Abs((CheckPoint.position - rigidbody.position).x) && (CheckPoint.localScale * 5).z >= Mathf.Abs((CheckPoint.position - rigidbody.position).z))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_CheckPoint_8();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, (5.0f), /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_CheckPoint_8();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18 = __this->get_rigidbody_14();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_15) >= ((float)L_22))))
		{
			goto IL_00e6;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = __this->get_CheckPoint_8();
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, (5.0f), /*hidden argument*/NULL);
		float L_26 = L_25.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_CheckPoint_8();
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29 = __this->get_rigidbody_14();
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_28, L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		float L_33;
		L_33 = fabsf(L_32);
		if ((!(((float)L_26) >= ((float)L_33))))
		{
			goto IL_00e6;
		}
	}
	{
		// Disable();
		Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5(__this, /*hidden argument*/NULL);
		// if(OnReachedCheckpoint != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_34 = __this->get_OnReachedCheckpoint_7();
		if (!L_34)
		{
			goto IL_00e6;
		}
	}
	{
		// OnReachedCheckpoint();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_35 = __this->get_OnReachedCheckpoint_7();
		NullCheck(L_35);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void Player::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDestroy_m2A962F7BBA90A997ED723C07BF86A0681AA24F6E (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Guard.OnPlayerSpotted -= Disable;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Player_Disable_m073B57D9EA18796B76FA312812912F0E7A511EA5_RuntimeMethod_var), /*hidden argument*/NULL);
		Guard_remove_OnPlayerSpotted_m23385A3F8E7D72D964E80E56ABB8F20691C2F1F4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 7;
		__this->set_speed_4((7.0f));
		// public float smoothMoveTime = 0.1f;
		__this->set_smoothMoveTime_5((0.100000001f));
		// public float TurnSpeed = 8;
		__this->set_TurnSpeed_6((8.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Guard/<FollowPath>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__15__ctor_m4F3C78212842AD61217EDCB29D364B8F0C10F2BD (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Guard/<FollowPath>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__15_System_IDisposable_Dispose_m657740BE575F85DB1B2E6598AC0DD5DFBDB27CD7 (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Guard/<FollowPath>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFollowPathU3Ed__15_MoveNext_m06D8780715DAE55C757908C9A867DE2B4D9C6F37 (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0100;
			}
			case 2:
			{
				goto IL_0128;
			}
			case 3:
			{
				goto IL_013f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transform.position = wayPoint[0];
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_3 = V_1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = __this->get_wayPoint_3();
		NullCheck(L_5);
		int32_t L_6 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_7, /*hidden argument*/NULL);
		// int targetWaypointIndex = 1;
		__this->set_U3CtargetWaypointIndexU3E5__2_4(1);
		// Vector3 targetWaypoint = wayPoint[targetWaypointIndex];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_wayPoint_3();
		int32_t L_9 = __this->get_U3CtargetWaypointIndexU3E5__2_4();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->set_U3CtargetWaypointU3E5__3_5(L_11);
		// transform.LookAt(targetWaypoint);
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_U3CtargetWaypointU3E5__3_5();
		NullCheck(L_13);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// transform.position = Vector3.MoveTowards(transform.position, targetWaypoint, speed * Time.deltaTime);
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_U3CtargetWaypointU3E5__3_5();
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_speed_6();
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_19, L_20, ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_24, /*hidden argument*/NULL);
		// if (transform.position == targetWaypoint)
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_25 = V_1;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_U3CtargetWaypointU3E5__3_5();
		bool L_29;
		L_29 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_012f;
		}
	}
	{
		// targetWaypointIndex = (targetWaypointIndex + 1) % wayPoint.Length;
		int32_t L_30 = __this->get_U3CtargetWaypointIndexU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_31 = __this->get_wayPoint_3();
		NullCheck(L_31);
		__this->set_U3CtargetWaypointIndexU3E5__2_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))));
		// targetWaypoint = wayPoint[targetWaypointIndex];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_32 = __this->get_wayPoint_3();
		int32_t L_33 = __this->get_U3CtargetWaypointIndexU3E5__2_4();
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		__this->set_U3CtargetWaypointU3E5__3_5(L_35);
		// yield return new WaitForSeconds(delay);
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_36 = V_1;
		NullCheck(L_36);
		float L_37 = L_36->get_delay_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_38 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_38, L_37, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0100:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(TurnToFace(targetWaypoint));
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_39 = V_1;
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_40 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = __this->get_U3CtargetWaypointU3E5__3_5();
		NullCheck(L_40);
		RuntimeObject* L_42;
		L_42 = Guard_TurnToFace_mE04DE276335210DA10C1420C04FC32D5B8ABC004(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_43;
		L_43 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_39, L_42, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0128:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_012f:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_013f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0073;
	}
}
// System.Object Guard/<FollowPath>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFollowPathU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m30BCCD26EE25497366357FE7CBBF2A9241A1A73C (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Guard/<FollowPath>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__15_System_Collections_IEnumerator_Reset_mE9C880FF5050DBFC5068FE490AFE4E888182C016 (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFollowPathU3Ed__15_System_Collections_IEnumerator_Reset_mE9C880FF5050DBFC5068FE490AFE4E888182C016_RuntimeMethod_var)));
	}
}
// System.Object Guard/<FollowPath>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFollowPathU3Ed__15_System_Collections_IEnumerator_get_Current_m8BE2F355547B792A65AD268C87ED87816BBBA688 (U3CFollowPathU3Ed__15_t0766DF21E9ADFDC8CF01099654B21D4DD544B89C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Guard/<TurnToFace>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnToFaceU3Ed__16__ctor_mD6CDBC1450A457D10D6780BC67B98220615A5049 (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Guard/<TurnToFace>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnToFaceU3Ed__16_System_IDisposable_Dispose_mEA79B8C25806F983CD9F47AD090F643D5EC962E3 (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Guard/<TurnToFace>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTurnToFaceU3Ed__16_MoveNext_m511CD9FA769AF24955A008DC066265618559500E (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_00b4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 targetDir = (LookTarget - transform.position).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_LookTarget_2();
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_2 = L_9;
		// float targetAngle = 90 - Mathf.Atan2(targetDir.z, targetDir.x) * Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		float L_14;
		L_14 = atan2f(L_11, L_13);
		__this->set_U3CtargetAngleU3E5__2_4(((float)il2cpp_codegen_subtract((float)(90.0f), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)(57.2957802f))))));
		goto IL_00bb;
	}

IL_0065:
	{
		// float angle = Mathf.MoveTowardsAngle(transform.eulerAngles.y, targetAngle, 90f * Time.deltaTime);
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		float L_19 = __this->get_U3CtargetAngleU3E5__2_4();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_21;
		L_21 = Mathf_MoveTowardsAngle_m854CEFD9E0C625287A487C0F60E3767A91DDD3E5(L_18, L_19, ((float)il2cpp_codegen_multiply((float)(90.0f), (float)L_20)), /*hidden argument*/NULL);
		V_4 = L_21;
		// transform.eulerAngles = Vector3.up * angle;
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_22 = V_1;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_25 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_23, L_26, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00bb:
	{
		// while (Mathf.Abs(Mathf.DeltaAngle(transform.eulerAngles.y, targetAngle)) > 0.05f)
		Guard_t1C43E6F567E9CB79E94C7613CDCC7E5F16480BA7 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		float L_31 = __this->get_U3CtargetAngleU3E5__2_4();
		float L_32;
		L_32 = Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE(L_30, L_31, /*hidden argument*/NULL);
		float L_33;
		L_33 = fabsf(L_32);
		if ((((float)L_33) > ((float)(0.0500000007f))))
		{
			goto IL_0065;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Guard/<TurnToFace>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTurnToFaceU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9C2DA6AE41EB758BF19C88ABA510D74FDEA26A57 (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Guard/<TurnToFace>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnToFaceU3Ed__16_System_Collections_IEnumerator_Reset_mFDD2FF6A982B595F6B134F02F50A293CE73CF1CC (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTurnToFaceU3Ed__16_System_Collections_IEnumerator_Reset_mFDD2FF6A982B595F6B134F02F50A293CE73CF1CC_RuntimeMethod_var)));
	}
}
// System.Object Guard/<TurnToFace>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTurnToFaceU3Ed__16_System_Collections_IEnumerator_get_Current_mA6FE9ED8F6F27EE790F6DC8F3AB91E01DA4451F2 (U3CTurnToFaceU3Ed__16_t28A53DC261EDA6F882A1FFD05CC273CB5228C19C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
