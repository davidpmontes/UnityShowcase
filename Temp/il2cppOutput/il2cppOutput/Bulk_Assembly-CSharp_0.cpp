#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Ball
struct Ball_t2206666566;
// BallCollide
struct BallCollide_t1314810929;
// CanvasController
struct CanvasController_t2210402807;
// CountDownScript
struct CountDownScript_t1841437068;
// GameController
struct GameController_t2330501625;
// Goal
struct Goal_t2966312520;
// IMove
struct IMove_t1834363635;
// Manager
struct Manager_t2928243666;
// PlayState
struct PlayState_t3707477961;
// PlayerInputKeyboard
struct PlayerInputKeyboard_t1613802001;
// PlayerInputTouch
struct PlayerInputTouch_t870668085;
// PlayerMovement
struct PlayerMovement_t2731566919;
// ReadyState
struct ReadyState_t1567701949;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// TouchInfo
struct TouchInfo_t144578985;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collision
struct Collision_t4262080450;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t957311111;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;

extern RuntimeClass* IMove_t1834363635_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1201842140;
extern String_t* _stringLiteral2362017213;
extern String_t* _stringLiteral259608462;
extern String_t* _stringLiteral2988491817;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3450517398;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3452614591;
extern String_t* _stringLiteral3452614593;
extern String_t* _stringLiteral3452614596;
extern String_t* _stringLiteral3452614607;
extern String_t* _stringLiteral683212088;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBall_t2206666566_m1977777556_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCanvasController_t2210402807_m3309629218_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisGameController_t2330501625_m374217182_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisIMove_t1834363635_m210823590_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern const uint32_t BallCollide_OnCollisionEnter_m2730332005_MetadataUsageId;
extern const uint32_t BallCollide_Start_m3409169662_MetadataUsageId;
extern const uint32_t Ball_Start_m1065569631_MetadataUsageId;
extern const uint32_t Ball_Update_m3128307701_MetadataUsageId;
extern const uint32_t CountDownScript_OnStateEnter_m811707732_MetadataUsageId;
extern const uint32_t CountDownScript_OnStateExit_m3261455444_MetadataUsageId;
extern const uint32_t CountDownScript_OnStateUpdate_m3794013474_MetadataUsageId;
extern const uint32_t GameController_GameObjectsActivate_m1133234965_MetadataUsageId;
extern const uint32_t Goal_OnTriggerEnter_m2058904394_MetadataUsageId;
extern const uint32_t PlayerInputKeyboard_Start_m26285136_MetadataUsageId;
extern const uint32_t PlayerInputKeyboard_Update_m108255863_MetadataUsageId;
extern const uint32_t PlayerInputTouch_Start_m579962350_MetadataUsageId;
extern const uint32_t PlayerInputTouch_Update_m3212108824_MetadataUsageId;
extern const uint32_t PlayerMovement_Start_m3025059540_MetadataUsageId;
extern const uint32_t PlayerMovement_moveDown_m2284064588_MetadataUsageId;
extern const uint32_t PlayerMovement_moveUp_m3764891381_MetadataUsageId;
extern const uint32_t ReadyState_OnStateEnter_m3256892671_MetadataUsageId;
extern const uint32_t TouchInfo_Touches_m759712380_MetadataUsageId;
extern const uint32_t TouchInfo_Update_m593612982_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct ObjectU5BU5D_t2843939325;
struct TouchU5BU5D_t1849554061;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ANIMATORSTATEINFO_T509032636_H
#define ANIMATORSTATEINFO_T509032636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t509032636 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T509032636_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef STATEMACHINEBEHAVIOUR_T957311111_H
#define STATEMACHINEBEHAVIOUR_T957311111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t957311111  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T957311111_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef COUNTDOWNSCRIPT_T1841437068_H
#define COUNTDOWNSCRIPT_T1841437068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CountDownScript
struct  CountDownScript_t1841437068  : public StateMachineBehaviour_t957311111
{
public:
	// UnityEngine.GameObject CountDownScript::manager
	GameObject_t1113636619 * ___manager_4;
	// CanvasController CountDownScript::cc
	CanvasController_t2210402807 * ___cc_5;
	// GameController CountDownScript::gc
	GameController_t2330501625 * ___gc_6;
	// System.Single CountDownScript::countdown
	float ___countdown_7;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(CountDownScript_t1841437068, ___manager_4)); }
	inline GameObject_t1113636619 * get_manager_4() const { return ___manager_4; }
	inline GameObject_t1113636619 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(GameObject_t1113636619 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((&___manager_4), value);
	}

	inline static int32_t get_offset_of_cc_5() { return static_cast<int32_t>(offsetof(CountDownScript_t1841437068, ___cc_5)); }
	inline CanvasController_t2210402807 * get_cc_5() const { return ___cc_5; }
	inline CanvasController_t2210402807 ** get_address_of_cc_5() { return &___cc_5; }
	inline void set_cc_5(CanvasController_t2210402807 * value)
	{
		___cc_5 = value;
		Il2CppCodeGenWriteBarrier((&___cc_5), value);
	}

	inline static int32_t get_offset_of_gc_6() { return static_cast<int32_t>(offsetof(CountDownScript_t1841437068, ___gc_6)); }
	inline GameController_t2330501625 * get_gc_6() const { return ___gc_6; }
	inline GameController_t2330501625 ** get_address_of_gc_6() { return &___gc_6; }
	inline void set_gc_6(GameController_t2330501625 * value)
	{
		___gc_6 = value;
		Il2CppCodeGenWriteBarrier((&___gc_6), value);
	}

	inline static int32_t get_offset_of_countdown_7() { return static_cast<int32_t>(offsetof(CountDownScript_t1841437068, ___countdown_7)); }
	inline float get_countdown_7() const { return ___countdown_7; }
	inline float* get_address_of_countdown_7() { return &___countdown_7; }
	inline void set_countdown_7(float value)
	{
		___countdown_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTDOWNSCRIPT_T1841437068_H
#ifndef PLAYSTATE_T3707477961_H
#define PLAYSTATE_T3707477961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayState
struct  PlayState_t3707477961  : public StateMachineBehaviour_t957311111
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T3707477961_H
#ifndef READYSTATE_T1567701949_H
#define READYSTATE_T1567701949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReadyState
struct  ReadyState_t1567701949  : public StateMachineBehaviour_t957311111
{
public:
	// UnityEngine.GameObject ReadyState::manager
	GameObject_t1113636619 * ___manager_4;
	// CanvasController ReadyState::cc
	CanvasController_t2210402807 * ___cc_5;
	// GameController ReadyState::gc
	GameController_t2330501625 * ___gc_6;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(ReadyState_t1567701949, ___manager_4)); }
	inline GameObject_t1113636619 * get_manager_4() const { return ___manager_4; }
	inline GameObject_t1113636619 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(GameObject_t1113636619 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((&___manager_4), value);
	}

	inline static int32_t get_offset_of_cc_5() { return static_cast<int32_t>(offsetof(ReadyState_t1567701949, ___cc_5)); }
	inline CanvasController_t2210402807 * get_cc_5() const { return ___cc_5; }
	inline CanvasController_t2210402807 ** get_address_of_cc_5() { return &___cc_5; }
	inline void set_cc_5(CanvasController_t2210402807 * value)
	{
		___cc_5 = value;
		Il2CppCodeGenWriteBarrier((&___cc_5), value);
	}

	inline static int32_t get_offset_of_gc_6() { return static_cast<int32_t>(offsetof(ReadyState_t1567701949, ___gc_6)); }
	inline GameController_t2330501625 * get_gc_6() const { return ___gc_6; }
	inline GameController_t2330501625 ** get_address_of_gc_6() { return &___gc_6; }
	inline void set_gc_6(GameController_t2330501625 * value)
	{
		___gc_6 = value;
		Il2CppCodeGenWriteBarrier((&___gc_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READYSTATE_T1567701949_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BALL_T2206666566_H
#define BALL_T2206666566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2206666566  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Ball::constantspeed
	float ___constantspeed_4;
	// UnityEngine.Rigidbody Ball::rb
	Rigidbody_t3916780224 * ___rb_5;

public:
	inline static int32_t get_offset_of_constantspeed_4() { return static_cast<int32_t>(offsetof(Ball_t2206666566, ___constantspeed_4)); }
	inline float get_constantspeed_4() const { return ___constantspeed_4; }
	inline float* get_address_of_constantspeed_4() { return &___constantspeed_4; }
	inline void set_constantspeed_4(float value)
	{
		___constantspeed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(Ball_t2206666566, ___rb_5)); }
	inline Rigidbody_t3916780224 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t3916780224 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((&___rb_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALL_T2206666566_H
#ifndef BALLCOLLIDE_T1314810929_H
#define BALLCOLLIDE_T1314810929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallCollide
struct  BallCollide_t1314810929  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody BallCollide::rb
	Rigidbody_t3916780224 * ___rb_4;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(BallCollide_t1314810929, ___rb_4)); }
	inline Rigidbody_t3916780224 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t3916780224 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((&___rb_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLCOLLIDE_T1314810929_H
#ifndef CANVASCONTROLLER_T2210402807_H
#define CANVASCONTROLLER_T2210402807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CanvasController
struct  CanvasController_t2210402807  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CanvasController::readyStatePanel
	GameObject_t1113636619 * ___readyStatePanel_4;
	// UnityEngine.GameObject CanvasController::startButton
	GameObject_t1113636619 * ___startButton_5;
	// UnityEngine.GameObject CanvasController::countdownLabel
	GameObject_t1113636619 * ___countdownLabel_6;

public:
	inline static int32_t get_offset_of_readyStatePanel_4() { return static_cast<int32_t>(offsetof(CanvasController_t2210402807, ___readyStatePanel_4)); }
	inline GameObject_t1113636619 * get_readyStatePanel_4() const { return ___readyStatePanel_4; }
	inline GameObject_t1113636619 ** get_address_of_readyStatePanel_4() { return &___readyStatePanel_4; }
	inline void set_readyStatePanel_4(GameObject_t1113636619 * value)
	{
		___readyStatePanel_4 = value;
		Il2CppCodeGenWriteBarrier((&___readyStatePanel_4), value);
	}

	inline static int32_t get_offset_of_startButton_5() { return static_cast<int32_t>(offsetof(CanvasController_t2210402807, ___startButton_5)); }
	inline GameObject_t1113636619 * get_startButton_5() const { return ___startButton_5; }
	inline GameObject_t1113636619 ** get_address_of_startButton_5() { return &___startButton_5; }
	inline void set_startButton_5(GameObject_t1113636619 * value)
	{
		___startButton_5 = value;
		Il2CppCodeGenWriteBarrier((&___startButton_5), value);
	}

	inline static int32_t get_offset_of_countdownLabel_6() { return static_cast<int32_t>(offsetof(CanvasController_t2210402807, ___countdownLabel_6)); }
	inline GameObject_t1113636619 * get_countdownLabel_6() const { return ___countdownLabel_6; }
	inline GameObject_t1113636619 ** get_address_of_countdownLabel_6() { return &___countdownLabel_6; }
	inline void set_countdownLabel_6(GameObject_t1113636619 * value)
	{
		___countdownLabel_6 = value;
		Il2CppCodeGenWriteBarrier((&___countdownLabel_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASCONTROLLER_T2210402807_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameController::p1
	GameObject_t1113636619 * ___p1_4;
	// UnityEngine.GameObject GameController::p2
	GameObject_t1113636619 * ___p2_5;
	// UnityEngine.GameObject GameController::ball
	GameObject_t1113636619 * ___ball_6;

public:
	inline static int32_t get_offset_of_p1_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___p1_4)); }
	inline GameObject_t1113636619 * get_p1_4() const { return ___p1_4; }
	inline GameObject_t1113636619 ** get_address_of_p1_4() { return &___p1_4; }
	inline void set_p1_4(GameObject_t1113636619 * value)
	{
		___p1_4 = value;
		Il2CppCodeGenWriteBarrier((&___p1_4), value);
	}

	inline static int32_t get_offset_of_p2_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___p2_5)); }
	inline GameObject_t1113636619 * get_p2_5() const { return ___p2_5; }
	inline GameObject_t1113636619 ** get_address_of_p2_5() { return &___p2_5; }
	inline void set_p2_5(GameObject_t1113636619 * value)
	{
		___p2_5 = value;
		Il2CppCodeGenWriteBarrier((&___p2_5), value);
	}

	inline static int32_t get_offset_of_ball_6() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___ball_6)); }
	inline GameObject_t1113636619 * get_ball_6() const { return ___ball_6; }
	inline GameObject_t1113636619 ** get_address_of_ball_6() { return &___ball_6; }
	inline void set_ball_6(GameObject_t1113636619 * value)
	{
		___ball_6 = value;
		Il2CppCodeGenWriteBarrier((&___ball_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef GOAL_T2966312520_H
#define GOAL_T2966312520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Goal
struct  Goal_t2966312520  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Goal::manager
	GameObject_t1113636619 * ___manager_4;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(Goal_t2966312520, ___manager_4)); }
	inline GameObject_t1113636619 * get_manager_4() const { return ___manager_4; }
	inline GameObject_t1113636619 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(GameObject_t1113636619 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((&___manager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOAL_T2966312520_H
#ifndef MANAGER_T2928243666_H
#define MANAGER_T2928243666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Manager
struct  Manager_t2928243666  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGER_T2928243666_H
#ifndef PLAYERINPUTKEYBOARD_T1613802001_H
#define PLAYERINPUTKEYBOARD_T1613802001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInputKeyboard
struct  PlayerInputKeyboard_t1613802001  : public MonoBehaviour_t3962482529
{
public:
	// IMove PlayerInputKeyboard::p1
	RuntimeObject* ___p1_4;
	// IMove PlayerInputKeyboard::p2
	RuntimeObject* ___p2_5;

public:
	inline static int32_t get_offset_of_p1_4() { return static_cast<int32_t>(offsetof(PlayerInputKeyboard_t1613802001, ___p1_4)); }
	inline RuntimeObject* get_p1_4() const { return ___p1_4; }
	inline RuntimeObject** get_address_of_p1_4() { return &___p1_4; }
	inline void set_p1_4(RuntimeObject* value)
	{
		___p1_4 = value;
		Il2CppCodeGenWriteBarrier((&___p1_4), value);
	}

	inline static int32_t get_offset_of_p2_5() { return static_cast<int32_t>(offsetof(PlayerInputKeyboard_t1613802001, ___p2_5)); }
	inline RuntimeObject* get_p2_5() const { return ___p2_5; }
	inline RuntimeObject** get_address_of_p2_5() { return &___p2_5; }
	inline void set_p2_5(RuntimeObject* value)
	{
		___p2_5 = value;
		Il2CppCodeGenWriteBarrier((&___p2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINPUTKEYBOARD_T1613802001_H
#ifndef PLAYERINPUTTOUCH_T870668085_H
#define PLAYERINPUTTOUCH_T870668085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInputTouch
struct  PlayerInputTouch_t870668085  : public MonoBehaviour_t3962482529
{
public:
	// IMove PlayerInputTouch::p1
	RuntimeObject* ___p1_4;
	// IMove PlayerInputTouch::p2
	RuntimeObject* ___p2_5;
	// UnityEngine.Rect PlayerInputTouch::rect1
	Rect_t2360479859  ___rect1_6;
	// UnityEngine.Rect PlayerInputTouch::rect2
	Rect_t2360479859  ___rect2_7;
	// UnityEngine.Rect PlayerInputTouch::rect3
	Rect_t2360479859  ___rect3_8;
	// UnityEngine.Rect PlayerInputTouch::rect4
	Rect_t2360479859  ___rect4_9;

public:
	inline static int32_t get_offset_of_p1_4() { return static_cast<int32_t>(offsetof(PlayerInputTouch_t870668085, ___p1_4)); }
	inline RuntimeObject* get_p1_4() const { return ___p1_4; }
	inline RuntimeObject** get_address_of_p1_4() { return &___p1_4; }
	inline void set_p1_4(RuntimeObject* value)
	{
		___p1_4 = value;
		Il2CppCodeGenWriteBarrier((&___p1_4), value);
	}

	inline static int32_t get_offset_of_p2_5() { return static_cast<int32_t>(offsetof(PlayerInputTouch_t870668085, ___p2_5)); }
	inline RuntimeObject* get_p2_5() const { return ___p2_5; }
	inline RuntimeObject** get_address_of_p2_5() { return &___p2_5; }
	inline void set_p2_5(RuntimeObject* value)
	{
		___p2_5 = value;
		Il2CppCodeGenWriteBarrier((&___p2_5), value);
	}

	inline static int32_t get_offset_of_rect1_6() { return static_cast<int32_t>(offsetof(PlayerInputTouch_t870668085, ___rect1_6)); }
	inline Rect_t2360479859  get_rect1_6() const { return ___rect1_6; }
	inline Rect_t2360479859 * get_address_of_rect1_6() { return &___rect1_6; }
	inline void set_rect1_6(Rect_t2360479859  value)
	{
		___rect1_6 = value;
	}

	inline static int32_t get_offset_of_rect2_7() { return static_cast<int32_t>(offsetof(PlayerInputTouch_t870668085, ___rect2_7)); }
	inline Rect_t2360479859  get_rect2_7() const { return ___rect2_7; }
	inline Rect_t2360479859 * get_address_of_rect2_7() { return &___rect2_7; }
	inline void set_rect2_7(Rect_t2360479859  value)
	{
		___rect2_7 = value;
	}

	inline static int32_t get_offset_of_rect3_8() { return static_cast<int32_t>(offsetof(PlayerInputTouch_t870668085, ___rect3_8)); }
	inline Rect_t2360479859  get_rect3_8() const { return ___rect3_8; }
	inline Rect_t2360479859 * get_address_of_rect3_8() { return &___rect3_8; }
	inline void set_rect3_8(Rect_t2360479859  value)
	{
		___rect3_8 = value;
	}

	inline static int32_t get_offset_of_rect4_9() { return static_cast<int32_t>(offsetof(PlayerInputTouch_t870668085, ___rect4_9)); }
	inline Rect_t2360479859  get_rect4_9() const { return ___rect4_9; }
	inline Rect_t2360479859 * get_address_of_rect4_9() { return &___rect4_9; }
	inline void set_rect4_9(Rect_t2360479859  value)
	{
		___rect4_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINPUTTOUCH_T870668085_H
#ifndef PLAYERMOVEMENT_T2731566919_H
#define PLAYERMOVEMENT_T2731566919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t2731566919  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody PlayerMovement::rb
	Rigidbody_t3916780224 * ___rb_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___rb_4)); }
	inline Rigidbody_t3916780224 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t3916780224 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((&___rb_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVEMENT_T2731566919_H
#ifndef TOUCHINFO_T144578985_H
#define TOUCHINFO_T144578985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInfo
struct  TouchInfo_t144578985  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text TouchInfo::text1
	Text_t1901882714 * ___text1_4;
	// UnityEngine.UI.Text TouchInfo::text2
	Text_t1901882714 * ___text2_5;
	// UnityEngine.UI.Text TouchInfo::text3
	Text_t1901882714 * ___text3_6;

public:
	inline static int32_t get_offset_of_text1_4() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___text1_4)); }
	inline Text_t1901882714 * get_text1_4() const { return ___text1_4; }
	inline Text_t1901882714 ** get_address_of_text1_4() { return &___text1_4; }
	inline void set_text1_4(Text_t1901882714 * value)
	{
		___text1_4 = value;
		Il2CppCodeGenWriteBarrier((&___text1_4), value);
	}

	inline static int32_t get_offset_of_text2_5() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___text2_5)); }
	inline Text_t1901882714 * get_text2_5() const { return ___text2_5; }
	inline Text_t1901882714 ** get_address_of_text2_5() { return &___text2_5; }
	inline void set_text2_5(Text_t1901882714 * value)
	{
		___text2_5 = value;
		Il2CppCodeGenWriteBarrier((&___text2_5), value);
	}

	inline static int32_t get_offset_of_text3_6() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___text3_6)); }
	inline Text_t1901882714 * get_text3_6() const { return ___text3_6; }
	inline Text_t1901882714 ** get_address_of_text3_6() { return &___text3_6; }
	inline void set_text3_6(Text_t1901882714 * value)
	{
		___text3_6 = value;
		Il2CppCodeGenWriteBarrier((&___text3_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHINFO_T144578985_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * Component_GetComponent_TisRigidbody_t3916780224_m279685075 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void Ball::Init()
extern "C" IL2CPP_METHOD_ATTR void Ball_Init_m4213927112 (Ball_t2206666566 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Collision_get_gameObject_m3662658840 (Collision_t4262080450 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m3367380209 (StateMachineBehaviour_t957311111 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<CanvasController>()
inline CanvasController_t2210402807 * GameObject_GetComponent_TisCanvasController_t2210402807_m3309629218 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  CanvasController_t2210402807 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
inline GameController_t2330501625 * GameObject_GetComponent_TisGameController_t2330501625_m374217182 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  GameController_t2330501625 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t1901882714 * GameObject_GetComponent_TisText_t1901882714_m2114913816 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m2321267720 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void GameController::GameObjectsActivate()
extern "C" IL2CPP_METHOD_ATTR void GameController_GameObjectsActivate_m1133234965 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Ball>()
inline Ball_t2206666566 * GameObject_GetComponent_TisBall_t2206666566_m1977777556 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Ball_t2206666566 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * GameObject_GetComponent_TisAnimator_t434523843_m440019408 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<IMove>()
inline RuntimeObject* GameObject_GetComponent_TisIMove_t1834363635_m210823590 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKey_m3868879071 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C" IL2CPP_METHOD_ATTR TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Contains_m3188543637 (Rect_t2360479859 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_up_m3972993886 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_m2109341474 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void GameController::GameObjectsDeactivate()
extern "C" IL2CPP_METHOD_ATTR void GameController_GameObjectsDeactivate_m4014787797 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void TouchInfo::Touches()
extern "C" IL2CPP_METHOD_ATTR void TouchInfo_Touches_m759712380 (TouchInfo_t144578985 * __this, const RuntimeMethod* method);
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
// System.Void Ball::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Ball__ctor_m558340171 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern "C" IL2CPP_METHOD_ATTR void Ball_Start_m1065569631 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m1065569631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		Ball_Init_m4213927112(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Init()
extern "C" IL2CPP_METHOD_ATTR void Ball_Init_m4213927112 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rb_5();
		float L_1 = __this->get_constantspeed_4();
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m1719387948((&L_2), L_1, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m2899403247(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Update()
extern "C" IL2CPP_METHOD_ATTR void Ball_Update_m3128307701 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Update_m3128307701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rb_5();
		float L_1 = __this->get_constantspeed_4();
		Rigidbody_t3916780224 * L_2 = __this->get_rb_5();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Rigidbody_get_velocity_m2993632669(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m2899403247(L_0, L_5, /*hidden argument*/NULL);
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
// System.Void BallCollide::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BallCollide__ctor_m2084338726 (BallCollide_t1314810929 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallCollide::OnCollisionEnter(UnityEngine.Collision)
extern "C" IL2CPP_METHOD_ATTR void BallCollide_OnCollisionEnter_m2730332005 (BallCollide_t1314810929 * __this, Collision_t4262080450 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallCollide_OnCollisionEnter_m2730332005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_3();
		Collision_t4262080450 * L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Collision_get_gameObject_m3662658840(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_y_3();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_7));
		Collision_t4262080450 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = Collision_get_gameObject_m3662658840(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m4211327027(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral2988491817, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		Rigidbody_t3916780224 * L_12 = __this->get_rb_4();
		float L_13 = V_0;
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_3), (1.0f), L_13, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_15 = __this->get_rb_4();
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Rigidbody_get_velocity_m2993632669(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_m2899403247(L_12, L_18, /*hidden argument*/NULL);
	}

IL_0084:
	{
		Collision_t4262080450 * L_19 = ___collision0;
		NullCheck(L_19);
		GameObject_t1113636619 * L_20 = Collision_get_gameObject_m3662658840(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = Object_get_name_m4211327027(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m920492651(NULL /*static, unused*/, L_21, _stringLiteral259608462, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		Rigidbody_t3916780224 * L_23 = __this->get_rb_4();
		float L_24 = V_0;
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_5), (-1.0f), L_24, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_5), /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_26 = __this->get_rb_4();
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Rigidbody_get_velocity_m2993632669(L_26, /*hidden argument*/NULL);
		V_6 = L_27;
		float L_28 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_6), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		Rigidbody_set_velocity_m2899403247(L_23, L_29, /*hidden argument*/NULL);
	}

IL_00db:
	{
		return;
	}
}
// System.Void BallCollide::Start()
extern "C" IL2CPP_METHOD_ATTR void BallCollide_Start_m3409169662 (BallCollide_t1314810929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallCollide_Start_m3409169662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		return;
	}
}
// System.Void BallCollide::Update()
extern "C" IL2CPP_METHOD_ATTR void BallCollide_Update_m3450088011 (BallCollide_t1314810929 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void CanvasController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CanvasController__ctor_m372385102 (CanvasController_t2210402807 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void CountDownScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CountDownScript__ctor_m1251422509 (CountDownScript_t1841437068 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m3367380209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CountDownScript::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CountDownScript_OnStateEnter_m811707732 (CountDownScript_t1841437068 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CountDownScript_OnStateEnter_m811707732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ___animator0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		__this->set_manager_4(L_1);
		GameObject_t1113636619 * L_2 = __this->get_manager_4();
		NullCheck(L_2);
		CanvasController_t2210402807 * L_3 = GameObject_GetComponent_TisCanvasController_t2210402807_m3309629218(L_2, /*hidden argument*/GameObject_GetComponent_TisCanvasController_t2210402807_m3309629218_RuntimeMethod_var);
		__this->set_cc_5(L_3);
		GameObject_t1113636619 * L_4 = __this->get_manager_4();
		NullCheck(L_4);
		GameController_t2330501625 * L_5 = GameObject_GetComponent_TisGameController_t2330501625_m374217182(L_4, /*hidden argument*/GameObject_GetComponent_TisGameController_t2330501625_m374217182_RuntimeMethod_var);
		__this->set_gc_6(L_5);
		__this->set_countdown_7((3.0f));
		return;
	}
}
// System.Void CountDownScript::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CountDownScript_OnStateUpdate_m3794013474 (CountDownScript_t1841437068 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CountDownScript_OnStateUpdate_m3794013474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_countdown_7();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_countdown_7(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get_countdown_7();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		CanvasController_t2210402807 * L_3 = __this->get_cc_5();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = L_3->get_countdownLabel_6();
		NullCheck(L_4);
		Text_t1901882714 * L_5 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_4, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		float L_6 = __this->get_countdown_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = ceilf(L_6);
		V_0 = L_7;
		String_t* L_8 = Single_ToString_m3947131094((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		goto IL_0060;
	}

IL_0055:
	{
		Animator_t434523843 * L_9 = ___animator0;
		NullCheck(L_9);
		Animator_SetTrigger_m2134052629(L_9, _stringLiteral683212088, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void CountDownScript::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CountDownScript_OnStateExit_m3261455444 (CountDownScript_t1841437068 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CountDownScript_OnStateExit_m3261455444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ___animator0;
		NullCheck(L_0);
		Animator_ResetTrigger_m2321267720(L_0, _stringLiteral683212088, /*hidden argument*/NULL);
		CanvasController_t2210402807 * L_1 = __this->get_cc_5();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = L_1->get_countdownLabel_6();
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		CanvasController_t2210402807 * L_5 = __this->get_cc_5();
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = L_5->get_readyStatePanel_4();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_gc_6();
		NullCheck(L_7);
		GameController_GameObjectsActivate_m1133234965(L_7, /*hidden argument*/NULL);
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
// System.Void GameController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameController__ctor_m1587060996 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::GameObjectsDeactivate()
extern "C" IL2CPP_METHOD_ATTR void GameController_GameObjectsDeactivate_m4014787797 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_p1_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_p2_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_ball_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::GameObjectsActivate()
extern "C" IL2CPP_METHOD_ATTR void GameController_GameObjectsActivate_m1133234965 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_GameObjectsActivate_m1133234965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_p1_4();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (-7.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_p2_5();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (7.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_ball_6();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), (-5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_m3387557959(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get_ball_6();
		NullCheck(L_9);
		Ball_t2206666566 * L_10 = GameObject_GetComponent_TisBall_t2206666566_m1977777556(L_9, /*hidden argument*/GameObject_GetComponent_TisBall_t2206666566_m1977777556_RuntimeMethod_var);
		NullCheck(L_10);
		Ball_Init_m4213927112(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = __this->get_p1_4();
		NullCheck(L_11);
		GameObject_SetActive_m796801857(L_11, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_p2_5();
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = __this->get_ball_6();
		NullCheck(L_13);
		GameObject_SetActive_m796801857(L_13, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Start()
extern "C" IL2CPP_METHOD_ATTR void GameController_Start_m1173294274 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void GameController::Update()
extern "C" IL2CPP_METHOD_ATTR void GameController_Update_m217025042 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Goal::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Goal__ctor_m751755310 (Goal_t2966312520 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Goal::OnTriggerEnter(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void Goal_OnTriggerEnter_m2058904394 (Goal_t2966312520 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Goal_OnTriggerEnter_m2058904394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral1201842140, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_t1113636619 * L_4 = __this->get_manager_4();
		NullCheck(L_4);
		Animator_t434523843 * L_5 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_4, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		NullCheck(L_5);
		Animator_SetTrigger_m2134052629(L_5, _stringLiteral2362017213, /*hidden argument*/NULL);
	}

IL_002f:
	{
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
// System.Void Manager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Manager__ctor_m545447212 (Manager_t2928243666 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Manager::Start()
extern "C" IL2CPP_METHOD_ATTR void Manager_Start_m571440944 (Manager_t2928243666 * __this, const RuntimeMethod* method)
{
	{
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Manager::Update()
extern "C" IL2CPP_METHOD_ATTR void Manager_Update_m3677343783 (Manager_t2928243666 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void PlayState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayState__ctor_m2227652826 (PlayState_t3707477961 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m3367380209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayState::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayState_OnStateEnter_m3813083269 (PlayState_t3707477961 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PlayState::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayState_OnStateUpdate_m216589404 (PlayState_t3707477961 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PlayState::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayState_OnStateExit_m3373413002 (PlayState_t3707477961 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
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
// System.Void PlayerInputKeyboard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerInputKeyboard__ctor_m3226960618 (PlayerInputKeyboard_t1613802001 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerInputKeyboard::Start()
extern "C" IL2CPP_METHOD_ATTR void PlayerInputKeyboard_Start_m26285136 (PlayerInputKeyboard_t1613802001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInputKeyboard_Start_m26285136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2988491817, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = GameObject_GetComponent_TisIMove_t1834363635_m210823590(L_0, /*hidden argument*/GameObject_GetComponent_TisIMove_t1834363635_m210823590_RuntimeMethod_var);
		__this->set_p1_4(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral259608462, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = GameObject_GetComponent_TisIMove_t1834363635_m210823590(L_2, /*hidden argument*/GameObject_GetComponent_TisIMove_t1834363635_m210823590_RuntimeMethod_var);
		__this->set_p2_5(L_3);
		return;
	}
}
// System.Void PlayerInputKeyboard::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerInputKeyboard_Update_m108255863 (PlayerInputKeyboard_t1613802001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInputKeyboard_Update_m108255863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614607, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_p1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMove::moveUp() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_1);
		goto IL_0077;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614591, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_p1_4();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IMove::moveDown() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_3);
		goto IL_0077;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614593, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_p2_5();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMove::moveUp() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_5);
		goto IL_0077;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614596, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject* L_7 = __this->get_p2_5();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IMove::moveDown() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_7);
	}

IL_0077:
	{
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
// System.Void PlayerInputTouch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerInputTouch__ctor_m3368379782 (PlayerInputTouch_t870668085 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m2614021312((&L_2), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_0))), (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(0.1f))), /*hidden argument*/NULL);
		__this->set_rect1_6(L_2);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m2614021312((&L_7), (0.0f), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_3))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_4))), (float)(0.1f))))), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_5))), (float)(0.1f))), (((float)((float)L_6))), /*hidden argument*/NULL);
		__this->set_rect2_7(L_7);
		int32_t L_8 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Rect__ctor_m2614021312((&L_12), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_8))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_9))), (float)(0.1f))))), (0.0f), (((float)((float)L_10))), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_11))), (float)(0.1f))), /*hidden argument*/NULL);
		__this->set_rect3_8(L_12);
		int32_t L_13 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_15 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_16 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_17 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_18 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Rect__ctor_m2614021312((&L_19), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_13))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_14))), (float)(0.1f))))), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_15))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_16))), (float)(0.1f))))), (((float)((float)L_17))), (((float)((float)L_18))), /*hidden argument*/NULL);
		__this->set_rect4_9(L_19);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerInputTouch::Start()
extern "C" IL2CPP_METHOD_ATTR void PlayerInputTouch_Start_m579962350 (PlayerInputTouch_t870668085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInputTouch_Start_m579962350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2988491817, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = GameObject_GetComponent_TisIMove_t1834363635_m210823590(L_0, /*hidden argument*/GameObject_GetComponent_TisIMove_t1834363635_m210823590_RuntimeMethod_var);
		__this->set_p1_4(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral259608462, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = GameObject_GetComponent_TisIMove_t1834363635_m210823590(L_2, /*hidden argument*/GameObject_GetComponent_TisIMove_t1834363635_m210823590_RuntimeMethod_var);
		__this->set_p2_5(L_3);
		return;
	}
}
// System.Void PlayerInputTouch::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerInputTouch_Update_m3212108824 (PlayerInputTouch_t870668085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInputTouch_Update_m3212108824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TouchU5BU5D_t1849554061* V_1 = NULL;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_0 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_00b5;
	}

IL_000d:
	{
		TouchU5BU5D_t1849554061* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		V_0 = (*(Touch_t1921856868 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))));
		Rect_t2360479859 * L_3 = __this->get_address_of_rect1_6();
		Vector2_t2156229523  L_4 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		bool L_5 = Rect_Contains_m3188543637((Rect_t2360479859 *)L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_p1_4();
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IMove::moveDown() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_6);
		goto IL_00b1;
	}

IL_0041:
	{
		Rect_t2360479859 * L_7 = __this->get_address_of_rect2_7();
		Vector2_t2156229523  L_8 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		bool L_9 = Rect_Contains_m3188543637((Rect_t2360479859 *)L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_10 = __this->get_p1_4();
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMove::moveUp() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_10);
		goto IL_00b1;
	}

IL_0068:
	{
		Rect_t2360479859 * L_11 = __this->get_address_of_rect3_8();
		Vector2_t2156229523  L_12 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		bool L_13 = Rect_Contains_m3188543637((Rect_t2360479859 *)L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		RuntimeObject* L_14 = __this->get_p2_5();
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IMove::moveDown() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_14);
		goto IL_00b1;
	}

IL_008f:
	{
		Rect_t2360479859 * L_15 = __this->get_address_of_rect4_9();
		Vector2_t2156229523  L_16 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		bool L_17 = Rect_Contains_m3188543637((Rect_t2360479859 *)L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_18 = __this->get_p2_5();
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMove::moveUp() */, IMove_t1834363635_il2cpp_TypeInfo_var, L_18);
	}

IL_00b1:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_20 = V_2;
		TouchU5BU5D_t1849554061* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
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
// System.Void PlayerMovement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement__ctor_m3994561284 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::moveDown()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_moveDown_m2284064588 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_moveDown_m2284064588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rb_4();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_up_m3972993886(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_5();
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_MovePosition_m2109341474(L_0, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::moveUp()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_moveUp_m3764891381 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_moveUp_m3764891381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rb_4();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_up_m3972993886(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_8, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_MovePosition_m2109341474(L_0, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Start()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_Start_m3025059540 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Start_m3025059540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		return;
	}
}
// System.Void PlayerMovement::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_Update_m1995258020 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ReadyState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReadyState__ctor_m3834236105 (ReadyState_t1567701949 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m3367380209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ReadyState::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadyState_OnStateEnter_m3256892671 (ReadyState_t1567701949 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadyState_OnStateEnter_m3256892671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ___animator0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		__this->set_manager_4(L_1);
		GameObject_t1113636619 * L_2 = __this->get_manager_4();
		NullCheck(L_2);
		CanvasController_t2210402807 * L_3 = GameObject_GetComponent_TisCanvasController_t2210402807_m3309629218(L_2, /*hidden argument*/GameObject_GetComponent_TisCanvasController_t2210402807_m3309629218_RuntimeMethod_var);
		__this->set_cc_5(L_3);
		GameObject_t1113636619 * L_4 = __this->get_manager_4();
		NullCheck(L_4);
		GameController_t2330501625 * L_5 = GameObject_GetComponent_TisGameController_t2330501625_m374217182(L_4, /*hidden argument*/GameObject_GetComponent_TisGameController_t2330501625_m374217182_RuntimeMethod_var);
		__this->set_gc_6(L_5);
		GameController_t2330501625 * L_6 = __this->get_gc_6();
		NullCheck(L_6);
		GameController_GameObjectsDeactivate_m4014787797(L_6, /*hidden argument*/NULL);
		CanvasController_t2210402807 * L_7 = __this->get_cc_5();
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = L_7->get_readyStatePanel_4();
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
		CanvasController_t2210402807 * L_9 = __this->get_cc_5();
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = L_9->get_startButton_5();
		NullCheck(L_10);
		GameObject_SetActive_m796801857(L_10, (bool)1, /*hidden argument*/NULL);
		CanvasController_t2210402807 * L_11 = __this->get_cc_5();
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = L_11->get_countdownLabel_6();
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ReadyState::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadyState_OnStateUpdate_m3772856390 (ReadyState_t1567701949 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ReadyState::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadyState_OnStateExit_m3499651566 (ReadyState_t1567701949 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		CanvasController_t2210402807 * L_0 = __this->get_cc_5();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = L_0->get_startButton_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		CanvasController_t2210402807 * L_2 = __this->get_cc_5();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = L_2->get_countdownLabel_6();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
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
// System.Void TouchInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TouchInfo__ctor_m3550431702 (TouchInfo_t144578985 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchInfo::Touches()
extern "C" IL2CPP_METHOD_ATTR void TouchInfo_Touches_m759712380 (TouchInfo_t144578985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchInfo_Touches_m759712380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t1921856868  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TouchU5BU5D_t1849554061* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Text_t1901882714 * L_0 = __this->get_text1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		Text_t1901882714 * L_3 = __this->get_text2_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		V_1 = 0;
		TouchU5BU5D_t1849554061* L_5 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_5;
		V_4 = 0;
		goto IL_00ca;
	}

IL_003e:
	{
		TouchU5BU5D_t1849554061* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		V_2 = (*(Touch_t1921856868 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))));
		Text_t1901882714 * L_8 = __this->get_text2_5();
		Text_t1901882714 * L_9 = L_8;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		V_5 = L_10;
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_5;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_12;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = L_14;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3450517398);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3450517398);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		Vector2_t2156229523  L_21 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_2), /*hidden argument*/NULL);
		V_6 = L_21;
		float L_22 = (&V_6)->get_x_0();
		float L_23 = L_22;
		RuntimeObject * L_24 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_20;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3450517380);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		Vector2_t2156229523  L_27 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_2), /*hidden argument*/NULL);
		V_7 = L_27;
		float L_28 = (&V_7)->get_y_1();
		float L_29 = L_28;
		RuntimeObject * L_30 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral3452614566);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3452614566);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m2971454694(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_32);
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ca:
	{
		int32_t L_34 = V_4;
		TouchU5BU5D_t1849554061* L_35 = V_3;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_003e;
		}
	}
	{
		return;
	}
}
// System.Void TouchInfo::Start()
extern "C" IL2CPP_METHOD_ATTR void TouchInfo_Start_m4170248914 (TouchInfo_t144578985 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TouchInfo::Update()
extern "C" IL2CPP_METHOD_ATTR void TouchInfo_Update_m593612982 (TouchInfo_t144578985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchInfo_Update_m593612982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		TouchInfo_Touches_m759712380(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
