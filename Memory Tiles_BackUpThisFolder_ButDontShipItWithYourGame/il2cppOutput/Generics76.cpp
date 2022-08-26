#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1, T2*, T3, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { &p1, p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct Func_2_tA526681EE526C81F376160E44520BDC21770A705;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>
struct Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1;
// System.Func`2<System.Byte,System.Byte>
struct Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D;
// System.Func`2<UnityEngine.Color,System.Boolean>
struct Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>
struct Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
// System.Func`2<System.Int32,System.Object>
struct Func_2_tB8444326CD91502B291E0988F04448A82D0F6552;
// System.Func`2<Unity.Services.Analytics.Item,System.Boolean>
struct Func_2_t448098DD064E74ED67D912308230E17A77DB036E;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
// System.Func`2<Unity.Services.Analytics.VirtualCurrency,System.Boolean>
struct Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`2<Unity.Services.Analytics.Events/Item,System.Boolean>
struct Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C;
// System.Func`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>
struct Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8;
// System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,System.Boolean>
struct Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9;
// System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>
struct Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30;
// System.Func`2<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex,System.Boolean>
struct Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t30FBA3F0775777FD15679FBAE44B692629C5E6BB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Analytics.Item>
struct IEnumerable_1_t024A5669C9B45828D07DB2ACCB9360EA35606C14;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Analytics.VirtualCurrency>
struct IEnumerable_1_t5AC1AB3A111461630701208537BED0FC8C30B3F9;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct IEnumerable_1_t341BAB962495036CBB25700234AA71EAF80C6AE0;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_tC880EC5644F413FB0DF632E7B8266215D8459084;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IEnumerator`1<Unity.Services.Analytics.Item>
struct IEnumerator_1_t0EA36094F1A299BCA3E557B24F7093D0E8AC1EDB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
// System.Collections.Generic.IEnumerator`1<Unity.Services.Analytics.VirtualCurrency>
struct IEnumerator_1_t10D913C05C46571A38D800A45171F37B067D36B5;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct IEnumerator_1_t4E5076BDD22FD35271F759AC8A6B6CA8DCBDB43A;
// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5;
// System.Linq.Enumerable/Iterator`1<System.Byte>
struct Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Color>
struct Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
// System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.Item>
struct Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
// System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.VirtualCurrency>
struct Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.Services.Analytics.Events/Item>
struct List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB;
// System.Collections.Generic.List`1<Unity.Services.Analytics.Events/VirtualCurrency>
struct List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>
struct WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>
struct WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.Item>
struct WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.VirtualCurrency>
struct WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>
struct WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>
struct WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>
struct WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>
struct WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
// System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
// System.Xml.Linq.XHashtable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.ValueTuple`2<System.Object,System.Object>[]
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.Services.Analytics.Events/Item[]
struct ItemU5BU5D_t019625EA5E089FEF39807638A763F25CFDB1B067;
// Unity.Services.Analytics.Events/VirtualCurrency[]
struct VirtualCurrencyU5BU5D_tB6F8519A75D57053499508989DD1558CBEEC0EFA;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile[]
struct SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// UnityEngine.Experimental.Rendering.ProbeReferenceVolumeProfile
struct ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	bool ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Byte>
struct Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	uint8_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE* ___s_emptyArray_5;
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

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Analytics.Events/Item>
struct List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t019625EA5E089FEF39807638A763F25CFDB1B067* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemU5BU5D_t019625EA5E089FEF39807638A763F25CFDB1B067* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Analytics.Events/VirtualCurrency>
struct List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VirtualCurrencyU5BU5D_tB6F8519A75D57053499508989DD1558CBEEC0EFA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VirtualCurrencyU5BU5D_tB6F8519A75D57053499508989DD1558CBEEC0EFA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2* ___s_emptyArray_5;
};

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};

// System.Xml.Linq.XHashtable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject* ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;
};

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;

// System.Collections.Generic.List`1/Enumerator<System.Byte>
struct Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	uint8_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>
struct WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Services.Analytics.Item
struct Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 
{
	// System.String Unity.Services.Analytics.Item::ItemName
	String_t* ___ItemName_0;
	// System.String Unity.Services.Analytics.Item::ItemType
	String_t* ___ItemType_1;
	// System.Int64 Unity.Services.Analytics.Item::ItemAmount
	int64_t ___ItemAmount_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Analytics.Item
struct Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914_marshaled_pinvoke
{
	char* ___ItemName_0;
	char* ___ItemType_1;
	int64_t ___ItemAmount_2;
};
// Native definition for COM marshalling of Unity.Services.Analytics.Item
struct Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914_marshaled_com
{
	Il2CppChar* ___ItemName_0;
	Il2CppChar* ___ItemType_1;
	int64_t ___ItemAmount_2;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.Rendering.Universal.LibTessDotNet.Vec3
struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB 
{
	// System.Single UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;
};

struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB_StaticFields
{
	// UnityEngine.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// Unity.Services.Analytics.VirtualCurrency
struct VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F 
{
	// System.String Unity.Services.Analytics.VirtualCurrency::VirtualCurrencyName
	String_t* ___VirtualCurrencyName_0;
	// Unity.Services.Analytics.VirtualCurrencyType Unity.Services.Analytics.VirtualCurrency::VirtualCurrencyType
	int32_t ___VirtualCurrencyType_1;
	// System.Int64 Unity.Services.Analytics.VirtualCurrency::VirtualCurrencyAmount
	int64_t ___VirtualCurrencyAmount_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Analytics.VirtualCurrency
struct VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F_marshaled_pinvoke
{
	char* ___VirtualCurrencyName_0;
	int32_t ___VirtualCurrencyType_1;
	int64_t ___VirtualCurrencyAmount_2;
};
// Native definition for COM marshalling of Unity.Services.Analytics.VirtualCurrency
struct VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F_marshaled_com
{
	Il2CppChar* ___VirtualCurrencyName_0;
	int32_t ___VirtualCurrencyType_1;
	int64_t ___VirtualCurrencyAmount_2;
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

// Unity.Services.Analytics.Events/Item
struct Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 
{
	// System.String Unity.Services.Analytics.Events/Item::itemName
	String_t* ___itemName_0;
	// System.String Unity.Services.Analytics.Events/Item::itemType
	String_t* ___itemType_1;
	// System.Int64 Unity.Services.Analytics.Events/Item::itemAmount
	int64_t ___itemAmount_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Analytics.Events/Item
struct Item_t8FC7D9F92E9721760703B4B56F611787026CCB22_marshaled_pinvoke
{
	char* ___itemName_0;
	char* ___itemType_1;
	int64_t ___itemAmount_2;
};
// Native definition for COM marshalling of Unity.Services.Analytics.Events/Item
struct Item_t8FC7D9F92E9721760703B4B56F611787026CCB22_marshaled_com
{
	Il2CppChar* ___itemName_0;
	Il2CppChar* ___itemType_1;
	int64_t ___itemAmount_2;
};

// Unity.Services.Analytics.Events/VirtualCurrency
struct VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 
{
	// System.String Unity.Services.Analytics.Events/VirtualCurrency::virtualCurrencyName
	String_t* ___virtualCurrencyName_0;
	// System.String Unity.Services.Analytics.Events/VirtualCurrency::virtualCurrencyType
	String_t* ___virtualCurrencyType_1;
	// System.Int64 Unity.Services.Analytics.Events/VirtualCurrency::virtualCurrencyAmount
	int64_t ___virtualCurrencyAmount_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Analytics.Events/VirtualCurrency
struct VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8_marshaled_pinvoke
{
	char* ___virtualCurrencyName_0;
	char* ___virtualCurrencyType_1;
	int64_t ___virtualCurrencyAmount_2;
};
// Native definition for COM marshalling of Unity.Services.Analytics.Events/VirtualCurrency
struct VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8_marshaled_com
{
	Il2CppChar* ___virtualCurrencyName_0;
	Il2CppChar* ___virtualCurrencyType_1;
	int64_t ___virtualCurrencyAmount_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 
{
	// System.String UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile::sceneGUID
	String_t* ___sceneGUID_0;
	// UnityEngine.Experimental.Rendering.ProbeReferenceVolumeProfile UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile::profile
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/Item>
struct Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/VirtualCurrency>
struct Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Color>
struct Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.Item>
struct Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.VirtualCurrency>
struct Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F ___current_2;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>
struct WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>
struct WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

// UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 
{
	// UnityEngine.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	// System.Object UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject* ___Data_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_pinvoke
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_com
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex
struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB 
{
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// UnityEngine.Vector2 UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
};

struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB_StaticFields
{
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___VertexLayout_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>
struct Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB ___current_2;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>
struct WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A  : public Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.Item>
struct WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4  : public Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t448098DD064E74ED67D912308230E17A77DB036E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.VirtualCurrency>
struct WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE  : public Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>
struct WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA  : public Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>
struct WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7  : public Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
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

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct Func_2_tA526681EE526C81F376160E44520BDC21770A705  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>
struct Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB  : public MulticastDelegate_t
{
};

// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Byte,System.Byte>
struct Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Color,System.Boolean>
struct Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>
struct Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Int32>
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Object>
struct Func_2_tB8444326CD91502B291E0988F04448A82D0F6552  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Analytics.Item,System.Boolean>
struct Func_2_t448098DD064E74ED67D912308230E17A77DB036E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Analytics.VirtualCurrency,System.Boolean>
struct Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Analytics.Events/Item,System.Boolean>
struct Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>
struct Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,System.Boolean>
struct Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>
struct Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex,System.Boolean>
struct Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08  : public Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D  : public Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4  : public Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
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
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_gshared_inline (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_gshared_inline (Func_2_tA526681EE526C81F376160E44520BDC21770A705* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_gshared_inline (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96_gshared (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m55E1305F8F8E872CC7AAB0E7000B942F545A28DB_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB List_1_GetEnumerator_mF04BB2D0A951AC3A66BF9BE9F79B65B2B2A64033_gshared (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_gshared_inline (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE_gshared (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C_gshared (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* __this, RuntimeObject* ___source0, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E0DBF5217FAA48297BFA50F6CA5C7E1BCA0EA8F_gshared (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mE24DF921BC75D775724C5BF88B0B6F4460531F52_gshared_inline (Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1FEDE5143C866FB1A5CB37DD4DBF470BDCBCCF1A_gshared_inline (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261_gshared (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source0, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate1, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Byte,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_gshared_inline (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, uint8_t ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Byte,System.Byte>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_gshared_inline (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* __this, uint8_t ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0_gshared (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* __this, RuntimeObject* ___source0, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694_gshared (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC_gshared (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_gshared_inline (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_gshared_inline (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5_gshared (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB_gshared (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* __this, RuntimeObject* ___source0, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_gshared_inline (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13_gshared (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_gshared_inline (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD_gshared (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* __this, RuntimeObject* ___source0, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Int32,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Int32,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD1663409F0F379D2B2D5466DCDE357ED870A8B2E_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Int32,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m6953F3816EE803F64B21977608FFA48D59AB9272_gshared_inline (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* __this, int32_t ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF3340A1A2963330A6390D757E70EB1D50F1B99C6_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.Item>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1A0EA7CA79E0CDC5E44256A3EE796534C1DAB8B5_gshared (Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE40448028005B9E28D20ABBB2E3397F1E362E029_gshared (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* __this, List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* ___source0, Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* ___predicate1, Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Analytics.Events/Item>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468 List_1_GetEnumerator_m7DC16BB2C9C58D49D2FE9CF06C729D89A9A1D91E_gshared (List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/Item>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 Enumerator_get_Current_m6987591F90119F35EB45122EFA211CBB487217DA_gshared_inline (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.Services.Analytics.Events/Item,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mACAE08BD1E2E4C77EEEBAA692327BFCF14844B6E_gshared_inline (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* __this, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 Func_2_Invoke_mDB8B89C0C58089EF46491A8B21B0E715925B7D03_gshared_inline (Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* __this, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/Item>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m22D493BEFBDFF4043C0D7103420DC1C120703025_gshared (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.Item>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m7DB56A34BC9370F9809F55979E314B4AC47C988B_gshared (WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4* __this, RuntimeObject* ___source0, Func_2_t448098DD064E74ED67D912308230E17A77DB036E* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.VirtualCurrency>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m498133D05791AEF4FE5321D811211F2B24EF2245_gshared (Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6C76A2F15D41339DC5F32627959B2279F0FA9200_gshared (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* __this, List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* ___source0, Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* ___predicate1, Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Analytics.Events/VirtualCurrency>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB List_1_GetEnumerator_mFE3A3D666DF38DAE8200684F949844693E4BC107_gshared (List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/VirtualCurrency>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 Enumerator_get_Current_m9DEAF45BAE96094BE1B7BF201DAF6538DCD738FE_gshared_inline (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE1ED5E59AEBD6A9F1B2875B3D32A2F10D9BE958F_gshared_inline (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* __this, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F Func_2_Invoke_mF041ED0051D6EB5A21179F51516AEFFDE13B06A2_gshared_inline (Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* __this, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/VirtualCurrency>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0EFF5ACE530B802CF1C9041206746DDC2FC31843_gshared (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.VirtualCurrency>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE0EE03DAEB58AC0D85D9FFAD9C09E7CC66A5EB02_gshared (WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE* __this, RuntimeObject* ___source0, Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5CB3BF2A1BBC2B807676AFC1EEF60A99CBC645B6_gshared (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D_gshared (List_1_t9F15086189A9401719178EA3A7122587601C9F5C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_gshared_inline (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB_gshared (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_gshared_inline (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_gshared_inline (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>::Invoke(TValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___value0, RuntimeObject** ___newValue1, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) ;
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) ;

// System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::.ctor()
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_tA526681EE526C81F376160E44520BDC21770A705*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
inline Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, const RuntimeMethod*))List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 (*) (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*, const RuntimeMethod*))Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_inline (Func_2_tA526681EE526C81F376160E44520BDC21770A705* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tA526681EE526C81F376160E44520BDC21770A705*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39 (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*, const RuntimeMethod*))Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Object>::.ctor()
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1 (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_inline (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::.ctor()
inline void Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96 (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m55E1305F8F8E872CC7AAB0E7000B942F545A28DB (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m55E1305F8F8E872CC7AAB0E7000B942F545A28DB_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator()
inline Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB List_1_GetEnumerator_mF04BB2D0A951AC3A66BF9BE9F79B65B2B2A64033 (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))List_1_GetEnumerator_mF04BB2D0A951AC3A66BF9BE9F79B65B2B2A64033_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*, const RuntimeMethod*))Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_inline (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*, const RuntimeMethod*))Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* __this, RuntimeObject* ___source0, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6E0DBF5217FAA48297BFA50F6CA5C7E1BCA0EA8F (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6E0DBF5217FAA48297BFA50F6CA5C7E1BCA0EA8F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_mE24DF921BC75D775724C5BF88B0B6F4460531F52_inline (Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Func_2_Invoke_mE24DF921BC75D775724C5BF88B0B6F4460531F52_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m1FEDE5143C866FB1A5CB37DD4DBF470BDCBCCF1A_inline (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Func_2_Invoke_m1FEDE5143C866FB1A5CB37DD4DBF470BDCBCCF1A_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::.ctor()
inline void Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261 (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*, const RuntimeMethod*))Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source0, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate1, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936*, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
inline Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
inline uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Byte,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_inline (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, uint8_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, uint8_t, const RuntimeMethod*))Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<System.Byte,System.Byte>::Invoke(T)
inline uint8_t Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_inline (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* __this, uint8_t ___arg0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, uint8_t, const RuntimeMethod*))Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
inline bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7 (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0 (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* __this, RuntimeObject* ___source0, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*, RuntimeObject*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::.ctor()
inline void Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694 (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*, const RuntimeMethod*))Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::GetEnumerator()
inline Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B (*) (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, const RuntimeMethod*))List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current()
inline ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method)
{
	return ((  ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 (*) (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*, const RuntimeMethod*))Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Invoke(T)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_inline (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::MoveNext()
inline bool Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5 (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*, const RuntimeMethod*))Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* __this, RuntimeObject* ___source0, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A*, RuntimeObject*, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::.ctor()
inline void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63 (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Invoke(T)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_inline (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023 (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor()
inline void Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13 (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*, const RuntimeMethod*))Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Invoke(T)
inline LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_inline (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method)
{
	return ((  LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB (*) (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* __this, RuntimeObject* ___source0, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08*, RuntimeObject*, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Int32,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4 (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Int32,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mD1663409F0F379D2B2D5466DCDE357ED870A8B2E (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mD1663409F0F379D2B2D5466DCDE357ED870A8B2E_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Int32,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m6953F3816EE803F64B21977608FFA48D59AB9272_inline (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*, int32_t, const RuntimeMethod*))Func_2_Invoke_m6953F3816EE803F64B21977608FFA48D59AB9272_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mF3340A1A2963330A6390D757E70EB1D50F1B99C6 (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF3340A1A2963330A6390D757E70EB1D50F1B99C6_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639 (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator()
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.Item>::.ctor()
inline void Iterator_1__ctor_m1A0EA7CA79E0CDC5E44256A3EE796534C1DAB8B5 (Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*, const RuntimeMethod*))Iterator_1__ctor_m1A0EA7CA79E0CDC5E44256A3EE796534C1DAB8B5_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mE40448028005B9E28D20ABBB2E3397F1E362E029 (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* __this, List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* ___source0, Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* ___predicate1, Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA*, List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB*, Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C*, Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mE40448028005B9E28D20ABBB2E3397F1E362E029_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Analytics.Events/Item>::GetEnumerator()
inline Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468 List_1_GetEnumerator_m7DC16BB2C9C58D49D2FE9CF06C729D89A9A1D91E (List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468 (*) (List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB*, const RuntimeMethod*))List_1_GetEnumerator_m7DC16BB2C9C58D49D2FE9CF06C729D89A9A1D91E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/Item>::get_Current()
inline Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 Enumerator_get_Current_m6987591F90119F35EB45122EFA211CBB487217DA_inline (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* __this, const RuntimeMethod* method)
{
	return ((  Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 (*) (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468*, const RuntimeMethod*))Enumerator_get_Current_m6987591F90119F35EB45122EFA211CBB487217DA_gshared_inline)(__this, method);
}
// TResult System.Func`2<Unity.Services.Analytics.Events/Item,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mACAE08BD1E2E4C77EEEBAA692327BFCF14844B6E_inline (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* __this, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C*, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22, const RuntimeMethod*))Func_2_Invoke_mACAE08BD1E2E4C77EEEBAA692327BFCF14844B6E_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::Invoke(T)
inline Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 Func_2_Invoke_mDB8B89C0C58089EF46491A8B21B0E715925B7D03_inline (Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* __this, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ___arg0, const RuntimeMethod* method)
{
	return ((  Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 (*) (Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8*, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22, const RuntimeMethod*))Func_2_Invoke_mDB8B89C0C58089EF46491A8B21B0E715925B7D03_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/Item>::MoveNext()
inline bool Enumerator_MoveNext_m22D493BEFBDFF4043C0D7103420DC1C120703025 (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468*, const RuntimeMethod*))Enumerator_MoveNext_m22D493BEFBDFF4043C0D7103420DC1C120703025_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.Item>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m7DB56A34BC9370F9809F55979E314B4AC47C988B (WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4* __this, RuntimeObject* ___source0, Func_2_t448098DD064E74ED67D912308230E17A77DB036E* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4*, RuntimeObject*, Func_2_t448098DD064E74ED67D912308230E17A77DB036E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m7DB56A34BC9370F9809F55979E314B4AC47C988B_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.VirtualCurrency>::.ctor()
inline void Iterator_1__ctor_m498133D05791AEF4FE5321D811211F2B24EF2245 (Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*, const RuntimeMethod*))Iterator_1__ctor_m498133D05791AEF4FE5321D811211F2B24EF2245_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6C76A2F15D41339DC5F32627959B2279F0FA9200 (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* __this, List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* ___source0, Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* ___predicate1, Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7*, List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B*, Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9*, Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6C76A2F15D41339DC5F32627959B2279F0FA9200_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Analytics.Events/VirtualCurrency>::GetEnumerator()
inline Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB List_1_GetEnumerator_mFE3A3D666DF38DAE8200684F949844693E4BC107 (List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB (*) (List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B*, const RuntimeMethod*))List_1_GetEnumerator_mFE3A3D666DF38DAE8200684F949844693E4BC107_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/VirtualCurrency>::get_Current()
inline VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 Enumerator_get_Current_m9DEAF45BAE96094BE1B7BF201DAF6538DCD738FE_inline (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* __this, const RuntimeMethod* method)
{
	return ((  VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 (*) (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB*, const RuntimeMethod*))Enumerator_get_Current_m9DEAF45BAE96094BE1B7BF201DAF6538DCD738FE_gshared_inline)(__this, method);
}
// TResult System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mE1ED5E59AEBD6A9F1B2875B3D32A2F10D9BE958F_inline (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* __this, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9*, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8, const RuntimeMethod*))Func_2_Invoke_mE1ED5E59AEBD6A9F1B2875B3D32A2F10D9BE958F_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::Invoke(T)
inline VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F Func_2_Invoke_mF041ED0051D6EB5A21179F51516AEFFDE13B06A2_inline (Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* __this, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ___arg0, const RuntimeMethod* method)
{
	return ((  VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F (*) (Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30*, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8, const RuntimeMethod*))Func_2_Invoke_mF041ED0051D6EB5A21179F51516AEFFDE13B06A2_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Events/VirtualCurrency>::MoveNext()
inline bool Enumerator_MoveNext_m0EFF5ACE530B802CF1C9041206746DDC2FC31843 (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB*, const RuntimeMethod*))Enumerator_MoveNext_m0EFF5ACE530B802CF1C9041206746DDC2FC31843_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Services.Analytics.VirtualCurrency>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mE0EE03DAEB58AC0D85D9FFAD9C09E7CC66A5EB02 (WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE* __this, RuntimeObject* ___source0, Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE*, RuntimeObject*, Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mE0EE03DAEB58AC0D85D9FFAD9C09E7CC66A5EB02_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m5CB3BF2A1BBC2B807676AFC1EEF60A99CBC645B6 (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5CB3BF2A1BBC2B807676AFC1EEF60A99CBC645B6_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::GetEnumerator()
inline Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D (List_1_t9F15086189A9401719178EA3A7122587601C9F5C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF (*) (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, const RuntimeMethod*))List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current()
inline SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method)
{
	return ((  SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 (*) (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*, const RuntimeMethod*))Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::MoveNext()
inline bool Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*, const RuntimeMethod*))Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_inline (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5 (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_inline (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_gshared_inline)(__this, ___arg0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared)(__this, ___src0, ___srcLen1, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
inline int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___compare0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___index0, il2cppRetVal, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___compare0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___src0, ___srcLen1, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___compare0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>::Invoke(TValue)
inline String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline)(__this, ___value0, method);
}
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
inline void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared)(__this, ___extractKey0, ___capacity1, method);
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
inline bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___value0, RuntimeObject** ___newValue1, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared)(__this, ___value0, ___newValue1, method);
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
inline int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1 (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared)(___key0, ___index1, ___count2, method);
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
inline bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared)(__this, ___hashCode0, ___key1, ___index2, ___count3, ___entryIndex4, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
inline bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared)(__this, ___key0, ___index1, ___count2, ___value3, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
inline XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tA526681EE526C81F376160E44520BDC21770A705* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m5543BC2ADA2036AEA8AD33BB33B715E67B25E425_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_tA526681EE526C81F376160E44520BDC21770A705* L_2 = (Func_2_tA526681EE526C81F376160E44520BDC21770A705*)__this->___selector_5;
		WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* L_3 = (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE1D16DDBA8514349D61E5734B72CDE6E55D0E7E4_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA526681EE526C81F376160E44520BDC21770A705* L_11 = (Func_2_tA526681EE526C81F376160E44520BDC21770A705*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6068BC7507F99A18650B2195728A397A4B255F95_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7549B7E49F1A52E465C4F9B0827E3A9241D0C573_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_2 = (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*)__this->___selector_5;
		WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* L_3 = (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m96C28F46AFA617F5C19FFC661CD4F9E63BE75103_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_11 = (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2F81906E04BD7F8616E72DD5160FE9BB1D207D35_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m55E1305F8F8E872CC7AAB0E7000B942F545A28DB_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m80E2C99FDBC9132B917235C297B93888C36494ED_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_2 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___selector_5;
		WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* L_3 = (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m55E1305F8F8E872CC7AAB0E7000B942F545A28DB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m77962202E02036D26E2BF18FBD63523979DFD5BF_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = List_1_GetEnumerator_mF04BB2D0A951AC3A66BF9BE9F79B65B2B2A64033(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_11 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC598E568E124E1B5A2A59DD7DAB95ECC19CF6E14_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E0DBF5217FAA48297BFA50F6CA5C7E1BCA0EA8F_gshared (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m9B0B330431D2E49F6B5572FA0BFE7376C257AA91_gshared (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* L_2 = (Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E*)__this->___selector_5;
		WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* L_3 = (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6E0DBF5217FAA48297BFA50F6CA5C7E1BCA0EA8F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m79F39C9D8979E36D4EB108B6118A0C092F049492_gshared (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = List_1_GetEnumerator_mF04BB2D0A951AC3A66BF9BE9F79B65B2B2A64033(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* L_11 = (Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mE24DF921BC75D775724C5BF88B0B6F4460531F52_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF4A964EE303D3AD12838C8B048507C234194684E_gshared (WhereSelectListIterator_2_t92A2EF308AFF0E5DA617DB3111DBE50B6F99737A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF38CEDEBAF2DC443994FC29CBB9718332C4A2CD1_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_2 = (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*)__this->___selector_5;
		WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* L_3 = (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4606FA87DF1C3AED1BAC8CF343D107345C56E76E_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = List_1_GetEnumerator_mF04BB2D0A951AC3A66BF9BE9F79B65B2B2A64033(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_11 = (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1FEDE5143C866FB1A5CB37DD4DBF470BDCBCCF1A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m625DE330D740455A061F8867456066ECE2C885F4_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source0, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate1, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* WhereSelectListIterator_2_Clone_m82F7E6B50E0300CC5A4E05623ACE0BFFADA71572_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)__this->___source_3;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)__this->___predicate_4;
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*)__this->___selector_5;
		WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* L_3 = (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2F935A0A9843B35F25DA7D8CE6C9548A06E08E6_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA L_4;
		L_4 = List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* L_5 = (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*)(&__this->___enumerator_6);
		uint8_t L_6;
		L_6 = Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_7 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_8 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)__this->___predicate_4;
		uint8_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_11 = (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*)__this->___selector_5;
		uint8_t L_12 = V_1;
		NullCheck(L_11);
		uint8_t L_13;
		L_13 = Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* L_14 = (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::Dispose() */, (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3EE5C6996B41DAD65C62B3B2716B00031DF2682C_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* L_1 = (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* WhereSelectListIterator_2_Clone_mA1AE1A51E11723EC85F03021507B3634C1D64580_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_2 = (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*)__this->___selector_5;
		WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* L_3 = (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8B6AB5314BB7E9C2FC62357670E901C0D40B0C25_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_11 = (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::Dispose() */, (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBA9EAF462530A792C1EBBA1A5B7D748399E500E4_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* L_1 = (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_mE32C10001585143D33C8C03C94D8B3FC38473618_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_2 = (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*)__this->___selector_5;
		WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* L_3 = (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m27E92E918634190C912ACC889DFA23AF8ACB11C6_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_11 = (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1C5509878B9B4DFBFC85E633339AC802F221ABB0_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* WhereSelectListIterator_2_Clone_mB3426B2435DB4C6FF9ED2D97EAEA54214C511BC6_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_2 = (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*)__this->___selector_5;
		WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* L_3 = (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5DDB57FD52DB3C0CEB20436C511C5C36D858C935_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_11 = (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_13;
		L_13 = Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Dispose() */, (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8C11C42C5D6791545B8E6E5E688620AABF327963_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* L_1 = (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mEC0FD6BA0A8779337053CF3CB98EBC43432DB91C_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___selector_5;
		WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* L_3 = (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DD045E59F76B9A18DF2C650093B21AAB9AB7285_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_11 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAE917FDB31CC9CFAFF8F10B8C092034908387DB3_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m89B70C1B596662479F7844116D9B99FE501BFD84_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* L_3 = (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA4673028DAC84866E54385B22CBEFC22D92BC9CD_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_11 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B1D8127CD81AE6BA9FA935CA573327EACB64820_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD1663409F0F379D2B2D5466DCDE357ED870A8B2E_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m0974288F9B1FD6ED6DCF4B218DF0980E012356AC_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* L_2 = (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*)__this->___selector_5;
		WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* L_3 = (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mD1663409F0F379D2B2D5466DCDE357ED870A8B2E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF978C638936D86819736248A47DE6A7C1E2C44A6_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* L_11 = (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m6953F3816EE803F64B21977608FFA48D59AB9272_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC5DC6726E77CC3F54953E2F2844CF80D4244FCC5_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF3340A1A2963330A6390D757E70EB1D50F1B99C6_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m2228AE3B2B250F98767CDD5EDD9B76AD4461D72C_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___selector_5;
		WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* L_3 = (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mF3340A1A2963330A6390D757E70EB1D50F1B99C6(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC5FEA0711CA82161A5D22BC4DEE7549A86BF3245_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_11 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m70F9F27FC3AD115DA1A3E10D9275657B9548AB8A_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m62045FC9E5DDF7C34F754695E9EBF13C4326DCE8_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* L_3 = (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE97A1BC013242BE83F2417B94F433533ECA0BE17_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_11 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3FE0D83DC912C8134BC2E276A0BBBF78E7CCDFF2_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m1BD042108A23C683E5C01A3D2B8EFFA6D3516AB5_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___selector_5;
		WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* L_3 = (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m57DA93BD1760AA63C3AAE74D529A1ABE038705E6_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_11 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF9B99EFA637F1E3276411928BC2FFF4F6DE34D34_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE40448028005B9E28D20ABBB2E3397F1E362E029_gshared (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* __this, List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* ___source0, Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* ___predicate1, Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1A0EA7CA79E0CDC5E44256A3EE796534C1DAB8B5((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF* WhereSelectListIterator_2_Clone_mE788C0D7E700679167A8F07315ADB914990AADF7_gshared (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* L_0 = (List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB*)__this->___source_3;
		Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* L_1 = (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C*)__this->___predicate_4;
		Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* L_2 = (Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8*)__this->___selector_5;
		WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* L_3 = (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mE40448028005B9E28D20ABBB2E3397F1E362E029(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m88582CCA623E6ADC9612B2CC53ABEACD4E6BCFF8_gshared (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB* L_3 = (List_1_t28BA35473B248D09F1A5F735C304F74331EA22EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468 L_4;
		L_4 = List_1_GetEnumerator_m7DC16BB2C9C58D49D2FE9CF06C729D89A9A1D91E(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___itemName_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___itemType_1), (void*)NULL);
		#endif
		((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* L_5 = (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468*)(&__this->___enumerator_6);
		Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 L_6;
		L_6 = Enumerator_get_Current_m6987591F90119F35EB45122EFA211CBB487217DA_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* L_7 = (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* L_8 = (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C*)__this->___predicate_4;
		Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mACAE08BD1E2E4C77EEEBAA692327BFCF14844B6E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* L_11 = (Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8*)__this->___selector_5;
		Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 L_12 = V_1;
		NullCheck(L_11);
		Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 L_13;
		L_13 = Func_2_Invoke_mDB8B89C0C58089EF46491A8B21B0E715925B7D03_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this)->___current_2))->___ItemName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this)->___current_2))->___ItemType_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* L_14 = (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m22D493BEFBDFF4043C0D7103420DC1C120703025(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.Item>::Dispose() */, (Iterator_1_tBE4EBD3758E43E8EA6DC078B1336BC28F23044AF*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/Item,Unity.Services.Analytics.Item>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7EEA9015E9CD5F1FEAE1505DC01F72553A719503_gshared (WhereSelectListIterator_2_t48FB45026911B7D7E86E2A32659B08B870F29ADA* __this, Func_2_t448098DD064E74ED67D912308230E17A77DB036E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t448098DD064E74ED67D912308230E17A77DB036E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4* L_1 = (WhereEnumerableIterator_1_t0861476194008751AA74F0EB5D9652D1380B33C4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m7DB56A34BC9370F9809F55979E314B4AC47C988B(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6C76A2F15D41339DC5F32627959B2279F0FA9200_gshared (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* __this, List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* ___source0, Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* ___predicate1, Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m498133D05791AEF4FE5321D811211F2B24EF2245((Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8* WhereSelectListIterator_2_Clone_m58297DDEF1DE27A20C2E2624E03B3902A169AC23_gshared (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* L_0 = (List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B*)__this->___source_3;
		Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* L_1 = (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9*)__this->___predicate_4;
		Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* L_2 = (Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30*)__this->___selector_5;
		WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* L_3 = (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6C76A2F15D41339DC5F32627959B2279F0FA9200(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m97A6E8508364350A5DA108B133C209614969936D_gshared (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B* L_3 = (List_1_t1CDDDB4FCA2FF76D64075B2C9CD4A448E691738B*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB L_4;
		L_4 = List_1_GetEnumerator_mFE3A3D666DF38DAE8200684F949844693E4BC107(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___virtualCurrencyName_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___virtualCurrencyType_1), (void*)NULL);
		#endif
		((Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* L_5 = (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB*)(&__this->___enumerator_6);
		VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 L_6;
		L_6 = Enumerator_get_Current_m9DEAF45BAE96094BE1B7BF201DAF6538DCD738FE_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* L_7 = (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* L_8 = (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9*)__this->___predicate_4;
		VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mE1ED5E59AEBD6A9F1B2875B3D32A2F10D9BE958F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* L_11 = (Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30*)__this->___selector_5;
		VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 L_12 = V_1;
		NullCheck(L_11);
		VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F L_13;
		L_13 = Func_2_Invoke_mF041ED0051D6EB5A21179F51516AEFFDE13B06A2_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this)->___current_2))->___VirtualCurrencyName_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* L_14 = (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0EFF5ACE530B802CF1C9041206746DDC2FC31843(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Services.Analytics.VirtualCurrency>::Dispose() */, (Iterator_1_t8732E703AA6F8ADB280DFA9DC47A4662A2D4F1A8*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Analytics.Events/VirtualCurrency,Unity.Services.Analytics.VirtualCurrency>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCDBCF3B8CCCD9804A745FCC1503BC6DE3A5104FC_gshared (WhereSelectListIterator_2_t9C2713722A940B015D8C2DFCC7BE9D1E87433BF7* __this, Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6B80B56AAE7CB27CE84D9C83B2457FCB854E9E0C* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE* L_1 = (WhereEnumerableIterator_1_t0BFF946ED20FCAB520536EA8CF68F255C75509FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE0EE03DAEB58AC0D85D9FFAD9C09E7CC66A5EB02(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5CB3BF2A1BBC2B807676AFC1EEF60A99CBC645B6_gshared (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mFD92280BD8AE0F7D9F5506710B9FD3F4D8C2253A_gshared (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_2 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___selector_5;
		WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* L_3 = (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m5CB3BF2A1BBC2B807676AFC1EEF60A99CBC645B6(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5E2D37FCC6F6989BA3E59D34EBFDA4DDA6ACB57A_gshared (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_11 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBB9AC233A07DDB77F8E3259BF51C9762D696D818_gshared (WhereSelectListIterator_2_t1651EF715A8D320A2D4FE6EFB59813BAE162F40D* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m51E56C25ECF73ECFA4D3EDDBE95158B6DE5EF553_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* L_2 = (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*)__this->___selector_5;
		WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* L_3 = (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB6B495323235385E5F536D86FEB9EDC404C042C5_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* L_11 = (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB3C7E3A322818666ABFED75FBEC7A4C8BCCE09A3_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m89B522BAE24867FCC8287422B3CD6B3E4DD1DAE0_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* L_3 = (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFB9C45CEBAED3E2C325D5D59C257CAB6F743AA46_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_11 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m072977E25657E836E04AE9F97F55D76809EF700A_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B2_0 = NULL;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B3_1 = NULL;
	{
		// m_Data = src;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___compare0;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_AdjustorThunk (RuntimeObject* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this, L_0, 0, L_1);
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		// m_Data = src;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		// get => m_Data[m_Start + index];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___index0, il2cppRetVal, method);
	return;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		// set => m_Data[m_Start + index] = value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___value1 : &___value1), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___compare0;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), NULL, L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		// m_Data = src;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___compare0;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	NullCheck(___val0);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, ___val0, ___fieldValue1);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___extractKey0;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = (RuntimeObject*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value_0;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next_2;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next_2;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_38);
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = (RuntimeObject*)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value_0;
		NullCheck(L_43);
		bool L_47;
		L_47 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next_2;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		bool L_8;
		L_8 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___value3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = (RuntimeObject*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value_0;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___value0, RuntimeObject** ___newValue1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___newValue1;
		RuntimeObject* L_1 = ___value0;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___value0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode_1 = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next_2);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___newValue1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = (RuntimeObject*)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value_0;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode_1;
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value_0);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next_2;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_30 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next_2 = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___count3;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___key1;
		int32_t L_40 = ___index2;
		String_t* L_41 = V_2;
		int32_t L_42 = ___count3;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___entryIndex4;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next_2;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___entryIndex4;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___index1;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___extractKey0;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	// TValue
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_45 = L_13;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_10 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_11 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2));
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2)))), (-1), 0, NULL);
		V_3 = L_21;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2));
		V_3 = L_24;
	}

IL_009f:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a7:
	{
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_30)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		V_0 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_32)->max_length)), 2));
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_34 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_35 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		int32_t L_36 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_37 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_37);
		InvokerActionInvoker2< ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_37, L_35, L_36);
		V_1 = L_37;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = L_41;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_43 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_42);
		bool L_46;
		L_46 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? L_45: *(void**)L_45), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_47 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2));
		V_5 = L_49;
	}

IL_0130:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_013b:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_54 = V_1;
		return L_54;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value3, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	// TValue
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, String_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		bool L_8;
		L_8 = InvokerFuncInvoker5< bool, int32_t, String_t*, int32_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, L_4, L_5, L_6, L_7, (&V_1));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___value3;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___newValue1, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	// TValue
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_41 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___newValue1;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? ___value0 : &___value0), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? ___value0 : &___value0), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = InvokerFuncInvoker3< int32_t, String_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_6, 0, L_8);
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? ___value0 : &___value0), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_instance_field_data(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0), L_17, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_18 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),1), L_20);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_27 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2)))), L_29, 0, NULL);
		V_1 = L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_32 = V_1;
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_33 = V_3;
		String_t* L_34 = V_2;
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		bool L_37;
		L_37 = InvokerFuncInvoker5< bool, int32_t, String_t*, int32_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, L_33, L_34, 0, L_36, (&V_1));
		if (!L_37)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_38 = ___newValue1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_39 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_41, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_41);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
	// TValue
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_9 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),1));
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_13 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_14 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_13);
		String_t* L_17;
		L_17 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 5)) ? L_16: *(void**)L_16));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2));
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),0)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_24 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2));
		V_1 = L_26;
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_29 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_30);
		int32_t L_31 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1))))), (int32_t)L_31);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_32 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2), L_34);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_35 = ___count3;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_38 = ___key1;
		int32_t L_39 = ___index2;
		String_t* L_40 = V_2;
		int32_t L_41 = ___count3;
		int32_t L_42;
		L_42 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_38, L_39, L_40, 0, L_41, NULL);
		if (L_42)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_43 = ___entryIndex4;
		int32_t L_44 = V_1;
		*((int32_t*)L_43) = (int32_t)L_44;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_45 = V_1;
		V_0 = L_45;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_46 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 4),2));
		V_1 = L_48;
	}

IL_00f9:
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_50 = ___entryIndex4;
		int32_t L_51 = V_0;
		*((int32_t*)L_50) = (int32_t)L_51;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___index1;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_2);
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject** L_4 = ___value3;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XHashtable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_2);
		InvokerActionInvoker2< ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_2, L_0, L_1);
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value3, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this->____state_0;
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		Il2CppFullySharedGenericAny* L_4 = ___value3;
		NullCheck(L_0);
		bool L_5;
		L_5 = InvokerFuncInvoker4< bool, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	// TValue
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this->____state_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? ___value0 : &___value0), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = InvokerFuncInvoker0< XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_7);
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_gshared_inline (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_gshared_inline (Func_2_tA526681EE526C81F376160E44520BDC21770A705* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_gshared_inline (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mF5E5BCA45329AB80F4758F8AD4F0165DC0A38F7D_gshared_inline (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mE24DF921BC75D775724C5BF88B0B6F4460531F52_gshared_inline (Func_2_t0628A1BF337C31EEC0227EDFF1420E301156D17E* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1FEDE5143C866FB1A5CB37DD4DBF470BDCBCCF1A_gshared_inline (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_gshared_inline (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, uint8_t ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint8_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_gshared_inline (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* __this, uint8_t ___arg0, const RuntimeMethod* method) 
{
	typedef uint8_t (*FunctionPointerType) (RuntimeObject*, uint8_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) 
{
	{
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_0 = (ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_gshared_inline (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_gshared_inline (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) 
{
	typedef Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_gshared_inline (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_gshared_inline (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___arg0, const RuntimeMethod* method) 
{
	typedef LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m6953F3816EE803F64B21977608FFA48D59AB9272_gshared_inline (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* __this, int32_t ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 Enumerator_get_Current_m6987591F90119F35EB45122EFA211CBB487217DA_gshared_inline (Enumerator_tA6B0E3AA0EC07A9E7F9F11FA5D3E3A9A6E6CC468* __this, const RuntimeMethod* method) 
{
	{
		Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 L_0 = (Item_t8FC7D9F92E9721760703B4B56F611787026CCB22)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mACAE08BD1E2E4C77EEEBAA692327BFCF14844B6E_gshared_inline (Func_2_tA6D804B31E54652A967279FB7DF3DBBC1822448C* __this, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 Func_2_Invoke_mDB8B89C0C58089EF46491A8B21B0E715925B7D03_gshared_inline (Func_2_t5D29B3B20142BD8C4D73666ADA7B2D499D2919F8* __this, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22 ___arg0, const RuntimeMethod* method) 
{
	typedef Item_t6F1CC18F5D2D724F93D8D137D9186F250E932914 (*FunctionPointerType) (RuntimeObject*, Item_t8FC7D9F92E9721760703B4B56F611787026CCB22, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 Enumerator_get_Current_m9DEAF45BAE96094BE1B7BF201DAF6538DCD738FE_gshared_inline (Enumerator_tA19DBBD5290567B9423B1481A9CA5C4CB3C2A6DB* __this, const RuntimeMethod* method) 
{
	{
		VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 L_0 = (VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE1ED5E59AEBD6A9F1B2875B3D32A2F10D9BE958F_gshared_inline (Func_2_t44D1026969AF894584C1BA88914E6393F11CB0F9* __this, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F Func_2_Invoke_mF041ED0051D6EB5A21179F51516AEFFDE13B06A2_gshared_inline (Func_2_tF5A87773ADD9666788D6545441BD3CB2F8F4CE30* __this, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8 ___arg0, const RuntimeMethod* method) 
{
	typedef VirtualCurrency_tFB269AF4CE37FC1A4D811F46C721185DA73BF55F (*FunctionPointerType) (RuntimeObject*, VirtualCurrency_t31B3B7906E5C0B83B5338695615F4F7844C903C8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) 
{
	{
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_0 = (SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_gshared_inline (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_gshared_inline (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_gshared_inline (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___value0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
