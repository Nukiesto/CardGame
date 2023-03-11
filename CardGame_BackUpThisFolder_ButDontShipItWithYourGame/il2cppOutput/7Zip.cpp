#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E;
struct BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235;
struct BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F;
struct BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397;
struct CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425;
struct CommandSubCharsSetU5BU5D_tAC1A62B9329678287ADE9BCED68153B4B81F3167;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6;
struct SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C;
struct Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD;
struct Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96;
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct Base_t328CC80084F6F76591D4492009A4E6ED8C098DF8;
struct BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF;
struct CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF;
struct CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901;
struct CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E;
struct DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69;
struct Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B;
struct Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC;
struct Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3;
struct Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF;
struct Exception_t;
struct ICodeProgress_t9547F0366A00BB15AE518E2792B619130079FB21;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003;
struct InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB;
struct InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF;
struct InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E;
struct OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8;
struct Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3;
struct SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t541CB0945DF26A8619CC2B8555FB1DAF173627FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E;
struct LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3;
struct LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956;
struct LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4;
struct LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730;
struct Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICodeProgress_t9547F0366A00BB15AE518E2792B619130079FB21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____72C14F17CEC27D2BBC2C2333A09750633ADE706B2EE252B296DE050E6CB1E541_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____C88A5FD712C368135DFC00B43FD6EB1D8EC948B243FA4ACE7BC0709A59863639_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____E4187A6207789CF295129CD86465BF38AE3DB4B43D16C19CA8C29136188A48F2_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB47CC35C30DF08946A84235CE9D95F4E6C3996;
IL2CPP_EXTERN_C String_t* _stringLiteral3CBEFB7918C2A2445F7BC7C27DBD5C07079644AA;
IL2CPP_EXTERN_C String_t* _stringLiteral4090429DBF8087591B08E5E81398AB642BC3997B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B00C8B90DBA94C65B226C2640180E9C03A0292D;
IL2CPP_EXTERN_C String_t* _stringLiteral5AA828DB468D6FA5E2A16DE8AC5F9E703CFDE19F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C96C5B35EE9A66EA1C437FEA95D4ECCE980D966;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA817E4DCA19D4F7E6BFDEB82BD7232BF9379CBE2;
IL2CPP_EXTERN_C String_t* _stringLiteralACF0B5B7B18646AE22EB65E31800E1F0B9FE3951;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E1ACD6C3A8131B80907D4684980B256280D6BC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB8E981BF631E6984CAE44D3D1C1944B389CBF5;
IL2CPP_EXTERN_C const RuntimeMethod* BinTree_Create_m848A1915B046D49783ED2751CB87EFC87491D3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_Code_m35931A6D9DE44AFC9DBA16A54EEF506E96D687BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_SetDecoderProperties_m384C4B611C7ADDD261AA611E3AAAAFA581E4F11D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_SetLiteralProperties_mCB163D504A7EA812C921093AC3387E67ED025F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_SetPosBitsProperties_mB4146FB3A803D4B4FCE8E27DE71478FCB5EE4BDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InWindow_GetIndexByte_m03092ADFA2CFC561925A259301AF683F54EA030F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SevenZipHelper_Decompress_mE19D34371916437299268A242F9BE9F62F2AF231_RuntimeMethod_var;
struct BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B;
struct BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E;
struct BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235;
struct BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F;
struct BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397;
struct CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425;
struct CommandSubCharsSetU5BU5D_tAC1A62B9329678287ADE9BCED68153B4B81F3167;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6;
struct SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C;
struct Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD;
struct Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t3646B2DE598EE9B4CC62BB37B65C9179A43FE356 
{
};
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	int32_t ____size_1;
	int32_t ____version_2;
	RuntimeObject* ____syncRoot_3;
};
struct Base_t328CC80084F6F76591D4492009A4E6ED8C098DF8  : public RuntimeObject
{
};
struct CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF  : public RuntimeObject
{
	uint32_t ____value_1;
};
struct CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901  : public RuntimeObject
{
	String_t* ___IDString_0;
	bool ___PostStringMode_1;
};
struct CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E  : public RuntimeObject
{
	String_t* ___Chars_0;
	bool ___EmptyAllowed_1;
};
struct Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC  : public RuntimeObject
{
	uint32_t ___Range_1;
	uint32_t ___Code_2;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Stream_3;
};
struct Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Stream_1;
	uint64_t ___Low_2;
	uint32_t ___Range_3;
	uint32_t ____cacheSize_4;
	uint8_t ____cache_5;
	int64_t ___StartPosition_6;
};
struct InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_0;
	uint32_t ___m_Pos_1;
	uint32_t ___m_Limit_2;
	uint32_t ___m_BufferSize_3;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_Stream_4;
	bool ___m_StreamWasExhausted_5;
	uint64_t ___m_ProcessedSize_6;
};
struct InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bufferBase_0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_1;
	uint32_t ____posLimit_2;
	bool ____streamEndWasReached_3;
	uint32_t ____pointerToLastSafePosition_4;
	uint32_t ____bufferOffset_5;
	uint32_t ____blockSize_6;
	uint32_t ____pos_7;
	uint32_t ____keepSizeBefore_8;
	uint32_t ____keepSizeAfter_9;
	uint32_t ____streamPos_10;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity_0;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
struct OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_0;
	uint32_t ___m_Pos_1;
	uint32_t ___m_BufferSize_2;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_Stream_3;
	uint64_t ___m_ProcessedSize_4;
};
struct OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_0;
	uint32_t ____pos_1;
	uint32_t ____windowSize_2;
	uint32_t ____streamPos_3;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	uint32_t ___TrainSize_5;
};
struct Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7  : public RuntimeObject
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___NonSwitchStrings_0;
	SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868* ____switches_1;
};
struct SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3  : public RuntimeObject
{
	String_t* ___IDString_0;
	int32_t ___Type_1;
	bool ___Multi_2;
	int32_t ___MinLen_3;
	int32_t ___MaxLen_4;
	String_t* ___PostCharSet_5;
};
struct SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378  : public RuntimeObject
{
	bool ___ThereIs_0;
	bool ___WithMinus_1;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___PostStrings_2;
	int32_t ___PostCharIndex_3;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t541CB0945DF26A8619CC2B8555FB1DAF173627FC  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3  : public RuntimeObject
{
	Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* ___m_Coders_0;
	int32_t ___m_NumPrevBits_1;
	int32_t ___m_NumPosBits_2;
	uint32_t ___m_PosMask_3;
};
struct LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730  : public RuntimeObject
{
	Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96* ___m_Coders_0;
	int32_t ___m_NumPrevBits_1;
	int32_t ___m_NumPosBits_2;
	uint32_t ___m_PosMask_3;
};
struct BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF  : public InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF
{
	uint32_t ____cyclicBufferPos_11;
	uint32_t ____cyclicBufferSize_12;
	uint32_t ____matchMaxLen_13;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____son_14;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____hash_15;
	uint32_t ____cutValue_16;
	uint32_t ____hashMask_17;
	uint32_t ____hashSizeSum_18;
	bool ___HASH_ARRAY_19;
	uint32_t ___kNumHashDirectBytes_27;
	uint32_t ___kMinMatchCheck_28;
	uint32_t ___kFixHashSize_29;
};
struct BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B 
{
	uint32_t ___Prob_3;
};
struct BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D 
{
	uint32_t ___Prob_5;
};
struct BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 
{
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___Models_0;
	int32_t ___NumBitLevels_1;
};
struct BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_pinvoke
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* ___Models_0;
	int32_t ___NumBitLevels_1;
};
struct BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_com
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* ___Models_0;
	int32_t ___NumBitLevels_1;
};
struct BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F 
{
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ___Models_0;
	int32_t ___NumBitLevels_1;
};
struct BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_pinvoke
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* ___Models_0;
	int32_t ___NumBitLevels_1;
};
struct BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_com
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* ___Models_0;
	int32_t ___NumBitLevels_1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};
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
struct __StaticArrayInitTypeSizeU3D1572_tA5DFC6E2D241BE6D651349E64545035D95880DD6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1572_tA5DFC6E2D241BE6D651349E64545035D95880DD6__padding[1572];
	};
};
struct __StaticArrayInitTypeSizeU3D1620_t2CB3025E2AD53E6863D19B753EC3C1DF7C34075E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1620_t2CB3025E2AD53E6863D19B753EC3C1DF7C34075E__padding[1620];
	};
};
struct __StaticArrayInitTypeSizeU3D32_t8E2D44F6A94DE9BD6D7B397E2CB204A6B57D80C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t8E2D44F6A94DE9BD6D7B397E2CB204A6B57D80C5__padding[32];
	};
};
struct State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 
{
	uint32_t ___Index_0;
};
struct MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData_0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData_1;
	int32_t ___TotalTypes_2;
	int32_t ___TotalFiles_3;
	bool ___IsEditorOnly_4;
};
struct MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData_0;
	Il2CppSafeArray* ___TypesData_1;
	int32_t ___TotalTypes_2;
	int32_t ___TotalFiles_3;
	int32_t ___IsEditorOnly_4;
};
struct MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData_0;
	Il2CppSafeArray* ___TypesData_1;
	int32_t ___TotalTypes_2;
	int32_t ___TotalFiles_3;
	int32_t ___IsEditorOnly_4;
};
struct Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158 
{
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_Decoders_0;
};
struct Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_pinvoke
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* ___m_Decoders_0;
};
struct Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_com
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* ___m_Decoders_0;
};
struct Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 
{
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ___m_Encoders_0;
};
struct Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_pinvoke
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* ___m_Encoders_0;
};
struct Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_com
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* ___m_Encoders_0;
};
struct U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF  : public RuntimeObject
{
};
struct CoderPropID_t058DDDFF488A2A5BDB37D48E7F37C3A660DB4DF7 
{
	int32_t ___value___2;
};
struct Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B  : public RuntimeObject
{
	OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* ___m_OutWindow_0;
	Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___m_RangeDecoder_1;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_IsMatchDecoders_2;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_IsRepDecoders_3;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_IsRepG0Decoders_4;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_IsRepG1Decoders_5;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_IsRepG2Decoders_6;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_IsRep0LongDecoders_7;
	BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* ___m_PosSlotDecoder_8;
	BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___m_PosDecoders_9;
	BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 ___m_PosAlignDecoder_10;
	LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* ___m_LenDecoder_11;
	LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* ___m_RepLenDecoder_12;
	LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* ___m_LiteralDecoder_13;
	uint32_t ___m_DictionarySize_14;
	uint32_t ___m_DictionarySizeCheck_15;
	uint32_t ___m_PosStateMask_16;
	bool ____solid_17;
};
struct Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3  : public RuntimeObject
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ____state_2;
	uint8_t ____previousByte_3;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____repDistances_4;
	OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* ____optimum_9;
	RuntimeObject* ____matchFinder_10;
	Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ____rangeEncoder_11;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____isMatch_12;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____isRep_13;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____isRepG0_14;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____isRepG1_15;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____isRepG2_16;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____isRep0Long_17;
	BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* ____posSlotEncoder_18;
	BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ____posEncoders_19;
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F ____posAlignEncoder_20;
	LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* ____lenEncoder_21;
	LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* ____repMatchLenEncoder_22;
	LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* ____literalEncoder_23;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____matchDistances_24;
	uint32_t ____numFastBytes_25;
	uint32_t ____longestMatchLength_26;
	uint32_t ____numDistancePairs_27;
	uint32_t ____additionalOffset_28;
	uint32_t ____optimumEndIndex_29;
	uint32_t ____optimumCurrentIndex_30;
	bool ____longestMatchWasFound_31;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____posSlotPrices_32;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____distancesPrices_33;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____alignPrices_34;
	uint32_t ____alignPriceCount_35;
	uint32_t ____distTableSize_36;
	int32_t ____posStateBits_37;
	uint32_t ____posStateMask_38;
	int32_t ____numLiteralPosStateBits_39;
	int32_t ____numLiteralContextBits_40;
	uint32_t ____dictionarySize_41;
	uint32_t ____dictionarySizePrev_42;
	uint32_t ____numFastBytesPrev_43;
	int64_t ___nowPos64_44;
	bool ____finished_45;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____inStream_46;
	int32_t ____matchFinderType_47;
	bool ____writeEndMark_48;
	bool ____needReleaseMFStream_49;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___reps_50;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___repLens_51;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___properties_53;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tempPrices_54;
	uint32_t ____matchPriceCount_55;
	uint32_t ____trainSize_57;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	int32_t ____origin_5;
	int32_t ____position_6;
	int32_t ____length_7;
	int32_t ____capacity_8;
	bool ____expandable_9;
	bool ____writable_10;
	bool ____exposable_11;
	bool ____isOpen_12;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value_0;
};
struct LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E  : public RuntimeObject
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B ___m_Choice_0;
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B ___m_Choice2_1;
	BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* ___m_LowCoder_2;
	BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* ___m_MidCoder_3;
	BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 ___m_HighCoder_4;
	uint32_t ___m_NumPosStates_5;
};
struct LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956  : public RuntimeObject
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D ____choice_0;
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D ____choice2_1;
	BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* ____lowCoder_2;
	BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* ____midCoder_3;
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F ____highCoder_4;
};
struct Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47  : public RuntimeObject
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___State_0;
	bool ___Prev1IsChar_1;
	bool ___Prev2_2;
	uint32_t ___PosPrev2_3;
	uint32_t ___BackPrev2_4;
	uint32_t ___Price_5;
	uint32_t ___PosPrev_6;
	uint32_t ___BackPrev_7;
	uint32_t ___Backs0_8;
	uint32_t ___Backs1_9;
	uint32_t ___Backs2_10;
	uint32_t ___Backs3_11;
};
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};
struct LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4  : public LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____prices_5;
	uint32_t ____tableSize_6;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____counters_7;
};
struct DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
struct InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
struct CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Table_0;
};
struct SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields
{
	int32_t ___dictionary_0;
	bool ___eos_1;
	CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* ___propIDs_2;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___properties_3;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ProbPrices_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};
struct U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF_StaticFields
{
	__StaticArrayInitTypeSizeU3D1572_tA5DFC6E2D241BE6D651349E64545035D95880DD6 ___72C14F17CEC27D2BBC2C2333A09750633ADE706B2EE252B296DE050E6CB1E541_0;
	__StaticArrayInitTypeSizeU3D32_t8E2D44F6A94DE9BD6D7B397E2CB204A6B57D80C5 ___C88A5FD712C368135DFC00B43FD6EB1D8EC948B243FA4ACE7BC0709A59863639_1;
	__StaticArrayInitTypeSizeU3D1620_t2CB3025E2AD53E6863D19B753EC3C1DF7C34075E ___E4187A6207789CF295129CD86465BF38AE3DB4B43D16C19CA8C29136188A48F2_2;
};
struct Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___g_FastPos_1;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___kMatchFinderIDs_56;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235  : public RuntimeArray
{
	ALIGN_FIELD (8) BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D m_Items[1];

	inline BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D value)
	{
		m_Items[index] = value;
	}
};
struct BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E  : public RuntimeArray
{
	ALIGN_FIELD (8) BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B m_Items[1];

	inline BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B value)
	{
		m_Items[index] = value;
	}
};
struct BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F  : public RuntimeArray
{
	ALIGN_FIELD (8) BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 m_Items[1];

	inline BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Models_0), (void*)NULL);
	}
	inline BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Models_0), (void*)NULL);
	}
};
struct Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD  : public RuntimeArray
{
	ALIGN_FIELD (8) Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158 m_Items[1];

	inline Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Decoders_0), (void*)NULL);
	}
	inline Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Decoders_0), (void*)NULL);
	}
};
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
struct OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C  : public RuntimeArray
{
	ALIGN_FIELD (8) Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* m_Items[1];

	inline Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510  : public RuntimeArray
{
	ALIGN_FIELD (8) BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F m_Items[1];

	inline BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Models_0), (void*)NULL);
	}
	inline BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Models_0), (void*)NULL);
	}
};
struct CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397  : public RuntimeArray
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
struct Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96  : public RuntimeArray
{
	ALIGN_FIELD (8) Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 m_Items[1];

	inline Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Encoders_0), (void*)NULL);
	}
	inline Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Encoders_0), (void*)NULL);
	}
};
struct SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868  : public RuntimeArray
{
	ALIGN_FIELD (8) SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* m_Items[1];

	inline SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6  : public RuntimeArray
{
	ALIGN_FIELD (8) SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* m_Items[1];

	inline SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425  : public RuntimeArray
{
	ALIGN_FIELD (8) CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* m_Items[1];

	inline CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CommandSubCharsSetU5BU5D_tAC1A62B9329678287ADE9BCED68153B4B81F3167  : public RuntimeArray
{
	ALIGN_FIELD (8) CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* m_Items[1];

	inline CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC__ctor_mB657E12B1251121EB1A594C586FD0851B0431272 (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC_Update_mDE9ADCDE054BF99B033B04B1B95E15D1F2395121 (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, uint32_t ___1_offset, uint32_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC_GetDigest_m29078494B1D062D9018B9676CDF643A639387A65 (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC_CalculateDigest_mB05B82EF9A604D744EA91DB93D803D7A10104B3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, uint32_t ___1_offset, uint32_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Normalize_mEABB70D53B44028E0D65637E5E3A16C88DBE6DB9 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder_UpdateModel_mC3531FD11E1E219A8C68F3DA90DC4DD0CBEEA311 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, uint32_t ___0_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_encoder, uint32_t ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, uint32_t ___0_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitDecoder_UpdateModel_m48D7BE3290C778B393F64DB3CE2072E556208338 (BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* __this, int32_t ___0_numMoveBits, uint32_t ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6 (BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62 (BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, int32_t ___0_numBitLevels, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_ReverseEncode_mE4356D2C59949D148B7F1D8CBF16BF7673D8CC62 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, uint32_t ___0_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeEncoder_ReverseGetPrice_mFF38E42DC911859AD18CE1E73612FBF41D277551 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, uint32_t ___0_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25 (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, int32_t ___0_numBitLevels, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606 (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeDecoder_ReverseDecode_mDFC43874286111FF0CE49263AB5A03E7AFC91676 (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_Init_mBCD4EDB45673F2976FD95F3D30F3D3846034DA24 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow__ctor_m9BC771BB23A995BD5CCC14B82E2000045ED11D7F (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_mB11322DFDBE91F127AA7A8E1369F9A7F3CC55524 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenDecoder__ctor_m5523CC7EA6ED36FD00B39EC0DB39D478699673F4 (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralDecoder__ctor_m5714F1AAFDFD0D424F770338D07DB48543BCFF7D (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_Create_m35F7227D13C0A8B4AECD99B7FDCCBC76F2FD0C2B (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint32_t ___0_windowSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4 (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralDecoder_Create_mCEF25EFB5270ED276D1BE3EB6562C8D1655EAE88 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, int32_t ___0_numPosBits, int32_t ___1_numPrevBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenDecoder_Create_m532B794D390B2140B8CC5F6CC6AA8AC276E7EECB (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, uint32_t ___0_numPosStates, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Init_m06BAA30A080F2EC0B4E6F5399C19CA507BE97700 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_Init_m5FE8D60B59443D9AB528325424FB102B974FA125 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_solid, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralDecoder_Init_mE097EDF34235CB315F41E86116FF8D902C7381E2 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenDecoder_Init_m376C129B76A2E41993359D99E9D0B6D5B38CD33B (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Init_mD15C118888026C8FC1DCC6DE79B13E8163D58B2E (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataErrorException__ctor_m24B9F505EB1D7B4ED7849F9E0084D4874E81B947 (DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LiteralDecoder_DecodeNormal_mCE2BA05E3B6A5BF01EF6ADA4E19628B29719F47B (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint32_t ___1_pos, uint8_t ___2_prevByte, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_PutByte_m356D1180AFCA7D7896F0F6C6BE423C3C76D92A5C (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint8_t ___0_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t OutWindow_GetByte_mCEE87FE60CB877A2AEDEC25DC0C1447ABBE22AAF (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint32_t ___0_distance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LiteralDecoder_DecodeWithMatchByte_mA7FA99BA393BB10909D9E2403B2A6AB9CEF8C651 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint32_t ___1_pos, uint8_t ___2_prevByte, uint8_t ___3_matchByte, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t LenDecoder_Decode_mABEE04433780F6DDE6FCFD57862A5AB18F3ACE7E (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint32_t ___1_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Base_GetLenToPosState_m405EAAFD348B53068CA37D9A01309E42ECEEBEA1 (uint32_t ___0_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeDecoder_ReverseDecode_m2BCE2F632B781E4F5BB01D0BCA6594E36A1490CC (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___0_Models, uint32_t ___1_startIndex, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___2_rangeDecoder, int32_t ___3_NumBitLevels, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Decoder_DecodeDirectBits_mF092A2E60FBC7D3DBC3620B40A6900FFB3E81BA7 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, int32_t ___0_numTotalBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_CopyBlock_m7D345E851F8878CD0C62F409BA1BE11A256F94A0 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint32_t ___0_distance, uint32_t ___1_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_Flush_m2635A24331E2CA6A86E8788AFC95285B0EA32B47 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_ReleaseStream_m54B5EEDDC79A30825EBB022DA82BE6670824DF0B (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_ReleaseStream_mD2659602F0D30EE9053523BFA87F5F15E981E668 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetDictionarySize_m726BE623E1341B9027D2F3139E3610BFB5D6492D (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, uint32_t ___0_dictionarySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetLiteralProperties_mCB163D504A7EA812C921093AC3387E67ED025F58 (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, int32_t ___0_lp, int32_t ___1_lc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetPosBitsProperties_mB4146FB3A803D4B4FCE8E27DE71478FCB5EE4BDE (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, int32_t ___0_pb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OutWindow_Train_m27791D111A3E80E502B1149A991A9110D97761F1 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder2_Create_m9BEF3660AE8FE73B3D724924FCB7B029E3322818 (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder2_Init_m7A8F3C6F5B9D58F3415D1B728CB6391E5BB48332 (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t LiteralDecoder_GetState_mD4F2428A58E0F116F16E856175675716E6D6A282 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, uint32_t ___0_pos, uint8_t ___1_prevByte, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Decoder2_DecodeNormal_m0C68584F1E162085FD939F803A75EAE95E072A3F (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Decoder2_DecodeWithMatchByte_m2290DF23B5418D3EBE739CD38472AE2C2BC98A3F (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint8_t ___1_matchByte, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree__ctor_m8B893030BC588B070A3AD734BD73AD7B306CABB4 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_SetType_m90713D4A757BAFD7A79B2B68DCDC117622E081AD (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, int32_t ___0_numHashBytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralEncoder_Create_m058CFBED1F67EDF233EAE51B9A8812C9CE09E850 (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, int32_t ___0_numPosBits, int32_t ___1_numPrevBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_mC2A5AA81FEB98F4AECB043B786F2AF569C0C41F1 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder__ctor_m68947908F4847299A2F052E855508D175B5B58D3 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralEncoder__ctor_m3E8E8EB330C6BD81A3D5350576860475EDC098E6 (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Optimal__ctor_m92565D3B039685A68704CEAB75C150691ADB2300 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_BaseInit_m10C2748349923617A51CA3FE1014942033FBC3DB (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Init_m3693A7EB2415EFD605F80BC3D7B38504F5E0A69E (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralEncoder_Init_m7529C6AA133E3F4237A5324C72092BAA722CF04E (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder_Init_m5A7B50A296E106A7465EC8CC62A936F8569D6467 (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, uint32_t ___0_numPosStates, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t LenPriceTableEncoder_GetPrice_m7EFC87D15F1855E62F78A82C6579E81E49566DA7 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_symbol, uint32_t ___1_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPureRepPrice_m364A41D379A0968DB508D562D4940FC0E5AE56B4 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_repIndex, State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___1_state, uint32_t ___2_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPosSlot2_m1A0C4F3D8683ACFD33F8A4CFE83DD46F9FFB3B52 (uint32_t ___0_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Optimal_MakeAsChar_m80AAD07DA3ACFB06AA07458E0DAE88923BC8AB44 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReadMatchDistances_mDAD957C5B4022AC56A6791B7F5BA06DEF1363464 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t* ___0_lenRes, uint32_t* ___1_numDistancePairs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_MovePos_mE916096040D27DE0B99DAA8CDDD11BBF2C4E054E (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_num, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622 (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, uint32_t ___0_pos, uint8_t ___1_prevByte, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, bool ___0_matchMode, uint8_t ___1_matchByte, uint8_t ___2_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetRepLen1Price_mC8C4E1246A79AA9FAFA2327F19DEBFFB8F9E37AB (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___0_state, uint32_t ___1_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Optimal_MakeAsShortRep_m0F2D5E143EB951D124EC1C377C306D9152F9DA97 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPosLenPrice_mAB28816EC47676E646999B96E90F728EEDFD81B6 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_pos, uint32_t ___1_len, uint32_t ___2_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_Backward_m8CB79946DA75B9C4137C8CC787AFB921D8CF8FD3 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t* ___0_backRes, uint32_t ___1_cur, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optimal_IsShortRep_m4E9F62525F114996DCBA4D347641BD522A66E051 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_repIndex, uint32_t ___1_len, State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___2_state, uint32_t ___3_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_Encode_m2DB22DA6437A1CF035BFAB73FD64C8EEA74E76E4 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, uint32_t ___2_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_EncodeDirectBits_m5A00EB88F4197923767225600095D785CC6A7993 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, uint32_t ___0_v, int32_t ___1_numTotalBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseMFStream_m37C069AD917379A2B3F985CCB9D76E562BFC2F45 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_WriteEndMarker_m7AA8EE8954D6C6D703102CA255C69A25B02819D1 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FlushData_mFFF2311A72CC8DDBD3D7945948B5E4545AF46EC9 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FlushStream_m2EFEEDCEE779C7C36A08E214FA81C486592B1AB4 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Flush_m647BC9F67372D6819554D665D7B7AA351312BDF0 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_nowPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_Encode_m96AE6E6477087E95B1EE6C891C8F63706550895E (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint8_t ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetOptimum_m3FAD061E535C7AD55A24439A4568BAF4800F9017 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_position, uint32_t* ___1_backRes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_EncodeMatched_mDC7071C609D71ADF7924A0B033BB9AA159644F7E (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint8_t ___1_matchByte, uint8_t ___2_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPosSlot_mE8AD8311539B89B57249B785AF430BF299BF6E7F (uint32_t ___0_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_ReverseEncode_mC4CEA0C89B1A990CFE1C26C857775ED2A8B65F1F (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ___0_Models, uint32_t ___1_startIndex, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___2_rangeEncoder, int32_t ___3_NumBitLevels, uint32_t ___4_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FillDistancesPrices_mB25D0C1F0376BA137873FA03292A67C4E9145415 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FillAlignPrices_mAC28343B8BB129FF00C602FB8303FD0B33B73DBE (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Encoder_GetProcessedSizeAdd_mD596D887FA0C61792C437F4F5C5B5EB85B191100 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Encoder_SetStream_m0BD08DAED3E0144EBC55E6043391E94A30EC46E7_inline (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseStream_m704D1F044E24C84667C06A2FF52A8ABBC90CC6D5 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseOutStream_m94DC4D6443B34C90132E857A47537549771E629C (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Create_mC3015D1D17C3A7D7299F6EAB6B24070C20BEB7D5 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetOutStream_m76E4FEC5359AC16A83FDF900DB35D70B9935B8E2 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_outStream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Init_m813E0BC4C3FAFE43B32D2C77E04B2C69350B523C (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LenPriceTableEncoder_SetTableSize_m4B8DBF8FF347E563EDC756B7BE6DB5BADF943365_inline (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_tableSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_UpdateTables_m6234C063DFDF1328BD11A7ABFD868C6CA59B543F (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_numPosStates, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseStreams_m3DE4A1D8A33C597F1ABD49230827A4AACD80C5F4 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetStreams_mB4BE170DCF956468B89AD39F4A02777DA2111766 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, int64_t ___2_inSize, int64_t ___3_outSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_CodeOneBlock_m72E24B2A392E5E9683C9BA662B236E1F11C55C25 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, int64_t* ___0_inSize, int64_t* ___1_outSize, bool* ___2_finished, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeEncoder_ReverseGetPrice_mBAC1F2630793D3885D96E02460D3B8EB19FB0EFF (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ___0_Models, uint32_t ___1_startIndex, int32_t ___2_NumBitLevels, uint32_t ___3_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_FindMatchFinder_mD499A5CD54F61C923E2D6C9C5D4D5C273833CA7E (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Encoder_SetWriteEndMarkerMode_m1105355FDDE121190FB3E090A948499A7F027405_inline (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, bool ___0_writeEndMarker, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_Create_m7AD0041C68C2F2DE9F072C45DE3BA21189DF91F0 (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_Init_mC4586393755E7294511542C1B280C41CDC51C93D (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder_SetPrices_m5A4439FB5484B283434F16D48E3FFB854ED980B5 (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, uint32_t ___0_posState, uint32_t ___1_numSymbols, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_prices, uint32_t ___3_st, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_UpdateTable_mDD404DEA332CF5E0B4067B0EB570CC4ADD1E9730 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder_Encode_m122418B6AD029B799511198EA11521B85DEE1022 (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, uint32_t ___2_posState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder__ctor_m8915FB31D45532290BCF923FE8486CE15555454C (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_m716D91C874D476B3B67363DC6AD931540AF70524 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* ___0_propIDs, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_properties, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_WriteCoderProperties_m4BA5427B1EFF6797B9BEBFB9AFC3205106C19C1C (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_outStream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Code_m89F8DBBDBDDE531A2BA65F915B73E4FB50F1BF06 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, int64_t ___2_inSize, int64_t ___3_outSize, RuntimeObject* ___4_progress, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m857B05BA0018D41EC36D00DC1B98ED2A190B5B77 (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetDecoderProperties_m384C4B611C7ADDD261AA611E3AAAAFA581E4F11D (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_properties, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Code_m35931A6D9DE44AFC9DBA16A54EEF506E96D687BA (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, int64_t ___2_inSize, int64_t ___3_outSize, RuntimeObject* ___4_progress, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InWindow_SetStream_mA2923B81EECFCCD33F3F89930A23D93C0CA864EC_inline (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_ReleaseStream_m482381F5C8AA26E21CAC15075A07F75307771A2C (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_Init_m49BD38C8F87139C3B231F3DE72AD98B49CB42EDD (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_ReduceOffsets_mAAD1FE9CC8957D04102808596FE5D61B124225C6 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, int32_t ___0_subValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_MovePos_m6A92B9519E2A48751C64F1873072461EEC6F4C16 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_Normalize_m9EB0A518C4E48DF678A9F72CA8BBF7C8D3EAE77A (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t InWindow_GetIndexByte_m03092ADFA2CFC561925A259301AF683F54EA030F (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InWindow_GetMatchLen_mF1F60AEC6A33A1AC212B704F52E3502FAF3347E9 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, int32_t ___0_index, uint32_t ___1_distance, uint32_t ___2_limit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InWindow_GetNumAvailableBytes_mF7A6A5A3D1F2F761DEFEFF4EE3595A4FD1453377 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_Create_m348F70D018E12AF96C0C64F13068B78273EF9CC0 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, uint32_t ___0_keepSizeBefore, uint32_t ___1_keepSizeAfter, uint32_t ___2_keepSizeReserv, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_MovePos_mAF7789C2D59CBC1AC09039A1C84911BEC6C0208B (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_NormalizeLinks_mBB4D2FEE6C34CDBA8636C8DD68E2D1EF5C0C9285 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_items, uint32_t ___1_numItems, uint32_t ___2_subValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow__ctor_m8478C6AE6954A0FDECF5D151E8EFFD5D86364587 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_Free_mE79500DD8294640D8D07B4CCAABEA3478C8D9F59 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_MoveBlock_mA90B7B9C201BE0CCB0976CEFCAF30FB701C21BE1 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InBuffer_ReadBlock_m97D406A24160EC8D3D32BEB25B9304DE5852F35B (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_FlushData_m2A7C1CBF0DBE20768AB2D6682BF79B7D7B1576AA (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchForm__ctor_mCFE8D5BA831DF31A0A37CC16DA898C2230DF989A (SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* __this, String_t* ___0_idString, int32_t ___1_type, bool ___2_multi, int32_t ___3_minLen, int32_t ___4_maxLen, String_t* ___5_postCharSet, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchForm__ctor_mBDCFE6EC2BBFE6D9F1922C4BB2B27AA58BF07F37 (SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* __this, String_t* ___0_idString, int32_t ___1_type, bool ___2_multi, int32_t ___3_minLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchResult__ctor_m523FEF730A65162538D253FC15ABF00D10FF4101 (SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsItSwitchChar_mE80D21599853E7EBCF91ACA2ACCEF40821D17FDA (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mA704D45BCEE79B6C76F2B1ABF95DF0161055867D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, bool ___5_ignoreCase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9 (Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7* __this, String_t* ___0_srcString, SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* ___1_switchForms, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m22DF7A8496B62EBD9D41BF94269FC4863EC62277 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____72C14F17CEC27D2BBC2C2333A09750633ADE706B2EE252B296DE050E6CB1E541_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____E4187A6207789CF295129CD86465BF38AE3DB4B43D16C19CA8C29136188A48F2_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1572));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____72C14F17CEC27D2BBC2C2333A09750633ADE706B2EE252B296DE050E6CB1E541_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData_0), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1620));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____E4187A6207789CF295129CD86465BF38AE3DB4B43D16C19CA8C29136188A48F2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData_1), (void*)L_4);
		(&V_0)->___TotalFiles_3 = ((int32_t)16);
		(&V_0)->___TotalTypes_2 = ((int32_t)39);
		(&V_0)->___IsEditorOnly_4 = (bool)0;
		MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m84D8EACA99037E75D93BF9F0BC376D506B460F92 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t541CB0945DF26A8619CC2B8555FB1DAF173627FC* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshal_pinvoke(const MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494& unmarshaled, MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData_0);
	marshaled.___TypesData_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData_1);
	marshaled.___TotalTypes_2 = unmarshaled.___TotalTypes_2;
	marshaled.___TotalFiles_3 = unmarshaled.___TotalFiles_3;
	marshaled.___IsEditorOnly_4 = static_cast<int32_t>(unmarshaled.___IsEditorOnly_4);
}
IL2CPP_EXTERN_C void MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshal_pinvoke_back(const MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_pinvoke& marshaled, MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData_0));
	unmarshaled.___TypesData_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData_1));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes_2;
	unmarshaled.___TotalTypes_2 = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles_3;
	unmarshaled.___TotalFiles_3 = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly_4);
	unmarshaled.___IsEditorOnly_4 = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshal_pinvoke_cleanup(MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData_0);
	marshaled.___FilePathsData_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData_1);
	marshaled.___TypesData_1 = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshal_com(const MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494& unmarshaled, MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_com& marshaled)
{
	marshaled.___FilePathsData_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData_0);
	marshaled.___TypesData_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData_1);
	marshaled.___TotalTypes_2 = unmarshaled.___TotalTypes_2;
	marshaled.___TotalFiles_3 = unmarshaled.___TotalFiles_3;
	marshaled.___IsEditorOnly_4 = static_cast<int32_t>(unmarshaled.___IsEditorOnly_4);
}
IL2CPP_EXTERN_C void MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshal_com_back(const MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_com& marshaled, MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData_0));
	unmarshaled.___TypesData_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData_1));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes_2;
	unmarshaled.___TotalTypes_2 = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles_3;
	unmarshaled.___TotalFiles_3 = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly_4);
	unmarshaled.___IsEditorOnly_4 = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshal_com_cleanup(MonoScriptData_t4AC4E27D73EADA29252C98763FECF507CEE27494_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData_0);
	marshaled.___FilePathsData_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData_1);
	marshaled.___TypesData_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC__cctor_m1B69AF81329EFA482F183E3638CB1050A59E9E76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0), (void*)L_0);
		V_0 = 0;
		goto IL_0042;
	}

IL_0013:
	{
		uint32_t L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0032;
	}

IL_0019:
	{
		uint32_t L_2 = V_1;
		if (!((int32_t)((int32_t)L_2&1)))
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_3 = V_1;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_3>>1))^((int32_t)-306674912)));
		goto IL_002e;
	}

IL_002a:
	{
		uint32_t L_4 = V_1;
		V_1 = ((int32_t)((uint32_t)L_4>>1));
	}

IL_002e:
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0032:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)8)))
		{
			goto IL_0019;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_9);
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
	}

IL_0042:
	{
		uint32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC_Init_m74AAF5602BA25F2ACBF1DD4BAB8E047F2200374D (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, const RuntimeMethod* method) 
{
	{
		__this->____value_1 = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC_UpdateByte_m0E9CF4F5E8B5C315E39F5100C715471006156EBA (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		uint32_t L_1 = __this->____value_1;
		uint8_t L_2 = ___0_b;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)(((int32_t)(uint8_t)L_1)^(int32_t)L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = __this->____value_1;
		__this->____value_1 = ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC_Update_mDE9ADCDE054BF99B033B04B1B95E15D1F2395121 (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, uint32_t ___1_offset, uint32_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		il2cpp_codegen_runtime_class_init_inline(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		uint32_t L_1 = __this->____value_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		uint32_t L_3 = ___1_offset;
		uint32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_0);
		int32_t L_7 = ((int32_t)(((int32_t)(uint8_t)L_1)^(int32_t)L_6));
		uint32_t L_8 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = __this->____value_1;
		__this->____value_1 = ((int32_t)((int32_t)L_8^((int32_t)((uint32_t)L_9>>8))));
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
	}

IL_002a:
	{
		uint32_t L_11 = V_0;
		uint32_t L_12 = ___2_size;
		if ((!(((uint32_t)L_11) >= ((uint32_t)L_12))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC_GetDigest_m29078494B1D062D9018B9676CDF643A639387A65 (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value_1;
		return ((int32_t)((int32_t)L_0^(-1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC_CalculateDigest_mB05B82EF9A604D744EA91DB93D803D7A10104B3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, uint32_t ___1_offset, uint32_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* L_0 = (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF*)il2cpp_codegen_object_new(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		CRC__ctor_mB657E12B1251121EB1A594C586FD0851B0431272(L_0, NULL);
		CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		uint32_t L_3 = ___1_offset;
		uint32_t L_4 = ___2_size;
		NullCheck(L_1);
		CRC_Update_mDE9ADCDE054BF99B033B04B1B95E15D1F2395121(L_1, L_2, L_3, L_4, NULL);
		NullCheck(L_1);
		uint32_t L_5;
		L_5 = CRC_GetDigest_m29078494B1D062D9018B9676CDF643A639387A65(L_1, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CRC_VerifyDigest_m5BE84EA03BBB48B52A83F7D58833FE592ADCD460 (uint32_t ___0_digest, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, uint32_t ___2_offset, uint32_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_data;
		uint32_t L_1 = ___2_offset;
		uint32_t L_2 = ___3_size;
		il2cpp_codegen_runtime_class_init_inline(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = CRC_CalculateDigest_mB05B82EF9A604D744EA91DB93D803D7A10104B3D(L_0, L_1, L_2, NULL);
		uint32_t L_4 = ___0_digest;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC__ctor_mB657E12B1251121EB1A594C586FD0851B0431272 (CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF* __this, const RuntimeMethod* method) 
{
	{
		__this->____value_1 = (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataErrorException__ctor_m24B9F505EB1D7B4ED7849F9E0084D4874E81B947 (DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AA828DB468D6FA5E2A16DE8AC5F9E703CFDE19F);
		s_Il2CppMethodInitialized = true;
	}
	{
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, _stringLiteral5AA828DB468D6FA5E2A16DE8AC5F9E703CFDE19F, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4 (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB47CC35C30DF08946A84235CE9D95F4E6C3996);
		s_Il2CppMethodInitialized = true;
	}
	{
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, _stringLiteral0CB47CC35C30DF08946A84235CE9D95F4E6C3996, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetStream_m0BD08DAED3E0144EBC55E6043391E94A30EC46E7 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___Stream_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseStream_m704D1F044E24C84667C06A2FF52A8ABBC90CC6D5 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	{
		__this->___Stream_1 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_1), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Init_m3693A7EB2415EFD605F80BC3D7B38504F5E0A69E (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___Stream_1;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_0);
		__this->___StartPosition_6 = L_1;
		__this->___Low_2 = ((int64_t)0);
		__this->___Range_3 = (-1);
		__this->____cacheSize_4 = 1;
		__this->____cache_5 = (uint8_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FlushData_mFFF2311A72CC8DDBD3D7945948B5E4545AF46EC9 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000e;
	}

IL_0004:
	{
		Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF(__this, NULL);
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FlushStream_m2EFEEDCEE779C7C36A08E214FA81C486592B1AB4 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___Stream_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_CloseStream_mED48E22E0BBEE3111D04EF0B8C746CDA0776C471 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___Stream_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(18, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Encode_mA94AB874AD6BC99954BEB770CE26EB68655F2CD8 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, uint32_t ___0_start, uint32_t ___1_size, uint32_t ___2_total, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint64_t L_0 = __this->___Low_2;
		uint32_t L_1 = ___0_start;
		uint32_t L_2 = __this->___Range_3;
		uint32_t L_3 = ___2_total;
		int32_t L_4 = ((int32_t)((uint32_t)(int32_t)L_2/(uint32_t)(int32_t)L_3));
		V_0 = L_4;
		__this->___Range_3 = L_4;
		uint32_t L_5 = V_0;
		__this->___Low_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_5))))));
		uint32_t L_6 = __this->___Range_3;
		uint32_t L_7 = ___1_size;
		__this->___Range_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7));
		goto IL_0045;
	}

IL_0031:
	{
		uint32_t L_8 = __this->___Range_3;
		__this->___Range_3 = ((int32_t)((int32_t)L_8<<8));
		Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF(__this, NULL);
	}

IL_0045:
	{
		uint32_t L_9 = __this->___Range_3;
		if ((!(((uint32_t)L_9) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint32_t V_1 = 0;
	{
		uint64_t L_0 = __this->___Low_2;
		if ((!(((uint32_t)((int32_t)(uint32_t)L_0)) >= ((uint32_t)((int32_t)-16777216)))))
		{
			goto IL_001b;
		}
	}
	{
		uint64_t L_1 = __this->___Low_2;
		if ((!(((uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32))))) == ((uint32_t)1))))
		{
			goto IL_0064;
		}
	}

IL_001b:
	{
		uint8_t L_2 = __this->____cache_5;
		V_0 = L_2;
	}

IL_0022:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___Stream_1;
		uint8_t L_4 = V_0;
		uint64_t L_5 = __this->___Low_2;
		NullCheck(L_3);
		VirtualActionInvoker1< uint8_t >::Invoke(37, L_3, (uint8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)((uint64_t)L_5>>((int32_t)32)))))));
		V_0 = (uint8_t)((int32_t)255);
		uint32_t L_6 = __this->____cacheSize_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1));
		uint32_t L_7 = V_1;
		__this->____cacheSize_4 = L_7;
		uint32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_9 = __this->___Low_2;
		__this->____cache_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)(uint32_t)L_9)>>((int32_t)24))));
	}

IL_0064:
	{
		uint32_t L_10 = __this->____cacheSize_4;
		__this->____cacheSize_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		uint64_t L_11 = __this->___Low_2;
		__this->___Low_2 = ((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(uint32_t)L_11)<<8))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_EncodeDirectBits_m5A00EB88F4197923767225600095D785CC6A7993 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, uint32_t ___0_v, int32_t ___1_numTotalBits, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_numTotalBits;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0058;
	}

IL_0006:
	{
		uint32_t L_1 = __this->___Range_3;
		__this->___Range_3 = ((int32_t)((uint32_t)L_1>>1));
		uint32_t L_2 = ___0_v;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)(L_3&((int32_t)31)))))&1))) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		uint64_t L_4 = __this->___Low_2;
		uint32_t L_5 = __this->___Range_3;
		__this->___Low_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_4, ((int64_t)(uint64_t)L_5)));
	}

IL_0033:
	{
		uint32_t L_6 = __this->___Range_3;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_7 = __this->___Range_3;
		__this->___Range_3 = ((int32_t)((int32_t)L_7<<8));
		Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF(__this, NULL);
	}

IL_0054:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0058:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_EncodeBit_m30D3ECB0B46E2B5D5327E5357D82595B3A73835F (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, uint32_t ___0_size0, int32_t ___1_numTotalBits, uint32_t ___2_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___Range_3;
		int32_t L_1 = ___1_numTotalBits;
		uint32_t L_2 = ___0_size0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31))))), (int32_t)L_2));
		uint32_t L_3 = ___2_symbol;
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_4 = V_0;
		__this->___Range_3 = L_4;
		goto IL_004d;
	}

IL_001a:
	{
		uint64_t L_5 = __this->___Low_2;
		uint32_t L_6 = V_0;
		__this->___Low_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)(uint64_t)L_6)));
		uint32_t L_7 = __this->___Range_3;
		uint32_t L_8 = V_0;
		__this->___Range_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		goto IL_004d;
	}

IL_0039:
	{
		uint32_t L_9 = __this->___Range_3;
		__this->___Range_3 = ((int32_t)((int32_t)L_9<<8));
		Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF(__this, NULL);
	}

IL_004d:
	{
		uint32_t L_10 = __this->___Range_3;
		if ((!(((uint32_t)L_10) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Encoder_GetProcessedSizeAdd_mD596D887FA0C61792C437F4F5C5B5EB85B191100 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____cacheSize_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___Stream_1;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_1);
		int64_t L_3 = __this->___StartPosition_6;
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_0), L_2)), L_3)), ((int64_t)4)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_mC2A5AA81FEB98F4AECB043B786F2AF569C0C41F1 (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Init_m06BAA30A080F2EC0B4E6F5399C19CA507BE97700 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___Stream_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_3), (void*)L_0);
		__this->___Code_2 = 0;
		__this->___Range_1 = (-1);
		V_0 = 0;
		goto IL_0038;
	}

IL_0019:
	{
		uint32_t L_1 = __this->___Code_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___Stream_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_2);
		__this->___Code_2 = ((int32_t)(((int32_t)((int32_t)L_1<<8))|((int32_t)(uint8_t)L_3)));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0038:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_ReleaseStream_mD2659602F0D30EE9053523BFA87F5F15E981E668 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) 
{
	{
		__this->___Stream_3 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_3), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_CloseStream_m96003A9C8850BF50D86A81901F6AD0D664521A0E (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___Stream_3;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(18, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Normalize_mEABB70D53B44028E0D65637E5E3A16C88DBE6DB9 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_0002:
	{
		uint32_t L_0 = __this->___Code_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___Stream_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_1);
		__this->___Code_2 = ((int32_t)(((int32_t)((int32_t)L_0<<8))|((int32_t)(uint8_t)L_2)));
		uint32_t L_3 = __this->___Range_1;
		__this->___Range_1 = ((int32_t)((int32_t)L_3<<8));
	}

IL_002b:
	{
		uint32_t L_4 = __this->___Range_1;
		if ((!(((uint32_t)L_4) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Normalize2_mEC4C60B13EE1BAABA254AF8A79E50A0AEF7A9654 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Range_1;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0036;
		}
	}
	{
		uint32_t L_1 = __this->___Code_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___Stream_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_2);
		__this->___Code_2 = ((int32_t)(((int32_t)((int32_t)L_1<<8))|((int32_t)(uint8_t)L_3)));
		uint32_t L_4 = __this->___Range_1;
		__this->___Range_1 = ((int32_t)((int32_t)L_4<<8));
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Decoder_GetThreshold_m18BEFD610029240D5C8BA478DEF439D3061D1EE9 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, uint32_t ___0_total, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___Code_2;
		uint32_t L_1 = __this->___Range_1;
		uint32_t L_2 = ___0_total;
		int32_t L_3 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)L_2));
		V_0 = L_3;
		__this->___Range_1 = L_3;
		uint32_t L_4 = V_0;
		return ((int32_t)((uint32_t)(int32_t)L_0/(uint32_t)(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Decode_m15C37385B37D3A802285E792F7BF5CBDB0275FB8 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, uint32_t ___0_start, uint32_t ___1_size, uint32_t ___2_total, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Code_2;
		uint32_t L_1 = ___0_start;
		uint32_t L_2 = __this->___Range_1;
		__this->___Code_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))));
		uint32_t L_3 = __this->___Range_1;
		uint32_t L_4 = ___1_size;
		__this->___Range_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		Decoder_Normalize_mEABB70D53B44028E0D65637E5E3A16C88DBE6DB9(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Decoder_DecodeDirectBits_mF092A2E60FBC7D3DBC3620B40A6900FFB3E81BA7 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, int32_t ___0_numTotalBits, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		uint32_t L_0 = __this->___Range_1;
		V_0 = L_0;
		uint32_t L_1 = __this->___Code_2;
		V_1 = L_1;
		V_2 = 0;
		int32_t L_2 = ___0_numTotalBits;
		V_3 = L_2;
		goto IL_0053;
	}

IL_0014:
	{
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)((uint32_t)L_3>>1));
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))>>((int32_t)31)));
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)((int32_t)L_7&((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1))))));
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_4;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_9<<1))|((int32_t)il2cpp_codegen_subtract(1, (int32_t)L_10))));
		uint32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_12 = V_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = __this->___Stream_3;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_13);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_12<<8))|((int32_t)(uint8_t)L_14)));
		uint32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15<<8));
	}

IL_004f:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0053:
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_18 = V_0;
		__this->___Range_1 = L_18;
		uint32_t L_19 = V_1;
		__this->___Code_2 = L_19;
		uint32_t L_20 = V_2;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Decoder_DecodeBit_mAC2F0A6B96ABD7F87DAD071E7F3C29B0D4B02003 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, uint32_t ___0_size0, int32_t ___1_numTotalBits, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->___Range_1;
		int32_t L_1 = ___1_numTotalBits;
		uint32_t L_2 = ___0_size0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31))))), (int32_t)L_2));
		uint32_t L_3 = __this->___Code_2;
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		V_1 = 0;
		uint32_t L_5 = V_0;
		__this->___Range_1 = L_5;
		goto IL_0040;
	}

IL_0022:
	{
		V_1 = 1;
		uint32_t L_6 = __this->___Code_2;
		uint32_t L_7 = V_0;
		__this->___Code_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		uint32_t L_8 = __this->___Range_1;
		uint32_t L_9 = V_0;
		__this->___Range_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
	}

IL_0040:
	{
		Decoder_Normalize_mEABB70D53B44028E0D65637E5E3A16C88DBE6DB9(__this, NULL);
		uint32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_mB11322DFDBE91F127AA7A8E1369F9A7F3CC55524 (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, const RuntimeMethod* method) 
{
	{
		__this->___Prob_5 = ((int32_t)1024);
		return;
	}
}
IL2CPP_EXTERN_C  void BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D*>(__this + _offset);
	BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder_UpdateModel_mC3531FD11E1E219A8C68F3DA90DC4DD0CBEEA311 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, uint32_t ___0_symbol, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_symbol;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_1 = __this->___Prob_5;
		uint32_t L_2 = __this->___Prob_5;
		__this->___Prob_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_2))>>5))));
		return;
	}

IL_001f:
	{
		uint32_t L_3 = __this->___Prob_5;
		uint32_t L_4 = __this->___Prob_5;
		__this->___Prob_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)((uint32_t)L_4>>5))));
		return;
	}
}
IL2CPP_EXTERN_C  void BitEncoder_UpdateModel_mC3531FD11E1E219A8C68F3DA90DC4DD0CBEEA311_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_symbol, const RuntimeMethod* method)
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D*>(__this + _offset);
	BitEncoder_UpdateModel_mC3531FD11E1E219A8C68F3DA90DC4DD0CBEEA311(_thisAdjusted, ___0_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_encoder, uint32_t ___1_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_0 = ___0_encoder;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___Range_3;
		uint32_t L_2 = __this->___Prob_5;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_1>>((int32_t)11))), (int32_t)L_2));
		uint32_t L_3 = ___1_symbol;
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_4 = ___0_encoder;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		L_4->___Range_3 = L_5;
		uint32_t L_6 = __this->___Prob_5;
		uint32_t L_7 = __this->___Prob_5;
		__this->___Prob_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_7))>>5))));
		goto IL_006a;
	}

IL_0038:
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_8 = ___0_encoder;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_9 = L_8;
		NullCheck(L_9);
		uint64_t L_10 = L_9->___Low_2;
		uint32_t L_11 = V_0;
		NullCheck(L_9);
		L_9->___Low_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)(uint64_t)L_11)));
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_12 = ___0_encoder;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_13 = L_12;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___Range_3;
		uint32_t L_15 = V_0;
		NullCheck(L_13);
		L_13->___Range_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = __this->___Prob_5;
		uint32_t L_17 = __this->___Prob_5;
		__this->___Prob_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, ((int32_t)((uint32_t)L_17>>5))));
	}

IL_006a:
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_18 = ___0_encoder;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___Range_3;
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_008b;
		}
	}
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_20 = ___0_encoder;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_21 = L_20;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___Range_3;
		NullCheck(L_21);
		L_21->___Range_3 = ((int32_t)((int32_t)L_22<<8));
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_23 = ___0_encoder;
		NullCheck(L_23);
		Encoder_ShiftLow_m9CC7885E2CF3EFEFAE219C5B5B18EA8138B570FF(L_23, NULL);
	}

IL_008b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4_AdjustorThunk (RuntimeObject* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_encoder, uint32_t ___1_symbol, const RuntimeMethod* method)
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D*>(__this + _offset);
	BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(_thisAdjusted, ___0_encoder, ___1_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitEncoder__cctor_mAD3841D07BF1CBCB9CD279A37A9C4D2CB4884CEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		((BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields*)il2cpp_codegen_static_fields_for(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var))->___ProbPrices_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields*)il2cpp_codegen_static_fields_for(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var))->___ProbPrices_6), (void*)L_0);
		V_0 = 8;
		goto IL_0051;
	}

IL_0013:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)9), L_2))&((int32_t)31)))));
		V_2 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)9), L_1)), 1))&((int32_t)31)))));
		goto IL_0049;
	}

IL_002b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ((BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields*)il2cpp_codegen_static_fields_for(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var))->___ProbPrices_6;
		uint32_t L_4 = V_2;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_2;
		int32_t L_8 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_5<<6)), ((int32_t)((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))<<6))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)9), L_8)), 1))&((int32_t)31))))))));
		uint32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
	}

IL_0049:
	{
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, uint32_t ___0_symbol, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields*)il2cpp_codegen_static_fields_for(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var))->___ProbPrices_6;
		uint32_t L_1 = __this->___Prob_5;
		uint32_t L_2 = ___0_symbol;
		uint32_t L_3 = ___0_symbol;
		if ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))))^((int64_t)((int32_t)((-((int32_t)L_3)))))))&((int64_t)((int32_t)2047))))>>2))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F_RuntimeMethod_var);
		NullCheck(L_0);
		intptr_t L_4 = ((intptr_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))))^((int64_t)((int32_t)((-((int32_t)L_3)))))))&((int64_t)((int32_t)2047))))>>2)));
		uint32_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint32_t BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_symbol, const RuntimeMethod* method)
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(_thisAdjusted, ___0_symbol, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8 (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields*)il2cpp_codegen_static_fields_for(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var))->___ProbPrices_6;
		uint32_t L_1 = __this->___Prob_5;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((uint32_t)L_1>>2));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint32_t BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A (BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_StaticFields*)il2cpp_codegen_static_fields_for(BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D_il2cpp_TypeInfo_var))->___ProbPrices_6;
		uint32_t L_1 = __this->___Prob_5;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_1))>>2));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint32_t BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitDecoder_UpdateModel_m48D7BE3290C778B393F64DB3CE2072E556208338 (BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* __this, int32_t ___0_numMoveBits, uint32_t ___1_symbol, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___1_symbol;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_1 = __this->___Prob_3;
		uint32_t L_2 = __this->___Prob_3;
		int32_t L_3 = ___0_numMoveBits;
		__this->___Prob_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_2))>>((int32_t)(L_3&((int32_t)31)))))));
		return;
	}

IL_0022:
	{
		uint32_t L_4 = __this->___Prob_3;
		uint32_t L_5 = __this->___Prob_3;
		int32_t L_6 = ___0_numMoveBits;
		__this->___Prob_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)((uint32_t)L_5>>((int32_t)(L_6&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C  void BitDecoder_UpdateModel_m48D7BE3290C778B393F64DB3CE2072E556208338_AdjustorThunk (RuntimeObject* __this, int32_t ___0_numMoveBits, uint32_t ___1_symbol, const RuntimeMethod* method)
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B*>(__this + _offset);
	BitDecoder_UpdateModel_m48D7BE3290C778B393F64DB3CE2072E556208338(_thisAdjusted, ___0_numMoveBits, ___1_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6 (BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* __this, const RuntimeMethod* method) 
{
	{
		__this->___Prob_3 = ((int32_t)1024);
		return;
	}
}
IL2CPP_EXTERN_C  void BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B*>(__this + _offset);
	BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62 (BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_0 = ___0_rangeDecoder;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___Range_1;
		uint32_t L_2 = __this->___Prob_3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_1>>((int32_t)11))), (int32_t)L_2));
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_3 = ___0_rangeDecoder;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___Code_2;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_0074;
		}
	}
	{
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_6 = ___0_rangeDecoder;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		L_6->___Range_1 = L_7;
		uint32_t L_8 = __this->___Prob_3;
		uint32_t L_9 = __this->___Prob_3;
		__this->___Prob_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_9))>>5))));
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_10 = ___0_rangeDecoder;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___Range_1;
		if ((!(((uint32_t)L_11) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0072;
		}
	}
	{
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_12 = ___0_rangeDecoder;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_13 = ___0_rangeDecoder;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___Code_2;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_15 = ___0_rangeDecoder;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = L_15->___Stream_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_16);
		NullCheck(L_12);
		L_12->___Code_2 = ((int32_t)(((int32_t)((int32_t)L_14<<8))|((int32_t)(uint8_t)L_17)));
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_18 = ___0_rangeDecoder;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_19 = L_18;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___Range_1;
		NullCheck(L_19);
		L_19->___Range_1 = ((int32_t)((int32_t)L_20<<8));
	}

IL_0072:
	{
		return 0;
	}

IL_0074:
	{
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_21 = ___0_rangeDecoder;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_22 = L_21;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___Range_1;
		uint32_t L_24 = V_0;
		NullCheck(L_22);
		L_22->___Range_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24));
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_25 = ___0_rangeDecoder;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_26 = L_25;
		NullCheck(L_26);
		uint32_t L_27 = L_26->___Code_2;
		uint32_t L_28 = V_0;
		NullCheck(L_26);
		L_26->___Code_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28));
		uint32_t L_29 = __this->___Prob_3;
		uint32_t L_30 = __this->___Prob_3;
		__this->___Prob_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, ((int32_t)((uint32_t)L_30>>5))));
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_31 = ___0_rangeDecoder;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___Range_1;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_00db;
		}
	}
	{
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_33 = ___0_rangeDecoder;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_34 = ___0_rangeDecoder;
		NullCheck(L_34);
		uint32_t L_35 = L_34->___Code_2;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_36 = ___0_rangeDecoder;
		NullCheck(L_36);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_37 = L_36->___Stream_3;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_37);
		NullCheck(L_33);
		L_33->___Code_2 = ((int32_t)(((int32_t)((int32_t)L_35<<8))|((int32_t)(uint8_t)L_38)));
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_39 = ___0_rangeDecoder;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_40 = L_39;
		NullCheck(L_40);
		uint32_t L_41 = L_40->___Range_1;
		NullCheck(L_40);
		L_40->___Range_1 = ((int32_t)((int32_t)L_41<<8));
	}

IL_00db:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  uint32_t BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62_AdjustorThunk (RuntimeObject* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method)
{
	BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(_thisAdjusted, ___0_rangeDecoder, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshal_pinvoke(const BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F& unmarshaled, BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___Models_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledModels_Length = (unmarshaled.___Models_0)->max_length;
		marshaled.___Models_0 = il2cpp_codegen_marshal_allocate_array<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D>(_unmarshaledModels_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledModels_Length); i++)
		{
			(marshaled.___Models_0)[i] = (unmarshaled.___Models_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Models_0 = NULL;
	}
	marshaled.___NumBitLevels_1 = unmarshaled.___NumBitLevels_1;
}
IL2CPP_EXTERN_C void BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshal_pinvoke_back(const BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_pinvoke& marshaled, BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Models_0 != NULL)
	{
		if (unmarshaled.___Models_0 == NULL)
		{
			unmarshaled.___Models_0 = reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Models_0), (void*)reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___Models_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___Models_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Models_0)[i]);
		}
	}
	int32_t unmarshaledNumBitLevels_temp_1 = 0;
	unmarshaledNumBitLevels_temp_1 = marshaled.___NumBitLevels_1;
	unmarshaled.___NumBitLevels_1 = unmarshaledNumBitLevels_temp_1;
}
IL2CPP_EXTERN_C void BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshal_pinvoke_cleanup(BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Models_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Models_0);
		marshaled.___Models_0 = NULL;
	}
}
IL2CPP_EXTERN_C void BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshal_com(const BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F& unmarshaled, BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_com& marshaled)
{
	if (unmarshaled.___Models_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledModels_Length = (unmarshaled.___Models_0)->max_length;
		marshaled.___Models_0 = il2cpp_codegen_marshal_allocate_array<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D>(_unmarshaledModels_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledModels_Length); i++)
		{
			(marshaled.___Models_0)[i] = (unmarshaled.___Models_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Models_0 = NULL;
	}
	marshaled.___NumBitLevels_1 = unmarshaled.___NumBitLevels_1;
}
IL2CPP_EXTERN_C void BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshal_com_back(const BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_com& marshaled, BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Models_0 != NULL)
	{
		if (unmarshaled.___Models_0 == NULL)
		{
			unmarshaled.___Models_0 = reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Models_0), (void*)reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___Models_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___Models_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Models_0)[i]);
		}
	}
	int32_t unmarshaledNumBitLevels_temp_1 = 0;
	unmarshaledNumBitLevels_temp_1 = marshaled.___NumBitLevels_1;
	unmarshaled.___NumBitLevels_1 = unmarshaledNumBitLevels_temp_1;
}
IL2CPP_EXTERN_C void BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshal_com_cleanup(BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F_marshaled_com& marshaled)
{
	if (marshaled.___Models_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Models_0);
		marshaled.___Models_0 = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, int32_t ___0_numBitLevels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_numBitLevels;
		__this->___NumBitLevels_1 = L_0;
		int32_t L_1 = ___0_numBitLevels;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_2 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))));
		__this->___Models_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Models_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152_AdjustorThunk (RuntimeObject* __this, int32_t ___0_numBitLevels, const RuntimeMethod* method)
{
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F*>(__this + _offset);
	BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152(_thisAdjusted, ___0_numBitLevels, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0019;
	}

IL_0004:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_0 = __this->___Models_0;
		uint32_t L_1 = V_0;
		NullCheck(L_0);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
	}

IL_0019:
	{
		uint32_t L_3 = V_0;
		int32_t L_4 = __this->___NumBitLevels_1;
		if ((((int64_t)((int64_t)(uint64_t)L_3)) < ((int64_t)((int64_t)((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F*>(__this + _offset);
	BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 1;
		int32_t L_0 = __this->___NumBitLevels_1;
		V_1 = L_0;
		goto IL_0031;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint32_t L_2 = ___1_symbol;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)(L_3&((int32_t)31)))))&1));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_4 = __this->___Models_0;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_6 = ___0_rangeEncoder;
		uint32_t L_7 = V_2;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), L_6, L_7, NULL);
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_8<<1))|(int32_t)L_9));
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431_AdjustorThunk (RuntimeObject* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, const RuntimeMethod* method)
{
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F*>(__this + _offset);
	BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431(_thisAdjusted, ___0_rangeEncoder, ___1_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_ReverseEncode_mE4356D2C59949D148B7F1D8CBF16BF7673D8CC62 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		goto IL_002c;
	}

IL_0006:
	{
		uint32_t L_0 = ___1_symbol;
		V_2 = ((int32_t)((int32_t)L_0&1));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_1 = __this->___Models_0;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_3 = ___0_rangeEncoder;
		uint32_t L_4 = V_2;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), L_3, L_4, NULL);
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_5<<1))|(int32_t)L_6));
		uint32_t L_7 = ___1_symbol;
		___1_symbol = ((int32_t)((uint32_t)L_7>>1));
		uint32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
	}

IL_002c:
	{
		uint32_t L_9 = V_1;
		int32_t L_10 = __this->___NumBitLevels_1;
		if ((((int64_t)((int64_t)(uint64_t)L_9)) < ((int64_t)((int64_t)L_10))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BitTreeEncoder_ReverseEncode_mE4356D2C59949D148B7F1D8CBF16BF7673D8CC62_AdjustorThunk (RuntimeObject* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, const RuntimeMethod* method)
{
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F*>(__this + _offset);
	BitTreeEncoder_ReverseEncode_mE4356D2C59949D148B7F1D8CBF16BF7673D8CC62(_thisAdjusted, ___0_rangeEncoder, ___1_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, uint32_t ___0_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		int32_t L_0 = __this->___NumBitLevels_1;
		V_2 = L_0;
		goto IL_0035;
	}

IL_000d:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint32_t L_2 = ___0_symbol;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)(L_3&((int32_t)31)))))&1));
		uint32_t L_4 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_5 = __this->___Models_0;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = V_3;
		uint32_t L_8;
		L_8 = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8));
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_9<<1)), (int32_t)L_10));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		uint32_t L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  uint32_t BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_symbol, const RuntimeMethod* method)
{
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986(_thisAdjusted, ___0_symbol, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeEncoder_ReverseGetPrice_mFF38E42DC911859AD18CE1E73612FBF41D277551 (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* __this, uint32_t ___0_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		int32_t L_0 = __this->___NumBitLevels_1;
		V_2 = L_0;
		goto IL_0035;
	}

IL_000d:
	{
		uint32_t L_1 = ___0_symbol;
		V_3 = ((int32_t)((int32_t)L_1&1));
		uint32_t L_2 = ___0_symbol;
		___0_symbol = ((int32_t)((uint32_t)L_2>>1));
		uint32_t L_3 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_4 = __this->___Models_0;
		uint32_t L_5 = V_1;
		NullCheck(L_4);
		uint32_t L_6 = V_3;
		uint32_t L_7;
		L_7 = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7));
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_3;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_8<<1))|(int32_t)L_9));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		uint32_t L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  uint32_t BitTreeEncoder_ReverseGetPrice_mFF38E42DC911859AD18CE1E73612FBF41D277551_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_symbol, const RuntimeMethod* method)
{
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitTreeEncoder_ReverseGetPrice_mFF38E42DC911859AD18CE1E73612FBF41D277551(_thisAdjusted, ___0_symbol, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeEncoder_ReverseGetPrice_mBAC1F2630793D3885D96E02460D3B8EB19FB0EFF (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ___0_Models, uint32_t ___1_startIndex, int32_t ___2_NumBitLevels, uint32_t ___3_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		int32_t L_0 = ___2_NumBitLevels;
		V_2 = L_0;
		goto IL_002d;
	}

IL_0008:
	{
		uint32_t L_1 = ___3_symbol;
		V_3 = ((int32_t)((int32_t)L_1&1));
		uint32_t L_2 = ___3_symbol;
		___3_symbol = ((int32_t)((uint32_t)L_2>>1));
		uint32_t L_3 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_4 = ___0_Models;
		uint32_t L_5 = ___1_startIndex;
		uint32_t L_6 = V_1;
		NullCheck(L_4);
		uint32_t L_7 = V_3;
		uint32_t L_8;
		L_8 = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))))), L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_8));
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_3;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_9<<1))|(int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_002d:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeEncoder_ReverseEncode_mC4CEA0C89B1A990CFE1C26C857775ED2A8B65F1F (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* ___0_Models, uint32_t ___1_startIndex, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___2_rangeEncoder, int32_t ___3_NumBitLevels, uint32_t ___4_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		goto IL_002b;
	}

IL_0006:
	{
		uint32_t L_0 = ___4_symbol;
		V_2 = ((int32_t)((int32_t)L_0&1));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_1 = ___0_Models;
		uint32_t L_2 = ___1_startIndex;
		uint32_t L_3 = V_0;
		NullCheck(L_1);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_4 = ___2_rangeEncoder;
		uint32_t L_5 = V_2;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))))), L_4, L_5, NULL);
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_6<<1))|(int32_t)L_7));
		uint32_t L_8 = ___4_symbol;
		___4_symbol = ((int32_t)((uint32_t)L_8>>1));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___3_NumBitLevels;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0006;
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
IL2CPP_EXTERN_C void BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshal_pinvoke(const BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055& unmarshaled, BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___Models_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledModels_Length = (unmarshaled.___Models_0)->max_length;
		marshaled.___Models_0 = il2cpp_codegen_marshal_allocate_array<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B>(_unmarshaledModels_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledModels_Length); i++)
		{
			(marshaled.___Models_0)[i] = (unmarshaled.___Models_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Models_0 = NULL;
	}
	marshaled.___NumBitLevels_1 = unmarshaled.___NumBitLevels_1;
}
IL2CPP_EXTERN_C void BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshal_pinvoke_back(const BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_pinvoke& marshaled, BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Models_0 != NULL)
	{
		if (unmarshaled.___Models_0 == NULL)
		{
			unmarshaled.___Models_0 = reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Models_0), (void*)reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___Models_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___Models_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Models_0)[i]);
		}
	}
	int32_t unmarshaledNumBitLevels_temp_1 = 0;
	unmarshaledNumBitLevels_temp_1 = marshaled.___NumBitLevels_1;
	unmarshaled.___NumBitLevels_1 = unmarshaledNumBitLevels_temp_1;
}
IL2CPP_EXTERN_C void BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshal_pinvoke_cleanup(BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Models_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Models_0);
		marshaled.___Models_0 = NULL;
	}
}
IL2CPP_EXTERN_C void BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshal_com(const BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055& unmarshaled, BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_com& marshaled)
{
	if (unmarshaled.___Models_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledModels_Length = (unmarshaled.___Models_0)->max_length;
		marshaled.___Models_0 = il2cpp_codegen_marshal_allocate_array<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B>(_unmarshaledModels_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledModels_Length); i++)
		{
			(marshaled.___Models_0)[i] = (unmarshaled.___Models_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Models_0 = NULL;
	}
	marshaled.___NumBitLevels_1 = unmarshaled.___NumBitLevels_1;
}
IL2CPP_EXTERN_C void BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshal_com_back(const BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_com& marshaled, BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Models_0 != NULL)
	{
		if (unmarshaled.___Models_0 == NULL)
		{
			unmarshaled.___Models_0 = reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Models_0), (void*)reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___Models_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___Models_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Models_0)[i]);
		}
	}
	int32_t unmarshaledNumBitLevels_temp_1 = 0;
	unmarshaledNumBitLevels_temp_1 = marshaled.___NumBitLevels_1;
	unmarshaled.___NumBitLevels_1 = unmarshaledNumBitLevels_temp_1;
}
IL2CPP_EXTERN_C void BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshal_com_cleanup(BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055_marshaled_com& marshaled)
{
	if (marshaled.___Models_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Models_0);
		marshaled.___Models_0 = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25 (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, int32_t ___0_numBitLevels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_numBitLevels;
		__this->___NumBitLevels_1 = L_0;
		int32_t L_1 = ___0_numBitLevels;
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_2 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))));
		__this->___Models_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Models_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25_AdjustorThunk (RuntimeObject* __this, int32_t ___0_numBitLevels, const RuntimeMethod* method)
{
	BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055*>(__this + _offset);
	BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25(_thisAdjusted, ___0_numBitLevels, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0019;
	}

IL_0004:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_0 = __this->___Models_0;
		uint32_t L_1 = V_0;
		NullCheck(L_0);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
	}

IL_0019:
	{
		uint32_t L_3 = V_0;
		int32_t L_4 = __this->___NumBitLevels_1;
		if ((((int64_t)((int64_t)(uint64_t)L_3)) < ((int64_t)((int64_t)((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055*>(__this + _offset);
	BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606 (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		int32_t L_0 = __this->___NumBitLevels_1;
		V_1 = L_0;
		goto IL_0026;
	}

IL_000b:
	{
		uint32_t L_1 = V_0;
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_2 = __this->___Models_0;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_4 = ___0_rangeDecoder;
		uint32_t L_5;
		L_5 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_1<<1)), (int32_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		uint32_t L_8 = V_0;
		int32_t L_9 = __this->___NumBitLevels_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))));
	}
}
IL2CPP_EXTERN_C  uint32_t BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606_AdjustorThunk (RuntimeObject* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method)
{
	BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606(_thisAdjusted, ___0_rangeDecoder, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeDecoder_ReverseDecode_mDFC43874286111FF0CE49263AB5A03E7AFC91676 (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		goto IL_0030;
	}

IL_0008:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_0 = __this->___Models_0;
		uint32_t L_1 = V_0;
		NullCheck(L_0);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_2 = ___0_rangeDecoder;
		uint32_t L_3;
		L_3 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_2, NULL);
		V_3 = L_3;
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<1));
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_3;
		int32_t L_9 = V_2;
		V_1 = ((int32_t)((int32_t)L_7|((int32_t)((int32_t)L_8<<((int32_t)(L_9&((int32_t)31)))))));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0030:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = __this->___NumBitLevels_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  uint32_t BitTreeDecoder_ReverseDecode_mDFC43874286111FF0CE49263AB5A03E7AFC91676_AdjustorThunk (RuntimeObject* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method)
{
	BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = BitTreeDecoder_ReverseDecode_mDFC43874286111FF0CE49263AB5A03E7AFC91676(_thisAdjusted, ___0_rangeDecoder, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitTreeDecoder_ReverseDecode_m2BCE2F632B781E4F5BB01D0BCA6594E36A1490CC (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* ___0_Models, uint32_t ___1_startIndex, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___2_rangeDecoder, int32_t ___3_NumBitLevels, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		goto IL_002d;
	}

IL_0008:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_0 = ___0_Models;
		uint32_t L_1 = ___1_startIndex;
		uint32_t L_2 = V_0;
		NullCheck(L_0);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_3 = ___2_rangeDecoder;
		uint32_t L_4;
		L_4 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))))), L_3, NULL);
		V_3 = L_4;
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5<<1));
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_3;
		int32_t L_10 = V_2;
		V_1 = ((int32_t)((int32_t)L_8|((int32_t)((int32_t)L_9<<((int32_t)(L_10&((int32_t)31)))))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___3_NumBitLevels;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t L_14 = V_1;
		return L_14;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Base_GetLenToPosState_m405EAAFD348B53068CA37D9A01309E42ECEEBEA1 (uint32_t ___0_len, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_len;
		___0_len = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 2));
		uint32_t L_1 = ___0_len;
		if ((!(((uint32_t)L_1) < ((uint32_t)4))))
		{
			goto IL_000b;
		}
	}
	{
		uint32_t L_2 = ___0_len;
		return L_2;
	}

IL_000b:
	{
		return 3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_mAA6BF4F801F38C07306A4A4BBA6FE3B936162B12 (Base_t328CC80084F6F76591D4492009A4E6ED8C098DF8* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_Init_mBCD4EDB45673F2976FD95F3D30F3D3846034DA24 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) 
{
	{
		__this->___Index_0 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void State_Init_mBCD4EDB45673F2976FD95F3D30F3D3846034DA24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3*>(__this + _offset);
	State_Init_mBCD4EDB45673F2976FD95F3D30F3D3846034DA24(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Index_0;
		if ((!(((uint32_t)L_0) < ((uint32_t)4))))
		{
			goto IL_0011;
		}
	}
	{
		__this->___Index_0 = 0;
		return;
	}

IL_0011:
	{
		uint32_t L_1 = __this->___Index_0;
		if ((!(((uint32_t)L_1) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_2 = __this->___Index_0;
		__this->___Index_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3));
		return;
	}

IL_002a:
	{
		uint32_t L_3 = __this->___Index_0;
		__this->___Index_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3*>(__this + _offset);
	State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) 
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B2_0 = NULL;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___Index_0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = ((int32_t)10);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 7;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___Index_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3*>(__this + _offset);
	State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) 
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B2_0 = NULL;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___Index_0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 8;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___Index_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3*>(__this + _offset);
	State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) 
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B2_0 = NULL;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___Index_0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000e:
	{
		G_B3_0 = ((int32_t)9);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		G_B3_1->___Index_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3*>(__this + _offset);
	State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7 (State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Index_0;
		return (bool)((!(((uint32_t)L_0) >= ((uint32_t)7)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3*>(__this + _offset);
	bool _returnValue;
	_returnValue = State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m857B05BA0018D41EC36D00DC1B98ED2A190B5B77 (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_0 = (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8*)il2cpp_codegen_object_new(OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8_il2cpp_TypeInfo_var);
		OutWindow__ctor_m9BC771BB23A995BD5CCC14B82E2000045ED11D7F(L_0, NULL);
		__this->___m_OutWindow_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OutWindow_0), (void*)L_0);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_1 = (Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC*)il2cpp_codegen_object_new(Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC_il2cpp_TypeInfo_var);
		Decoder__ctor_mB11322DFDBE91F127AA7A8E1369F9A7F3CC55524(L_1, NULL);
		__this->___m_RangeDecoder_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RangeDecoder_1), (void*)L_1);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_2 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->___m_IsMatchDecoders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsMatchDecoders_2), (void*)L_2);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_3 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___m_IsRepDecoders_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsRepDecoders_3), (void*)L_3);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_4 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___m_IsRepG0Decoders_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsRepG0Decoders_4), (void*)L_4);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_5 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___m_IsRepG1Decoders_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsRepG1Decoders_5), (void*)L_5);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_6 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___m_IsRepG2Decoders_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsRepG2Decoders_6), (void*)L_6);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_7 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->___m_IsRep0LongDecoders_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsRep0LongDecoders_7), (void*)L_7);
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_8 = (BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F*)(BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F*)SZArrayNew(BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___m_PosSlotDecoder_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PosSlotDecoder_8), (void*)L_8);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_9 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		__this->___m_PosDecoders_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PosDecoders_9), (void*)L_9);
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 L_10;
		memset((&L_10), 0, sizeof(L_10));
		BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25((&L_10), 4, NULL);
		__this->___m_PosAlignDecoder_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_PosAlignDecoder_10))->___Models_0), (void*)NULL);
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_11 = (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E*)il2cpp_codegen_object_new(LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E_il2cpp_TypeInfo_var);
		LenDecoder__ctor_m5523CC7EA6ED36FD00B39EC0DB39D478699673F4(L_11, NULL);
		__this->___m_LenDecoder_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LenDecoder_11), (void*)L_11);
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_12 = (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E*)il2cpp_codegen_object_new(LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E_il2cpp_TypeInfo_var);
		LenDecoder__ctor_m5523CC7EA6ED36FD00B39EC0DB39D478699673F4(L_12, NULL);
		__this->___m_RepLenDecoder_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RepLenDecoder_12), (void*)L_12);
		LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* L_13 = (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3*)il2cpp_codegen_object_new(LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3_il2cpp_TypeInfo_var);
		LiteralDecoder__ctor_m5714F1AAFDFD0D424F770338D07DB48543BCFF7D(L_13, NULL);
		__this->___m_LiteralDecoder_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LiteralDecoder_13), (void*)L_13);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_DictionarySize_14 = (-1);
		V_0 = 0;
		goto IL_00d7;
	}

IL_00c1:
	{
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_14 = __this->___m_PosSlotDecoder_8;
		int32_t L_15 = V_0;
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 L_16;
		memset((&L_16), 0, sizeof(L_16));
		BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25((&L_16), 6, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055)L_16);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_00d7:
	{
		int32_t L_18 = V_0;
		if ((((int64_t)((int64_t)L_18)) < ((int64_t)((int64_t)4))))
		{
			goto IL_00c1;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetDictionarySize_m726BE623E1341B9027D2F3139E3610BFB5D6492D (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, uint32_t ___0_dictionarySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_DictionarySize_14;
		uint32_t L_1 = ___0_dictionarySize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_003f;
		}
	}
	{
		uint32_t L_2 = ___0_dictionarySize;
		__this->___m_DictionarySize_14 = L_2;
		uint32_t L_3 = __this->___m_DictionarySize_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_3, 1, NULL);
		__this->___m_DictionarySizeCheck_15 = L_4;
		uint32_t L_5 = __this->___m_DictionarySizeCheck_15;
		uint32_t L_6;
		L_6 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_5, ((int32_t)4096), NULL);
		V_0 = L_6;
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_7 = __this->___m_OutWindow_0;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		OutWindow_Create_m35F7227D13C0A8B4AECD99B7FDCCBC76F2FD0C2B(L_7, L_8, NULL);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetLiteralProperties_mCB163D504A7EA812C921093AC3387E67ED025F58 (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, int32_t ___0_lp, int32_t ___1_lc, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lp;
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_000a;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_1 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_SetLiteralProperties_mCB163D504A7EA812C921093AC3387E67ED025F58_RuntimeMethod_var)));
	}

IL_000a:
	{
		int32_t L_2 = ___1_lc;
		if ((((int32_t)L_2) <= ((int32_t)8)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_3 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_SetLiteralProperties_mCB163D504A7EA812C921093AC3387E67ED025F58_RuntimeMethod_var)));
	}

IL_0014:
	{
		LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* L_4 = __this->___m_LiteralDecoder_13;
		int32_t L_5 = ___0_lp;
		int32_t L_6 = ___1_lc;
		NullCheck(L_4);
		LiteralDecoder_Create_mCEF25EFB5270ED276D1BE3EB6562C8D1655EAE88(L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetPosBitsProperties_mB4146FB3A803D4B4FCE8E27DE71478FCB5EE4BDE (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, int32_t ___0_pb, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_pb;
		if ((((int32_t)L_0) <= ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_1 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_SetPosBitsProperties_mB4146FB3A803D4B4FCE8E27DE71478FCB5EE4BDE_RuntimeMethod_var)));
	}

IL_000a:
	{
		int32_t L_2 = ___0_pb;
		V_0 = ((int32_t)(1<<((int32_t)(L_2&((int32_t)31)))));
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_3 = __this->___m_LenDecoder_11;
		uint32_t L_4 = V_0;
		NullCheck(L_3);
		LenDecoder_Create_m532B794D390B2140B8CC5F6CC6AA8AC276E7EECB(L_3, L_4, NULL);
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_5 = __this->___m_RepLenDecoder_12;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		LenDecoder_Create_m532B794D390B2140B8CC5F6CC6AA8AC276E7EECB(L_5, L_6, NULL);
		uint32_t L_7 = V_0;
		__this->___m_PosStateMask_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Init_mD15C118888026C8FC1DCC6DE79B13E8163D58B2E (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_0 = __this->___m_RangeDecoder_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_inStream;
		NullCheck(L_0);
		Decoder_Init_m06BAA30A080F2EC0B4E6F5399C19CA507BE97700(L_0, L_1, NULL);
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_2 = __this->___m_OutWindow_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___1_outStream;
		bool L_4 = __this->____solid_17;
		NullCheck(L_2);
		OutWindow_Init_m5FE8D60B59443D9AB528325424FB102B974FA125(L_2, L_3, L_4, NULL);
		V_0 = 0;
		goto IL_00a6;
	}

IL_0025:
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0029:
	{
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_5<<4)), (int32_t)L_6));
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_7 = __this->___m_IsMatchDecoders_2;
		uint32_t L_8 = V_2;
		NullCheck(L_7);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_9 = __this->___m_IsRep0LongDecoders_7;
		uint32_t L_10 = V_2;
		NullCheck(L_9);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), NULL);
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
	}

IL_0055:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = __this->___m_PosStateMask_16;
		if ((!(((uint32_t)L_12) > ((uint32_t)L_13))))
		{
			goto IL_0029;
		}
	}
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_14 = __this->___m_IsRepDecoders_3;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), NULL);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_16 = __this->___m_IsRepG0Decoders_4;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_18 = __this->___m_IsRepG1Decoders_5;
		uint32_t L_19 = V_0;
		NullCheck(L_18);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), NULL);
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_20 = __this->___m_IsRepG2Decoders_6;
		uint32_t L_21 = V_0;
		NullCheck(L_20);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), NULL);
		uint32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, 1));
	}

IL_00a6:
	{
		uint32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) >= ((uint32_t)((int32_t)12)))))
		{
			goto IL_0025;
		}
	}
	{
		LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* L_24 = __this->___m_LiteralDecoder_13;
		NullCheck(L_24);
		LiteralDecoder_Init_mE097EDF34235CB315F41E86116FF8D902C7381E2(L_24, NULL);
		V_0 = 0;
		goto IL_00d2;
	}

IL_00bd:
	{
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_25 = __this->___m_PosSlotDecoder_8;
		uint32_t L_26 = V_0;
		NullCheck(L_25);
		BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		uint32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, 1));
	}

IL_00d2:
	{
		uint32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) >= ((uint32_t)4))))
		{
			goto IL_00bd;
		}
	}
	{
		V_0 = 0;
		goto IL_00ef;
	}

IL_00da:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_29 = __this->___m_PosDecoders_9;
		uint32_t L_30 = V_0;
		NullCheck(L_29);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), NULL);
		uint32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
	}

IL_00ef:
	{
		uint32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) >= ((uint32_t)((int32_t)114)))))
		{
			goto IL_00da;
		}
	}
	{
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_33 = __this->___m_LenDecoder_11;
		NullCheck(L_33);
		LenDecoder_Init_m376C129B76A2E41993359D99E9D0B6D5B38CD33B(L_33, NULL);
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_34 = __this->___m_RepLenDecoder_12;
		NullCheck(L_34);
		LenDecoder_Init_m376C129B76A2E41993359D99E9D0B6D5B38CD33B(L_34, NULL);
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* L_35 = (&__this->___m_PosAlignDecoder_10);
		BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD(L_35, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Code_m35931A6D9DE44AFC9DBA16A54EEF506E96D687BA (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, int64_t ___2_inSize, int64_t ___3_outSize, RuntimeObject* ___4_progress, const RuntimeMethod* method) 
{
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_inStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___1_outStream;
		Decoder_Init_mD15C118888026C8FC1DCC6DE79B13E8163D58B2E(__this, L_0, L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3));
		State_Init_mBCD4EDB45673F2976FD95F3D30F3D3846034DA24((&V_0), NULL);
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = ((int64_t)0);
		int64_t L_2 = ___3_outSize;
		V_6 = L_2;
		uint64_t L_3 = V_5;
		uint64_t L_4 = V_6;
		if ((!(((uint64_t)L_3) < ((uint64_t)L_4))))
		{
			goto IL_031f;
		}
	}
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_5 = __this->___m_IsMatchDecoders_2;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_6 = V_0;
		uint32_t L_7 = L_6.___Index_0;
		NullCheck(L_5);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_8 = __this->___m_RangeDecoder_1;
		uint32_t L_9;
		L_9 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_7<<4))))), L_8, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69* L_10 = (DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69_il2cpp_TypeInfo_var)));
		DataErrorException__ctor_m24B9F505EB1D7B4ED7849F9E0084D4874E81B947(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_Code_m35931A6D9DE44AFC9DBA16A54EEF506E96D687BA_RuntimeMethod_var)));
	}

IL_0057:
	{
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_0), NULL);
		LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* L_11 = __this->___m_LiteralDecoder_13;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_12 = __this->___m_RangeDecoder_1;
		NullCheck(L_11);
		uint8_t L_13;
		L_13 = LiteralDecoder_DecodeNormal_mCE2BA05E3B6A5BF01EF6ADA4E19628B29719F47B(L_11, L_12, 0, (uint8_t)0, NULL);
		V_7 = L_13;
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_14 = __this->___m_OutWindow_0;
		uint8_t L_15 = V_7;
		NullCheck(L_14);
		OutWindow_PutByte_m356D1180AFCA7D7896F0F6C6BE423C3C76D92A5C(L_14, L_15, NULL);
		uint64_t L_16 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)1)));
		goto IL_031f;
	}

IL_008c:
	{
		uint64_t L_17 = V_5;
		uint32_t L_18 = __this->___m_PosStateMask_16;
		V_8 = ((int32_t)(((int32_t)(uint32_t)L_17)&(int32_t)L_18));
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_19 = __this->___m_IsMatchDecoders_2;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_20 = V_0;
		uint32_t L_21 = L_20.___Index_0;
		uint32_t L_22 = V_8;
		NullCheck(L_19);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_23 = __this->___m_RangeDecoder_1;
		uint32_t L_24;
		L_24 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_21<<4)), (int32_t)L_22))))), L_23, NULL);
		if (L_24)
		{
			goto IL_0130;
		}
	}
	{
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_25 = __this->___m_OutWindow_0;
		NullCheck(L_25);
		uint8_t L_26;
		L_26 = OutWindow_GetByte_mCEE87FE60CB877A2AEDEC25DC0C1447ABBE22AAF(L_25, 0, NULL);
		V_10 = L_26;
		bool L_27;
		L_27 = State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7((&V_0), NULL);
		if (L_27)
		{
			goto IL_00f8;
		}
	}
	{
		LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* L_28 = __this->___m_LiteralDecoder_13;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_29 = __this->___m_RangeDecoder_1;
		uint64_t L_30 = V_5;
		uint8_t L_31 = V_10;
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_32 = __this->___m_OutWindow_0;
		uint32_t L_33 = V_1;
		NullCheck(L_32);
		uint8_t L_34;
		L_34 = OutWindow_GetByte_mCEE87FE60CB877A2AEDEC25DC0C1447ABBE22AAF(L_32, L_33, NULL);
		NullCheck(L_28);
		uint8_t L_35;
		L_35 = LiteralDecoder_DecodeWithMatchByte_mA7FA99BA393BB10909D9E2403B2A6AB9CEF8C651(L_28, L_29, ((int32_t)(uint32_t)L_30), L_31, L_34, NULL);
		V_9 = L_35;
		goto IL_0110;
	}

IL_00f8:
	{
		LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* L_36 = __this->___m_LiteralDecoder_13;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_37 = __this->___m_RangeDecoder_1;
		uint64_t L_38 = V_5;
		uint8_t L_39 = V_10;
		NullCheck(L_36);
		uint8_t L_40;
		L_40 = LiteralDecoder_DecodeNormal_mCE2BA05E3B6A5BF01EF6ADA4E19628B29719F47B(L_36, L_37, ((int32_t)(uint32_t)L_38), L_39, NULL);
		V_9 = L_40;
	}

IL_0110:
	{
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_41 = __this->___m_OutWindow_0;
		uint8_t L_42 = V_9;
		NullCheck(L_41);
		OutWindow_PutByte_m356D1180AFCA7D7896F0F6C6BE423C3C76D92A5C(L_41, L_42, NULL);
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_0), NULL);
		uint64_t L_43 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)1)));
		goto IL_031f;
	}

IL_0130:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_44 = __this->___m_IsRepDecoders_3;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_45 = V_0;
		uint32_t L_46 = L_45.___Index_0;
		NullCheck(L_44);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_47 = __this->___m_RangeDecoder_1;
		uint32_t L_48;
		L_48 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), L_47, NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0234;
		}
	}
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_49 = __this->___m_IsRepG0Decoders_4;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_50 = V_0;
		uint32_t L_51 = L_50.___Index_0;
		NullCheck(L_49);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_52 = __this->___m_RangeDecoder_1;
		uint32_t L_53;
		L_53 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), L_52, NULL);
		if (L_53)
		{
			goto IL_01bd;
		}
	}
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_54 = __this->___m_IsRep0LongDecoders_7;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_55 = V_0;
		uint32_t L_56 = L_55.___Index_0;
		uint32_t L_57 = V_8;
		NullCheck(L_54);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_58 = __this->___m_RangeDecoder_1;
		uint32_t L_59;
		L_59 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_56<<4)), (int32_t)L_57))))), L_58, NULL);
		if (L_59)
		{
			goto IL_0211;
		}
	}
	{
		State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2((&V_0), NULL);
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_60 = __this->___m_OutWindow_0;
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_61 = __this->___m_OutWindow_0;
		uint32_t L_62 = V_1;
		NullCheck(L_61);
		uint8_t L_63;
		L_63 = OutWindow_GetByte_mCEE87FE60CB877A2AEDEC25DC0C1447ABBE22AAF(L_61, L_62, NULL);
		NullCheck(L_60);
		OutWindow_PutByte_m356D1180AFCA7D7896F0F6C6BE423C3C76D92A5C(L_60, L_63, NULL);
		uint64_t L_64 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)1)));
		goto IL_031f;
	}

IL_01bd:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_65 = __this->___m_IsRepG1Decoders_5;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_66 = V_0;
		uint32_t L_67 = L_66.___Index_0;
		NullCheck(L_65);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_68 = __this->___m_RangeDecoder_1;
		uint32_t L_69;
		L_69 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), L_68, NULL);
		if (L_69)
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_70 = V_2;
		V_12 = L_70;
		goto IL_020c;
	}

IL_01e0:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_71 = __this->___m_IsRepG2Decoders_6;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_72 = V_0;
		uint32_t L_73 = L_72.___Index_0;
		NullCheck(L_71);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_74 = __this->___m_RangeDecoder_1;
		uint32_t L_75;
		L_75 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73))), L_74, NULL);
		if (L_75)
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_76 = V_3;
		V_12 = L_76;
		goto IL_020a;
	}

IL_0203:
	{
		uint32_t L_77 = V_4;
		V_12 = L_77;
		uint32_t L_78 = V_3;
		V_4 = L_78;
	}

IL_020a:
	{
		uint32_t L_79 = V_2;
		V_3 = L_79;
	}

IL_020c:
	{
		uint32_t L_80 = V_1;
		V_2 = L_80;
		uint32_t L_81 = V_12;
		V_1 = L_81;
	}

IL_0211:
	{
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_82 = __this->___m_RepLenDecoder_12;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_83 = __this->___m_RangeDecoder_1;
		uint32_t L_84 = V_8;
		NullCheck(L_82);
		uint32_t L_85;
		L_85 = LenDecoder_Decode_mABEE04433780F6DDE6FCFD57862A5AB18F3ACE7E(L_82, L_83, L_84, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, 2));
		State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A((&V_0), NULL);
		goto IL_02e3;
	}

IL_0234:
	{
		uint32_t L_86 = V_3;
		V_4 = L_86;
		uint32_t L_87 = V_2;
		V_3 = L_87;
		uint32_t L_88 = V_1;
		V_2 = L_88;
		LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* L_89 = __this->___m_LenDecoder_11;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_90 = __this->___m_RangeDecoder_1;
		uint32_t L_91 = V_8;
		NullCheck(L_89);
		uint32_t L_92;
		L_92 = LenDecoder_Decode_mABEE04433780F6DDE6FCFD57862A5AB18F3ACE7E(L_89, L_90, L_91, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add(2, (int32_t)L_92));
		State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56((&V_0), NULL);
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_93 = __this->___m_PosSlotDecoder_8;
		uint32_t L_94 = V_11;
		uint32_t L_95;
		L_95 = Base_GetLenToPosState_m405EAAFD348B53068CA37D9A01309E42ECEEBEA1(L_94, NULL);
		NullCheck(L_93);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_96 = __this->___m_RangeDecoder_1;
		uint32_t L_97;
		L_97 = BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606(((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95))), L_96, NULL);
		V_13 = L_97;
		uint32_t L_98 = V_13;
		if ((!(((uint32_t)L_98) >= ((uint32_t)4))))
		{
			goto IL_02e0;
		}
	}
	{
		uint32_t L_99 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_99>>1)), 1));
		uint32_t L_100 = V_13;
		int32_t L_101 = V_14;
		V_1 = ((int32_t)(((int32_t)(2|((int32_t)((int32_t)L_100&1))))<<((int32_t)(L_101&((int32_t)31)))));
		uint32_t L_102 = V_13;
		if ((!(((uint32_t)L_102) < ((uint32_t)((int32_t)14)))))
		{
			goto IL_02b6;
		}
	}
	{
		uint32_t L_103 = V_1;
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_104 = __this->___m_PosDecoders_9;
		uint32_t L_105 = V_1;
		uint32_t L_106 = V_13;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_107 = __this->___m_RangeDecoder_1;
		int32_t L_108 = V_14;
		uint32_t L_109;
		L_109 = BitTreeDecoder_ReverseDecode_m2BCE2F632B781E4F5BB01D0BCA6594E36A1490CC(L_104, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)L_106)), 1)), L_107, L_108, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_109));
		goto IL_02e3;
	}

IL_02b6:
	{
		uint32_t L_110 = V_1;
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_111 = __this->___m_RangeDecoder_1;
		int32_t L_112 = V_14;
		NullCheck(L_111);
		uint32_t L_113;
		L_113 = Decoder_DecodeDirectBits_mF092A2E60FBC7D3DBC3620B40A6900FFB3E81BA7(L_111, ((int32_t)il2cpp_codegen_subtract(L_112, 4)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, ((int32_t)((int32_t)L_113<<4))));
		uint32_t L_114 = V_1;
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* L_115 = (&__this->___m_PosAlignDecoder_10);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_116 = __this->___m_RangeDecoder_1;
		uint32_t L_117;
		L_117 = BitTreeDecoder_ReverseDecode_mDFC43874286111FF0CE49263AB5A03E7AFC91676(L_115, L_116, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_117));
		goto IL_02e3;
	}

IL_02e0:
	{
		uint32_t L_118 = V_13;
		V_1 = L_118;
	}

IL_02e3:
	{
		uint32_t L_119 = V_1;
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_120 = __this->___m_OutWindow_0;
		NullCheck(L_120);
		uint32_t L_121 = L_120->___TrainSize_5;
		uint64_t L_122 = V_5;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_119)) < ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_121), (int64_t)L_122))))))
		{
			goto IL_02ff;
		}
	}
	{
		uint32_t L_123 = V_1;
		uint32_t L_124 = __this->___m_DictionarySizeCheck_15;
		if ((!(((uint32_t)L_123) >= ((uint32_t)L_124))))
		{
			goto IL_0309;
		}
	}

IL_02ff:
	{
		uint32_t L_125 = V_1;
		if ((((int32_t)L_125) == ((int32_t)(-1))))
		{
			goto IL_0328;
		}
	}
	{
		DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69* L_126 = (DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataErrorException_tEE1BE440A7BD4F9BFA9634B524814093C2235D69_il2cpp_TypeInfo_var)));
		DataErrorException__ctor_m24B9F505EB1D7B4ED7849F9E0084D4874E81B947(L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_126, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_Code_m35931A6D9DE44AFC9DBA16A54EEF506E96D687BA_RuntimeMethod_var)));
	}

IL_0309:
	{
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_127 = __this->___m_OutWindow_0;
		uint32_t L_128 = V_1;
		uint32_t L_129 = V_11;
		NullCheck(L_127);
		OutWindow_CopyBlock_m7D345E851F8878CD0C62F409BA1BE11A256F94A0(L_127, L_128, L_129, NULL);
		uint64_t L_130 = V_5;
		uint32_t L_131 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)(uint64_t)L_131)));
	}

IL_031f:
	{
		uint64_t L_132 = V_5;
		uint64_t L_133 = V_6;
		if ((!(((uint64_t)L_132) >= ((uint64_t)L_133))))
		{
			goto IL_008c;
		}
	}

IL_0328:
	{
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_134 = __this->___m_OutWindow_0;
		NullCheck(L_134);
		OutWindow_Flush_m2635A24331E2CA6A86E8788AFC95285B0EA32B47(L_134, NULL);
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_135 = __this->___m_OutWindow_0;
		NullCheck(L_135);
		OutWindow_ReleaseStream_m54B5EEDDC79A30825EBB022DA82BE6670824DF0B(L_135, NULL);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_136 = __this->___m_RangeDecoder_1;
		NullCheck(L_136);
		Decoder_ReleaseStream_mD2659602F0D30EE9053523BFA87F5F15E981E668(L_136, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_SetDecoderProperties_m384C4B611C7ADDD261AA611E3AAAAFA581E4F11D (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_properties, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_properties;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)5)))
		{
			goto IL_000c;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_1 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_SetDecoderProperties_m384C4B611C7ADDD261AA611E3AAAAFA581E4F11D_RuntimeMethod_var)));
	}

IL_000c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_properties;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_4%((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_properties;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ((int32_t)((int32_t)L_7/((int32_t)9)));
		V_1 = ((int32_t)(L_8%5));
		V_2 = ((int32_t)(L_8/5));
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_10 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_SetDecoderProperties_m384C4B611C7ADDD261AA611E3AAAAFA581E4F11D_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_0048;
	}

IL_0031:
	{
		uint32_t L_11 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_properties;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(1, L_13));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, ((int32_t)((int32_t)L_15<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_16, 8))&((int32_t)31)))))));
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)4)))
		{
			goto IL_0031;
		}
	}
	{
		uint32_t L_19 = V_3;
		Decoder_SetDictionarySize_m726BE623E1341B9027D2F3139E3610BFB5D6492D(__this, L_19, NULL);
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		Decoder_SetLiteralProperties_mCB163D504A7EA812C921093AC3387E67ED025F58(__this, L_20, L_21, NULL);
		int32_t L_22 = V_2;
		Decoder_SetPosBitsProperties_mB4146FB3A803D4B4FCE8E27DE71478FCB5EE4BDE(__this, L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_Train_m9C1C5541E19A2517B1AAF558948F9A2B33AF54E3 (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		__this->____solid_17 = (bool)1;
		OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* L_0 = __this->___m_OutWindow_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_0);
		bool L_2;
		L_2 = OutWindow_Train_m27791D111A3E80E502B1149A991A9110D97761F1(L_0, L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenDecoder_Create_m532B794D390B2140B8CC5F6CC6AA8AC276E7EECB (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, uint32_t ___0_numPosStates, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_NumPosStates_5;
		V_0 = L_0;
		goto IL_0031;
	}

IL_0009:
	{
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_1 = __this->___m_LowCoder_2;
		uint32_t L_2 = V_0;
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 L_3;
		memset((&L_3), 0, sizeof(L_3));
		BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25((&L_3), 3, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055)L_3);
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_4 = __this->___m_MidCoder_3;
		uint32_t L_5 = V_0;
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 L_6;
		memset((&L_6), 0, sizeof(L_6));
		BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25((&L_6), 3, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055)L_6);
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, 1));
	}

IL_0031:
	{
		uint32_t L_8 = V_0;
		uint32_t L_9 = ___0_numPosStates;
		if ((!(((uint32_t)L_8) >= ((uint32_t)L_9))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_10 = ___0_numPosStates;
		__this->___m_NumPosStates_5 = L_10;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenDecoder_Init_m376C129B76A2E41993359D99E9D0B6D5B38CD33B (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* L_0 = (&__this->___m_Choice_0);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(L_0, NULL);
		V_0 = 0;
		goto IL_0035;
	}

IL_000f:
	{
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_1 = __this->___m_LowCoder_2;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_3 = __this->___m_MidCoder_3;
		uint32_t L_4 = V_0;
		NullCheck(L_3);
		BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), NULL);
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_0035:
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = __this->___m_NumPosStates_5;
		if ((!(((uint32_t)L_6) >= ((uint32_t)L_7))))
		{
			goto IL_000f;
		}
	}
	{
		BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* L_8 = (&__this->___m_Choice2_1);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(L_8, NULL);
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* L_9 = (&__this->___m_HighCoder_4);
		BitTreeDecoder_Init_m8F9A97F3432FC703FB285A7099E87D5D8AC721DD(L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t LenDecoder_Decode_mABEE04433780F6DDE6FCFD57862A5AB18F3ACE7E (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint32_t ___1_posState, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* L_0 = (&__this->___m_Choice_0);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_1 = ___0_rangeDecoder;
		uint32_t L_2;
		L_2 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_3 = __this->___m_LowCoder_2;
		uint32_t L_4 = ___1_posState;
		NullCheck(L_3);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_5 = ___0_rangeDecoder;
		uint32_t L_6;
		L_6 = BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), L_5, NULL);
		return L_6;
	}

IL_0021:
	{
		V_0 = 8;
		BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B* L_7 = (&__this->___m_Choice2_1);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_8 = ___0_rangeDecoder;
		uint32_t L_9;
		L_9 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_10 = V_0;
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_11 = __this->___m_MidCoder_3;
		uint32_t L_12 = ___1_posState;
		NullCheck(L_11);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_13 = ___0_rangeDecoder;
		uint32_t L_14;
		L_14 = BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_14));
		goto IL_005b;
	}

IL_0048:
	{
		uint32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, 8));
		uint32_t L_16 = V_0;
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055* L_17 = (&__this->___m_HighCoder_4);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_18 = ___0_rangeDecoder;
		uint32_t L_19;
		L_19 = BitTreeDecoder_Decode_m90BCB05B70FD64BF53BC9DAB89F2F16D7F552606(L_17, L_18, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_19));
	}

IL_005b:
	{
		uint32_t L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenDecoder__ctor_m5523CC7EA6ED36FD00B39EC0DB39D478699673F4 (LenDecoder_t394E6351D52E3137488C283A3488B0D25F0E025E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_0 = (BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F*)(BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F*)SZArrayNew(BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___m_LowCoder_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LowCoder_2), (void*)L_0);
		BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F* L_1 = (BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F*)(BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F*)SZArrayNew(BitTreeDecoderU5BU5D_t70BA58E392D46ADC40E62B5BBE98BBA6D9613C6F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___m_MidCoder_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MidCoder_3), (void*)L_1);
		BitTreeDecoder_t0FF2D3B330AC096E58F4ED31AFBFA3FB7652B055 L_2;
		memset((&L_2), 0, sizeof(L_2));
		BitTreeDecoder__ctor_m13F68C26BFD13937DA1CA4A58A93FBDBAD7B6C25((&L_2), 8, NULL);
		__this->___m_HighCoder_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_HighCoder_4))->___Models_0), (void*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralDecoder_Create_mCEF25EFB5270ED276D1BE3EB6562C8D1655EAE88 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, int32_t ___0_numPosBits, int32_t ___1_numPrevBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* L_0 = __this->___m_Coders_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->___m_NumPrevBits_1;
		int32_t L_2 = ___1_numPrevBits;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = __this->___m_NumPosBits_2;
		int32_t L_4 = ___0_numPosBits;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		int32_t L_5 = ___0_numPosBits;
		__this->___m_NumPosBits_2 = L_5;
		int32_t L_6 = ___0_numPosBits;
		__this->___m_PosMask_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 1));
		int32_t L_7 = ___1_numPrevBits;
		__this->___m_NumPrevBits_1 = L_7;
		int32_t L_8 = __this->___m_NumPrevBits_1;
		int32_t L_9 = __this->___m_NumPosBits_2;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_8, L_9))&((int32_t)31)))));
		uint32_t L_10 = V_0;
		Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* L_11 = (Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD*)(Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD*)SZArrayNew(Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___m_Coders_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Coders_0), (void*)L_11);
		V_1 = 0;
		goto IL_006f;
	}

IL_005a:
	{
		Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* L_12 = __this->___m_Coders_0;
		uint32_t L_13 = V_1;
		NullCheck(L_12);
		Decoder2_Create_m9BEF3660AE8FE73B3D724924FCB7B029E3322818(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}

IL_006f:
	{
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) >= ((uint32_t)L_16))))
		{
			goto IL_005a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralDecoder_Init_mE097EDF34235CB315F41E86116FF8D902C7381E2 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = __this->___m_NumPrevBits_1;
		int32_t L_1 = __this->___m_NumPosBits_2;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))&((int32_t)31)))));
		V_1 = 0;
		goto IL_002c;
	}

IL_0017:
	{
		Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* L_2 = __this->___m_Coders_0;
		uint32_t L_3 = V_1;
		NullCheck(L_2);
		Decoder2_Init_m7A8F3C6F5B9D58F3415D1B728CB6391E5BB48332(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		uint32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, 1));
	}

IL_002c:
	{
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t LiteralDecoder_GetState_mD4F2428A58E0F116F16E856175675716E6D6A282 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, uint32_t ___0_pos, uint8_t ___1_prevByte, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_pos;
		uint32_t L_1 = __this->___m_PosMask_3;
		int32_t L_2 = __this->___m_NumPrevBits_1;
		uint8_t L_3 = ___1_prevByte;
		int32_t L_4 = __this->___m_NumPrevBits_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))<<((int32_t)(L_2&((int32_t)31))))), ((int32_t)((int32_t)L_3>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_4))&((int32_t)31)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LiteralDecoder_DecodeNormal_mCE2BA05E3B6A5BF01EF6ADA4E19628B29719F47B (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint32_t ___1_pos, uint8_t ___2_prevByte, const RuntimeMethod* method) 
{
	{
		Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* L_0 = __this->___m_Coders_0;
		uint32_t L_1 = ___1_pos;
		uint8_t L_2 = ___2_prevByte;
		uint32_t L_3;
		L_3 = LiteralDecoder_GetState_mD4F2428A58E0F116F16E856175675716E6D6A282(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_4 = ___0_rangeDecoder;
		uint8_t L_5;
		L_5 = Decoder2_DecodeNormal_m0C68584F1E162085FD939F803A75EAE95E072A3F(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LiteralDecoder_DecodeWithMatchByte_mA7FA99BA393BB10909D9E2403B2A6AB9CEF8C651 (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint32_t ___1_pos, uint8_t ___2_prevByte, uint8_t ___3_matchByte, const RuntimeMethod* method) 
{
	{
		Decoder2U5BU5D_tA3BEFE0EFCC09F4F48B8D4B3D70CD7F0D43408FD* L_0 = __this->___m_Coders_0;
		uint32_t L_1 = ___1_pos;
		uint8_t L_2 = ___2_prevByte;
		uint32_t L_3;
		L_3 = LiteralDecoder_GetState_mD4F2428A58E0F116F16E856175675716E6D6A282(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_4 = ___0_rangeDecoder;
		uint8_t L_5 = ___3_matchByte;
		uint8_t L_6;
		L_6 = Decoder2_DecodeWithMatchByte_m2290DF23B5418D3EBE739CD38472AE2C2BC98A3F(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralDecoder__ctor_m5714F1AAFDFD0D424F770338D07DB48543BCFF7D (LiteralDecoder_tA8F6AB7384AE2DE36EE0FC31E58B43BE492642B3* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshal_pinvoke(const Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158& unmarshaled, Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___m_Decoders_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Decoders_Length = (unmarshaled.___m_Decoders_0)->max_length;
		marshaled.___m_Decoders_0 = il2cpp_codegen_marshal_allocate_array<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B>(_unmarshaledm_Decoders_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Decoders_Length); i++)
		{
			(marshaled.___m_Decoders_0)[i] = (unmarshaled.___m_Decoders_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Decoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C void Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshal_pinvoke_back(const Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_pinvoke& marshaled, Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___m_Decoders_0 != NULL)
	{
		if (unmarshaled.___m_Decoders_0 == NULL)
		{
			unmarshaled.___m_Decoders_0 = reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Decoders_0), (void*)reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Decoders_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Decoders_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Decoders_0)[i]);
		}
	}
}
IL2CPP_EXTERN_C void Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshal_pinvoke_cleanup(Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_pinvoke& marshaled)
{
	if (marshaled.___m_Decoders_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Decoders_0);
		marshaled.___m_Decoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C void Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshal_com(const Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158& unmarshaled, Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_com& marshaled)
{
	if (unmarshaled.___m_Decoders_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Decoders_Length = (unmarshaled.___m_Decoders_0)->max_length;
		marshaled.___m_Decoders_0 = il2cpp_codegen_marshal_allocate_array<BitDecoder_t0C73AF1A40DBF978B95407DC82B4DCE33C2EA23B>(_unmarshaledm_Decoders_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Decoders_Length); i++)
		{
			(marshaled.___m_Decoders_0)[i] = (unmarshaled.___m_Decoders_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Decoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C void Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshal_com_back(const Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_com& marshaled, Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___m_Decoders_0 != NULL)
	{
		if (unmarshaled.___m_Decoders_0 == NULL)
		{
			unmarshaled.___m_Decoders_0 = reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Decoders_0), (void*)reinterpret_cast<BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*>((BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Decoders_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Decoders_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Decoders_0)[i]);
		}
	}
}
IL2CPP_EXTERN_C void Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshal_com_cleanup(Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158_marshaled_com& marshaled)
{
	if (marshaled.___m_Decoders_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Decoders_0);
		marshaled.___m_Decoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder2_Create_m9BEF3660AE8FE73B3D724924FCB7B029E3322818 (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_0 = (BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E*)SZArrayNew(BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___m_Decoders_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Decoders_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Decoder2_Create_m9BEF3660AE8FE73B3D724924FCB7B029E3322818_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158*>(__this + _offset);
	Decoder2_Create_m9BEF3660AE8FE73B3D724924FCB7B029E3322818(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder2_Init_m7A8F3C6F5B9D58F3415D1B728CB6391E5BB48332 (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_0 = __this->___m_Decoders_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		BitDecoder_Init_m6C51E09825744B6287444802E339F2C97B0E12E6(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)768))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Decoder2_Init_m7A8F3C6F5B9D58F3415D1B728CB6391E5BB48332_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158*>(__this + _offset);
	Decoder2_Init_m7A8F3C6F5B9D58F3415D1B728CB6391E5BB48332(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Decoder2_DecodeNormal_m0C68584F1E162085FD939F803A75EAE95E072A3F (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_1 = __this->___m_Decoders_0;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_3 = ___0_rangeDecoder;
		uint32_t L_4;
		L_4 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), L_3, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0<<1))|(int32_t)L_4));
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0002;
		}
	}
	{
		uint32_t L_6 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_6);
	}
}
IL2CPP_EXTERN_C  uint8_t Decoder2_DecodeNormal_m0C68584F1E162085FD939F803A75EAE95E072A3F_AdjustorThunk (RuntimeObject* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, const RuntimeMethod* method)
{
	Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Decoder2_DecodeNormal_m0C68584F1E162085FD939F803A75EAE95E072A3F(_thisAdjusted, ___0_rangeDecoder, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Decoder2_DecodeWithMatchByte_m2290DF23B5418D3EBE739CD38472AE2C2BC98A3F (Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint8_t ___1_matchByte, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		uint8_t L_0 = ___1_matchByte;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_0>>7))&1));
		uint8_t L_1 = ___1_matchByte;
		___1_matchByte = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1<<1)));
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_2 = __this->___m_Decoders_0;
		uint32_t L_3 = V_1;
		uint32_t L_4 = V_0;
		NullCheck(L_2);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_5 = ___0_rangeDecoder;
		uint32_t L_6;
		L_6 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_3))<<8)), (int32_t)L_4))))), L_5, NULL);
		V_2 = L_6;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_7<<1))|(int32_t)L_8));
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_004a;
	}

IL_0033:
	{
		uint32_t L_11 = V_0;
		BitDecoderU5BU5D_t24EE303091F53B07280898C7AAA1D7C5480D1F4E* L_12 = __this->___m_Decoders_0;
		uint32_t L_13 = V_0;
		NullCheck(L_12);
		Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* L_14 = ___0_rangeDecoder;
		uint32_t L_15;
		L_15 = BitDecoder_Decode_mFFE35DCD1959B87ED508AC6483366A1168CF1C62(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), L_14, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_11<<1))|(int32_t)L_15));
	}

IL_004a:
	{
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_005c;
	}

IL_0054:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0002;
		}
	}

IL_005c:
	{
		uint32_t L_18 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_18);
	}
}
IL2CPP_EXTERN_C  uint8_t Decoder2_DecodeWithMatchByte_m2290DF23B5418D3EBE739CD38472AE2C2BC98A3F_AdjustorThunk (RuntimeObject* __this, Decoder_t9E2CEF9D394B5BE516387716A4D428A769995ACC* ___0_rangeDecoder, uint8_t ___1_matchByte, const RuntimeMethod* method)
{
	Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Decoder2_t1C8AF3408EDDF64BC65E308EA9CCE8833622B158*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Decoder2_DecodeWithMatchByte_m2290DF23B5418D3EBE739CD38472AE2C2BC98A3F(_thisAdjusted, ___0_rangeDecoder, ___1_matchByte, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__cctor_m1EF48EBDE9F7628BAF0EBA1B8DA4BD11F7C5E892 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4090429DBF8087591B08E5E81398AB642BC3997B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACF0B5B7B18646AE22EB65E31800E1F0B9FE3951);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4090429DBF8087591B08E5E81398AB642BC3997B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralACF0B5B7B18646AE22EB65E31800E1F0B9FE3951);
		((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___kMatchFinderIDs_56 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___kMatchFinderIDs_56), (void*)L_3);
		V_0 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		V_1 = (uint8_t)2;
		goto IL_0068;
	}

IL_0040:
	{
		uint8_t L_6 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_6>>1)), 1))&((int32_t)31)))));
		V_3 = 0;
		goto IL_005f;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		int32_t L_8 = V_0;
		uint8_t L_9 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_9);
		uint32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005f:
	{
		uint32_t L_12 = V_3;
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) >= ((uint32_t)L_13))))
		{
			goto IL_004f;
		}
	}
	{
		uint8_t L_14 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, 1)));
	}

IL_0068:
	{
		uint8_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)22))))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPosSlot_mE8AD8311539B89B57249B785AF430BF299BF6E7F (uint32_t ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_pos;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		uint32_t L_2 = ___0_pos;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0010:
	{
		uint32_t L_5 = ___0_pos;
		if ((!(((uint32_t)L_5) < ((uint32_t)((int32_t)2097152)))))
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		uint32_t L_7 = ___0_pos;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((uint32_t)L_7>>((int32_t)10)));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)20)));
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		uint32_t L_11 = ___0_pos;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((uint32_t)L_11>>((int32_t)20)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)40)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPosSlot2_m1A0C4F3D8683ACFD33F8A4CFE83DD46F9FFB3B52 (uint32_t ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_pos;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)131072)))))
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		uint32_t L_2 = ___0_pos;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)((uint32_t)L_2>>6));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)12)));
	}

IL_0015:
	{
		uint32_t L_5 = ___0_pos;
		if ((!(((uint32_t)L_5) < ((uint32_t)((int32_t)134217728)))))
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		uint32_t L_7 = ___0_pos;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((uint32_t)L_7>>((int32_t)16)));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)32)));
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___g_FastPos_1;
		uint32_t L_11 = ___0_pos;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((uint32_t)L_11>>((int32_t)26)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)52)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_BaseInit_m10C2748349923617A51CA3FE1014942033FBC3DB (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_0 = (&__this->____state_2);
		State_Init_mBCD4EDB45673F2976FD95F3D30F3D3846034DA24(L_0, NULL);
		__this->____previousByte_3 = (uint8_t)0;
		V_0 = 0;
		goto IL_0023;
	}

IL_0016:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____repDistances_4;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)0);
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1));
	}

IL_0023:
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) >= ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Create_mC3015D1D17C3A7D7299F6EAB6B24070C20BEB7D5 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->____matchFinder_10;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* L_1 = (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF*)il2cpp_codegen_object_new(BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF_il2cpp_TypeInfo_var);
		BinTree__ctor_m8B893030BC588B070A3AD734BD73AD7B306CABB4(L_1, NULL);
		V_0 = L_1;
		V_1 = 4;
		int32_t L_2 = __this->____matchFinderType_47;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = 2;
	}

IL_001a:
	{
		BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		BinTree_SetType_m90713D4A757BAFD7A79B2B68DCDC117622E081AD(L_3, L_4, NULL);
		BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* L_5 = V_0;
		__this->____matchFinder_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____matchFinder_10), (void*)L_5);
	}

IL_0028:
	{
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_6 = __this->____literalEncoder_23;
		int32_t L_7 = __this->____numLiteralPosStateBits_39;
		int32_t L_8 = __this->____numLiteralContextBits_40;
		NullCheck(L_6);
		LiteralEncoder_Create_m058CFBED1F67EDF233EAE51B9A8812C9CE09E850(L_6, L_7, L_8, NULL);
		uint32_t L_9 = __this->____dictionarySize_41;
		uint32_t L_10 = __this->____dictionarySizePrev_42;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_11 = __this->____numFastBytesPrev_43;
		uint32_t L_12 = __this->____numFastBytes_25;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005c;
		}
	}
	{
		return;
	}

IL_005c:
	{
		RuntimeObject* L_13 = __this->____matchFinder_10;
		uint32_t L_14 = __this->____dictionarySize_41;
		uint32_t L_15 = __this->____numFastBytes_25;
		NullCheck(L_13);
		InterfaceActionInvoker4< uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(0, IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var, L_13, L_14, ((int32_t)4096), L_15, ((int32_t)274));
		uint32_t L_16 = __this->____dictionarySize_41;
		__this->____dictionarySizePrev_42 = L_16;
		uint32_t L_17 = __this->____numFastBytes_25;
		__this->____numFastBytesPrev_43 = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_m716D91C874D476B3B67363DC6AD931540AF70524 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____repDistances_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____repDistances_4), (void*)L_0);
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_1 = (OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C*)(OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C*)SZArrayNew(OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->____optimum_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____optimum_9), (void*)L_1);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_2 = (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF*)il2cpp_codegen_object_new(Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF_il2cpp_TypeInfo_var);
		Encoder__ctor_mC2A5AA81FEB98F4AECB043B786F2AF569C0C41F1(L_2, NULL);
		__this->____rangeEncoder_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rangeEncoder_11), (void*)L_2);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_3 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->____isMatch_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____isMatch_12), (void*)L_3);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_4 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->____isRep_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____isRep_13), (void*)L_4);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_5 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->____isRepG0_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____isRepG0_14), (void*)L_5);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_6 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->____isRepG1_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____isRepG1_15), (void*)L_6);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_7 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->____isRepG2_16 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____isRepG2_16), (void*)L_7);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_8 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->____isRep0Long_17 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____isRep0Long_17), (void*)L_8);
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_9 = (BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510*)(BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510*)SZArrayNew(BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____posSlotEncoder_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posSlotEncoder_18), (void*)L_9);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_10 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		__this->____posEncoders_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posEncoders_19), (void*)L_10);
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152((&L_11), 4, NULL);
		__this->____posAlignEncoder_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____posAlignEncoder_20))->___Models_0), (void*)NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_12 = (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4*)il2cpp_codegen_object_new(LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4_il2cpp_TypeInfo_var);
		LenPriceTableEncoder__ctor_m68947908F4847299A2F052E855508D175B5B58D3(L_12, NULL);
		__this->____lenEncoder_21 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lenEncoder_21), (void*)L_12);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_13 = (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4*)il2cpp_codegen_object_new(LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4_il2cpp_TypeInfo_var);
		LenPriceTableEncoder__ctor_m68947908F4847299A2F052E855508D175B5B58D3(L_13, NULL);
		__this->____repMatchLenEncoder_22 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____repMatchLenEncoder_22), (void*)L_13);
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_14 = (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730*)il2cpp_codegen_object_new(LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730_il2cpp_TypeInfo_var);
		LiteralEncoder__ctor_m3E8E8EB330C6BD81A3D5350576860475EDC098E6(L_14, NULL);
		__this->____literalEncoder_23 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____literalEncoder_23), (void*)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)548));
		__this->____matchDistances_24 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____matchDistances_24), (void*)L_15);
		__this->____numFastBytes_25 = ((int32_t)32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->____posSlotPrices_32 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posSlotPrices_32), (void*)L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->____distancesPrices_33 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distancesPrices_33), (void*)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____alignPrices_34 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____alignPrices_34), (void*)L_18);
		__this->____distTableSize_36 = ((int32_t)44);
		__this->____posStateBits_37 = 2;
		__this->____posStateMask_38 = 3;
		__this->____numLiteralContextBits_40 = 3;
		__this->____dictionarySize_41 = ((int32_t)4194304);
		__this->____dictionarySizePrev_42 = (-1);
		__this->____numFastBytesPrev_43 = (-1);
		__this->____matchFinderType_47 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___reps_50 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reps_50), (void*)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___repLens_51 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___repLens_51), (void*)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___properties_53 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___properties_53), (void*)L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->___tempPrices_54 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempPrices_54), (void*)L_22);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		V_0 = 0;
		goto IL_0192;
	}

IL_0181:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_23 = __this->____optimum_9;
		int32_t L_24 = V_0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_25 = (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47*)il2cpp_codegen_object_new(Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47_il2cpp_TypeInfo_var);
		Optimal__ctor_m92565D3B039685A68704CEAB75C150691ADB2300(L_25, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47*)L_25);
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0192:
	{
		int32_t L_27 = V_0;
		if ((((int64_t)((int64_t)L_27)) < ((int64_t)((int64_t)((int32_t)4096)))))
		{
			goto IL_0181;
		}
	}
	{
		V_1 = 0;
		goto IL_01b6;
	}

IL_01a0:
	{
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_28 = __this->____posSlotEncoder_18;
		int32_t L_29 = V_1;
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152((&L_30), 6, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F)L_30);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_01b6:
	{
		int32_t L_32 = V_1;
		if ((((int64_t)((int64_t)L_32)) < ((int64_t)((int64_t)4))))
		{
			goto IL_01a0;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetWriteEndMarkerMode_m1105355FDDE121190FB3E090A948499A7F027405 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, bool ___0_writeEndMarker, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_writeEndMarker;
		__this->____writeEndMark_48 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Init_m813E0BC4C3FAFE43B32D2C77E04B2C69350B523C (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		Encoder_BaseInit_m10C2748349923617A51CA3FE1014942033FBC3DB(__this, NULL);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_0 = __this->____rangeEncoder_11;
		NullCheck(L_0);
		Encoder_Init_m3693A7EB2415EFD605F80BC3D7B38504F5E0A69E(L_0, NULL);
		V_0 = 0;
		goto IL_0099;
	}

IL_0018:
	{
		V_1 = 0;
		goto IL_0048;
	}

IL_001c:
	{
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_1<<4)), (int32_t)L_2));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_3 = __this->____isMatch_12;
		uint32_t L_4 = V_2;
		NullCheck(L_3);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_5 = __this->____isRep0Long_17;
		uint32_t L_6 = V_2;
		NullCheck(L_5);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), NULL);
		uint32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, 1));
	}

IL_0048:
	{
		uint32_t L_8 = V_1;
		uint32_t L_9 = __this->____posStateMask_38;
		if ((!(((uint32_t)L_8) > ((uint32_t)L_9))))
		{
			goto IL_001c;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_10 = __this->____isRep_13;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_12 = __this->____isRepG0_14;
		uint32_t L_13 = V_0;
		NullCheck(L_12);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_14 = __this->____isRepG1_15;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_16 = __this->____isRepG2_16;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		uint32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, 1));
	}

IL_0099:
	{
		uint32_t L_19 = V_0;
		if ((!(((uint32_t)L_19) >= ((uint32_t)((int32_t)12)))))
		{
			goto IL_0018;
		}
	}
	{
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_20 = __this->____literalEncoder_23;
		NullCheck(L_20);
		LiteralEncoder_Init_m7529C6AA133E3F4237A5324C72092BAA722CF04E(L_20, NULL);
		V_0 = 0;
		goto IL_00c5;
	}

IL_00b0:
	{
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_21 = __this->____posSlotEncoder_18;
		uint32_t L_22 = V_0;
		NullCheck(L_21);
		BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), NULL);
		uint32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
	}

IL_00c5:
	{
		uint32_t L_24 = V_0;
		if ((!(((uint32_t)L_24) >= ((uint32_t)4))))
		{
			goto IL_00b0;
		}
	}
	{
		V_0 = 0;
		goto IL_00e2;
	}

IL_00cd:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_25 = __this->____posEncoders_19;
		uint32_t L_26 = V_0;
		NullCheck(L_25);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		uint32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, 1));
	}

IL_00e2:
	{
		uint32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) >= ((uint32_t)((int32_t)114)))))
		{
			goto IL_00cd;
		}
	}
	{
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_29 = __this->____lenEncoder_21;
		int32_t L_30 = __this->____posStateBits_37;
		NullCheck(L_29);
		LenEncoder_Init_m5A7B50A296E106A7465EC8CC62A936F8569D6467(L_29, ((int32_t)(1<<((int32_t)(L_30&((int32_t)31))))), NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_31 = __this->____repMatchLenEncoder_22;
		int32_t L_32 = __this->____posStateBits_37;
		NullCheck(L_31);
		LenEncoder_Init_m5A7B50A296E106A7465EC8CC62A936F8569D6467(L_31, ((int32_t)(1<<((int32_t)(L_32&((int32_t)31))))), NULL);
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_33 = (&__this->____posAlignEncoder_20);
		BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D(L_33, NULL);
		__this->____longestMatchWasFound_31 = (bool)0;
		__this->____optimumEndIndex_29 = 0;
		__this->____optimumCurrentIndex_30 = 0;
		__this->____additionalOffset_28 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReadMatchDistances_mDAD957C5B4022AC56A6791B7F5BA06DEF1363464 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t* ___0_lenRes, uint32_t* ___1_numDistancePairs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t* L_0 = ___0_lenRes;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t* L_1 = ___1_numDistancePairs;
		RuntimeObject* L_2 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____matchDistances_24;
		NullCheck(L_2);
		uint32_t L_4;
		L_4 = InterfaceFuncInvoker1< uint32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(1, IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var, L_2, L_3);
		*((int32_t*)L_1) = (int32_t)L_4;
		uint32_t* L_5 = ___1_numDistancePairs;
		int32_t L_6 = *((uint32_t*)L_5);
		if ((!(((uint32_t)L_6) > ((uint32_t)0))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t* L_7 = ___0_lenRes;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____matchDistances_24;
		uint32_t* L_9 = ___1_numDistancePairs;
		int32_t L_10 = *((uint32_t*)L_9);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 2));
		uint32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*((int32_t*)L_7) = (int32_t)L_12;
		uint32_t* L_13 = ___0_lenRes;
		int32_t L_14 = *((uint32_t*)L_13);
		uint32_t L_15 = __this->____numFastBytes_25;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t* L_16 = ___0_lenRes;
		uint32_t* L_17 = ___0_lenRes;
		int32_t L_18 = *((uint32_t*)L_17);
		RuntimeObject* L_19 = __this->____matchFinder_10;
		uint32_t* L_20 = ___0_lenRes;
		int32_t L_21 = *((uint32_t*)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->____matchDistances_24;
		uint32_t* L_23 = ___1_numDistancePairs;
		int32_t L_24 = *((uint32_t*)L_23);
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		uint32_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		uint32_t* L_27 = ___0_lenRes;
		int32_t L_28 = *((uint32_t*)L_27);
		NullCheck(L_19);
		uint32_t L_29;
		L_29 = InterfaceFuncInvoker3< uint32_t, int32_t, uint32_t, uint32_t >::Invoke(4, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_19, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), L_26, ((int32_t)il2cpp_codegen_subtract(((int32_t)273), L_28)));
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, (int32_t)L_29));
	}

IL_0059:
	{
		uint32_t L_30 = __this->____additionalOffset_28;
		__this->____additionalOffset_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_MovePos_mE916096040D27DE0B99DAA8CDDD11BBF2C4E054E (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_num, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_num;
		if ((!(((uint32_t)L_0) > ((uint32_t)0))))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->____matchFinder_10;
		uint32_t L_2 = ___0_num;
		NullCheck(L_1);
		InterfaceActionInvoker1< uint32_t >::Invoke(2, IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var, L_1, L_2);
		uint32_t L_3 = __this->____additionalOffset_28;
		uint32_t L_4 = ___0_num;
		__this->____additionalOffset_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetRepLen1Price_mC8C4E1246A79AA9FAFA2327F19DEBFFB8F9E37AB (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___0_state, uint32_t ___1_posState, const RuntimeMethod* method) 
{
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_0 = __this->____isRepG0_14;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_1 = ___0_state;
		uint32_t L_2 = L_1.___Index_0;
		NullCheck(L_0);
		uint32_t L_3;
		L_3 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_4 = __this->____isRep0Long_17;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_5 = ___0_state;
		uint32_t L_6 = L_5.___Index_0;
		uint32_t L_7 = ___1_posState;
		NullCheck(L_4);
		uint32_t L_8;
		L_8 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_6<<4)), (int32_t)L_7))))), NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_8));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPureRepPrice_m364A41D379A0968DB508D562D4940FC0E5AE56B4 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_repIndex, State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___1_state, uint32_t ___2_posState, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_repIndex;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_1 = __this->____isRepG0_14;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_2 = ___1_state;
		uint32_t L_3 = L_2.___Index_0;
		NullCheck(L_1);
		uint32_t L_4;
		L_4 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		V_0 = L_4;
		uint32_t L_5 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_6 = __this->____isRep0Long_17;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_7 = ___1_state;
		uint32_t L_8 = L_7.___Index_0;
		uint32_t L_9 = ___2_posState;
		NullCheck(L_6);
		uint32_t L_10;
		L_10 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<4)), (int32_t)L_9))))), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_10));
		goto IL_00a4;
	}

IL_0039:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_11 = __this->____isRepG0_14;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_12 = ___1_state;
		uint32_t L_13 = L_12.___Index_0;
		NullCheck(L_11);
		uint32_t L_14;
		L_14 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		V_0 = L_14;
		uint32_t L_15 = ___0_repIndex;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_16 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_17 = __this->____isRepG1_15;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_18 = ___1_state;
		uint32_t L_19 = L_18.___Index_0;
		NullCheck(L_17);
		uint32_t L_20;
		L_20 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_20));
		goto IL_00a4;
	}

IL_006f:
	{
		uint32_t L_21 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_22 = __this->____isRepG1_15;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_23 = ___1_state;
		uint32_t L_24 = L_23.___Index_0;
		NullCheck(L_22);
		uint32_t L_25;
		L_25 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_25));
		uint32_t L_26 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_27 = __this->____isRepG2_16;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_28 = ___1_state;
		uint32_t L_29 = L_28.___Index_0;
		NullCheck(L_27);
		uint32_t L_30 = ___0_repIndex;
		uint32_t L_31;
		L_31 = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, 2)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_31));
	}

IL_00a4:
	{
		uint32_t L_32 = V_0;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_repIndex, uint32_t ___1_len, State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 ___2_state, uint32_t ___3_posState, const RuntimeMethod* method) 
{
	{
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_0 = __this->____repMatchLenEncoder_22;
		uint32_t L_1 = ___1_len;
		uint32_t L_2 = ___3_posState;
		NullCheck(L_0);
		uint32_t L_3;
		L_3 = LenPriceTableEncoder_GetPrice_m7EFC87D15F1855E62F78A82C6579E81E49566DA7(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 2)), L_2, NULL);
		uint32_t L_4 = ___0_repIndex;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_5 = ___2_state;
		uint32_t L_6 = ___3_posState;
		uint32_t L_7;
		L_7 = Encoder_GetPureRepPrice_m364A41D379A0968DB508D562D4940FC0E5AE56B4(__this, L_4, L_5, L_6, NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetPosLenPrice_mAB28816EC47676E646999B96E90F728EEDFD81B6 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_pos, uint32_t ___1_len, uint32_t ___2_posState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___1_len;
		uint32_t L_1;
		L_1 = Base_GetLenToPosState_m405EAAFD348B53068CA37D9A01309E42ECEEBEA1(L_0, NULL);
		V_1 = L_1;
		uint32_t L_2 = ___0_pos;
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_0022;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____distancesPrices_33;
		uint32_t L_4 = V_1;
		uint32_t L_5 = ___0_pos;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)128))), (int32_t)L_5));
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		goto IL_0040;
	}

IL_0022:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____posSlotPrices_32;
		uint32_t L_9 = V_1;
		uint32_t L_10 = ___0_pos;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		uint32_t L_11;
		L_11 = Encoder_GetPosSlot2_m1A0C4F3D8683ACFD33F8A4CFE83DD46F9FFB3B52(L_10, NULL);
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_9<<6)), (int32_t)L_11));
		uint32_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->____alignPrices_34;
		uint32_t L_15 = ___0_pos;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)((int32_t)L_15&((int32_t)15)));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
	}

IL_0040:
	{
		uint32_t L_18 = V_0;
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_19 = __this->____lenEncoder_21;
		uint32_t L_20 = ___1_len;
		uint32_t L_21 = ___2_posState;
		NullCheck(L_19);
		uint32_t L_22;
		L_22 = LenPriceTableEncoder_GetPrice_m7EFC87D15F1855E62F78A82C6579E81E49566DA7(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 2)), L_21, NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_22));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_Backward_m8CB79946DA75B9C4137C8CC787AFB921D8CF8FD3 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t* ___0_backRes, uint32_t ___1_cur, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___1_cur;
		__this->____optimumEndIndex_29 = L_0;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_1 = __this->____optimum_9;
		uint32_t L_2 = ___1_cur;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		uint32_t L_5 = L_4->___PosPrev_6;
		V_0 = L_5;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_6 = __this->____optimum_9;
		uint32_t L_7 = ___1_cur;
		NullCheck(L_6);
		uint32_t L_8 = L_7;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		uint32_t L_10 = L_9->___BackPrev_7;
		V_1 = L_10;
	}

IL_0023:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_11 = __this->____optimum_9;
		uint32_t L_12 = ___1_cur;
		NullCheck(L_11);
		uint32_t L_13 = L_12;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		bool L_15 = L_14->___Prev1IsChar_1;
		if (!L_15)
		{
			goto IL_00a6;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_16 = __this->____optimum_9;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		uint32_t L_18 = L_17;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Optimal_MakeAsChar_m80AAD07DA3ACFB06AA07458E0DAE88923BC8AB44(L_19, NULL);
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_20 = __this->____optimum_9;
		uint32_t L_21 = V_0;
		NullCheck(L_20);
		uint32_t L_22 = L_21;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		uint32_t L_24 = V_0;
		NullCheck(L_23);
		L_23->___PosPrev_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, 1));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_25 = __this->____optimum_9;
		uint32_t L_26 = ___1_cur;
		NullCheck(L_25);
		uint32_t L_27 = L_26;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		bool L_29 = L_28->___Prev2_2;
		if (!L_29)
		{
			goto IL_00a6;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_30 = __this->____optimum_9;
		uint32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		L_33->___Prev1IsChar_1 = (bool)0;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_34 = __this->____optimum_9;
		uint32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_38 = __this->____optimum_9;
		uint32_t L_39 = ___1_cur;
		NullCheck(L_38);
		uint32_t L_40 = L_39;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		uint32_t L_42 = L_41->___PosPrev2_3;
		NullCheck(L_37);
		L_37->___PosPrev_6 = L_42;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_43 = __this->____optimum_9;
		uint32_t L_44 = V_0;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_47 = __this->____optimum_9;
		uint32_t L_48 = ___1_cur;
		NullCheck(L_47);
		uint32_t L_49 = L_48;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		uint32_t L_51 = L_50->___BackPrev2_4;
		NullCheck(L_46);
		L_46->___BackPrev_7 = L_51;
	}

IL_00a6:
	{
		uint32_t L_52 = V_0;
		V_2 = L_52;
		uint32_t L_53 = V_1;
		V_3 = L_53;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_54 = __this->____optimum_9;
		uint32_t L_55 = V_2;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		uint32_t L_58 = L_57->___BackPrev_7;
		V_1 = L_58;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_59 = __this->____optimum_9;
		uint32_t L_60 = V_2;
		NullCheck(L_59);
		uint32_t L_61 = L_60;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		uint32_t L_63 = L_62->___PosPrev_6;
		V_0 = L_63;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_64 = __this->____optimum_9;
		uint32_t L_65 = V_2;
		NullCheck(L_64);
		uint32_t L_66 = L_65;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		uint32_t L_68 = V_3;
		NullCheck(L_67);
		L_67->___BackPrev_7 = L_68;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_69 = __this->____optimum_9;
		uint32_t L_70 = V_2;
		NullCheck(L_69);
		uint32_t L_71 = L_70;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint32_t L_73 = ___1_cur;
		NullCheck(L_72);
		L_72->___PosPrev_6 = L_73;
		uint32_t L_74 = V_2;
		___1_cur = L_74;
		uint32_t L_75 = ___1_cur;
		if ((!(((uint32_t)L_75) <= ((uint32_t)0))))
		{
			goto IL_0023;
		}
	}
	{
		uint32_t* L_76 = ___0_backRes;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_77 = __this->____optimum_9;
		NullCheck(L_77);
		int32_t L_78 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		uint32_t L_80 = L_79->___BackPrev_7;
		*((int32_t*)L_76) = (int32_t)L_80;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_81 = __this->____optimum_9;
		NullCheck(L_81);
		int32_t L_82 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		uint32_t L_84 = L_83->___PosPrev_6;
		__this->____optimumCurrentIndex_30 = L_84;
		uint32_t L_85 = __this->____optimumCurrentIndex_30;
		return L_85;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder_GetOptimum_m3FAD061E535C7AD55A24439A4568BAF4800F9017 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_position, uint32_t* ___1_backRes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 V_16;
	memset((&V_16), 0, sizeof(V_16));
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_21 = NULL;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_25 = NULL;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 V_28;
	memset((&V_28), 0, sizeof(V_28));
	uint32_t V_29 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_30 = NULL;
	bool V_31 = false;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_35 = NULL;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 V_39;
	memset((&V_39), 0, sizeof(V_39));
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_44 = NULL;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_49 = NULL;
	uint32_t V_50 = 0;
	uint32_t V_51 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 V_52;
	memset((&V_52), 0, sizeof(V_52));
	uint32_t V_53 = 0;
	uint32_t V_54 = 0;
	uint32_t V_55 = 0;
	uint32_t V_56 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_57 = NULL;
	uint32_t V_58 = 0;
	uint32_t V_59 = 0;
	uint32_t V_60 = 0;
	uint32_t V_61 = 0;
	Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* V_62 = NULL;
	uint32_t V_63 = 0;
	uint32_t V_64 = 0;
	State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 V_65;
	memset((&V_65), 0, sizeof(V_65));
	uint32_t V_66 = 0;
	uint32_t V_67 = 0;
	uint32_t V_68 = 0;
	uint32_t G_B28_0 = 0;
	int32_t G_B43_0 = 0;
	uint32_t G_B86_0 = 0;
	uint32_t G_B85_0 = 0;
	{
		uint32_t L_0 = __this->____optimumEndIndex_29;
		uint32_t L_1 = __this->____optimumCurrentIndex_30;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0054;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_2 = __this->____optimum_9;
		uint32_t L_3 = __this->____optimumCurrentIndex_30;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		uint32_t L_6 = L_5->___PosPrev_6;
		uint32_t L_7 = __this->____optimumCurrentIndex_30;
		uint32_t* L_8 = ___1_backRes;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_9 = __this->____optimum_9;
		uint32_t L_10 = __this->____optimumCurrentIndex_30;
		NullCheck(L_9);
		uint32_t L_11 = L_10;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		uint32_t L_13 = L_12->___BackPrev_7;
		*((int32_t*)L_8) = (int32_t)L_13;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_14 = __this->____optimum_9;
		uint32_t L_15 = __this->____optimumCurrentIndex_30;
		NullCheck(L_14);
		uint32_t L_16 = L_15;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		uint32_t L_18 = L_17->___PosPrev_6;
		__this->____optimumCurrentIndex_30 = L_18;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
	}

IL_0054:
	{
		int32_t L_19 = 0;
		V_14 = L_19;
		__this->____optimumEndIndex_29 = L_19;
		uint32_t L_20 = V_14;
		__this->____optimumCurrentIndex_30 = L_20;
		bool L_21 = __this->____longestMatchWasFound_31;
		if (L_21)
		{
			goto IL_007a;
		}
	}
	{
		Encoder_ReadMatchDistances_mDAD957C5B4022AC56A6791B7F5BA06DEF1363464(__this, (&V_0), (&V_1), NULL);
		goto IL_008f;
	}

IL_007a:
	{
		uint32_t L_22 = __this->____longestMatchLength_26;
		V_0 = L_22;
		uint32_t L_23 = __this->____numDistancePairs_27;
		V_1 = L_23;
		__this->____longestMatchWasFound_31 = (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_24 = __this->____matchFinder_10;
		NullCheck(L_24);
		uint32_t L_25;
		L_25 = InterfaceFuncInvoker0< uint32_t >::Invoke(5, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_24);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, 1));
		uint32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) < ((uint32_t)2))))
		{
			goto IL_00a6;
		}
	}
	{
		uint32_t* L_27 = ___1_backRes;
		*((int32_t*)L_27) = (int32_t)(-1);
		return 1;
	}

IL_00a6:
	{
		uint32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) > ((uint32_t)((int32_t)273)))))
		{
			goto IL_00b4;
		}
	}
	{
		V_2 = ((int32_t)273);
	}

IL_00b4:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_010c;
	}

IL_00bb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___reps_50;
		uint32_t L_30 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____repDistances_4;
		uint32_t L_32 = V_4;
		NullCheck(L_31);
		uint32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint32_t)L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___repLens_51;
		uint32_t L_36 = V_4;
		RuntimeObject* L_37 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___reps_50;
		uint32_t L_39 = V_4;
		NullCheck(L_38);
		uint32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		uint32_t L_42;
		L_42 = InterfaceFuncInvoker3< uint32_t, int32_t, uint32_t, uint32_t >::Invoke(4, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_37, (-1), L_41, ((int32_t)273));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->___repLens_51;
		uint32_t L_44 = V_4;
		NullCheck(L_43);
		uint32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___repLens_51;
		uint32_t L_48 = V_3;
		NullCheck(L_47);
		uint32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_46) > ((uint32_t)L_50))))
		{
			goto IL_0106;
		}
	}
	{
		uint32_t L_51 = V_4;
		V_3 = L_51;
	}

IL_0106:
	{
		uint32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, 1));
	}

IL_010c:
	{
		uint32_t L_53 = V_4;
		if ((!(((uint32_t)L_53) >= ((uint32_t)4))))
		{
			goto IL_00bb;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___repLens_51;
		uint32_t L_55 = V_3;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		uint32_t L_58 = __this->____numFastBytes_25;
		if ((!(((uint32_t)L_57) >= ((uint32_t)L_58))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t* L_59 = ___1_backRes;
		uint32_t L_60 = V_3;
		*((int32_t*)L_59) = (int32_t)L_60;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = __this->___repLens_51;
		uint32_t L_62 = V_3;
		NullCheck(L_61);
		uint32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_15 = L_64;
		uint32_t L_65 = V_15;
		Encoder_MovePos_mE916096040D27DE0B99DAA8CDDD11BBF2C4E054E(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, 1)), NULL);
		uint32_t L_66 = V_15;
		return L_66;
	}

IL_013b:
	{
		uint32_t L_67 = V_0;
		uint32_t L_68 = __this->____numFastBytes_25;
		if ((!(((uint32_t)L_67) >= ((uint32_t)L_68))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t* L_69 = ___1_backRes;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = __this->____matchDistances_24;
		uint32_t L_71 = V_1;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, 1));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		*((int32_t*)L_69) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, 4));
		uint32_t L_74 = V_0;
		Encoder_MovePos_mE916096040D27DE0B99DAA8CDDD11BBF2C4E054E(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, 1)), NULL);
		uint32_t L_75 = V_0;
		return L_75;
	}

IL_015d:
	{
		RuntimeObject* L_76 = __this->____matchFinder_10;
		NullCheck(L_76);
		uint8_t L_77;
		L_77 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_76, (-1));
		V_5 = L_77;
		RuntimeObject* L_78 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->____repDistances_4;
		NullCheck(L_79);
		int32_t L_80 = 0;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_78);
		uint8_t L_82;
		L_82 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_78, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_81)), 1)), 1)));
		V_6 = L_82;
		uint32_t L_83 = V_0;
		if ((!(((uint32_t)L_83) < ((uint32_t)2))))
		{
			goto IL_01a0;
		}
	}
	{
		uint8_t L_84 = V_5;
		uint8_t L_85 = V_6;
		if ((((int32_t)L_84) == ((int32_t)L_85)))
		{
			goto IL_01a0;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = __this->___repLens_51;
		uint32_t L_87 = V_3;
		NullCheck(L_86);
		uint32_t L_88 = L_87;
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		if ((!(((uint32_t)L_89) < ((uint32_t)2))))
		{
			goto IL_01a0;
		}
	}
	{
		uint32_t* L_90 = ___1_backRes;
		*((int32_t*)L_90) = (int32_t)(-1);
		return 1;
	}

IL_01a0:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_91 = __this->____optimum_9;
		NullCheck(L_91);
		int32_t L_92 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_94 = __this->____state_2;
		NullCheck(L_93);
		L_93->___State_0 = L_94;
		uint32_t L_95 = ___0_position;
		uint32_t L_96 = __this->____posStateMask_38;
		V_7 = ((int32_t)((int32_t)L_95&(int32_t)L_96));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_97 = __this->____optimum_9;
		NullCheck(L_97);
		int32_t L_98 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_100 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_101 = (&__this->____state_2);
		uint32_t L_102 = L_101->___Index_0;
		uint32_t L_103 = V_7;
		NullCheck(L_100);
		uint32_t L_104;
		L_104 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_102<<4)), (int32_t)L_103))))), NULL);
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_105 = __this->____literalEncoder_23;
		uint32_t L_106 = ___0_position;
		uint8_t L_107 = __this->____previousByte_3;
		NullCheck(L_105);
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_108;
		L_108 = LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622(L_105, L_106, L_107, NULL);
		V_16 = L_108;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_109 = (&__this->____state_2);
		bool L_110;
		L_110 = State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7(L_109, NULL);
		uint8_t L_111 = V_6;
		uint8_t L_112 = V_5;
		uint32_t L_113;
		L_113 = Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE((&V_16), (bool)((((int32_t)L_110) == ((int32_t)0))? 1 : 0), L_111, L_112, NULL);
		NullCheck(L_99);
		L_99->___Price_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)L_113));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_114 = __this->____optimum_9;
		NullCheck(L_114);
		int32_t L_115 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		Optimal_MakeAsChar_m80AAD07DA3ACFB06AA07458E0DAE88923BC8AB44(L_116, NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_117 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_118 = (&__this->____state_2);
		uint32_t L_119 = L_118->___Index_0;
		uint32_t L_120 = V_7;
		NullCheck(L_117);
		uint32_t L_121;
		L_121 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_119<<4)), (int32_t)L_120))))), NULL);
		V_8 = L_121;
		uint32_t L_122 = V_8;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_123 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_124 = (&__this->____state_2);
		uint32_t L_125 = L_124->___Index_0;
		NullCheck(L_123);
		uint32_t L_126;
		L_126 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125))), NULL);
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)L_126));
		uint8_t L_127 = V_6;
		uint8_t L_128 = V_5;
		if ((!(((uint32_t)L_127) == ((uint32_t)L_128))))
		{
			goto IL_02ad;
		}
	}
	{
		uint32_t L_129 = V_9;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_130 = __this->____state_2;
		uint32_t L_131 = V_7;
		uint32_t L_132;
		L_132 = Encoder_GetRepLen1Price_mC8C4E1246A79AA9FAFA2327F19DEBFFB8F9E37AB(__this, L_130, L_131, NULL);
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_132));
		uint32_t L_133 = V_17;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_134 = __this->____optimum_9;
		NullCheck(L_134);
		int32_t L_135 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		uint32_t L_137 = L_136->___Price_5;
		if ((!(((uint32_t)L_133) < ((uint32_t)L_137))))
		{
			goto IL_02ad;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_138 = __this->____optimum_9;
		NullCheck(L_138);
		int32_t L_139 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		uint32_t L_141 = V_17;
		NullCheck(L_140);
		L_140->___Price_5 = L_141;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_142 = __this->____optimum_9;
		NullCheck(L_142);
		int32_t L_143 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		Optimal_MakeAsShortRep_m0F2D5E143EB951D124EC1C377C306D9152F9DA97(L_144, NULL);
	}

IL_02ad:
	{
		uint32_t L_145 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = __this->___repLens_51;
		uint32_t L_147 = V_3;
		NullCheck(L_146);
		uint32_t L_148 = L_147;
		uint32_t L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		if ((!(((uint32_t)L_145) < ((uint32_t)L_149))))
		{
			goto IL_02c2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = __this->___repLens_51;
		uint32_t L_151 = V_3;
		NullCheck(L_150);
		uint32_t L_152 = L_151;
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		G_B28_0 = L_153;
		goto IL_02c3;
	}

IL_02c2:
	{
		uint32_t L_154 = V_0;
		G_B28_0 = L_154;
	}

IL_02c3:
	{
		V_10 = G_B28_0;
		uint32_t L_155 = V_10;
		if ((!(((uint32_t)L_155) < ((uint32_t)2))))
		{
			goto IL_02db;
		}
	}
	{
		uint32_t* L_156 = ___1_backRes;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_157 = __this->____optimum_9;
		NullCheck(L_157);
		int32_t L_158 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		NullCheck(L_159);
		uint32_t L_160 = L_159->___BackPrev_7;
		*((int32_t*)L_156) = (int32_t)L_160;
		return 1;
	}

IL_02db:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_161 = __this->____optimum_9;
		NullCheck(L_161);
		int32_t L_162 = 1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_163);
		L_163->___PosPrev_6 = 0;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_164 = __this->____optimum_9;
		NullCheck(L_164);
		int32_t L_165 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = __this->___reps_50;
		NullCheck(L_167);
		int32_t L_168 = 0;
		uint32_t L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_166);
		L_166->___Backs0_8 = L_169;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_170 = __this->____optimum_9;
		NullCheck(L_170);
		int32_t L_171 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_172 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_173 = __this->___reps_50;
		NullCheck(L_173);
		int32_t L_174 = 1;
		uint32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_172);
		L_172->___Backs1_9 = L_175;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_176 = __this->____optimum_9;
		NullCheck(L_176);
		int32_t L_177 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_179 = __this->___reps_50;
		NullCheck(L_179);
		int32_t L_180 = 2;
		uint32_t L_181 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_178);
		L_178->___Backs2_10 = L_181;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_182 = __this->____optimum_9;
		NullCheck(L_182);
		int32_t L_183 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_184 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = __this->___reps_50;
		NullCheck(L_185);
		int32_t L_186 = 3;
		uint32_t L_187 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_184);
		L_184->___Backs3_11 = L_187;
		uint32_t L_188 = V_10;
		V_11 = L_188;
	}

IL_0341:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_189 = __this->____optimum_9;
		uint32_t L_190 = V_11;
		uint32_t L_191 = L_190;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, 1));
		NullCheck(L_189);
		uint32_t L_192 = L_191;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_193 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		NullCheck(L_193);
		L_193->___Price_5 = ((int32_t)268435455);
		uint32_t L_194 = V_11;
		if ((!(((uint32_t)L_194) < ((uint32_t)2))))
		{
			goto IL_0341;
		}
	}
	{
		V_4 = 0;
		goto IL_03e9;
	}

IL_0366:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = __this->___repLens_51;
		uint32_t L_196 = V_4;
		NullCheck(L_195);
		uint32_t L_197 = L_196;
		uint32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		V_18 = L_198;
		uint32_t L_199 = V_18;
		if ((!(((uint32_t)L_199) >= ((uint32_t)2))))
		{
			goto IL_03e3;
		}
	}
	{
		uint32_t L_200 = V_9;
		uint32_t L_201 = V_4;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_202 = __this->____state_2;
		uint32_t L_203 = V_7;
		uint32_t L_204;
		L_204 = Encoder_GetPureRepPrice_m364A41D379A0968DB508D562D4940FC0E5AE56B4(__this, L_201, L_202, L_203, NULL);
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)L_204));
	}

IL_038b:
	{
		uint32_t L_205 = V_19;
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_206 = __this->____repMatchLenEncoder_22;
		uint32_t L_207 = V_18;
		uint32_t L_208 = V_7;
		NullCheck(L_206);
		uint32_t L_209;
		L_209 = LenPriceTableEncoder_GetPrice_m7EFC87D15F1855E62F78A82C6579E81E49566DA7(L_206, ((int32_t)il2cpp_codegen_subtract((int32_t)L_207, 2)), L_208, NULL);
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)L_209));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_210 = __this->____optimum_9;
		uint32_t L_211 = V_18;
		NullCheck(L_210);
		uint32_t L_212 = L_211;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		V_21 = L_213;
		uint32_t L_214 = V_20;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_215 = V_21;
		NullCheck(L_215);
		uint32_t L_216 = L_215->___Price_5;
		if ((!(((uint32_t)L_214) < ((uint32_t)L_216))))
		{
			goto IL_03d9;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_217 = V_21;
		uint32_t L_218 = V_20;
		NullCheck(L_217);
		L_217->___Price_5 = L_218;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_219 = V_21;
		NullCheck(L_219);
		L_219->___PosPrev_6 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_220 = V_21;
		uint32_t L_221 = V_4;
		NullCheck(L_220);
		L_220->___BackPrev_7 = L_221;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_222 = V_21;
		NullCheck(L_222);
		L_222->___Prev1IsChar_1 = (bool)0;
	}

IL_03d9:
	{
		uint32_t L_223 = V_18;
		int32_t L_224 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_223, 1));
		V_18 = L_224;
		if ((!(((uint32_t)L_224) < ((uint32_t)2))))
		{
			goto IL_038b;
		}
	}

IL_03e3:
	{
		uint32_t L_225 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_225, 1));
	}

IL_03e9:
	{
		uint32_t L_226 = V_4;
		if ((!(((uint32_t)L_226) >= ((uint32_t)4))))
		{
			goto IL_0366;
		}
	}
	{
		uint32_t L_227 = V_8;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_228 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_229 = (&__this->____state_2);
		uint32_t L_230 = L_229->___Index_0;
		NullCheck(L_228);
		uint32_t L_231;
		L_231 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_228)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_230))), NULL);
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)L_231));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_232 = __this->___repLens_51;
		NullCheck(L_232);
		int32_t L_233 = 0;
		uint32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		if ((!(((uint32_t)L_234) < ((uint32_t)2))))
		{
			goto IL_041f;
		}
	}
	{
		G_B43_0 = 2;
		goto IL_0429;
	}

IL_041f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_235 = __this->___repLens_51;
		NullCheck(L_235);
		int32_t L_236 = 0;
		uint32_t L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		G_B43_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_237, 1));
	}

IL_0429:
	{
		V_11 = G_B43_0;
		uint32_t L_238 = V_11;
		uint32_t L_239 = V_0;
		if ((!(((uint32_t)L_238) <= ((uint32_t)L_239))))
		{
			goto IL_04c3;
		}
	}
	{
		V_22 = 0;
		goto IL_043e;
	}

IL_0438:
	{
		uint32_t L_240 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_240, 2));
	}

IL_043e:
	{
		uint32_t L_241 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_242 = __this->____matchDistances_24;
		uint32_t L_243 = V_22;
		NullCheck(L_242);
		uint32_t L_244 = L_243;
		uint32_t L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		if ((!(((uint32_t)L_241) <= ((uint32_t)L_245))))
		{
			goto IL_0438;
		}
	}

IL_044b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = __this->____matchDistances_24;
		uint32_t L_247 = V_22;
		NullCheck(L_246);
		int32_t L_248 = ((int32_t)il2cpp_codegen_add((int32_t)L_247, 1));
		uint32_t L_249 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_23 = L_249;
		uint32_t L_250 = V_12;
		uint32_t L_251 = V_23;
		uint32_t L_252 = V_11;
		uint32_t L_253 = V_7;
		uint32_t L_254;
		L_254 = Encoder_GetPosLenPrice_mAB28816EC47676E646999B96E90F728EEDFD81B6(__this, L_251, L_252, L_253, NULL);
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_250, (int32_t)L_254));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_255 = __this->____optimum_9;
		uint32_t L_256 = V_11;
		NullCheck(L_255);
		uint32_t L_257 = L_256;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		V_25 = L_258;
		uint32_t L_259 = V_24;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_260 = V_25;
		NullCheck(L_260);
		uint32_t L_261 = L_260->___Price_5;
		if ((!(((uint32_t)L_259) < ((uint32_t)L_261))))
		{
			goto IL_04a3;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_262 = V_25;
		uint32_t L_263 = V_24;
		NullCheck(L_262);
		L_262->___Price_5 = L_263;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_264 = V_25;
		NullCheck(L_264);
		L_264->___PosPrev_6 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_265 = V_25;
		uint32_t L_266 = V_23;
		NullCheck(L_265);
		L_265->___BackPrev_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, 4));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_267 = V_25;
		NullCheck(L_267);
		L_267->___Prev1IsChar_1 = (bool)0;
	}

IL_04a3:
	{
		uint32_t L_268 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_269 = __this->____matchDistances_24;
		uint32_t L_270 = V_22;
		NullCheck(L_269);
		uint32_t L_271 = L_270;
		uint32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		if ((!(((uint32_t)L_268) == ((uint32_t)L_272))))
		{
			goto IL_04bb;
		}
	}
	{
		uint32_t L_273 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_273, 2));
		uint32_t L_274 = V_22;
		uint32_t L_275 = V_1;
		if ((((int32_t)L_274) == ((int32_t)L_275)))
		{
			goto IL_04c3;
		}
	}

IL_04bb:
	{
		uint32_t L_276 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_276, 1));
		goto IL_044b;
	}

IL_04c3:
	{
		V_13 = 0;
	}

IL_04c6:
	{
		uint32_t L_277 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_277, 1));
		uint32_t L_278 = V_13;
		uint32_t L_279 = V_10;
		if ((!(((uint32_t)L_278) == ((uint32_t)L_279))))
		{
			goto IL_04dc;
		}
	}
	{
		uint32_t* L_280 = ___1_backRes;
		uint32_t L_281 = V_13;
		uint32_t L_282;
		L_282 = Encoder_Backward_m8CB79946DA75B9C4137C8CC787AFB921D8CF8FD3(__this, L_280, L_281, NULL);
		return L_282;
	}

IL_04dc:
	{
		Encoder_ReadMatchDistances_mDAD957C5B4022AC56A6791B7F5BA06DEF1363464(__this, (&V_26), (&V_1), NULL);
		uint32_t L_283 = V_26;
		uint32_t L_284 = __this->____numFastBytes_25;
		if ((!(((uint32_t)L_283) >= ((uint32_t)L_284))))
		{
			goto IL_0510;
		}
	}
	{
		uint32_t L_285 = V_1;
		__this->____numDistancePairs_27 = L_285;
		uint32_t L_286 = V_26;
		__this->____longestMatchLength_26 = L_286;
		__this->____longestMatchWasFound_31 = (bool)1;
		uint32_t* L_287 = ___1_backRes;
		uint32_t L_288 = V_13;
		uint32_t L_289;
		L_289 = Encoder_Backward_m8CB79946DA75B9C4137C8CC787AFB921D8CF8FD3(__this, L_287, L_288, NULL);
		return L_289;
	}

IL_0510:
	{
		uint32_t L_290 = ___0_position;
		___0_position = ((int32_t)il2cpp_codegen_add((int32_t)L_290, 1));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_291 = __this->____optimum_9;
		uint32_t L_292 = V_13;
		NullCheck(L_291);
		uint32_t L_293 = L_292;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_294 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		NullCheck(L_294);
		uint32_t L_295 = L_294->___PosPrev_6;
		V_27 = L_295;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_296 = __this->____optimum_9;
		uint32_t L_297 = V_13;
		NullCheck(L_296);
		uint32_t L_298 = L_297;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		NullCheck(L_299);
		bool L_300 = L_299->___Prev1IsChar_1;
		if (!L_300)
		{
			goto IL_05a3;
		}
	}
	{
		uint32_t L_301 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_301, 1));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_302 = __this->____optimum_9;
		uint32_t L_303 = V_13;
		NullCheck(L_302);
		uint32_t L_304 = L_303;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_305 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		NullCheck(L_305);
		bool L_306 = L_305->___Prev2_2;
		if (!L_306)
		{
			goto IL_058a;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_307 = __this->____optimum_9;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_308 = __this->____optimum_9;
		uint32_t L_309 = V_13;
		NullCheck(L_308);
		uint32_t L_310 = L_309;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_311 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		NullCheck(L_311);
		uint32_t L_312 = L_311->___PosPrev2_3;
		NullCheck(L_307);
		uint32_t L_313 = L_312;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_314 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		NullCheck(L_314);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_315 = L_314->___State_0;
		V_28 = L_315;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_316 = __this->____optimum_9;
		uint32_t L_317 = V_13;
		NullCheck(L_316);
		uint32_t L_318 = L_317;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		NullCheck(L_319);
		uint32_t L_320 = L_319->___BackPrev2_4;
		if ((!(((uint32_t)L_320) < ((uint32_t)4))))
		{
			goto IL_0581;
		}
	}
	{
		State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A((&V_28), NULL);
		goto IL_059a;
	}

IL_0581:
	{
		State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56((&V_28), NULL);
		goto IL_059a;
	}

IL_058a:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_321 = __this->____optimum_9;
		uint32_t L_322 = V_27;
		NullCheck(L_321);
		uint32_t L_323 = L_322;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_324 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		NullCheck(L_324);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_325 = L_324->___State_0;
		V_28 = L_325;
	}

IL_059a:
	{
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_28), NULL);
		goto IL_05b3;
	}

IL_05a3:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_326 = __this->____optimum_9;
		uint32_t L_327 = V_27;
		NullCheck(L_326);
		uint32_t L_328 = L_327;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		NullCheck(L_329);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_330 = L_329->___State_0;
		V_28 = L_330;
	}

IL_05b3:
	{
		uint32_t L_331 = V_27;
		uint32_t L_332 = V_13;
		if ((!(((uint32_t)L_331) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_332, 1))))))
		{
			goto IL_05e3;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_333 = __this->____optimum_9;
		uint32_t L_334 = V_13;
		NullCheck(L_333);
		uint32_t L_335 = L_334;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		NullCheck(L_336);
		bool L_337;
		L_337 = Optimal_IsShortRep_m4E9F62525F114996DCBA4D347641BD522A66E051(L_336, NULL);
		if (!L_337)
		{
			goto IL_05d7;
		}
	}
	{
		State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2((&V_28), NULL);
		goto IL_07a9;
	}

IL_05d7:
	{
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_28), NULL);
		goto IL_07a9;
	}

IL_05e3:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_338 = __this->____optimum_9;
		uint32_t L_339 = V_13;
		NullCheck(L_338);
		uint32_t L_340 = L_339;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		NullCheck(L_341);
		bool L_342 = L_341->___Prev1IsChar_1;
		if (!L_342)
		{
			goto IL_062c;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_343 = __this->____optimum_9;
		uint32_t L_344 = V_13;
		NullCheck(L_343);
		uint32_t L_345 = L_344;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_346 = (L_343)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		NullCheck(L_346);
		bool L_347 = L_346->___Prev2_2;
		if (!L_347)
		{
			goto IL_062c;
		}
	}
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_348 = __this->____optimum_9;
		uint32_t L_349 = V_13;
		NullCheck(L_348);
		uint32_t L_350 = L_349;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_351 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		NullCheck(L_351);
		uint32_t L_352 = L_351->___PosPrev2_3;
		V_27 = L_352;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_353 = __this->____optimum_9;
		uint32_t L_354 = V_13;
		NullCheck(L_353);
		uint32_t L_355 = L_354;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		NullCheck(L_356);
		uint32_t L_357 = L_356->___BackPrev2_4;
		V_34 = L_357;
		State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A((&V_28), NULL);
		goto IL_0651;
	}

IL_062c:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_358 = __this->____optimum_9;
		uint32_t L_359 = V_13;
		NullCheck(L_358);
		uint32_t L_360 = L_359;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_361 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_360));
		NullCheck(L_361);
		uint32_t L_362 = L_361->___BackPrev_7;
		V_34 = L_362;
		uint32_t L_363 = V_34;
		if ((!(((uint32_t)L_363) < ((uint32_t)4))))
		{
			goto IL_064a;
		}
	}
	{
		State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A((&V_28), NULL);
		goto IL_0651;
	}

IL_064a:
	{
		State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56((&V_28), NULL);
	}

IL_0651:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_364 = __this->____optimum_9;
		uint32_t L_365 = V_27;
		NullCheck(L_364);
		uint32_t L_366 = L_365;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_35 = L_367;
		uint32_t L_368 = V_34;
		if ((!(((uint32_t)L_368) < ((uint32_t)4))))
		{
			goto IL_0770;
		}
	}
	{
		uint32_t L_369 = V_34;
		if (L_369)
		{
			goto IL_06a9;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_370 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_371 = V_35;
		NullCheck(L_371);
		uint32_t L_372 = L_371->___Backs0_8;
		NullCheck(L_370);
		(L_370)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_372);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_373 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_374 = V_35;
		NullCheck(L_374);
		uint32_t L_375 = L_374->___Backs1_9;
		NullCheck(L_373);
		(L_373)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_375);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_376 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_377 = V_35;
		NullCheck(L_377);
		uint32_t L_378 = L_377->___Backs2_10;
		NullCheck(L_376);
		(L_376)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_378);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_379 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_380 = V_35;
		NullCheck(L_380);
		uint32_t L_381 = L_380->___Backs3_11;
		NullCheck(L_379);
		(L_379)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_381);
		goto IL_07a9;
	}

IL_06a9:
	{
		uint32_t L_382 = V_34;
		if ((!(((uint32_t)L_382) == ((uint32_t)1))))
		{
			goto IL_06ef;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_383 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_384 = V_35;
		NullCheck(L_384);
		uint32_t L_385 = L_384->___Backs1_9;
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_385);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_386 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_387 = V_35;
		NullCheck(L_387);
		uint32_t L_388 = L_387->___Backs0_8;
		NullCheck(L_386);
		(L_386)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_388);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_389 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_390 = V_35;
		NullCheck(L_390);
		uint32_t L_391 = L_390->___Backs2_10;
		NullCheck(L_389);
		(L_389)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_391);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_392 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_393 = V_35;
		NullCheck(L_393);
		uint32_t L_394 = L_393->___Backs3_11;
		NullCheck(L_392);
		(L_392)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_394);
		goto IL_07a9;
	}

IL_06ef:
	{
		uint32_t L_395 = V_34;
		if ((!(((uint32_t)L_395) == ((uint32_t)2))))
		{
			goto IL_0732;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_396 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_397 = V_35;
		NullCheck(L_397);
		uint32_t L_398 = L_397->___Backs2_10;
		NullCheck(L_396);
		(L_396)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_398);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_399 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_400 = V_35;
		NullCheck(L_400);
		uint32_t L_401 = L_400->___Backs0_8;
		NullCheck(L_399);
		(L_399)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_401);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_402 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_403 = V_35;
		NullCheck(L_403);
		uint32_t L_404 = L_403->___Backs1_9;
		NullCheck(L_402);
		(L_402)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_404);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_405 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_406 = V_35;
		NullCheck(L_406);
		uint32_t L_407 = L_406->___Backs3_11;
		NullCheck(L_405);
		(L_405)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_407);
		goto IL_07a9;
	}

IL_0732:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_408 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_409 = V_35;
		NullCheck(L_409);
		uint32_t L_410 = L_409->___Backs3_11;
		NullCheck(L_408);
		(L_408)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_410);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_411 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_412 = V_35;
		NullCheck(L_412);
		uint32_t L_413 = L_412->___Backs0_8;
		NullCheck(L_411);
		(L_411)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_413);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_414 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_415 = V_35;
		NullCheck(L_415);
		uint32_t L_416 = L_415->___Backs1_9;
		NullCheck(L_414);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_416);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_417 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_418 = V_35;
		NullCheck(L_418);
		uint32_t L_419 = L_418->___Backs2_10;
		NullCheck(L_417);
		(L_417)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_419);
		goto IL_07a9;
	}

IL_0770:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_420 = __this->___reps_50;
		uint32_t L_421 = V_34;
		NullCheck(L_420);
		(L_420)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_421, 4)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_422 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_423 = V_35;
		NullCheck(L_423);
		uint32_t L_424 = L_423->___Backs0_8;
		NullCheck(L_422);
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_424);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_425 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_426 = V_35;
		NullCheck(L_426);
		uint32_t L_427 = L_426->___Backs1_9;
		NullCheck(L_425);
		(L_425)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_427);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_428 = __this->___reps_50;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_429 = V_35;
		NullCheck(L_429);
		uint32_t L_430 = L_429->___Backs2_10;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_430);
	}

IL_07a9:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_431 = __this->____optimum_9;
		uint32_t L_432 = V_13;
		NullCheck(L_431);
		uint32_t L_433 = L_432;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_434 = (L_431)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_435 = V_28;
		NullCheck(L_434);
		L_434->___State_0 = L_435;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_436 = __this->____optimum_9;
		uint32_t L_437 = V_13;
		NullCheck(L_436);
		uint32_t L_438 = L_437;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_439 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_440 = __this->___reps_50;
		NullCheck(L_440);
		int32_t L_441 = 0;
		uint32_t L_442 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		NullCheck(L_439);
		L_439->___Backs0_8 = L_442;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_443 = __this->____optimum_9;
		uint32_t L_444 = V_13;
		NullCheck(L_443);
		uint32_t L_445 = L_444;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_446 = (L_443)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_447 = __this->___reps_50;
		NullCheck(L_447);
		int32_t L_448 = 1;
		uint32_t L_449 = (L_447)->GetAt(static_cast<il2cpp_array_size_t>(L_448));
		NullCheck(L_446);
		L_446->___Backs1_9 = L_449;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_450 = __this->____optimum_9;
		uint32_t L_451 = V_13;
		NullCheck(L_450);
		uint32_t L_452 = L_451;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_453 = (L_450)->GetAt(static_cast<il2cpp_array_size_t>(L_452));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_454 = __this->___reps_50;
		NullCheck(L_454);
		int32_t L_455 = 2;
		uint32_t L_456 = (L_454)->GetAt(static_cast<il2cpp_array_size_t>(L_455));
		NullCheck(L_453);
		L_453->___Backs2_10 = L_456;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_457 = __this->____optimum_9;
		uint32_t L_458 = V_13;
		NullCheck(L_457);
		uint32_t L_459 = L_458;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_460 = (L_457)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_461 = __this->___reps_50;
		NullCheck(L_461);
		int32_t L_462 = 3;
		uint32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		NullCheck(L_460);
		L_460->___Backs3_11 = L_463;
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_464 = __this->____optimum_9;
		uint32_t L_465 = V_13;
		NullCheck(L_464);
		uint32_t L_466 = L_465;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_467 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_466));
		NullCheck(L_467);
		uint32_t L_468 = L_467->___Price_5;
		RuntimeObject* L_469 = __this->____matchFinder_10;
		NullCheck(L_469);
		uint8_t L_470;
		L_470 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_469, (-1));
		V_5 = L_470;
		RuntimeObject* L_471 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_472 = __this->___reps_50;
		NullCheck(L_472);
		int32_t L_473 = 0;
		uint32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		NullCheck(L_471);
		uint8_t L_475;
		L_475 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_471, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_474)), 1)), 1)));
		V_6 = L_475;
		uint32_t L_476 = ___0_position;
		uint32_t L_477 = __this->____posStateMask_38;
		V_7 = ((int32_t)((int32_t)L_476&(int32_t)L_477));
		uint32_t L_478 = L_468;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_479 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_480 = V_28;
		uint32_t L_481 = L_480.___Index_0;
		uint32_t L_482 = V_7;
		NullCheck(L_479);
		uint32_t L_483;
		L_483 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_479)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_481<<4)), (int32_t)L_482))))), NULL);
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_484 = __this->____literalEncoder_23;
		uint32_t L_485 = ___0_position;
		RuntimeObject* L_486 = __this->____matchFinder_10;
		NullCheck(L_486);
		uint8_t L_487;
		L_487 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_486, ((int32_t)-2));
		NullCheck(L_484);
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_488;
		L_488 = LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622(L_484, L_485, L_487, NULL);
		V_16 = L_488;
		bool L_489;
		L_489 = State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7((&V_28), NULL);
		uint8_t L_490 = V_6;
		uint8_t L_491 = V_5;
		uint32_t L_492;
		L_492 = Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE((&V_16), (bool)((((int32_t)L_489) == ((int32_t)0))? 1 : 0), L_490, L_491, NULL);
		V_29 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_478, (int32_t)L_483)), (int32_t)L_492));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_493 = __this->____optimum_9;
		uint32_t L_494 = V_13;
		NullCheck(L_493);
		int32_t L_495 = ((int32_t)il2cpp_codegen_add((int32_t)L_494, 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_496 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
		V_30 = L_496;
		V_31 = (bool)0;
		uint32_t L_497 = V_29;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_498 = V_30;
		NullCheck(L_498);
		uint32_t L_499 = L_498->___Price_5;
		if ((!(((uint32_t)L_497) < ((uint32_t)L_499))))
		{
			G_B86_0 = L_478;
			goto IL_08da;
		}
		G_B85_0 = L_478;
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_500 = V_30;
		uint32_t L_501 = V_29;
		NullCheck(L_500);
		L_500->___Price_5 = L_501;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_502 = V_30;
		uint32_t L_503 = V_13;
		NullCheck(L_502);
		L_502->___PosPrev_6 = L_503;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_504 = V_30;
		NullCheck(L_504);
		Optimal_MakeAsChar_m80AAD07DA3ACFB06AA07458E0DAE88923BC8AB44(L_504, NULL);
		V_31 = (bool)1;
		G_B86_0 = G_B85_0;
	}

IL_08da:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_505 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_506 = V_28;
		uint32_t L_507 = L_506.___Index_0;
		uint32_t L_508 = V_7;
		NullCheck(L_505);
		uint32_t L_509;
		L_509 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_505)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_507<<4)), (int32_t)L_508))))), NULL);
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)G_B86_0, (int32_t)L_509));
		uint32_t L_510 = V_8;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_511 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_512 = V_28;
		uint32_t L_513 = L_512.___Index_0;
		NullCheck(L_511);
		uint32_t L_514;
		L_514 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_511)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_513))), NULL);
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_510, (int32_t)L_514));
		uint8_t L_515 = V_6;
		uint8_t L_516 = V_5;
		if ((!(((uint32_t)L_515) == ((uint32_t)L_516))))
		{
			goto IL_0965;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_517 = V_30;
		NullCheck(L_517);
		uint32_t L_518 = L_517->___PosPrev_6;
		uint32_t L_519 = V_13;
		if ((!(((uint32_t)L_518) < ((uint32_t)L_519))))
		{
			goto IL_092f;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_520 = V_30;
		NullCheck(L_520);
		uint32_t L_521 = L_520->___BackPrev_7;
		if (!L_521)
		{
			goto IL_0965;
		}
	}

IL_092f:
	{
		uint32_t L_522 = V_9;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_523 = V_28;
		uint32_t L_524 = V_7;
		uint32_t L_525;
		L_525 = Encoder_GetRepLen1Price_mC8C4E1246A79AA9FAFA2327F19DEBFFB8F9E37AB(__this, L_523, L_524, NULL);
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_522, (int32_t)L_525));
		uint32_t L_526 = V_36;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_527 = V_30;
		NullCheck(L_527);
		uint32_t L_528 = L_527->___Price_5;
		if ((!(((uint32_t)L_526) <= ((uint32_t)L_528))))
		{
			goto IL_0965;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_529 = V_30;
		uint32_t L_530 = V_36;
		NullCheck(L_529);
		L_529->___Price_5 = L_530;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_531 = V_30;
		uint32_t L_532 = V_13;
		NullCheck(L_531);
		L_531->___PosPrev_6 = L_532;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_533 = V_30;
		NullCheck(L_533);
		Optimal_MakeAsShortRep_m0F2D5E143EB951D124EC1C377C306D9152F9DA97(L_533, NULL);
		V_31 = (bool)1;
	}

IL_0965:
	{
		RuntimeObject* L_534 = __this->____matchFinder_10;
		NullCheck(L_534);
		uint32_t L_535;
		L_535 = InterfaceFuncInvoker0< uint32_t >::Invoke(5, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_534);
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_535, 1));
		uint32_t L_536 = V_13;
		uint32_t L_537 = V_32;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_538;
		L_538 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(((int32_t)il2cpp_codegen_subtract(((int32_t)4095), (int32_t)L_536)), L_537, NULL);
		V_32 = L_538;
		uint32_t L_539 = V_32;
		V_2 = L_539;
		uint32_t L_540 = V_2;
		if ((!(((uint32_t)L_540) >= ((uint32_t)2))))
		{
			goto IL_04c6;
		}
	}
	{
		uint32_t L_541 = V_2;
		uint32_t L_542 = __this->____numFastBytes_25;
		if ((!(((uint32_t)L_541) > ((uint32_t)L_542))))
		{
			goto IL_099f;
		}
	}
	{
		uint32_t L_543 = __this->____numFastBytes_25;
		V_2 = L_543;
	}

IL_099f:
	{
		bool L_544 = V_31;
		if (L_544)
		{
			goto IL_0aad;
		}
	}
	{
		uint8_t L_545 = V_6;
		uint8_t L_546 = V_5;
		if ((((int32_t)L_545) == ((int32_t)L_546)))
		{
			goto IL_0aad;
		}
	}
	{
		uint32_t L_547 = V_32;
		uint32_t L_548 = __this->____numFastBytes_25;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_549;
		L_549 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(((int32_t)il2cpp_codegen_subtract((int32_t)L_547, 1)), L_548, NULL);
		V_37 = L_549;
		RuntimeObject* L_550 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_551 = __this->___reps_50;
		NullCheck(L_551);
		int32_t L_552 = 0;
		uint32_t L_553 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_552));
		uint32_t L_554 = V_37;
		NullCheck(L_550);
		uint32_t L_555;
		L_555 = InterfaceFuncInvoker3< uint32_t, int32_t, uint32_t, uint32_t >::Invoke(4, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_550, 0, L_553, L_554);
		V_38 = L_555;
		uint32_t L_556 = V_38;
		if ((!(((uint32_t)L_556) >= ((uint32_t)2))))
		{
			goto IL_0aad;
		}
	}
	{
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_557 = V_28;
		V_39 = L_557;
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_39), NULL);
		uint32_t L_558 = ___0_position;
		uint32_t L_559 = __this->____posStateMask_38;
		V_40 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_558, 1))&(int32_t)L_559));
		uint32_t L_560 = V_29;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_561 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_562 = V_39;
		uint32_t L_563 = L_562.___Index_0;
		uint32_t L_564 = V_40;
		NullCheck(L_561);
		uint32_t L_565;
		L_565 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_561)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_563<<4)), (int32_t)L_564))))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_566 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_567 = V_39;
		uint32_t L_568 = L_567.___Index_0;
		NullCheck(L_566);
		uint32_t L_569;
		L_569 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_566)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_568))), NULL);
		V_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_560, (int32_t)L_565)), (int32_t)L_569));
		uint32_t L_570 = V_13;
		uint32_t L_571 = V_38;
		V_42 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_570, 1)), (int32_t)L_571));
		goto IL_0a53;
	}

IL_0a3b:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_572 = __this->____optimum_9;
		uint32_t L_573 = V_10;
		int32_t L_574 = ((int32_t)il2cpp_codegen_add((int32_t)L_573, 1));
		V_10 = L_574;
		NullCheck(L_572);
		int32_t L_575 = L_574;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_576 = (L_572)->GetAt(static_cast<il2cpp_array_size_t>(L_575));
		NullCheck(L_576);
		L_576->___Price_5 = ((int32_t)268435455);
	}

IL_0a53:
	{
		uint32_t L_577 = V_10;
		uint32_t L_578 = V_42;
		if ((!(((uint32_t)L_577) >= ((uint32_t)L_578))))
		{
			goto IL_0a3b;
		}
	}
	{
		uint32_t L_579 = V_41;
		uint32_t L_580 = V_38;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_581 = V_39;
		uint32_t L_582 = V_40;
		uint32_t L_583;
		L_583 = Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1(__this, 0, L_580, L_581, L_582, NULL);
		V_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_579, (int32_t)L_583));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_584 = __this->____optimum_9;
		uint32_t L_585 = V_42;
		NullCheck(L_584);
		uint32_t L_586 = L_585;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_587 = (L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_44 = L_587;
		uint32_t L_588 = V_43;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_589 = V_44;
		NullCheck(L_589);
		uint32_t L_590 = L_589->___Price_5;
		if ((!(((uint32_t)L_588) < ((uint32_t)L_590))))
		{
			goto IL_0aad;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_591 = V_44;
		uint32_t L_592 = V_43;
		NullCheck(L_591);
		L_591->___Price_5 = L_592;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_593 = V_44;
		uint32_t L_594 = V_13;
		NullCheck(L_593);
		L_593->___PosPrev_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_594, 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_595 = V_44;
		NullCheck(L_595);
		L_595->___BackPrev_7 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_596 = V_44;
		NullCheck(L_596);
		L_596->___Prev1IsChar_1 = (bool)1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_597 = V_44;
		NullCheck(L_597);
		L_597->___Prev2_2 = (bool)0;
	}

IL_0aad:
	{
		V_33 = 2;
		V_45 = 0;
		goto IL_0d2b;
	}

IL_0ab8:
	{
		RuntimeObject* L_598 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_599 = __this->___reps_50;
		uint32_t L_600 = V_45;
		NullCheck(L_599);
		uint32_t L_601 = L_600;
		uint32_t L_602 = (L_599)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		uint32_t L_603 = V_2;
		NullCheck(L_598);
		uint32_t L_604;
		L_604 = InterfaceFuncInvoker3< uint32_t, int32_t, uint32_t, uint32_t >::Invoke(4, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_598, (-1), L_602, L_603);
		V_46 = L_604;
		uint32_t L_605 = V_46;
		if ((!(((uint32_t)L_605) >= ((uint32_t)2))))
		{
			goto IL_0d25;
		}
	}
	{
		uint32_t L_606 = V_46;
		V_47 = L_606;
		goto IL_0af6;
	}

IL_0ade:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_607 = __this->____optimum_9;
		uint32_t L_608 = V_10;
		int32_t L_609 = ((int32_t)il2cpp_codegen_add((int32_t)L_608, 1));
		V_10 = L_609;
		NullCheck(L_607);
		int32_t L_610 = L_609;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_611 = (L_607)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		NullCheck(L_611);
		L_611->___Price_5 = ((int32_t)268435455);
	}

IL_0af6:
	{
		uint32_t L_612 = V_10;
		uint32_t L_613 = V_13;
		uint32_t L_614 = V_46;
		if ((!(((uint32_t)L_612) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_613, (int32_t)L_614))))))
		{
			goto IL_0ade;
		}
	}
	{
		uint32_t L_615 = V_9;
		uint32_t L_616 = V_45;
		uint32_t L_617 = V_46;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_618 = V_28;
		uint32_t L_619 = V_7;
		uint32_t L_620;
		L_620 = Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1(__this, L_616, L_617, L_618, L_619, NULL);
		V_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_615, (int32_t)L_620));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_621 = __this->____optimum_9;
		uint32_t L_622 = V_13;
		uint32_t L_623 = V_46;
		NullCheck(L_621);
		int32_t L_624 = ((int32_t)il2cpp_codegen_add((int32_t)L_622, (int32_t)L_623));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_625 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		V_49 = L_625;
		uint32_t L_626 = V_48;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_627 = V_49;
		NullCheck(L_627);
		uint32_t L_628 = L_627->___Price_5;
		if ((!(((uint32_t)L_626) < ((uint32_t)L_628))))
		{
			goto IL_0b4e;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_629 = V_49;
		uint32_t L_630 = V_48;
		NullCheck(L_629);
		L_629->___Price_5 = L_630;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_631 = V_49;
		uint32_t L_632 = V_13;
		NullCheck(L_631);
		L_631->___PosPrev_6 = L_632;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_633 = V_49;
		uint32_t L_634 = V_45;
		NullCheck(L_633);
		L_633->___BackPrev_7 = L_634;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_635 = V_49;
		NullCheck(L_635);
		L_635->___Prev1IsChar_1 = (bool)0;
	}

IL_0b4e:
	{
		uint32_t L_636 = V_46;
		int32_t L_637 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_636, 1));
		V_46 = L_637;
		if ((!(((uint32_t)L_637) < ((uint32_t)2))))
		{
			goto IL_0af6;
		}
	}
	{
		uint32_t L_638 = V_47;
		V_46 = L_638;
		uint32_t L_639 = V_45;
		if (L_639)
		{
			goto IL_0b66;
		}
	}
	{
		uint32_t L_640 = V_46;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_640, 1));
	}

IL_0b66:
	{
		uint32_t L_641 = V_46;
		uint32_t L_642 = V_32;
		if ((!(((uint32_t)L_641) < ((uint32_t)L_642))))
		{
			goto IL_0d25;
		}
	}
	{
		uint32_t L_643 = V_32;
		uint32_t L_644 = V_46;
		uint32_t L_645 = __this->____numFastBytes_25;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_646;
		L_646 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_643, 1)), (int32_t)L_644)), L_645, NULL);
		V_50 = L_646;
		RuntimeObject* L_647 = __this->____matchFinder_10;
		uint32_t L_648 = V_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_649 = __this->___reps_50;
		uint32_t L_650 = V_45;
		NullCheck(L_649);
		uint32_t L_651 = L_650;
		uint32_t L_652 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		uint32_t L_653 = V_50;
		NullCheck(L_647);
		uint32_t L_654;
		L_654 = InterfaceFuncInvoker3< uint32_t, int32_t, uint32_t, uint32_t >::Invoke(4, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_647, L_648, L_652, L_653);
		V_51 = L_654;
		uint32_t L_655 = V_51;
		if ((!(((uint32_t)L_655) >= ((uint32_t)2))))
		{
			goto IL_0d25;
		}
	}
	{
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_656 = V_28;
		V_52 = L_656;
		State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A((&V_52), NULL);
		uint32_t L_657 = ___0_position;
		uint32_t L_658 = V_46;
		uint32_t L_659 = __this->____posStateMask_38;
		V_53 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_657, (int32_t)L_658))&(int32_t)L_659));
		uint32_t L_660 = V_9;
		uint32_t L_661 = V_45;
		uint32_t L_662 = V_46;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_663 = V_28;
		uint32_t L_664 = V_7;
		uint32_t L_665;
		L_665 = Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1(__this, L_661, L_662, L_663, L_664, NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_666 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_667 = V_52;
		uint32_t L_668 = L_667.___Index_0;
		uint32_t L_669 = V_53;
		NullCheck(L_666);
		uint32_t L_670;
		L_670 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_666)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_668<<4)), (int32_t)L_669))))), NULL);
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_671 = __this->____literalEncoder_23;
		uint32_t L_672 = ___0_position;
		uint32_t L_673 = V_46;
		RuntimeObject* L_674 = __this->____matchFinder_10;
		uint32_t L_675 = V_46;
		NullCheck(L_674);
		uint8_t L_676;
		L_676 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_674, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_675, 1)), 1)));
		NullCheck(L_671);
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_677;
		L_677 = LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622(L_671, ((int32_t)il2cpp_codegen_add((int32_t)L_672, (int32_t)L_673)), L_676, NULL);
		V_16 = L_677;
		RuntimeObject* L_678 = __this->____matchFinder_10;
		uint32_t L_679 = V_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_680 = __this->___reps_50;
		uint32_t L_681 = V_45;
		NullCheck(L_680);
		uint32_t L_682 = L_681;
		uint32_t L_683 = (L_680)->GetAt(static_cast<il2cpp_array_size_t>(L_682));
		NullCheck(L_678);
		uint8_t L_684;
		L_684 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_678, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_679, 1)), ((int32_t)il2cpp_codegen_add((int32_t)L_683, 1)))));
		RuntimeObject* L_685 = __this->____matchFinder_10;
		uint32_t L_686 = V_46;
		NullCheck(L_685);
		uint8_t L_687;
		L_687 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_685, ((int32_t)il2cpp_codegen_subtract((int32_t)L_686, 1)));
		uint32_t L_688;
		L_688 = Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE((&V_16), (bool)1, L_684, L_687, NULL);
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_52), NULL);
		uint32_t L_689 = ___0_position;
		uint32_t L_690 = V_46;
		uint32_t L_691 = __this->____posStateMask_38;
		V_53 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_689, (int32_t)L_690)), 1))&(int32_t)L_691));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_692 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_693 = V_52;
		uint32_t L_694 = L_693.___Index_0;
		uint32_t L_695 = V_53;
		NullCheck(L_692);
		uint32_t L_696;
		L_696 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_692)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_694<<4)), (int32_t)L_695))))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_697 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_698 = V_52;
		uint32_t L_699 = L_698.___Index_0;
		NullCheck(L_697);
		uint32_t L_700;
		L_700 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_697)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_699))), NULL);
		V_54 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_660, (int32_t)L_665)), (int32_t)L_670)), (int32_t)L_688)), (int32_t)L_696)), (int32_t)L_700));
		uint32_t L_701 = V_46;
		uint32_t L_702 = V_51;
		V_55 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_701, 1)), (int32_t)L_702));
		goto IL_0cb0;
	}

IL_0c98:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_703 = __this->____optimum_9;
		uint32_t L_704 = V_10;
		int32_t L_705 = ((int32_t)il2cpp_codegen_add((int32_t)L_704, 1));
		V_10 = L_705;
		NullCheck(L_703);
		int32_t L_706 = L_705;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_707 = (L_703)->GetAt(static_cast<il2cpp_array_size_t>(L_706));
		NullCheck(L_707);
		L_707->___Price_5 = ((int32_t)268435455);
	}

IL_0cb0:
	{
		uint32_t L_708 = V_10;
		uint32_t L_709 = V_13;
		uint32_t L_710 = V_55;
		if ((!(((uint32_t)L_708) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_709, (int32_t)L_710))))))
		{
			goto IL_0c98;
		}
	}
	{
		uint32_t L_711 = V_54;
		uint32_t L_712 = V_51;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_713 = V_52;
		uint32_t L_714 = V_53;
		uint32_t L_715;
		L_715 = Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1(__this, 0, L_712, L_713, L_714, NULL);
		V_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_711, (int32_t)L_715));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_716 = __this->____optimum_9;
		uint32_t L_717 = V_13;
		uint32_t L_718 = V_55;
		NullCheck(L_716);
		int32_t L_719 = ((int32_t)il2cpp_codegen_add((int32_t)L_717, (int32_t)L_718));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_720 = (L_716)->GetAt(static_cast<il2cpp_array_size_t>(L_719));
		V_57 = L_720;
		uint32_t L_721 = V_56;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_722 = V_57;
		NullCheck(L_722);
		uint32_t L_723 = L_722->___Price_5;
		if ((!(((uint32_t)L_721) < ((uint32_t)L_723))))
		{
			goto IL_0d25;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_724 = V_57;
		uint32_t L_725 = V_56;
		NullCheck(L_724);
		L_724->___Price_5 = L_725;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_726 = V_57;
		uint32_t L_727 = V_13;
		uint32_t L_728 = V_46;
		NullCheck(L_726);
		L_726->___PosPrev_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_727, (int32_t)L_728)), 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_729 = V_57;
		NullCheck(L_729);
		L_729->___BackPrev_7 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_730 = V_57;
		NullCheck(L_730);
		L_730->___Prev1IsChar_1 = (bool)1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_731 = V_57;
		NullCheck(L_731);
		L_731->___Prev2_2 = (bool)1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_732 = V_57;
		uint32_t L_733 = V_13;
		NullCheck(L_732);
		L_732->___PosPrev2_3 = L_733;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_734 = V_57;
		uint32_t L_735 = V_45;
		NullCheck(L_734);
		L_734->___BackPrev2_4 = L_735;
	}

IL_0d25:
	{
		uint32_t L_736 = V_45;
		V_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_736, 1));
	}

IL_0d2b:
	{
		uint32_t L_737 = V_45;
		if ((!(((uint32_t)L_737) >= ((uint32_t)4))))
		{
			goto IL_0ab8;
		}
	}
	{
		uint32_t L_738 = V_26;
		uint32_t L_739 = V_2;
		if ((!(((uint32_t)L_738) > ((uint32_t)L_739))))
		{
			goto IL_0d5d;
		}
	}
	{
		uint32_t L_740 = V_2;
		V_26 = L_740;
		V_1 = 0;
		goto IL_0d43;
	}

IL_0d3f:
	{
		uint32_t L_741 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_741, 2));
	}

IL_0d43:
	{
		uint32_t L_742 = V_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_743 = __this->____matchDistances_24;
		uint32_t L_744 = V_1;
		NullCheck(L_743);
		uint32_t L_745 = L_744;
		uint32_t L_746 = (L_743)->GetAt(static_cast<il2cpp_array_size_t>(L_745));
		if ((!(((uint32_t)L_742) <= ((uint32_t)L_746))))
		{
			goto IL_0d3f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_747 = __this->____matchDistances_24;
		uint32_t L_748 = V_1;
		uint32_t L_749 = V_26;
		NullCheck(L_747);
		(L_747)->SetAt(static_cast<il2cpp_array_size_t>(L_748), (uint32_t)L_749);
		uint32_t L_750 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_750, 2));
	}

IL_0d5d:
	{
		uint32_t L_751 = V_26;
		uint32_t L_752 = V_33;
		if ((!(((uint32_t)L_751) >= ((uint32_t)L_752))))
		{
			goto IL_04c6;
		}
	}
	{
		uint32_t L_753 = V_8;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_754 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_755 = V_28;
		uint32_t L_756 = L_755.___Index_0;
		NullCheck(L_754);
		uint32_t L_757;
		L_757 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_754)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_756))), NULL);
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_753, (int32_t)L_757));
		goto IL_0d9c;
	}

IL_0d84:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_758 = __this->____optimum_9;
		uint32_t L_759 = V_10;
		int32_t L_760 = ((int32_t)il2cpp_codegen_add((int32_t)L_759, 1));
		V_10 = L_760;
		NullCheck(L_758);
		int32_t L_761 = L_760;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_762 = (L_758)->GetAt(static_cast<il2cpp_array_size_t>(L_761));
		NullCheck(L_762);
		L_762->___Price_5 = ((int32_t)268435455);
	}

IL_0d9c:
	{
		uint32_t L_763 = V_10;
		uint32_t L_764 = V_13;
		uint32_t L_765 = V_26;
		if ((!(((uint32_t)L_763) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_764, (int32_t)L_765))))))
		{
			goto IL_0d84;
		}
	}
	{
		V_58 = 0;
		goto IL_0db0;
	}

IL_0daa:
	{
		uint32_t L_766 = V_58;
		V_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_766, 2));
	}

IL_0db0:
	{
		uint32_t L_767 = V_33;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_768 = __this->____matchDistances_24;
		uint32_t L_769 = V_58;
		NullCheck(L_768);
		uint32_t L_770 = L_769;
		uint32_t L_771 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_770));
		if ((!(((uint32_t)L_767) <= ((uint32_t)L_771))))
		{
			goto IL_0daa;
		}
	}
	{
		uint32_t L_772 = V_33;
		V_59 = L_772;
	}

IL_0dc1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_773 = __this->____matchDistances_24;
		uint32_t L_774 = V_58;
		NullCheck(L_773);
		int32_t L_775 = ((int32_t)il2cpp_codegen_add((int32_t)L_774, 1));
		uint32_t L_776 = (L_773)->GetAt(static_cast<il2cpp_array_size_t>(L_775));
		V_60 = L_776;
		uint32_t L_777 = V_12;
		uint32_t L_778 = V_60;
		uint32_t L_779 = V_59;
		uint32_t L_780 = V_7;
		uint32_t L_781;
		L_781 = Encoder_GetPosLenPrice_mAB28816EC47676E646999B96E90F728EEDFD81B6(__this, L_778, L_779, L_780, NULL);
		V_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_777, (int32_t)L_781));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_782 = __this->____optimum_9;
		uint32_t L_783 = V_13;
		uint32_t L_784 = V_59;
		NullCheck(L_782);
		int32_t L_785 = ((int32_t)il2cpp_codegen_add((int32_t)L_783, (int32_t)L_784));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_786 = (L_782)->GetAt(static_cast<il2cpp_array_size_t>(L_785));
		V_62 = L_786;
		uint32_t L_787 = V_61;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_788 = V_62;
		NullCheck(L_788);
		uint32_t L_789 = L_788->___Price_5;
		if ((!(((uint32_t)L_787) < ((uint32_t)L_789))))
		{
			goto IL_0e1d;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_790 = V_62;
		uint32_t L_791 = V_61;
		NullCheck(L_790);
		L_790->___Price_5 = L_791;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_792 = V_62;
		uint32_t L_793 = V_13;
		NullCheck(L_792);
		L_792->___PosPrev_6 = L_793;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_794 = V_62;
		uint32_t L_795 = V_60;
		NullCheck(L_794);
		L_794->___BackPrev_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_795, 4));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_796 = V_62;
		NullCheck(L_796);
		L_796->___Prev1IsChar_1 = (bool)0;
	}

IL_0e1d:
	{
		uint32_t L_797 = V_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_798 = __this->____matchDistances_24;
		uint32_t L_799 = V_58;
		NullCheck(L_798);
		uint32_t L_800 = L_799;
		uint32_t L_801 = (L_798)->GetAt(static_cast<il2cpp_array_size_t>(L_800));
		if ((!(((uint32_t)L_797) == ((uint32_t)L_801))))
		{
			goto IL_0fdf;
		}
	}
	{
		uint32_t L_802 = V_59;
		uint32_t L_803 = V_32;
		if ((!(((uint32_t)L_802) < ((uint32_t)L_803))))
		{
			goto IL_0fd1;
		}
	}
	{
		uint32_t L_804 = V_32;
		uint32_t L_805 = V_59;
		uint32_t L_806 = __this->____numFastBytes_25;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_807;
		L_807 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_804, 1)), (int32_t)L_805)), L_806, NULL);
		V_63 = L_807;
		RuntimeObject* L_808 = __this->____matchFinder_10;
		uint32_t L_809 = V_59;
		uint32_t L_810 = V_60;
		uint32_t L_811 = V_63;
		NullCheck(L_808);
		uint32_t L_812;
		L_812 = InterfaceFuncInvoker3< uint32_t, int32_t, uint32_t, uint32_t >::Invoke(4, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_808, L_809, L_810, L_811);
		V_64 = L_812;
		uint32_t L_813 = V_64;
		if ((!(((uint32_t)L_813) >= ((uint32_t)2))))
		{
			goto IL_0fd1;
		}
	}
	{
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_814 = V_28;
		V_65 = L_814;
		State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56((&V_65), NULL);
		uint32_t L_815 = ___0_position;
		uint32_t L_816 = V_59;
		uint32_t L_817 = __this->____posStateMask_38;
		V_66 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_815, (int32_t)L_816))&(int32_t)L_817));
		uint32_t L_818 = V_61;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_819 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_820 = V_65;
		uint32_t L_821 = L_820.___Index_0;
		uint32_t L_822 = V_66;
		NullCheck(L_819);
		uint32_t L_823;
		L_823 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(((L_819)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_821<<4)), (int32_t)L_822))))), NULL);
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_824 = __this->____literalEncoder_23;
		uint32_t L_825 = ___0_position;
		uint32_t L_826 = V_59;
		RuntimeObject* L_827 = __this->____matchFinder_10;
		uint32_t L_828 = V_59;
		NullCheck(L_827);
		uint8_t L_829;
		L_829 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_827, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_828, 1)), 1)));
		NullCheck(L_824);
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_830;
		L_830 = LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622(L_824, ((int32_t)il2cpp_codegen_add((int32_t)L_825, (int32_t)L_826)), L_829, NULL);
		V_16 = L_830;
		RuntimeObject* L_831 = __this->____matchFinder_10;
		uint32_t L_832 = V_59;
		uint32_t L_833 = V_60;
		NullCheck(L_831);
		uint8_t L_834;
		L_834 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_831, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_832, ((int32_t)il2cpp_codegen_add((int32_t)L_833, 1)))), 1)));
		RuntimeObject* L_835 = __this->____matchFinder_10;
		uint32_t L_836 = V_59;
		NullCheck(L_835);
		uint8_t L_837;
		L_837 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_835, ((int32_t)il2cpp_codegen_subtract((int32_t)L_836, 1)));
		uint32_t L_838;
		L_838 = Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE((&V_16), (bool)1, L_834, L_837, NULL);
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C((&V_65), NULL);
		uint32_t L_839 = ___0_position;
		uint32_t L_840 = V_59;
		uint32_t L_841 = __this->____posStateMask_38;
		V_66 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_839, (int32_t)L_840)), 1))&(int32_t)L_841));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_842 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_843 = V_65;
		uint32_t L_844 = L_843.___Index_0;
		uint32_t L_845 = V_66;
		NullCheck(L_842);
		uint32_t L_846;
		L_846 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_842)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_844<<4)), (int32_t)L_845))))), NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_847 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_848 = V_65;
		uint32_t L_849 = L_848.___Index_0;
		NullCheck(L_847);
		uint32_t L_850;
		L_850 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(((L_847)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_849))), NULL);
		V_67 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_818, (int32_t)L_823)), (int32_t)L_838)), (int32_t)L_846)), (int32_t)L_850));
		uint32_t L_851 = V_59;
		uint32_t L_852 = V_64;
		V_68 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_851, 1)), (int32_t)L_852));
		goto IL_0f5a;
	}

IL_0f42:
	{
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_853 = __this->____optimum_9;
		uint32_t L_854 = V_10;
		int32_t L_855 = ((int32_t)il2cpp_codegen_add((int32_t)L_854, 1));
		V_10 = L_855;
		NullCheck(L_853);
		int32_t L_856 = L_855;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_857 = (L_853)->GetAt(static_cast<il2cpp_array_size_t>(L_856));
		NullCheck(L_857);
		L_857->___Price_5 = ((int32_t)268435455);
	}

IL_0f5a:
	{
		uint32_t L_858 = V_10;
		uint32_t L_859 = V_13;
		uint32_t L_860 = V_68;
		if ((!(((uint32_t)L_858) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_859, (int32_t)L_860))))))
		{
			goto IL_0f42;
		}
	}
	{
		uint32_t L_861 = V_67;
		uint32_t L_862 = V_64;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3 L_863 = V_65;
		uint32_t L_864 = V_66;
		uint32_t L_865;
		L_865 = Encoder_GetRepPrice_mF88A30E73CECFF85AEE8B76EAAA1C6C98A1238E1(__this, 0, L_862, L_863, L_864, NULL);
		V_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_861, (int32_t)L_865));
		OptimalU5BU5D_tB72C6968C0CD8B6D69F783A7D26FE3552B02814C* L_866 = __this->____optimum_9;
		uint32_t L_867 = V_13;
		uint32_t L_868 = V_68;
		NullCheck(L_866);
		int32_t L_869 = ((int32_t)il2cpp_codegen_add((int32_t)L_867, (int32_t)L_868));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_870 = (L_866)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		V_62 = L_870;
		uint32_t L_871 = V_61;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_872 = V_62;
		NullCheck(L_872);
		uint32_t L_873 = L_872->___Price_5;
		if ((!(((uint32_t)L_871) < ((uint32_t)L_873))))
		{
			goto IL_0fd1;
		}
	}
	{
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_874 = V_62;
		uint32_t L_875 = V_61;
		NullCheck(L_874);
		L_874->___Price_5 = L_875;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_876 = V_62;
		uint32_t L_877 = V_13;
		uint32_t L_878 = V_59;
		NullCheck(L_876);
		L_876->___PosPrev_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_877, (int32_t)L_878)), 1));
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_879 = V_62;
		NullCheck(L_879);
		L_879->___BackPrev_7 = 0;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_880 = V_62;
		NullCheck(L_880);
		L_880->___Prev1IsChar_1 = (bool)1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_881 = V_62;
		NullCheck(L_881);
		L_881->___Prev2_2 = (bool)1;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_882 = V_62;
		uint32_t L_883 = V_13;
		NullCheck(L_882);
		L_882->___PosPrev2_3 = L_883;
		Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* L_884 = V_62;
		uint32_t L_885 = V_60;
		NullCheck(L_884);
		L_884->___BackPrev2_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_885, 4));
	}

IL_0fd1:
	{
		uint32_t L_886 = V_58;
		V_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_886, 2));
		uint32_t L_887 = V_58;
		uint32_t L_888 = V_1;
		if ((((int32_t)L_887) == ((int32_t)L_888)))
		{
			goto IL_04c6;
		}
	}

IL_0fdf:
	{
		uint32_t L_889 = V_59;
		V_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_889, 1));
		goto IL_0dc1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Encoder_ChangePair_mFFEBF0CE01BCCE2D6E67C19A14BFEC44CA0E5166 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_smallDist, uint32_t ___1_bigDist, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_smallDist;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)33554432)))))
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_1 = ___1_bigDist;
		uint32_t L_2 = ___0_smallDist;
		return (bool)((((int32_t)((!(((uint32_t)L_1) >= ((uint32_t)((int32_t)((int32_t)L_2<<7)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_WriteEndMarker_m7AA8EE8954D6C6D703102CA255C69A25B02819D1 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_posState, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		bool L_0 = __this->____writeEndMark_48;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_1 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_2 = (&__this->____state_2);
		uint32_t L_3 = L_2->___Index_0;
		uint32_t L_4 = ___0_posState;
		NullCheck(L_1);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_5 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<4)), (int32_t)L_4))))), L_5, 1, NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_6 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_7 = (&__this->____state_2);
		uint32_t L_8 = L_7->___Index_0;
		NullCheck(L_6);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_9 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), L_9, 0, NULL);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_10 = (&__this->____state_2);
		State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56(L_10, NULL);
		V_0 = 2;
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_11 = __this->____lenEncoder_21;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_12 = __this->____rangeEncoder_11;
		uint32_t L_13 = V_0;
		uint32_t L_14 = ___0_posState;
		NullCheck(L_11);
		LenPriceTableEncoder_Encode_m2DB22DA6437A1CF035BFAB73FD64C8EEA74E76E4(L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 2)), L_14, NULL);
		V_1 = ((int32_t)63);
		uint32_t L_15 = V_0;
		uint32_t L_16;
		L_16 = Base_GetLenToPosState_m405EAAFD348B53068CA37D9A01309E42ECEEBEA1(L_15, NULL);
		V_2 = L_16;
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_17 = __this->____posSlotEncoder_18;
		uint32_t L_18 = V_2;
		NullCheck(L_17);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_19 = __this->____rangeEncoder_11;
		uint32_t L_20 = V_1;
		BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), L_19, L_20, NULL);
		V_3 = ((int32_t)30);
		int32_t L_21 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_21&((int32_t)31))))), 1));
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_22 = __this->____rangeEncoder_11;
		uint32_t L_23 = V_4;
		int32_t L_24 = V_3;
		NullCheck(L_22);
		Encoder_EncodeDirectBits_m5A00EB88F4197923767225600095D785CC6A7993(L_22, ((int32_t)((uint32_t)L_23>>4)), ((int32_t)il2cpp_codegen_subtract(L_24, 4)), NULL);
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_25 = (&__this->____posAlignEncoder_20);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_26 = __this->____rangeEncoder_11;
		uint32_t L_27 = V_4;
		BitTreeEncoder_ReverseEncode_mE4356D2C59949D148B7F1D8CBF16BF7673D8CC62(L_25, L_26, ((int32_t)((int32_t)L_27&((int32_t)15))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Flush_m647BC9F67372D6819554D665D7B7AA351312BDF0 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_nowPos, const RuntimeMethod* method) 
{
	{
		Encoder_ReleaseMFStream_m37C069AD917379A2B3F985CCB9D76E562BFC2F45(__this, NULL);
		uint32_t L_0 = ___0_nowPos;
		uint32_t L_1 = __this->____posStateMask_38;
		Encoder_WriteEndMarker_m7AA8EE8954D6C6D703102CA255C69A25B02819D1(__this, ((int32_t)((int32_t)L_0&(int32_t)L_1)), NULL);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_2 = __this->____rangeEncoder_11;
		NullCheck(L_2);
		Encoder_FlushData_mFFF2311A72CC8DDBD3D7945948B5E4545AF46EC9(L_2, NULL);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_3 = __this->____rangeEncoder_11;
		NullCheck(L_3);
		Encoder_FlushStream_m2EFEEDCEE779C7C36A08E214FA81C486592B1AB4(L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_CodeOneBlock_m72E24B2A392E5E9683C9BA662B236E1F11C55C25 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, int64_t* ___0_inSize, int64_t* ___1_outSize, bool* ___2_finished, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 V_5;
	memset((&V_5), 0, sizeof(V_5));
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 V_11;
	memset((&V_11), 0, sizeof(V_11));
	uint8_t V_12 = 0x0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	{
		int64_t* L_0 = ___0_inSize;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
		int64_t* L_1 = ___1_outSize;
		*((int64_t*)L_1) = (int64_t)((int64_t)0);
		bool* L_2 = ___2_finished;
		*((int8_t*)L_2) = (int8_t)1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____inStream_46;
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_4 = __this->____matchFinder_10;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->____inStream_46;
		NullCheck(L_4);
		InterfaceActionInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(0, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____matchFinder_10;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_6);
		__this->____needReleaseMFStream_49 = (bool)1;
		__this->____inStream_46 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inStream_46), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		uint32_t L_7 = __this->____trainSize_57;
		if ((!(((uint32_t)L_7) > ((uint32_t)0))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_8 = __this->____matchFinder_10;
		uint32_t L_9 = __this->____trainSize_57;
		NullCheck(L_8);
		InterfaceActionInvoker1< uint32_t >::Invoke(2, IMatchFinder_t2CAE52F9BD9F3487D963374F6CC1DC6CB809A003_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0057:
	{
		bool L_10 = __this->____finished_45;
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		return;
	}

IL_0060:
	{
		__this->____finished_45 = (bool)1;
		int64_t L_11 = __this->___nowPos64_44;
		V_0 = L_11;
		int64_t L_12 = __this->___nowPos64_44;
		if (L_12)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeObject* L_13 = __this->____matchFinder_10;
		NullCheck(L_13);
		uint32_t L_14;
		L_14 = InterfaceFuncInvoker0< uint32_t >::Invoke(5, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_13);
		if (L_14)
		{
			goto IL_0094;
		}
	}
	{
		int64_t L_15 = __this->___nowPos64_44;
		Encoder_Flush_m647BC9F67372D6819554D665D7B7AA351312BDF0(__this, ((int32_t)(uint32_t)L_15), NULL);
		return;
	}

IL_0094:
	{
		Encoder_ReadMatchDistances_mDAD957C5B4022AC56A6791B7F5BA06DEF1363464(__this, (&V_1), (&V_2), NULL);
		int64_t L_16 = __this->___nowPos64_44;
		uint32_t L_17 = __this->____posStateMask_38;
		V_3 = ((int32_t)(((int32_t)(uint32_t)L_16)&(int32_t)L_17));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_18 = __this->____isMatch_12;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_19 = (&__this->____state_2);
		uint32_t L_20 = L_19->___Index_0;
		uint32_t L_21 = V_3;
		NullCheck(L_18);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_22 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_20<<4)), (int32_t)L_21))))), L_22, 0, NULL);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_23 = (&__this->____state_2);
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C(L_23, NULL);
		RuntimeObject* L_24 = __this->____matchFinder_10;
		uint32_t L_25 = __this->____additionalOffset_28;
		NullCheck(L_24);
		uint8_t L_26;
		L_26 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_24, ((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_25)));
		V_4 = L_26;
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_27 = __this->____literalEncoder_23;
		int64_t L_28 = __this->___nowPos64_44;
		uint8_t L_29 = __this->____previousByte_3;
		NullCheck(L_27);
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_30;
		L_30 = LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622(L_27, ((int32_t)(uint32_t)L_28), L_29, NULL);
		V_5 = L_30;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_31 = __this->____rangeEncoder_11;
		uint8_t L_32 = V_4;
		Encoder2_Encode_m96AE6E6477087E95B1EE6C891C8F63706550895E((&V_5), L_31, L_32, NULL);
		uint8_t L_33 = V_4;
		__this->____previousByte_3 = L_33;
		uint32_t L_34 = __this->____additionalOffset_28;
		__this->____additionalOffset_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, 1));
		int64_t L_35 = __this->___nowPos64_44;
		__this->___nowPos64_44 = ((int64_t)il2cpp_codegen_add(L_35, ((int64_t)1)));
	}

IL_0141:
	{
		RuntimeObject* L_36 = __this->____matchFinder_10;
		NullCheck(L_36);
		uint32_t L_37;
		L_37 = InterfaceFuncInvoker0< uint32_t >::Invoke(5, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_36);
		if (L_37)
		{
			goto IL_015c;
		}
	}
	{
		int64_t L_38 = __this->___nowPos64_44;
		Encoder_Flush_m647BC9F67372D6819554D665D7B7AA351312BDF0(__this, ((int32_t)(uint32_t)L_38), NULL);
		return;
	}

IL_015c:
	{
		int64_t L_39 = __this->___nowPos64_44;
		uint32_t L_40;
		L_40 = Encoder_GetOptimum_m3FAD061E535C7AD55A24439A4568BAF4800F9017(__this, ((int32_t)(uint32_t)L_39), (&V_6), NULL);
		V_7 = L_40;
		int64_t L_41 = __this->___nowPos64_44;
		uint32_t L_42 = __this->____posStateMask_38;
		V_8 = ((int32_t)(((int32_t)(uint32_t)L_41)&(int32_t)L_42));
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_43 = (&__this->____state_2);
		uint32_t L_44 = L_43->___Index_0;
		uint32_t L_45 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_44<<4)), (int32_t)L_45));
		uint32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)1))))
		{
			goto IL_024e;
		}
	}
	{
		uint32_t L_47 = V_6;
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_024e;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_48 = __this->____isMatch_12;
		uint32_t L_49 = V_9;
		NullCheck(L_48);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_50 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), L_50, 0, NULL);
		RuntimeObject* L_51 = __this->____matchFinder_10;
		uint32_t L_52 = __this->____additionalOffset_28;
		NullCheck(L_51);
		uint8_t L_53;
		L_53 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_51, ((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_52)));
		V_10 = L_53;
		LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* L_54 = __this->____literalEncoder_23;
		int64_t L_55 = __this->___nowPos64_44;
		uint8_t L_56 = __this->____previousByte_3;
		NullCheck(L_54);
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_57;
		L_57 = LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622(L_54, ((int32_t)(uint32_t)L_55), L_56, NULL);
		V_11 = L_57;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_58 = (&__this->____state_2);
		bool L_59;
		L_59 = State_IsCharState_mD7D9B1FFD77B0A66FA896CB11D114A0309C123E7(L_58, NULL);
		if (L_59)
		{
			goto IL_0227;
		}
	}
	{
		RuntimeObject* L_60 = __this->____matchFinder_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = __this->____repDistances_4;
		NullCheck(L_61);
		int32_t L_62 = 0;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		uint32_t L_64 = __this->____additionalOffset_28;
		NullCheck(L_60);
		uint8_t L_65;
		L_65 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_60, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_63)), 1)), (int32_t)L_64)));
		V_12 = L_65;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_66 = __this->____rangeEncoder_11;
		uint8_t L_67 = V_12;
		uint8_t L_68 = V_10;
		Encoder2_EncodeMatched_mDC7071C609D71ADF7924A0B033BB9AA159644F7E((&V_11), L_66, L_67, L_68, NULL);
		goto IL_0236;
	}

IL_0227:
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_69 = __this->____rangeEncoder_11;
		uint8_t L_70 = V_10;
		Encoder2_Encode_m96AE6E6477087E95B1EE6C891C8F63706550895E((&V_11), L_69, L_70, NULL);
	}

IL_0236:
	{
		uint8_t L_71 = V_10;
		__this->____previousByte_3 = L_71;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_72 = (&__this->____state_2);
		State_UpdateChar_m30EA60067ECDDED9FCDD1B986D309FF38058434C(L_72, NULL);
		goto IL_0553;
	}

IL_024e:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_73 = __this->____isMatch_12;
		uint32_t L_74 = V_9;
		NullCheck(L_73);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_75 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), L_75, 1, NULL);
		uint32_t L_76 = V_6;
		if ((!(((uint32_t)L_76) < ((uint32_t)4))))
		{
			goto IL_0404;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_77 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_78 = (&__this->____state_2);
		uint32_t L_79 = L_78->___Index_0;
		NullCheck(L_77);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_80 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79))), L_80, 1, NULL);
		uint32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_02f8;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_82 = __this->____isRepG0_14;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_83 = (&__this->____state_2);
		uint32_t L_84 = L_83->___Index_0;
		NullCheck(L_82);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_85 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), L_85, 0, NULL);
		uint32_t L_86 = V_7;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_02da;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_87 = __this->____isRep0Long_17;
		uint32_t L_88 = V_9;
		NullCheck(L_87);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_89 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88))), L_89, 0, NULL);
		goto IL_038a;
	}

IL_02da:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_90 = __this->____isRep0Long_17;
		uint32_t L_91 = V_9;
		NullCheck(L_90);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_92 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91))), L_92, 1, NULL);
		goto IL_038a;
	}

IL_02f8:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_93 = __this->____isRepG0_14;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_94 = (&__this->____state_2);
		uint32_t L_95 = L_94->___Index_0;
		NullCheck(L_93);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_96 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95))), L_96, 1, NULL);
		uint32_t L_97 = V_6;
		if ((!(((uint32_t)L_97) == ((uint32_t)1))))
		{
			goto IL_0343;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_98 = __this->____isRepG1_15;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_99 = (&__this->____state_2);
		uint32_t L_100 = L_99->___Index_0;
		NullCheck(L_98);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_101 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_100))), L_101, 0, NULL);
		goto IL_038a;
	}

IL_0343:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_102 = __this->____isRepG1_15;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_103 = (&__this->____state_2);
		uint32_t L_104 = L_103->___Index_0;
		NullCheck(L_102);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_105 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104))), L_105, 1, NULL);
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_106 = __this->____isRepG2_16;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_107 = (&__this->____state_2);
		uint32_t L_108 = L_107->___Index_0;
		NullCheck(L_106);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_109 = __this->____rangeEncoder_11;
		uint32_t L_110 = V_6;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108))), L_109, ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, 2)), NULL);
	}

IL_038a:
	{
		uint32_t L_111 = V_7;
		if ((!(((uint32_t)L_111) == ((uint32_t)1))))
		{
			goto IL_039c;
		}
	}
	{
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_112 = (&__this->____state_2);
		State_UpdateShortRep_m6A98C093865912A15EB70D87C1379C98F384BAA2(L_112, NULL);
		goto IL_03be;
	}

IL_039c:
	{
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_113 = __this->____repMatchLenEncoder_22;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_114 = __this->____rangeEncoder_11;
		uint32_t L_115 = V_7;
		uint32_t L_116 = V_8;
		NullCheck(L_113);
		LenPriceTableEncoder_Encode_m2DB22DA6437A1CF035BFAB73FD64C8EEA74E76E4(L_113, L_114, ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, 2)), L_116, NULL);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_117 = (&__this->____state_2);
		State_UpdateRep_mBAFEF0C503FE10F105433195F082EDFE1A6DB45A(L_117, NULL);
	}

IL_03be:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = __this->____repDistances_4;
		uint32_t L_119 = V_6;
		NullCheck(L_118);
		uint32_t L_120 = L_119;
		uint32_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_13 = L_121;
		uint32_t L_122 = V_6;
		if (!L_122)
		{
			goto IL_0537;
		}
	}
	{
		uint32_t L_123 = V_6;
		V_14 = L_123;
		goto IL_03f0;
	}

IL_03d6:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = __this->____repDistances_4;
		uint32_t L_125 = V_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = __this->____repDistances_4;
		uint32_t L_127 = V_14;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, 1));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (uint32_t)L_129);
		uint32_t L_130 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_130, 1));
	}

IL_03f0:
	{
		uint32_t L_131 = V_14;
		if ((!(((uint32_t)L_131) < ((uint32_t)1))))
		{
			goto IL_03d6;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->____repDistances_4;
		uint32_t L_133 = V_13;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_133);
		goto IL_0537;
	}

IL_0404:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_134 = __this->____isRep_13;
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_135 = (&__this->____state_2);
		uint32_t L_136 = L_135->___Index_0;
		NullCheck(L_134);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_137 = __this->____rangeEncoder_11;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_136))), L_137, 0, NULL);
		State_t5B1620671AC8BFEA9640AF9EE5D261BADC65CCB3* L_138 = (&__this->____state_2);
		State_UpdateMatch_m7ED8885ECFF85C32AB0F7EB7AE75AE3B9B8A2D56(L_138, NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_139 = __this->____lenEncoder_21;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_140 = __this->____rangeEncoder_11;
		uint32_t L_141 = V_7;
		uint32_t L_142 = V_8;
		NullCheck(L_139);
		LenPriceTableEncoder_Encode_m2DB22DA6437A1CF035BFAB73FD64C8EEA74E76E4(L_139, L_140, ((int32_t)il2cpp_codegen_subtract((int32_t)L_141, 2)), L_142, NULL);
		uint32_t L_143 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_143, 4));
		uint32_t L_144 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		uint32_t L_145;
		L_145 = Encoder_GetPosSlot_mE8AD8311539B89B57249B785AF430BF299BF6E7F(L_144, NULL);
		V_15 = L_145;
		uint32_t L_146 = V_7;
		uint32_t L_147;
		L_147 = Base_GetLenToPosState_m405EAAFD348B53068CA37D9A01309E42ECEEBEA1(L_146, NULL);
		V_16 = L_147;
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_148 = __this->____posSlotEncoder_18;
		uint32_t L_149 = V_16;
		NullCheck(L_148);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_150 = __this->____rangeEncoder_11;
		uint32_t L_151 = V_15;
		BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431(((L_148)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_149))), L_150, L_151, NULL);
		uint32_t L_152 = V_15;
		if ((!(((uint32_t)L_152) >= ((uint32_t)4))))
		{
			goto IL_04f7;
		}
	}
	{
		uint32_t L_153 = V_15;
		V_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_153>>1)), 1));
		uint32_t L_154 = V_15;
		int32_t L_155 = V_18;
		V_19 = ((int32_t)(((int32_t)(2|((int32_t)((int32_t)L_154&1))))<<((int32_t)(L_155&((int32_t)31)))));
		uint32_t L_156 = V_6;
		uint32_t L_157 = V_19;
		V_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_157));
		uint32_t L_158 = V_15;
		if ((!(((uint32_t)L_158) < ((uint32_t)((int32_t)14)))))
		{
			goto IL_04c0;
		}
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_159 = __this->____posEncoders_19;
		uint32_t L_160 = V_19;
		uint32_t L_161 = V_15;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_162 = __this->____rangeEncoder_11;
		int32_t L_163 = V_18;
		uint32_t L_164 = V_20;
		BitTreeEncoder_ReverseEncode_mC4CEA0C89B1A990CFE1C26C857775ED2A8B65F1F(L_159, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_160, (int32_t)L_161)), 1)), L_162, L_163, L_164, NULL);
		goto IL_04f7;
	}

IL_04c0:
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_165 = __this->____rangeEncoder_11;
		uint32_t L_166 = V_20;
		int32_t L_167 = V_18;
		NullCheck(L_165);
		Encoder_EncodeDirectBits_m5A00EB88F4197923767225600095D785CC6A7993(L_165, ((int32_t)((uint32_t)L_166>>4)), ((int32_t)il2cpp_codegen_subtract(L_167, 4)), NULL);
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_168 = (&__this->____posAlignEncoder_20);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_169 = __this->____rangeEncoder_11;
		uint32_t L_170 = V_20;
		BitTreeEncoder_ReverseEncode_mE4356D2C59949D148B7F1D8CBF16BF7673D8CC62(L_168, L_169, ((int32_t)((int32_t)L_170&((int32_t)15))), NULL);
		uint32_t L_171 = __this->____alignPriceCount_35;
		__this->____alignPriceCount_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, 1));
	}

IL_04f7:
	{
		uint32_t L_172 = V_6;
		V_17 = L_172;
		V_21 = 3;
		goto IL_051a;
	}

IL_0500:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_173 = __this->____repDistances_4;
		uint32_t L_174 = V_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = __this->____repDistances_4;
		uint32_t L_176 = V_21;
		NullCheck(L_175);
		int32_t L_177 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_176, 1));
		uint32_t L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint32_t)L_178);
		uint32_t L_179 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_179, 1));
	}

IL_051a:
	{
		uint32_t L_180 = V_21;
		if ((!(((uint32_t)L_180) < ((uint32_t)1))))
		{
			goto IL_0500;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = __this->____repDistances_4;
		uint32_t L_182 = V_17;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_182);
		uint32_t L_183 = __this->____matchPriceCount_55;
		__this->____matchPriceCount_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_183, 1));
	}

IL_0537:
	{
		RuntimeObject* L_184 = __this->____matchFinder_10;
		uint32_t L_185 = V_7;
		uint32_t L_186 = __this->____additionalOffset_28;
		NullCheck(L_184);
		uint8_t L_187;
		L_187 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_184, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_185, 1)), (int32_t)L_186)));
		__this->____previousByte_3 = L_187;
	}

IL_0553:
	{
		uint32_t L_188 = __this->____additionalOffset_28;
		uint32_t L_189 = V_7;
		__this->____additionalOffset_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_188, (int32_t)L_189));
		int64_t L_190 = __this->___nowPos64_44;
		uint32_t L_191 = V_7;
		__this->___nowPos64_44 = ((int64_t)il2cpp_codegen_add(L_190, ((int64_t)(uint64_t)L_191)));
		uint32_t L_192 = __this->____additionalOffset_28;
		if (L_192)
		{
			goto IL_015c;
		}
	}
	{
		uint32_t L_193 = __this->____matchPriceCount_55;
		if ((!(((uint32_t)L_193) >= ((uint32_t)((int32_t)128)))))
		{
			goto IL_0590;
		}
	}
	{
		Encoder_FillDistancesPrices_mB25D0C1F0376BA137873FA03292A67C4E9145415(__this, NULL);
	}

IL_0590:
	{
		uint32_t L_194 = __this->____alignPriceCount_35;
		if ((!(((uint32_t)L_194) >= ((uint32_t)((int32_t)16)))))
		{
			goto IL_05a0;
		}
	}
	{
		Encoder_FillAlignPrices_mAC28343B8BB129FF00C602FB8303FD0B33B73DBE(__this, NULL);
	}

IL_05a0:
	{
		int64_t* L_195 = ___0_inSize;
		int64_t L_196 = __this->___nowPos64_44;
		*((int64_t*)L_195) = (int64_t)L_196;
		int64_t* L_197 = ___1_outSize;
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_198 = __this->____rangeEncoder_11;
		NullCheck(L_198);
		int64_t L_199;
		L_199 = Encoder_GetProcessedSizeAdd_mD596D887FA0C61792C437F4F5C5B5EB85B191100(L_198, NULL);
		*((int64_t*)L_197) = (int64_t)L_199;
		RuntimeObject* L_200 = __this->____matchFinder_10;
		NullCheck(L_200);
		uint32_t L_201;
		L_201 = InterfaceFuncInvoker0< uint32_t >::Invoke(5, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_200);
		if (L_201)
		{
			goto IL_05d0;
		}
	}
	{
		int64_t L_202 = __this->___nowPos64_44;
		Encoder_Flush_m647BC9F67372D6819554D665D7B7AA351312BDF0(__this, ((int32_t)(uint32_t)L_202), NULL);
		return;
	}

IL_05d0:
	{
		int64_t L_203 = __this->___nowPos64_44;
		int64_t L_204 = V_0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_203, L_204))) < ((int64_t)((int64_t)((int32_t)4096)))))
		{
			goto IL_015c;
		}
	}
	{
		__this->____finished_45 = (bool)0;
		bool* L_205 = ___2_finished;
		*((int8_t*)L_205) = (int8_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseMFStream_m37C069AD917379A2B3F985CCB9D76E562BFC2F45 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____matchFinder_10;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->____needReleaseMFStream_49;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = __this->____matchFinder_10;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2, IInWindowStream_t9E88A27DBAF0C09FAF935A96F2C44E09CE44D676_il2cpp_TypeInfo_var, L_2);
		__this->____needReleaseMFStream_49 = (bool)0;
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetOutStream_m76E4FEC5359AC16A83FDF900DB35D70B9935B8E2 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_outStream, const RuntimeMethod* method) 
{
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_0 = __this->____rangeEncoder_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_outStream;
		NullCheck(L_0);
		Encoder_SetStream_m0BD08DAED3E0144EBC55E6043391E94A30EC46E7_inline(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseOutStream_m94DC4D6443B34C90132E857A47537549771E629C (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_0 = __this->____rangeEncoder_11;
		NullCheck(L_0);
		Encoder_ReleaseStream_m704D1F044E24C84667C06A2FF52A8ABBC90CC6D5(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_ReleaseStreams_m3DE4A1D8A33C597F1ABD49230827A4AACD80C5F4 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	{
		Encoder_ReleaseMFStream_m37C069AD917379A2B3F985CCB9D76E562BFC2F45(__this, NULL);
		Encoder_ReleaseOutStream_m94DC4D6443B34C90132E857A47537549771E629C(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetStreams_mB4BE170DCF956468B89AD39F4A02777DA2111766 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, int64_t ___2_inSize, int64_t ___3_outSize, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_inStream;
		__this->____inStream_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inStream_46), (void*)L_0);
		__this->____finished_45 = (bool)0;
		Encoder_Create_mC3015D1D17C3A7D7299F6EAB6B24070C20BEB7D5(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___1_outStream;
		Encoder_SetOutStream_m76E4FEC5359AC16A83FDF900DB35D70B9935B8E2(__this, L_1, NULL);
		Encoder_Init_m813E0BC4C3FAFE43B32D2C77E04B2C69350B523C(__this, NULL);
		Encoder_FillDistancesPrices_mB25D0C1F0376BA137873FA03292A67C4E9145415(__this, NULL);
		Encoder_FillAlignPrices_mAC28343B8BB129FF00C602FB8303FD0B33B73DBE(__this, NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_2 = __this->____lenEncoder_21;
		uint32_t L_3 = __this->____numFastBytes_25;
		NullCheck(L_2);
		LenPriceTableEncoder_SetTableSize_m4B8DBF8FF347E563EDC756B7BE6DB5BADF943365_inline(L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)), 2)), NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_4 = __this->____lenEncoder_21;
		int32_t L_5 = __this->____posStateBits_37;
		NullCheck(L_4);
		LenPriceTableEncoder_UpdateTables_m6234C063DFDF1328BD11A7ABFD868C6CA59B543F(L_4, ((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_6 = __this->____repMatchLenEncoder_22;
		uint32_t L_7 = __this->____numFastBytes_25;
		NullCheck(L_6);
		LenPriceTableEncoder_SetTableSize_m4B8DBF8FF347E563EDC756B7BE6DB5BADF943365_inline(L_6, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_7, 1)), 2)), NULL);
		LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* L_8 = __this->____repMatchLenEncoder_22;
		int32_t L_9 = __this->____posStateBits_37;
		NullCheck(L_8);
		LenPriceTableEncoder_UpdateTables_m6234C063DFDF1328BD11A7ABFD868C6CA59B543F(L_8, ((int32_t)(1<<((int32_t)(L_9&((int32_t)31))))), NULL);
		__this->___nowPos64_44 = ((int64_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Code_m89F8DBBDBDDE531A2BA65F915B73E4FB50F1BF06 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_outStream, int64_t ___2_inSize, int64_t ___3_outSize, RuntimeObject* ___4_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeProgress_t9547F0366A00BB15AE518E2792B619130079FB21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	{
		__this->____needReleaseMFStream_49 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{
				Encoder_ReleaseStreams_m3DE4A1D8A33C597F1ABD49230827A4AACD80C5F4(__this, NULL);
				return;
			}
		});
		try
		{
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_inStream;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___1_outStream;
				int64_t L_2 = ___2_inSize;
				int64_t L_3 = ___3_outSize;
				Encoder_SetStreams_mB4BE170DCF956468B89AD39F4A02777DA2111766(__this, L_0, L_1, L_2, L_3, NULL);
			}

IL_0012_1:
			{
				Encoder_CodeOneBlock_m72E24B2A392E5E9683C9BA662B236E1F11C55C25(__this, (&V_0), (&V_1), (&V_2), NULL);
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0039;
			}

IL_0023_1:
			{
				RuntimeObject* L_5 = ___4_progress;
				if (!L_5)
				{
					goto IL_0012_1;
				}
			}
			{
				RuntimeObject* L_6 = ___4_progress;
				int64_t L_7 = V_0;
				int64_t L_8 = V_1;
				NullCheck(L_6);
				InterfaceActionInvoker2< int64_t, int64_t >::Invoke(0, ICodeProgress_t9547F0366A00BB15AE518E2792B619130079FB21_il2cpp_TypeInfo_var, L_6, L_7, L_8);
				goto IL_0012_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_WriteCoderProperties_m4BA5427B1EFF6797B9BEBFB9AFC3205106C19C1C (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_outStream, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___properties_53;
		int32_t L_1 = __this->____posStateBits_37;
		int32_t L_2 = __this->____numLiteralPosStateBits_39;
		int32_t L_3 = __this->____numLiteralContextBits_40;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 5)), L_2)), ((int32_t)9))), L_3))));
		V_0 = 0;
		goto IL_0048;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___properties_53;
		int32_t L_5 = V_0;
		uint32_t L_6 = __this->____dictionarySize_41;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_5))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_6>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_7))&((int32_t)31)))))&((int32_t)255)))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0048:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0026;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___0_outStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___properties_53;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_10, L_11, 0, 5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FillDistancesPrices_mB25D0C1F0376BA137873FA03292A67C4E9145415 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	{
		V_0 = 4;
		goto IL_003c;
	}

IL_0004:
	{
		uint32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Encoder_GetPosSlot_mE8AD8311539B89B57249B785AF430BF299BF6E7F(L_0, NULL);
		V_1 = L_1;
		uint32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_2>>1)), 1));
		uint32_t L_3 = V_1;
		int32_t L_4 = V_2;
		V_3 = ((int32_t)(((int32_t)(2|((int32_t)((int32_t)L_3&1))))<<((int32_t)(L_4&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___tempPrices_54;
		uint32_t L_6 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_7 = __this->____posEncoders_19;
		uint32_t L_8 = V_3;
		uint32_t L_9 = V_1;
		int32_t L_10 = V_2;
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_3;
		uint32_t L_13;
		L_13 = BitTreeEncoder_ReverseGetPrice_mBAC1F2630793D3885D96E02460D3B8EB19FB0EFF(L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), 1)), L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)L_13);
		uint32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}

IL_003c:
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) >= ((uint32_t)((int32_t)128)))))
		{
			goto IL_0004;
		}
	}
	{
		V_4 = 0;
		goto IL_012f;
	}

IL_004c:
	{
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_16 = __this->____posSlotEncoder_18;
		uint32_t L_17 = V_4;
		NullCheck(L_16);
		uint32_t L_18 = L_17;
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		uint32_t L_20 = V_4;
		V_7 = ((int32_t)((int32_t)L_20<<6));
		V_5 = 0;
		goto IL_0081;
	}

IL_0066:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->____posSlotPrices_32;
		uint32_t L_22 = V_7;
		uint32_t L_23 = V_5;
		uint32_t L_24 = V_5;
		uint32_t L_25;
		L_25 = BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986((&V_6), L_24, NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))), (uint32_t)L_25);
		uint32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
	}

IL_0081:
	{
		uint32_t L_27 = V_5;
		uint32_t L_28 = __this->____distTableSize_36;
		if ((!(((uint32_t)L_27) >= ((uint32_t)L_28))))
		{
			goto IL_0066;
		}
	}
	{
		V_5 = ((int32_t)14);
		goto IL_00b5;
	}

IL_0091:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->____posSlotPrices_32;
		uint32_t L_30 = V_7;
		uint32_t L_31 = V_5;
		NullCheck(L_29);
		uint32_t* L_32 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31)))));
		int32_t L_33 = *((uint32_t*)L_32);
		uint32_t L_34 = V_5;
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_33, ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_34>>1)), 1)), 4))<<6))));
		uint32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, 1));
	}

IL_00b5:
	{
		uint32_t L_36 = V_5;
		uint32_t L_37 = __this->____distTableSize_36;
		if ((!(((uint32_t)L_36) >= ((uint32_t)L_37))))
		{
			goto IL_0091;
		}
	}
	{
		uint32_t L_38 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_38, ((int32_t)128)));
		V_9 = 0;
		goto IL_00ec;
	}

IL_00ce:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->____distancesPrices_33;
		uint32_t L_40 = V_8;
		uint32_t L_41 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->____posSlotPrices_32;
		uint32_t L_43 = V_7;
		uint32_t L_44 = V_9;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44));
		uint32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41))), (uint32_t)L_46);
		uint32_t L_47 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, 1));
	}

IL_00ec:
	{
		uint32_t L_48 = V_9;
		if ((!(((uint32_t)L_48) >= ((uint32_t)4))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_0120;
	}

IL_00f3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = __this->____distancesPrices_33;
		uint32_t L_50 = V_8;
		uint32_t L_51 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = __this->____posSlotPrices_32;
		uint32_t L_53 = V_7;
		uint32_t L_54 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		uint32_t L_55;
		L_55 = Encoder_GetPosSlot_mE8AD8311539B89B57249B785AF430BF299BF6E7F(L_54, NULL);
		NullCheck(L_52);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_55));
		uint32_t L_57 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->___tempPrices_54;
		uint32_t L_59 = V_9;
		NullCheck(L_58);
		uint32_t L_60 = L_59;
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_61)));
		uint32_t L_62 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, 1));
	}

IL_0120:
	{
		uint32_t L_63 = V_9;
		if ((!(((uint32_t)L_63) >= ((uint32_t)((int32_t)128)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_64 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, 1));
	}

IL_012f:
	{
		uint32_t L_65 = V_4;
		if ((!(((uint32_t)L_65) >= ((uint32_t)4))))
		{
			goto IL_004c;
		}
	}
	{
		__this->____matchPriceCount_55 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_FillAlignPrices_mAC28343B8BB129FF00C602FB8303FD0B33B73DBE (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____alignPrices_34;
		uint32_t L_1 = V_0;
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_2 = (&__this->____posAlignEncoder_20);
		uint32_t L_3 = V_0;
		uint32_t L_4;
		L_4 = BitTreeEncoder_ReverseGetPrice_mFF38E42DC911859AD18CE1E73612FBF41D277551(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_001c:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)((int32_t)16)))))
		{
			goto IL_0004;
		}
	}
	{
		__this->____alignPriceCount_35 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_FindMatchFinder_mD499A5CD54F61C923E2D6C9C5D4D5C273833CA7E (String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___kMatchFinderIDs_56;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_4, NULL);
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0015:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0019:
	{
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var))->___kMatchFinderIDs_56;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* ___0_propIDs, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_properties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		V_0 = 0;
		goto IL_0226;
	}

IL_0007:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_properties;
		uint32_t L_1 = V_0;
		NullCheck(L_0);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* L_4 = ___0_propIDs;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		int32_t L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_021c;
			}
			case 2:
			{
				goto IL_021c;
			}
			case 3:
			{
				goto IL_021c;
			}
			case 4:
			{
				goto IL_0154;
			}
			case 5:
			{
				goto IL_01ce;
			}
			case 6:
			{
				goto IL_019c;
			}
			case 7:
			{
				goto IL_0054;
			}
			case 8:
			{
				goto IL_0089;
			}
			case 9:
			{
				goto IL_021c;
			}
			case 10:
			{
				goto IL_021c;
			}
			case 11:
			{
				goto IL_0222;
			}
			case 12:
			{
				goto IL_021c;
			}
			case 13:
			{
				goto IL_0200;
			}
		}
	}
	{
		goto IL_021c;
	}

IL_0054:
	{
		RuntimeObject* L_9 = V_1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_10 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_0062:
	{
		RuntimeObject* L_11 = V_1;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_11, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) < ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int64_t)((int64_t)L_13)) <= ((int64_t)((int64_t)((int32_t)273)))))
		{
			goto IL_007d;
		}
	}

IL_0077:
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_14 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_007d:
	{
		int32_t L_15 = V_3;
		__this->____numFastBytes_25 = L_15;
		goto IL_0222;
	}

IL_0089:
	{
		RuntimeObject* L_16 = V_1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0097;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_17 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_0097:
	{
		int32_t L_18 = __this->____matchFinderType_47;
		V_4 = L_18;
		RuntimeObject* L_19 = V_1;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)));
		String_t* L_20;
		L_20 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = Encoder_FindMatchFinder_mD499A5CD54F61C923E2D6C9C5D4D5C273833CA7E(L_20, NULL);
		V_5 = L_21;
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_23 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_00bc:
	{
		int32_t L_24 = V_5;
		__this->____matchFinderType_47 = L_24;
		RuntimeObject* L_25 = __this->____matchFinder_10;
		if (!L_25)
		{
			goto IL_0222;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = __this->____matchFinderType_47;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_0222;
		}
	}
	{
		__this->____dictionarySizePrev_42 = (-1);
		__this->____matchFinder_10 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____matchFinder_10), (void*)(RuntimeObject*)NULL);
		goto IL_0222;
	}

IL_00ef:
	{
		RuntimeObject* L_28 = V_1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_28, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_00fd;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_29 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_00fd:
	{
		RuntimeObject* L_30 = V_1;
		V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_30, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_31 = V_6;
		if ((((int64_t)((int64_t)L_31)) < ((int64_t)((int64_t)1))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_32 = V_6;
		if ((((int64_t)((int64_t)L_32)) <= ((int64_t)((int64_t)((int32_t)1073741824)))))
		{
			goto IL_011d;
		}
	}

IL_0117:
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_33 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_011d:
	{
		int32_t L_34 = V_6;
		__this->____dictionarySize_41 = L_34;
		V_7 = 0;
		goto IL_013d;
	}

IL_012a:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_7;
		if ((((int64_t)((int64_t)L_35)) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)(1<<((int32_t)(L_36&((int32_t)31))))))))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_37 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_013d:
	{
		int32_t L_38 = V_7;
		if ((((int64_t)((int64_t)L_38)) < ((int64_t)((int64_t)((int32_t)30)))))
		{
			goto IL_012a;
		}
	}

IL_0145:
	{
		int32_t L_39 = V_7;
		__this->____distTableSize_36 = ((int32_t)il2cpp_codegen_multiply(L_39, 2));
		goto IL_0222;
	}

IL_0154:
	{
		RuntimeObject* L_40 = V_1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_40, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0162;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_41 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_0162:
	{
		RuntimeObject* L_42 = V_1;
		V_8 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_42, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_43 = V_8;
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_44 = V_8;
		if ((((int64_t)((int64_t)L_44)) <= ((int64_t)((int64_t)4))))
		{
			goto IL_017c;
		}
	}

IL_0176:
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_45 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_45, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_017c:
	{
		int32_t L_46 = V_8;
		__this->____posStateBits_37 = L_46;
		int32_t L_47 = __this->____posStateBits_37;
		__this->____posStateMask_38 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_47&((int32_t)31))))), 1));
		goto IL_0222;
	}

IL_019c:
	{
		RuntimeObject* L_48 = V_1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_48, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_01aa;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_49 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_01aa:
	{
		RuntimeObject* L_50 = V_1;
		V_9 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_50, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_51 = V_9;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_52 = V_9;
		if ((((int64_t)((int64_t)L_52)) <= ((int64_t)((int64_t)4))))
		{
			goto IL_01c4;
		}
	}

IL_01be:
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_53 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_01c4:
	{
		int32_t L_54 = V_9;
		__this->____numLiteralPosStateBits_39 = L_54;
		goto IL_0222;
	}

IL_01ce:
	{
		RuntimeObject* L_55 = V_1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_55, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_01dc;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_56 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_56, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_01dc:
	{
		RuntimeObject* L_57 = V_1;
		V_10 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_57, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_58 = V_10;
		if ((((int32_t)L_58) < ((int32_t)0)))
		{
			goto IL_01f0;
		}
	}
	{
		int32_t L_59 = V_10;
		if ((((int64_t)((int64_t)L_59)) <= ((int64_t)((int64_t)8))))
		{
			goto IL_01f6;
		}
	}

IL_01f0:
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_60 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_60, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_01f6:
	{
		int32_t L_61 = V_10;
		__this->____numLiteralContextBits_40 = L_61;
		goto IL_0222;
	}

IL_0200:
	{
		RuntimeObject* L_62 = V_1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_62, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_020e;
		}
	}
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_63 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_63, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_020e:
	{
		RuntimeObject* L_64 = V_1;
		Encoder_SetWriteEndMarkerMode_m1105355FDDE121190FB3E090A948499A7F027405_inline(__this, ((*(bool*)((bool*)(bool*)UnBox(L_64, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0222;
	}

IL_021c:
	{
		InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5* L_65 = (InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidParamException_t5E19CE9A0441FA4EE098EA7E0214D4A12BFF52C5_il2cpp_TypeInfo_var)));
		InvalidParamException__ctor_mF88300FB341F24CFB0FBF5730D689EBABE8970E4(L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A_RuntimeMethod_var)));
	}

IL_0222:
	{
		uint32_t L_66 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, 1));
	}

IL_0226:
	{
		uint32_t L_67 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = ___1_properties;
		NullCheck(L_68);
		if ((((int64_t)((int64_t)(uint64_t)L_67)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_SetTrainSize_mB5E5BF8591B3C2C2671F9B88885D88EF26B1E0B0 (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, uint32_t ___0_trainSize, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_trainSize;
		__this->____trainSize_57 = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralEncoder_Create_m058CFBED1F67EDF233EAE51B9A8812C9CE09E850 (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, int32_t ___0_numPosBits, int32_t ___1_numPrevBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96* L_0 = __this->___m_Coders_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->___m_NumPrevBits_1;
		int32_t L_2 = ___1_numPrevBits;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = __this->___m_NumPosBits_2;
		int32_t L_4 = ___0_numPosBits;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		int32_t L_5 = ___0_numPosBits;
		__this->___m_NumPosBits_2 = L_5;
		int32_t L_6 = ___0_numPosBits;
		__this->___m_PosMask_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 1));
		int32_t L_7 = ___1_numPrevBits;
		__this->___m_NumPrevBits_1 = L_7;
		int32_t L_8 = __this->___m_NumPrevBits_1;
		int32_t L_9 = __this->___m_NumPosBits_2;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_8, L_9))&((int32_t)31)))));
		uint32_t L_10 = V_0;
		Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96* L_11 = (Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96*)(Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96*)SZArrayNew(Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___m_Coders_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Coders_0), (void*)L_11);
		V_1 = 0;
		goto IL_006f;
	}

IL_005a:
	{
		Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96* L_12 = __this->___m_Coders_0;
		uint32_t L_13 = V_1;
		NullCheck(L_12);
		Encoder2_Create_m7AD0041C68C2F2DE9F072C45DE3BA21189DF91F0(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}

IL_006f:
	{
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) >= ((uint32_t)L_16))))
		{
			goto IL_005a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralEncoder_Init_m7529C6AA133E3F4237A5324C72092BAA722CF04E (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = __this->___m_NumPrevBits_1;
		int32_t L_1 = __this->___m_NumPosBits_2;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))&((int32_t)31)))));
		V_1 = 0;
		goto IL_002c;
	}

IL_0017:
	{
		Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96* L_2 = __this->___m_Coders_0;
		uint32_t L_3 = V_1;
		NullCheck(L_2);
		Encoder2_Init_mC4586393755E7294511542C1B280C41CDC51C93D(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		uint32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, 1));
	}

IL_002c:
	{
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 LiteralEncoder_GetSubCoder_m0B46590B299A62FDD8D7369375A07D1A35899622 (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, uint32_t ___0_pos, uint8_t ___1_prevByte, const RuntimeMethod* method) 
{
	{
		Encoder2U5BU5D_tA40FEF72A0FE5FCB615C1F9F8EDCE7E8FABFBE96* L_0 = __this->___m_Coders_0;
		uint32_t L_1 = ___0_pos;
		uint32_t L_2 = __this->___m_PosMask_3;
		int32_t L_3 = __this->___m_NumPrevBits_1;
		uint8_t L_4 = ___1_prevByte;
		int32_t L_5 = __this->___m_NumPrevBits_1;
		NullCheck(L_0);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1&(int32_t)L_2))<<((int32_t)(L_3&((int32_t)31))))), ((int32_t)((int32_t)L_4>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_5))&((int32_t)31)))))));
		Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705 L_7 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteralEncoder__ctor_m3E8E8EB330C6BD81A3D5350576860475EDC098E6 (LiteralEncoder_t855D87FB177F13E7D47909016A45F16058491730* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshal_pinvoke(const Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705& unmarshaled, Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___m_Encoders_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Encoders_Length = (unmarshaled.___m_Encoders_0)->max_length;
		marshaled.___m_Encoders_0 = il2cpp_codegen_marshal_allocate_array<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D>(_unmarshaledm_Encoders_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Encoders_Length); i++)
		{
			(marshaled.___m_Encoders_0)[i] = (unmarshaled.___m_Encoders_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Encoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C void Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshal_pinvoke_back(const Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_pinvoke& marshaled, Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___m_Encoders_0 != NULL)
	{
		if (unmarshaled.___m_Encoders_0 == NULL)
		{
			unmarshaled.___m_Encoders_0 = reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Encoders_0), (void*)reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Encoders_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Encoders_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Encoders_0)[i]);
		}
	}
}
IL2CPP_EXTERN_C void Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshal_pinvoke_cleanup(Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_pinvoke& marshaled)
{
	if (marshaled.___m_Encoders_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Encoders_0);
		marshaled.___m_Encoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C void Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshal_com(const Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705& unmarshaled, Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_com& marshaled)
{
	if (unmarshaled.___m_Encoders_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Encoders_Length = (unmarshaled.___m_Encoders_0)->max_length;
		marshaled.___m_Encoders_0 = il2cpp_codegen_marshal_allocate_array<BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D>(_unmarshaledm_Encoders_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Encoders_Length); i++)
		{
			(marshaled.___m_Encoders_0)[i] = (unmarshaled.___m_Encoders_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Encoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C void Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshal_com_back(const Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_com& marshaled, Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___m_Encoders_0 != NULL)
	{
		if (unmarshaled.___m_Encoders_0 == NULL)
		{
			unmarshaled.___m_Encoders_0 = reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Encoders_0), (void*)reinterpret_cast<BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*>((BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Encoders_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Encoders_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Encoders_0)[i]);
		}
	}
}
IL2CPP_EXTERN_C void Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshal_com_cleanup(Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705_marshaled_com& marshaled)
{
	if (marshaled.___m_Encoders_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Encoders_0);
		marshaled.___m_Encoders_0 = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_Create_m7AD0041C68C2F2DE9F072C45DE3BA21189DF91F0 (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_0 = (BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235*)SZArrayNew(BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___m_Encoders_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Encoders_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Encoder2_Create_m7AD0041C68C2F2DE9F072C45DE3BA21189DF91F0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705*>(__this + _offset);
	Encoder2_Create_m7AD0041C68C2F2DE9F072C45DE3BA21189DF91F0(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_Init_mC4586393755E7294511542C1B280C41CDC51C93D (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_0 = __this->___m_Encoders_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)768))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Encoder2_Init_mC4586393755E7294511542C1B280C41CDC51C93D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705*>(__this + _offset);
	Encoder2_Init_mC4586393755E7294511542C1B280C41CDC51C93D(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_Encode_m96AE6E6477087E95B1EE6C891C8F63706550895E (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint8_t ___1_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 1;
		V_1 = 7;
		goto IL_002c;
	}

IL_0006:
	{
		uint8_t L_0 = ___1_symbol;
		int32_t L_1 = V_1;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))&1));
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_2 = __this->___m_Encoders_0;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_4 = ___0_rangeEncoder;
		uint32_t L_5 = V_2;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), L_4, L_5, NULL);
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_6<<1))|(int32_t)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_002c:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Encoder2_Encode_m96AE6E6477087E95B1EE6C891C8F63706550895E_AdjustorThunk (RuntimeObject* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint8_t ___1_symbol, const RuntimeMethod* method)
{
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705*>(__this + _offset);
	Encoder2_Encode_m96AE6E6477087E95B1EE6C891C8F63706550895E(_thisAdjusted, ___0_rangeEncoder, ___1_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder2_EncodeMatched_mDC7071C609D71ADF7924A0B033BB9AA159644F7E (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint8_t ___1_matchByte, uint8_t ___2_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		V_0 = 1;
		V_1 = (bool)1;
		V_2 = 7;
		goto IL_0050;
	}

IL_0008:
	{
		uint8_t L_0 = ___2_symbol;
		int32_t L_1 = V_2;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))&1));
		uint32_t L_2 = V_0;
		V_4 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		uint8_t L_4 = ___1_matchByte;
		int32_t L_5 = V_2;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_4>>((int32_t)(L_5&((int32_t)31)))))&1));
		uint32_t L_6 = V_4;
		uint32_t L_7 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_7))<<8))));
		uint32_t L_8 = V_5;
		uint32_t L_9 = V_3;
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0032:
	{
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_10 = __this->___m_Encoders_0;
		uint32_t L_11 = V_4;
		NullCheck(L_10);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_12 = ___0_rangeEncoder;
		uint32_t L_13 = V_3;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_12, L_13, NULL);
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_3;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_14<<1))|(int32_t)L_15));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0050:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Encoder2_EncodeMatched_mDC7071C609D71ADF7924A0B033BB9AA159644F7E_AdjustorThunk (RuntimeObject* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint8_t ___1_matchByte, uint8_t ___2_symbol, const RuntimeMethod* method)
{
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705*>(__this + _offset);
	Encoder2_EncodeMatched_mDC7071C609D71ADF7924A0B033BB9AA159644F7E(_thisAdjusted, ___0_rangeEncoder, ___1_matchByte, ___2_symbol, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE (Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* __this, bool ___0_matchMode, uint8_t ___1_matchByte, uint8_t ___2_symbol, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		V_2 = 7;
		bool L_0 = ___0_matchMode;
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0050;
	}

IL_000b:
	{
		uint8_t L_1 = ___1_matchByte;
		int32_t L_2 = V_2;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_1>>((int32_t)(L_2&((int32_t)31)))))&1));
		uint8_t L_3 = ___2_symbol;
		int32_t L_4 = V_2;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_3>>((int32_t)(L_4&((int32_t)31)))))&1));
		uint32_t L_5 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_6 = __this->___m_Encoders_0;
		uint32_t L_7 = V_3;
		uint32_t L_8 = V_1;
		NullCheck(L_6);
		uint32_t L_9 = V_4;
		uint32_t L_10;
		L_10 = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_7))<<8)), (int32_t)L_8))))), L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_10));
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_4;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_11<<1))|(int32_t)L_12));
		uint32_t L_13 = V_3;
		uint32_t L_14 = V_4;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		goto IL_0081;
	}

IL_004c:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0050:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0081;
	}

IL_0056:
	{
		uint8_t L_18 = ___2_symbol;
		int32_t L_19 = V_2;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_18>>((int32_t)(L_19&((int32_t)31)))))&1));
		uint32_t L_20 = V_0;
		BitEncoderU5BU5D_tDBD9AF6A05DE3632BECA3DB7D4A099D3C61DB235* L_21 = __this->___m_Encoders_0;
		uint32_t L_22 = V_1;
		NullCheck(L_21);
		uint32_t L_23 = V_5;
		uint32_t L_24;
		L_24 = BitEncoder_GetPrice_m0AFD7C6F8CA98FCBF2D1C3159C145882112E211F(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), L_23, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_24));
		uint32_t L_25 = V_1;
		uint32_t L_26 = V_5;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_25<<1))|(int32_t)L_26));
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_0081:
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_29 = V_0;
		return L_29;
	}
}
IL2CPP_EXTERN_C  uint32_t Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE_AdjustorThunk (RuntimeObject* __this, bool ___0_matchMode, uint8_t ___1_matchByte, uint8_t ___2_symbol, const RuntimeMethod* method)
{
	Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Encoder2_t51A618B1E6689EA75509EF5CCA6E9A5148257705*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Encoder2_GetPrice_m932FA500DBCAEAABF232205A538C109C54F36BDE(_thisAdjusted, ___0_matchMode, ___1_matchByte, ___2_symbol, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder__ctor_m8915FB31D45532290BCF923FE8486CE15555454C (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_0 = (BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510*)(BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510*)SZArrayNew(BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____lowCoder_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lowCoder_2), (void*)L_0);
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_1 = (BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510*)(BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510*)SZArrayNew(BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____midCoder_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____midCoder_3), (void*)L_1);
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152((&L_2), 8, NULL);
		__this->____highCoder_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____highCoder_4))->___Models_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		V_0 = 0;
		goto IL_0058;
	}

IL_0030:
	{
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_3 = __this->____lowCoder_2;
		uint32_t L_4 = V_0;
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152((&L_5), 3, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F)L_5);
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_6 = __this->____midCoder_3;
		uint32_t L_7 = V_0;
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		BitTreeEncoder__ctor_m88A58A2DB7638E2241EDFB79126B27A72C967152((&L_8), 3, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F)L_8);
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
	}

IL_0058:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) >= ((uint32_t)((int32_t)16)))))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder_Init_m5A7B50A296E106A7465EC8CC62A936F8569D6467 (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, uint32_t ___0_numPosStates, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_0 = (&__this->____choice_0);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(L_0, NULL);
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_1 = (&__this->____choice2_1);
		BitEncoder_Init_mBC26AC9D42CDB0DC24B843601915DC41A4A5D839(L_1, NULL);
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_2 = __this->____lowCoder_2;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_4 = __this->____midCoder_3;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), NULL);
		uint32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, 1));
	}

IL_0040:
	{
		uint32_t L_7 = V_0;
		uint32_t L_8 = ___0_numPosStates;
		if ((!(((uint32_t)L_7) >= ((uint32_t)L_8))))
		{
			goto IL_001a;
		}
	}
	{
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_9 = (&__this->____highCoder_4);
		BitTreeEncoder_Init_m99C2F07EFA6C33BCE0967775B16ED9E40FA0416D(L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder_Encode_m122418B6AD029B799511198EA11521B85DEE1022 (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, uint32_t ___2_posState, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___1_symbol;
		if ((!(((uint32_t)L_0) < ((uint32_t)8))))
		{
			goto IL_0025;
		}
	}
	{
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_1 = (&__this->____choice_0);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_2 = ___0_rangeEncoder;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(L_1, L_2, 0, NULL);
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_3 = __this->____lowCoder_2;
		uint32_t L_4 = ___2_posState;
		NullCheck(L_3);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_5 = ___0_rangeEncoder;
		uint32_t L_6 = ___1_symbol;
		BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), L_5, L_6, NULL);
		return;
	}

IL_0025:
	{
		uint32_t L_7 = ___1_symbol;
		___1_symbol = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 8));
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_8 = (&__this->____choice_0);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_9 = ___0_rangeEncoder;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(L_8, L_9, 1, NULL);
		uint32_t L_10 = ___1_symbol;
		if ((!(((uint32_t)L_10) < ((uint32_t)8))))
		{
			goto IL_005c;
		}
	}
	{
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_11 = (&__this->____choice2_1);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_12 = ___0_rangeEncoder;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(L_11, L_12, 0, NULL);
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_13 = __this->____midCoder_3;
		uint32_t L_14 = ___2_posState;
		NullCheck(L_13);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_15 = ___0_rangeEncoder;
		uint32_t L_16 = ___1_symbol;
		BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), L_15, L_16, NULL);
		return;
	}

IL_005c:
	{
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_17 = (&__this->____choice2_1);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_18 = ___0_rangeEncoder;
		BitEncoder_Encode_m3D9880B3258C7620C1531941326D0D5C191077F4(L_17, L_18, 1, NULL);
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_19 = (&__this->____highCoder_4);
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_20 = ___0_rangeEncoder;
		uint32_t L_21 = ___1_symbol;
		BitTreeEncoder_Encode_m7C2F9D668335FFE8E8783C15B4B18C0892A77431(L_19, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, 8)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenEncoder_SetPrices_m5A4439FB5484B283434F16D48E3FFB854ED980B5 (LenEncoder_tA9D475EC117EDAA3F448B28397BEFB59EB581956* __this, uint32_t ___0_posState, uint32_t ___1_numSymbols, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_prices, uint32_t ___3_st, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_0 = (&__this->____choice_0);
		uint32_t L_1;
		L_1 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(L_0, NULL);
		V_0 = L_1;
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_2 = (&__this->____choice_0);
		uint32_t L_3;
		L_3 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(L_2, NULL);
		uint32_t L_4 = L_3;
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_5 = (&__this->____choice2_1);
		uint32_t L_6;
		L_6 = BitEncoder_GetPrice0_m229A5466A8336941CA2F30A05CDA835FBD2018F8(L_5, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
		BitEncoder_t1529BEB026B5C68464D0B39A357A47DD2112865D* L_7 = (&__this->____choice2_1);
		uint32_t L_8;
		L_8 = BitEncoder_GetPrice1_mBED6CE000612E92E0F5F4B7E5FD6FF2696EA675A(L_7, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8));
		V_3 = 0;
		V_3 = 0;
		goto IL_005b;
	}

IL_0038:
	{
		uint32_t L_9 = V_3;
		uint32_t L_10 = ___1_numSymbols;
		if ((!(((uint32_t)L_9) >= ((uint32_t)L_10))))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_prices;
		uint32_t L_12 = ___3_st;
		uint32_t L_13 = V_3;
		uint32_t L_14 = V_0;
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_15 = __this->____lowCoder_2;
		uint32_t L_16 = ___0_posState;
		NullCheck(L_15);
		uint32_t L_17 = V_3;
		uint32_t L_18;
		L_18 = BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), L_17, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_18)));
		uint32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, 1));
	}

IL_005b:
	{
		uint32_t L_20 = V_3;
		if ((!(((uint32_t)L_20) >= ((uint32_t)8))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0086;
	}

IL_0061:
	{
		uint32_t L_21 = V_3;
		uint32_t L_22 = ___1_numSymbols;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_22))))
		{
			goto IL_0066;
		}
	}
	{
		return;
	}

IL_0066:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_prices;
		uint32_t L_24 = ___3_st;
		uint32_t L_25 = V_3;
		uint32_t L_26 = V_1;
		BitTreeEncoderU5BU5D_tC07608F5E14D5F96184D3FB9F776420D677B5510* L_27 = __this->____midCoder_3;
		uint32_t L_28 = ___0_posState;
		NullCheck(L_27);
		uint32_t L_29 = V_3;
		uint32_t L_30;
		L_30 = BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, 8)), NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_30)));
		uint32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
	}

IL_0086:
	{
		uint32_t L_32 = V_3;
		if ((!(((uint32_t)L_32) >= ((uint32_t)((int32_t)16)))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_00a9;
	}

IL_008d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_prices;
		uint32_t L_34 = ___3_st;
		uint32_t L_35 = V_3;
		uint32_t L_36 = V_2;
		BitTreeEncoder_t0BDB4EDE0D52B39FC8D8F59A164295DA53C9FD1F* L_37 = (&__this->____highCoder_4);
		uint32_t L_38 = V_3;
		uint32_t L_39;
		L_39 = BitTreeEncoder_GetPrice_m0A18FAC5F4F1F01EC9C8F2E95ADDED536646A986(L_37, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_38, 8)), 8)), NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, 1));
	}

IL_00a9:
	{
		uint32_t L_41 = V_3;
		uint32_t L_42 = ___1_numSymbols;
		if ((!(((uint32_t)L_41) >= ((uint32_t)L_42))))
		{
			goto IL_008d;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_SetTableSize_m4B8DBF8FF347E563EDC756B7BE6DB5BADF943365 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_tableSize, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_tableSize;
		__this->____tableSize_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t LenPriceTableEncoder_GetPrice_m7EFC87D15F1855E62F78A82C6579E81E49566DA7 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_symbol, uint32_t ___1_posState, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____prices_5;
		uint32_t L_1 = ___1_posState;
		uint32_t L_2 = ___0_symbol;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)272))), (int32_t)L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_UpdateTable_mDD404DEA332CF5E0B4067B0EB570CC4ADD1E9730 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_posState, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_posState;
		uint32_t L_1 = __this->____tableSize_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____prices_5;
		uint32_t L_3 = ___0_posState;
		LenEncoder_SetPrices_m5A4439FB5484B283434F16D48E3FFB854ED980B5(__this, L_0, L_1, L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)272))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____counters_7;
		uint32_t L_5 = ___0_posState;
		uint32_t L_6 = __this->____tableSize_6;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_UpdateTables_m6234C063DFDF1328BD11A7ABFD868C6CA59B543F (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_numPosStates, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		uint32_t L_0 = V_0;
		LenPriceTableEncoder_UpdateTable_mDD404DEA332CF5E0B4067B0EB570CC4ADD1E9730(__this, L_0, NULL);
		uint32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, 1));
	}

IL_000f:
	{
		uint32_t L_2 = V_0;
		uint32_t L_3 = ___0_numPosStates;
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder_Encode_m2DB22DA6437A1CF035BFAB73FD64C8EEA74E76E4 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* ___0_rangeEncoder, uint32_t ___1_symbol, uint32_t ___2_posState, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* L_0 = ___0_rangeEncoder;
		uint32_t L_1 = ___1_symbol;
		uint32_t L_2 = ___2_posState;
		LenEncoder_Encode_m122418B6AD029B799511198EA11521B85DEE1022(__this, L_0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____counters_7;
		uint32_t L_4 = ___2_posState;
		NullCheck(L_3);
		uint32_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((uint32_t*)L_5);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		uint32_t L_7 = V_0;
		*((int32_t*)L_5) = (int32_t)L_7;
		uint32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_9 = ___2_posState;
		LenPriceTableEncoder_UpdateTable_mDD404DEA332CF5E0B4067B0EB570CC4ADD1E9730(__this, L_9, NULL);
	}

IL_0026:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LenPriceTableEncoder__ctor_m68947908F4847299A2F052E855508D175B5B58D3 (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4352));
		__this->____prices_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prices_5), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____counters_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____counters_7), (void*)L_1);
		LenEncoder__ctor_m8915FB31D45532290BCF923FE8486CE15555454C(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Optimal_MakeAsChar_m80AAD07DA3ACFB06AA07458E0DAE88923BC8AB44 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) 
{
	{
		__this->___BackPrev_7 = (-1);
		__this->___Prev1IsChar_1 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Optimal_MakeAsShortRep_m0F2D5E143EB951D124EC1C377C306D9152F9DA97 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) 
{
	{
		__this->___BackPrev_7 = 0;
		__this->___Prev1IsChar_1 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optimal_IsShortRep_m4E9F62525F114996DCBA4D347641BD522A66E051 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___BackPrev_7;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Optimal__ctor_m92565D3B039685A68704CEAB75C150691ADB2300 (Optimal_t8C7B1DA3675E539864E082948066A31C9A89DD47* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SevenZipHelper_Compress_mAB87D49B57A15EB63AEDC03EAEAB849CA2FF993C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBytes;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_2, NULL);
		V_1 = L_2;
		Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* L_3 = (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3*)il2cpp_codegen_object_new(Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3_il2cpp_TypeInfo_var);
		Encoder__ctor_m716D91C874D476B3B67363DC6AD931540AF70524(L_3, NULL);
		V_2 = L_3;
		Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var);
		CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* L_5 = ((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___propIDs_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___properties_3;
		NullCheck(L_4);
		Encoder_SetCoderProperties_m0441B29B923E899775B2F38C18C17F91058ADE1A(L_4, L_5, L_6, NULL);
		Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* L_7 = V_2;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_1;
		NullCheck(L_7);
		Encoder_WriteCoderProperties_m4BA5427B1EFF6797B9BEBFB9AFC3205106C19C1C(L_7, L_8, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_9);
		V_3 = L_10;
		V_4 = 0;
		goto IL_004c;
	}

IL_0036:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_1;
		int64_t L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_11);
		VirtualActionInvoker1< uint8_t >::Invoke(37, L_11, (uint8_t)((int32_t)(uint8_t)((int64_t)(L_12>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_13))&((int32_t)63)))))));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004c:
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) < ((int32_t)8)))
		{
			goto IL_0036;
		}
	}
	{
		Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* L_16 = V_2;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_1;
		NullCheck(L_16);
		Encoder_Code_m89F8DBBDBDDE531A2BA65F915B73E4FB50F1BF06(L_16, L_17, L_18, ((int64_t)(-1)), ((int64_t)(-1)), (RuntimeObject*)NULL, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = V_1;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41, L_19);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SevenZipHelper_Decompress_mE19D34371916437299268A242F9BE9F62F2AF231 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBytes;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
		Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* L_2 = (Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B*)il2cpp_codegen_object_new(Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B_il2cpp_TypeInfo_var);
		Decoder__ctor_m857B05BA0018D41EC36D00DC1B98ED2A190B5B77(L_2, NULL);
		V_1 = L_2;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30, L_3, ((int64_t)0), 0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_5, NULL);
		V_2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		V_3 = L_6;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_7, L_8, 0, 5);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_003b;
		}
	}
	{
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CBEFB7918C2A2445F7BC7C27DBD5C07079644AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SevenZipHelper_Decompress_mE19D34371916437299268A242F9BE9F62F2AF231_RuntimeMethod_var)));
	}

IL_003b:
	{
		V_4 = ((int64_t)0);
		V_6 = 0;
		goto IL_0073;
	}

IL_0044:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(34, L_11);
		V_7 = L_12;
		int32_t L_13 = V_7;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		Exception_t* L_14 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFB8E981BF631E6984CAE44D3D1C1944B389CBF5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SevenZipHelper_Decompress_mE19D34371916437299268A242F9BE9F62F2AF231_RuntimeMethod_var)));
	}

IL_005c:
	{
		int64_t L_15 = V_4;
		int32_t L_16 = V_7;
		int32_t L_17 = V_6;
		V_4 = ((int64_t)(L_15|((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)L_16)))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_17))&((int32_t)63)))))));
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0073:
	{
		int32_t L_19 = V_6;
		if ((((int32_t)L_19) < ((int32_t)8)))
		{
			goto IL_0044;
		}
	}
	{
		Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
		NullCheck(L_20);
		Decoder_SetDecoderProperties_m384C4B611C7ADDD261AA611E3AAAAFA581E4F11D(L_20, L_21, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = V_0;
		NullCheck(L_22);
		int64_t L_23;
		L_23 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_22);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_24 = V_0;
		NullCheck(L_24);
		int64_t L_25;
		L_25 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_24);
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_23, L_25));
		Decoder_t743307F827CEE0CB84055D94079B6A9247B38C5B* L_26 = V_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = V_2;
		int64_t L_29 = V_5;
		int64_t L_30 = V_4;
		NullCheck(L_26);
		Decoder_Code_m35931A6D9DE44AFC9DBA16A54EEF506E96D687BA(L_26, L_27, L_28, L_29, L_30, (RuntimeObject*)NULL, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = V_2;
		NullCheck(L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SevenZipHelper__cctor_m40D0B1A800910EC92AEAE06307FA0052F6356D4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____C88A5FD712C368135DFC00B43FD6EB1D8EC948B243FA4ACE7BC0709A59863639_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA817E4DCA19D4F7E6BFDEB82BD7232BF9379CBE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___dictionary_0 = ((int32_t)8388608);
		((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___eos_1 = (bool)0;
		CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* L_0 = (CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397*)(CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397*)SZArrayNew(CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397_il2cpp_TypeInfo_var, (uint32_t)8);
		CoderPropIDU5BU5D_t177A976C46D8BAA0D4F2CBB54785B6F2CEEA9397* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAF1017D935A1F8007B120FEEDB30CFE0F99CD8BF____C88A5FD712C368135DFC00B43FD6EB1D8EC948B243FA4ACE7BC0709A59863639_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___propIDs_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___propIDs_2), (void*)L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___dictionary_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = 2;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		int32_t L_12 = 3;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		int32_t L_15 = 0;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		int32_t L_18 = 2;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		int32_t L_21 = ((int32_t)128);
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralA817E4DCA19D4F7E6BFDEB82BD7232BF9379CBE2);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralA817E4DCA19D4F7E6BFDEB82BD7232BF9379CBE2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		bool L_25 = ((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___eos_1;
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_27);
		((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___properties_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_StaticFields*)il2cpp_codegen_static_fields_for(SevenZipHelper_t1B7883C2142482A94DE936852A459D0BF2C5ADF2_il2cpp_TypeInfo_var))->___properties_3), (void*)L_24);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_SetType_m90713D4A757BAFD7A79B2B68DCDC117622E081AD (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, int32_t ___0_numHashBytes, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_numHashBytes;
		__this->___HASH_ARRAY_19 = (bool)((((int32_t)L_0) > ((int32_t)2))? 1 : 0);
		bool L_1 = __this->___HASH_ARRAY_19;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		__this->___kNumHashDirectBytes_27 = 0;
		__this->___kMinMatchCheck_28 = 4;
		__this->___kFixHashSize_29 = ((int32_t)66560);
		return;
	}

IL_002c:
	{
		__this->___kNumHashDirectBytes_27 = 2;
		__this->___kMinMatchCheck_28 = 3;
		__this->___kFixHashSize_29 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_SetStream_m0891B15E58751ACD2B99464FFDF2AABAA9705862 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		InWindow_SetStream_mA2923B81EECFCCD33F3F89930A23D93C0CA864EC_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_ReleaseStream_mC0FCBA3308B7DC3471D1AC8D6B13D411660AF859 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) 
{
	{
		InWindow_ReleaseStream_m482381F5C8AA26E21CAC15075A07F75307771A2C(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_Init_m9AFE1E2E85ABDD9544A279580F27A3EF19AC25B3 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		InWindow_Init_m49BD38C8F87139C3B231F3DE72AD98B49CB42EDD(__this, NULL);
		V_0 = 0;
		goto IL_0017;
	}

IL_000a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____hash_15;
		uint32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
	}

IL_0017:
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = __this->____hashSizeSum_18;
		if ((!(((uint32_t)L_3) >= ((uint32_t)L_4))))
		{
			goto IL_000a;
		}
	}
	{
		__this->____cyclicBufferPos_11 = 0;
		InWindow_ReduceOffsets_mAAD1FE9CC8957D04102808596FE5D61B124225C6(__this, (-1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_MovePos_mAF7789C2D59CBC1AC09039A1C84911BEC6C0208B (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->____cyclicBufferPos_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		uint32_t L_1 = V_0;
		__this->____cyclicBufferPos_11 = L_1;
		uint32_t L_2 = V_0;
		uint32_t L_3 = __this->____cyclicBufferSize_12;
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		__this->____cyclicBufferPos_11 = 0;
	}

IL_0020:
	{
		InWindow_MovePos_m6A92B9519E2A48751C64F1873072461EEC6F4C16(__this, NULL);
		uint32_t L_4 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0039;
		}
	}
	{
		BinTree_Normalize_m9EB0A518C4E48DF678A9F72CA8BBF7C8D3EAE77A(__this, NULL);
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BinTree_GetIndexByte_m766CEB4BA15CAE14892A42EC6A47E730DC0D5A85 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		uint8_t L_1;
		L_1 = InWindow_GetIndexByte_m03092ADFA2CFC561925A259301AF683F54EA030F(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinTree_GetMatchLen_m8799919B053C4E7AAB8AE8926079160424E9A41A (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, int32_t ___0_index, uint32_t ___1_distance, uint32_t ___2_limit, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		uint32_t L_1 = ___1_distance;
		uint32_t L_2 = ___2_limit;
		uint32_t L_3;
		L_3 = InWindow_GetMatchLen_mF1F60AEC6A33A1AC212B704F52E3502FAF3347E9(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinTree_GetNumAvailableBytes_mC0076CFEAEF615053E0E9254EB3C78C4F1AA2B0A (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = InWindow_GetNumAvailableBytes_mF7A6A5A3D1F2F761DEFEFF4EE3595A4FD1453377(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_Create_m848A1915B046D49783ED2751CB87EFC87491D3BA (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, uint32_t ___0_historySize, uint32_t ___1_keepAddBufferBefore, uint32_t ___2_matchMaxLen, uint32_t ___3_keepAddBufferAfter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___0_historySize;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483391)))))
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BinTree_Create_m848A1915B046D49783ED2751CB87EFC87491D3BA_RuntimeMethod_var)));
	}

IL_000e:
	{
		uint32_t L_2 = ___2_matchMaxLen;
		__this->____cutValue_16 = ((int32_t)il2cpp_codegen_add(((int32_t)16), ((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___0_historySize;
		uint32_t L_4 = ___1_keepAddBufferBefore;
		uint32_t L_5 = ___2_matchMaxLen;
		uint32_t L_6 = ___3_keepAddBufferAfter;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)L_5)), (int32_t)L_6))/(uint32_t)(int32_t)2)), ((int32_t)256)));
		uint32_t L_7 = ___0_historySize;
		uint32_t L_8 = ___1_keepAddBufferBefore;
		uint32_t L_9 = ___2_matchMaxLen;
		uint32_t L_10 = ___3_keepAddBufferAfter;
		uint32_t L_11 = V_0;
		InWindow_Create_m348F70D018E12AF96C0C64F13068B78273EF9CC0(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11, NULL);
		uint32_t L_12 = ___2_matchMaxLen;
		__this->____matchMaxLen_13 = L_12;
		uint32_t L_13 = ___0_historySize;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
		uint32_t L_14 = __this->____cyclicBufferSize_12;
		uint32_t L_15 = V_1;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_16 = V_1;
		uint32_t L_17 = L_16;
		V_3 = L_17;
		__this->____cyclicBufferSize_12 = L_17;
		uint32_t L_18 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, 2)));
		__this->____son_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____son_14), (void*)L_19);
	}

IL_0064:
	{
		V_2 = ((int32_t)65536);
		bool L_20 = __this->___HASH_ARRAY_19;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_21 = ___0_historySize;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, 1));
		uint32_t L_22 = V_2;
		uint32_t L_23 = V_2;
		V_2 = ((int32_t)((int32_t)L_22|((int32_t)((uint32_t)L_23>>1))));
		uint32_t L_24 = V_2;
		uint32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_24|((int32_t)((uint32_t)L_25>>2))));
		uint32_t L_26 = V_2;
		uint32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_26|((int32_t)((uint32_t)L_27>>4))));
		uint32_t L_28 = V_2;
		uint32_t L_29 = V_2;
		V_2 = ((int32_t)((int32_t)L_28|((int32_t)((uint32_t)L_29>>8))));
		uint32_t L_30 = V_2;
		V_2 = ((int32_t)((uint32_t)L_30>>1));
		uint32_t L_31 = V_2;
		V_2 = ((int32_t)((int32_t)L_31|((int32_t)65535)));
		uint32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) > ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_00a6;
		}
	}
	{
		uint32_t L_33 = V_2;
		V_2 = ((int32_t)((uint32_t)L_33>>1));
	}

IL_00a6:
	{
		uint32_t L_34 = V_2;
		__this->____hashMask_17 = L_34;
		uint32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, 1));
		uint32_t L_36 = V_2;
		uint32_t L_37 = __this->___kFixHashSize_29;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37));
	}

IL_00ba:
	{
		uint32_t L_38 = V_2;
		uint32_t L_39 = __this->____hashSizeSum_18;
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_40 = V_2;
		uint32_t L_41 = L_40;
		V_3 = L_41;
		__this->____hashSizeSum_18 = L_41;
		uint32_t L_42 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_42);
		__this->____hash_15 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hash_15), (void*)L_43);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinTree_GetMatches_m0A17F0F9354B18425BFEA852956914939700EE74 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_distances, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B33_0 = 0;
	{
		uint32_t L_0 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_1 = __this->____matchMaxLen_13;
		uint32_t L_2 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____streamPos_10;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_3 = __this->____matchMaxLen_13;
		V_0 = L_3;
		goto IL_003d;
	}

IL_001e:
	{
		uint32_t L_4 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____streamPos_10;
		uint32_t L_5 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
		uint32_t L_6 = V_0;
		uint32_t L_7 = __this->___kMinMatchCheck_28;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		BinTree_MovePos_mAF7789C2D59CBC1AC09039A1C84911BEC6C0208B(__this, NULL);
		return 0;
	}

IL_003d:
	{
		V_1 = 0;
		uint32_t L_8 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_9 = __this->____cyclicBufferSize_12;
		if ((!(((uint32_t)L_8) <= ((uint32_t)L_9))))
		{
			goto IL_0050;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_005d;
	}

IL_0050:
	{
		uint32_t L_10 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_11 = __this->____cyclicBufferSize_12;
		G_B7_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
	}

IL_005d:
	{
		V_2 = G_B7_0;
		uint32_t L_12 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_13 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		V_4 = 1;
		V_6 = 0;
		V_7 = 0;
		bool L_14 = __this->___HASH_ARRAY_19;
		if (!L_14)
		{
			goto IL_00d3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_17 = V_3;
		NullCheck(L_16);
		uint32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		uint8_t L_20 = L_19;
		uint32_t L_21 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = ((int32_t)((int32_t)L_21^(int32_t)L_25));
		V_6 = ((int32_t)(L_26&((int32_t)1023)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, 2));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((int32_t)(L_26^((int32_t)((int32_t)L_30<<8))));
		V_7 = ((int32_t)(L_31&((int32_t)65535)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, 3));
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		uint8_t L_37 = L_36;
		uint32_t L_38 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		uint32_t L_39 = __this->____hashMask_17;
		V_5 = ((int32_t)(((int32_t)(L_31^((int32_t)((int32_t)L_38<<5))))&(int32_t)L_39));
		goto IL_00ea;
	}

IL_00d3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_41 = V_3;
		NullCheck(L_40);
		uint32_t L_42 = L_41;
		uint8_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, 1));
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_5 = ((int32_t)((int32_t)L_43^((int32_t)((int32_t)L_47<<8))));
	}

IL_00ea:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->____hash_15;
		uint32_t L_49 = __this->___kFixHashSize_29;
		uint32_t L_50 = V_5;
		NullCheck(L_48);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50));
		uint32_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_8 = L_52;
		bool L_53 = __this->___HASH_ARRAY_19;
		if (!L_53)
		{
			goto IL_01dd;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->____hash_15;
		uint32_t L_55 = V_6;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_14 = L_57;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->____hash_15;
		uint32_t L_59 = V_7;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(((int32_t)1024), (int32_t)L_59));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_15 = L_61;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->____hash_15;
		uint32_t L_63 = V_6;
		uint32_t L_64 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint32_t)L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = __this->____hash_15;
		uint32_t L_66 = V_7;
		uint32_t L_67 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)1024), (int32_t)L_66))), (uint32_t)L_67);
		uint32_t L_68 = V_14;
		uint32_t L_69 = V_2;
		if ((!(((uint32_t)L_68) > ((uint32_t)L_69))))
		{
			goto IL_0183;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_71 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_72 = V_14;
		NullCheck(L_70);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)L_72));
		uint8_t L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_76 = V_3;
		NullCheck(L_75);
		uint32_t L_77 = L_76;
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		if ((!(((uint32_t)L_74) == ((uint32_t)L_78))))
		{
			goto IL_0183;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_distances;
		uint32_t L_80 = V_1;
		uint32_t L_81 = L_80;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, 1));
		int32_t L_82 = 2;
		V_4 = L_82;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint32_t)L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___0_distances;
		uint32_t L_84 = V_1;
		uint32_t L_85 = L_84;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, 1));
		uint32_t L_86 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_87 = V_14;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)L_87)), 1)));
	}

IL_0183:
	{
		uint32_t L_88 = V_15;
		uint32_t L_89 = V_2;
		if ((!(((uint32_t)L_88) > ((uint32_t)L_89))))
		{
			goto IL_01cd;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_91 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_92 = V_15;
		NullCheck(L_90);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)L_92));
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_96 = V_3;
		NullCheck(L_95);
		uint32_t L_97 = L_96;
		uint8_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((!(((uint32_t)L_94) == ((uint32_t)L_98))))
		{
			goto IL_01cd;
		}
	}
	{
		uint32_t L_99 = V_15;
		uint32_t L_100 = V_14;
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_01ac;
		}
	}
	{
		uint32_t L_101 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, 2));
	}

IL_01ac:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___0_distances;
		uint32_t L_103 = V_1;
		uint32_t L_104 = L_103;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, 1));
		int32_t L_105 = 3;
		V_4 = L_105;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (uint32_t)L_105);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ___0_distances;
		uint32_t L_107 = V_1;
		uint32_t L_108 = L_107;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, 1));
		uint32_t L_109 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_110 = V_15;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_109, (int32_t)L_110)), 1)));
		uint32_t L_111 = V_15;
		V_14 = L_111;
	}

IL_01cd:
	{
		uint32_t L_112 = V_1;
		if (!L_112)
		{
			goto IL_01dd;
		}
	}
	{
		uint32_t L_113 = V_14;
		uint32_t L_114 = V_8;
		if ((!(((uint32_t)L_113) == ((uint32_t)L_114))))
		{
			goto IL_01dd;
		}
	}
	{
		uint32_t L_115 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, 2));
		V_4 = 1;
	}

IL_01dd:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = __this->____hash_15;
		uint32_t L_117 = __this->___kFixHashSize_29;
		uint32_t L_118 = V_5;
		uint32_t L_119 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_118))), (uint32_t)L_119);
		uint32_t L_120 = __this->____cyclicBufferPos_11;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_120<<1)), 1));
		uint32_t L_121 = __this->____cyclicBufferPos_11;
		V_10 = ((int32_t)((int32_t)L_121<<1));
		uint32_t L_122 = __this->___kNumHashDirectBytes_27;
		uint32_t L_123 = L_122;
		V_12 = L_123;
		V_11 = L_123;
		uint32_t L_124 = __this->___kNumHashDirectBytes_27;
		if (!L_124)
		{
			goto IL_026b;
		}
	}
	{
		uint32_t L_125 = V_8;
		uint32_t L_126 = V_2;
		if ((!(((uint32_t)L_125) > ((uint32_t)L_126))))
		{
			goto IL_026b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_128 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_129 = V_8;
		uint32_t L_130 = __this->___kNumHashDirectBytes_27;
		NullCheck(L_127);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)L_129)), (int32_t)L_130));
		uint8_t L_132 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_134 = V_3;
		uint32_t L_135 = __this->___kNumHashDirectBytes_27;
		NullCheck(L_133);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)L_135));
		uint8_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		if ((((int32_t)L_132) == ((int32_t)L_137)))
		{
			goto IL_026b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ___0_distances;
		uint32_t L_139 = V_1;
		uint32_t L_140 = L_139;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, 1));
		uint32_t L_141 = __this->___kNumHashDirectBytes_27;
		uint32_t L_142 = L_141;
		V_4 = L_142;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (uint32_t)L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___0_distances;
		uint32_t L_144 = V_1;
		uint32_t L_145 = L_144;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, 1));
		uint32_t L_146 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_147 = V_8;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)L_147)), 1)));
	}

IL_026b:
	{
		uint32_t L_148 = __this->____cutValue_16;
		V_13 = L_148;
	}

IL_0273:
	{
		uint32_t L_149 = V_8;
		uint32_t L_150 = V_2;
		if ((!(((uint32_t)L_149) > ((uint32_t)L_150))))
		{
			goto IL_0281;
		}
	}
	{
		uint32_t L_151 = V_13;
		uint32_t L_152 = L_151;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_152, 1));
		if (L_152)
		{
			goto IL_029e;
		}
	}

IL_0281:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = __this->____son_14;
		uint32_t L_154 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = __this->____son_14;
		uint32_t L_156 = V_10;
		int32_t L_157 = 0;
		V_20 = L_157;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(L_156), (uint32_t)L_157);
		uint32_t L_158 = V_20;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(L_154), (uint32_t)L_158);
		goto IL_03d1;
	}

IL_029e:
	{
		uint32_t L_159 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_160 = V_8;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_159, (int32_t)L_160));
		uint32_t L_161 = V_16;
		uint32_t L_162 = __this->____cyclicBufferPos_11;
		if ((!(((uint32_t)L_161) > ((uint32_t)L_162))))
		{
			goto IL_02c5;
		}
	}
	{
		uint32_t L_163 = __this->____cyclicBufferPos_11;
		uint32_t L_164 = V_16;
		uint32_t L_165 = __this->____cyclicBufferSize_12;
		G_B33_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_163, (int32_t)L_164)), (int32_t)L_165));
		goto IL_02ce;
	}

IL_02c5:
	{
		uint32_t L_166 = __this->____cyclicBufferPos_11;
		uint32_t L_167 = V_16;
		G_B33_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_166, (int32_t)L_167));
	}

IL_02ce:
	{
		V_17 = ((int32_t)(G_B33_0<<1));
		uint32_t L_168 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_169 = V_8;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)L_169));
		uint32_t L_170 = V_11;
		uint32_t L_171 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_172;
		L_172 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_170, L_171, NULL);
		V_19 = L_172;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_173 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_174 = V_18;
		uint32_t L_175 = V_19;
		NullCheck(L_173);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)L_175));
		uint8_t L_177 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_178 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_179 = V_3;
		uint32_t L_180 = V_19;
		NullCheck(L_178);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)L_180));
		uint8_t L_182 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		if ((!(((uint32_t)L_177) == ((uint32_t)L_182))))
		{
			goto IL_0370;
		}
	}
	{
		goto IL_031c;
	}

IL_0303:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_184 = V_18;
		uint32_t L_185 = V_19;
		NullCheck(L_183);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)L_185));
		uint8_t L_187 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_188 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_189 = V_3;
		uint32_t L_190 = V_19;
		NullCheck(L_188);
		int32_t L_191 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)L_190));
		uint8_t L_192 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		if ((!(((uint32_t)L_187) == ((uint32_t)L_192))))
		{
			goto IL_0326;
		}
	}

IL_031c:
	{
		uint32_t L_193 = V_19;
		int32_t L_194 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, 1));
		V_19 = L_194;
		uint32_t L_195 = V_0;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_0303;
		}
	}

IL_0326:
	{
		uint32_t L_196 = V_4;
		uint32_t L_197 = V_19;
		if ((!(((uint32_t)L_196) < ((uint32_t)L_197))))
		{
			goto IL_0370;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___0_distances;
		uint32_t L_199 = V_1;
		uint32_t L_200 = L_199;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, 1));
		uint32_t L_201 = V_19;
		uint32_t L_202 = L_201;
		V_4 = L_202;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(L_200), (uint32_t)L_202);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = ___0_distances;
		uint32_t L_204 = V_1;
		uint32_t L_205 = L_204;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, 1));
		uint32_t L_206 = V_16;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(L_205), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_206, 1)));
		uint32_t L_207 = V_19;
		uint32_t L_208 = V_0;
		if ((!(((uint32_t)L_207) == ((uint32_t)L_208))))
		{
			goto IL_0370;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = __this->____son_14;
		uint32_t L_210 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_211 = __this->____son_14;
		uint32_t L_212 = V_17;
		NullCheck(L_211);
		uint32_t L_213 = L_212;
		uint32_t L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(L_210), (uint32_t)L_214);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = __this->____son_14;
		uint32_t L_216 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_217 = __this->____son_14;
		uint32_t L_218 = V_17;
		NullCheck(L_217);
		int32_t L_219 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, 1));
		uint32_t L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(L_216), (uint32_t)L_220);
		goto IL_03d1;
	}

IL_0370:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_221 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_222 = V_18;
		uint32_t L_223 = V_19;
		NullCheck(L_221);
		int32_t L_224 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)L_223));
		uint8_t L_225 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_227 = V_3;
		uint32_t L_228 = V_19;
		NullCheck(L_226);
		int32_t L_229 = ((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)L_228));
		uint8_t L_230 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		if ((((int32_t)L_225) >= ((int32_t)L_230)))
		{
			goto IL_03ae;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_231 = __this->____son_14;
		uint32_t L_232 = V_10;
		uint32_t L_233 = V_8;
		NullCheck(L_231);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(L_232), (uint32_t)L_233);
		uint32_t L_234 = V_17;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_235 = __this->____son_14;
		uint32_t L_236 = V_10;
		NullCheck(L_235);
		uint32_t L_237 = L_236;
		uint32_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		V_8 = L_238;
		uint32_t L_239 = V_19;
		V_12 = L_239;
		goto IL_0273;
	}

IL_03ae:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = __this->____son_14;
		uint32_t L_241 = V_9;
		uint32_t L_242 = V_8;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(L_241), (uint32_t)L_242);
		uint32_t L_243 = V_17;
		V_9 = L_243;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_244 = __this->____son_14;
		uint32_t L_245 = V_9;
		NullCheck(L_244);
		uint32_t L_246 = L_245;
		uint32_t L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		V_8 = L_247;
		uint32_t L_248 = V_19;
		V_11 = L_248;
		goto IL_0273;
	}

IL_03d1:
	{
		BinTree_MovePos_mAF7789C2D59CBC1AC09039A1C84911BEC6C0208B(__this, NULL);
		uint32_t L_249 = V_1;
		return L_249;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_Skip_mF06579B762F1C137564DE798893F1C6413EFE1A5 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, uint32_t ___0_num, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;

IL_0000:
	{
		uint32_t L_0 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_1 = __this->____matchMaxLen_13;
		uint32_t L_2 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____streamPos_10;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_3 = __this->____matchMaxLen_13;
		V_0 = L_3;
		goto IL_0040;
	}

IL_001e:
	{
		uint32_t L_4 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____streamPos_10;
		uint32_t L_5 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
		uint32_t L_6 = V_0;
		uint32_t L_7 = __this->___kMinMatchCheck_28;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0040;
		}
	}
	{
		BinTree_MovePos_mAF7789C2D59CBC1AC09039A1C84911BEC6C0208B(__this, NULL);
		goto IL_029a;
	}

IL_0040:
	{
		uint32_t L_8 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_9 = __this->____cyclicBufferSize_12;
		if ((!(((uint32_t)L_8) <= ((uint32_t)L_9))))
		{
			goto IL_0051;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_005e;
	}

IL_0051:
	{
		uint32_t L_10 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_11 = __this->____cyclicBufferSize_12;
		G_B7_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
	}

IL_005e:
	{
		V_1 = G_B7_0;
		uint32_t L_12 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_13 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		bool L_14 = __this->___HASH_ARRAY_19;
		if (!L_14)
		{
			goto IL_00ee;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_17 = V_2;
		NullCheck(L_16);
		uint32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		uint8_t L_20 = L_19;
		uint32_t L_21 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = ((int32_t)((int32_t)L_21^(int32_t)L_25));
		V_10 = ((int32_t)(L_26&((int32_t)1023)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->____hash_15;
		uint32_t L_28 = V_10;
		uint32_t L_29 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, 2));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = ((int32_t)(L_26^((int32_t)((int32_t)L_33<<8))));
		V_11 = ((int32_t)(L_34&((int32_t)65535)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->____hash_15;
		uint32_t L_36 = V_11;
		uint32_t L_37 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)1024), (int32_t)L_36))), (uint32_t)L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ((CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_StaticFields*)il2cpp_codegen_static_fields_for(CRC_t64015E43645D610D88D28852BC55431E5ADDFEFF_il2cpp_TypeInfo_var))->___Table_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, 3));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		uint8_t L_43 = L_42;
		uint32_t L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		uint32_t L_45 = __this->____hashMask_17;
		V_3 = ((int32_t)(((int32_t)(L_34^((int32_t)((int32_t)L_44<<5))))&(int32_t)L_45));
		goto IL_0104;
	}

IL_00ee:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_47 = V_2;
		NullCheck(L_46);
		uint32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_51 = V_2;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, 1));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_3 = ((int32_t)((int32_t)L_49^((int32_t)((int32_t)L_53<<8))));
	}

IL_0104:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->____hash_15;
		uint32_t L_55 = __this->___kFixHashSize_29;
		uint32_t L_56 = V_3;
		NullCheck(L_54);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56));
		uint32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_4 = L_58;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = __this->____hash_15;
		uint32_t L_60 = __this->___kFixHashSize_29;
		uint32_t L_61 = V_3;
		uint32_t L_62 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)L_61))), (uint32_t)L_62);
		uint32_t L_63 = __this->____cyclicBufferPos_11;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_63<<1)), 1));
		uint32_t L_64 = __this->____cyclicBufferPos_11;
		V_6 = ((int32_t)((int32_t)L_64<<1));
		uint32_t L_65 = __this->___kNumHashDirectBytes_27;
		uint32_t L_66 = L_65;
		V_8 = L_66;
		V_7 = L_66;
		uint32_t L_67 = __this->____cutValue_16;
		V_9 = L_67;
	}

IL_0153:
	{
		uint32_t L_68 = V_4;
		uint32_t L_69 = V_1;
		if ((!(((uint32_t)L_68) > ((uint32_t)L_69))))
		{
			goto IL_0161;
		}
	}
	{
		uint32_t L_70 = V_9;
		uint32_t L_71 = L_70;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, 1));
		if (L_71)
		{
			goto IL_017e;
		}
	}

IL_0161:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = __this->____son_14;
		uint32_t L_73 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->____son_14;
		uint32_t L_75 = V_6;
		int32_t L_76 = 0;
		V_16 = L_76;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)L_76);
		uint32_t L_77 = V_16;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint32_t)L_77);
		goto IL_0294;
	}

IL_017e:
	{
		uint32_t L_78 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_79 = V_4;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)L_79));
		uint32_t L_80 = V_12;
		uint32_t L_81 = __this->____cyclicBufferPos_11;
		if ((!(((uint32_t)L_80) > ((uint32_t)L_81))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_82 = __this->____cyclicBufferPos_11;
		uint32_t L_83 = V_12;
		uint32_t L_84 = __this->____cyclicBufferSize_12;
		G_B17_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)L_83)), (int32_t)L_84));
		goto IL_01ae;
	}

IL_01a5:
	{
		uint32_t L_85 = __this->____cyclicBufferPos_11;
		uint32_t L_86 = V_12;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)L_86));
	}

IL_01ae:
	{
		V_13 = ((int32_t)(G_B17_0<<1));
		uint32_t L_87 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferOffset_5;
		uint32_t L_88 = V_4;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		uint32_t L_89 = V_7;
		uint32_t L_90 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_91;
		L_91 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_89, L_90, NULL);
		V_15 = L_91;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_93 = V_14;
		uint32_t L_94 = V_15;
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)L_94));
		uint8_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_98 = V_2;
		uint32_t L_99 = V_15;
		NullCheck(L_97);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)L_99));
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		if ((!(((uint32_t)L_96) == ((uint32_t)L_101))))
		{
			goto IL_0233;
		}
	}
	{
		goto IL_01fc;
	}

IL_01e3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_103 = V_14;
		uint32_t L_104 = V_15;
		NullCheck(L_102);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_104));
		uint8_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_108 = V_2;
		uint32_t L_109 = V_15;
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109));
		uint8_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		if ((!(((uint32_t)L_106) == ((uint32_t)L_111))))
		{
			goto IL_0206;
		}
	}

IL_01fc:
	{
		uint32_t L_112 = V_15;
		int32_t L_113 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, 1));
		V_15 = L_113;
		uint32_t L_114 = V_0;
		if ((!(((uint32_t)L_113) == ((uint32_t)L_114))))
		{
			goto IL_01e3;
		}
	}

IL_0206:
	{
		uint32_t L_115 = V_15;
		uint32_t L_116 = V_0;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_116))))
		{
			goto IL_0233;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->____son_14;
		uint32_t L_118 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = __this->____son_14;
		uint32_t L_120 = V_13;
		NullCheck(L_119);
		uint32_t L_121 = L_120;
		uint32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint32_t)L_122);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = __this->____son_14;
		uint32_t L_124 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = __this->____son_14;
		uint32_t L_126 = V_13;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, 1));
		uint32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(L_124), (uint32_t)L_128);
		goto IL_0294;
	}

IL_0233:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_130 = V_14;
		uint32_t L_131 = V_15;
		NullCheck(L_129);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)L_131));
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____bufferBase_0;
		uint32_t L_135 = V_2;
		uint32_t L_136 = V_15;
		NullCheck(L_134);
		int32_t L_137 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)L_136));
		uint8_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		if ((((int32_t)L_133) >= ((int32_t)L_138)))
		{
			goto IL_0271;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = __this->____son_14;
		uint32_t L_140 = V_6;
		uint32_t L_141 = V_4;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (uint32_t)L_141);
		uint32_t L_142 = V_13;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = __this->____son_14;
		uint32_t L_144 = V_6;
		NullCheck(L_143);
		uint32_t L_145 = L_144;
		uint32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_4 = L_146;
		uint32_t L_147 = V_15;
		V_8 = L_147;
		goto IL_0153;
	}

IL_0271:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = __this->____son_14;
		uint32_t L_149 = V_5;
		uint32_t L_150 = V_4;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint32_t)L_150);
		uint32_t L_151 = V_13;
		V_5 = L_151;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = __this->____son_14;
		uint32_t L_153 = V_5;
		NullCheck(L_152);
		uint32_t L_154 = L_153;
		uint32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		V_4 = L_155;
		uint32_t L_156 = V_15;
		V_7 = L_156;
		goto IL_0153;
	}

IL_0294:
	{
		BinTree_MovePos_mAF7789C2D59CBC1AC09039A1C84911BEC6C0208B(__this, NULL);
	}

IL_029a:
	{
		uint32_t L_157 = ___0_num;
		int32_t L_158 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_157, 1));
		___0_num = L_158;
		if (L_158)
		{
			goto IL_0000;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_NormalizeLinks_mBB4D2FEE6C34CDBA8636C8DD68E2D1EF5C0C9285 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_items, uint32_t ___1_numItems, uint32_t ___2_subValue, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_items;
		uint32_t L_1 = V_0;
		NullCheck(L_0);
		uint32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		uint32_t L_4 = V_1;
		uint32_t L_5 = ___2_subValue;
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_5))))
		{
			goto IL_0010;
		}
	}
	{
		V_1 = 0;
		goto IL_0014;
	}

IL_0010:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = ___2_subValue;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_items;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)L_10);
		uint32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
	}

IL_001c:
	{
		uint32_t L_12 = V_0;
		uint32_t L_13 = ___1_numItems;
		if ((!(((uint32_t)L_12) >= ((uint32_t)L_13))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_Normalize_m9EB0A518C4E48DF678A9F72CA8BBF7C8D3EAE77A (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ((InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF*)__this)->____pos_7;
		uint32_t L_1 = __this->____cyclicBufferSize_12;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____son_14;
		uint32_t L_3 = __this->____cyclicBufferSize_12;
		uint32_t L_4 = V_0;
		BinTree_NormalizeLinks_mBB4D2FEE6C34CDBA8636C8DD68E2D1EF5C0C9285(__this, L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, 2)), L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____hash_15;
		uint32_t L_6 = __this->____hashSizeSum_18;
		uint32_t L_7 = V_0;
		BinTree_NormalizeLinks_mBB4D2FEE6C34CDBA8636C8DD68E2D1EF5C0C9285(__this, L_5, L_6, L_7, NULL);
		uint32_t L_8 = V_0;
		InWindow_ReduceOffsets_mAAD1FE9CC8957D04102808596FE5D61B124225C6(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree_SetCutValue_m2911616A0AD5FCA8304EA326CD6D4A3CE8EBAFA2 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, uint32_t ___0_cutValue, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_cutValue;
		__this->____cutValue_16 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinTree__ctor_m8B893030BC588B070A3AD734BD73AD7B306CABB4 (BinTree_t4CCEAE8F9943376CBA71DE318F8FA9A9D2854FBF* __this, const RuntimeMethod* method) 
{
	{
		__this->____cutValue_16 = ((int32_t)255);
		__this->___HASH_ARRAY_19 = (bool)1;
		__this->___kMinMatchCheck_28 = 4;
		__this->___kFixHashSize_29 = ((int32_t)66560);
		InWindow__ctor_m8478C6AE6954A0FDECF5D151E8EFFD5D86364587(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_MoveBlock_mA90B7B9C201BE0CCB0976CEFCAF30FB701C21BE1 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = __this->____bufferOffset_5;
		uint32_t L_1 = __this->____pos_7;
		uint32_t L_2 = __this->____keepSizeBefore_8;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)0))))
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
	}

IL_001d:
	{
		uint32_t L_5 = __this->____bufferOffset_5;
		uint32_t L_6 = __this->____streamPos_10;
		uint32_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), (int32_t)L_7));
		V_2 = 0;
		goto IL_0047;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____bufferBase_0;
		uint32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____bufferBase_0;
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_2;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_14);
		uint32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, 1));
	}

IL_0047:
	{
		uint32_t L_16 = V_2;
		uint32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) >= ((uint32_t)L_17))))
		{
			goto IL_0031;
		}
	}
	{
		uint32_t L_18 = __this->____bufferOffset_5;
		uint32_t L_19 = V_0;
		__this->____bufferOffset_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_ReadBlock_m227A6B10A0AB221EB64CDAFE564F034D5FF69FFD (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____streamEndWasReached_3;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		uint32_t L_1 = __this->____bufferOffset_5;
		uint32_t L_2 = __this->____blockSize_6;
		uint32_t L_3 = __this->____streamPos_10;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->____stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____bufferBase_0;
		uint32_t L_7 = __this->____bufferOffset_5;
		uint32_t L_8 = __this->____streamPos_10;
		int32_t L_9 = V_0;
		NullCheck(L_5);
		int32_t L_10;
		L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_5, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), L_9);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0083;
		}
	}
	{
		uint32_t L_12 = __this->____streamPos_10;
		__this->____posLimit_2 = L_12;
		uint32_t L_13 = __this->____bufferOffset_5;
		uint32_t L_14 = __this->____posLimit_2;
		uint32_t L_15 = __this->____pointerToLastSafePosition_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14))) > ((uint32_t)L_15))))
		{
			goto IL_007b;
		}
	}
	{
		uint32_t L_16 = __this->____pointerToLastSafePosition_4;
		uint32_t L_17 = __this->____bufferOffset_5;
		__this->____posLimit_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17));
	}

IL_007b:
	{
		__this->____streamEndWasReached_3 = (bool)1;
		return;
	}

IL_0083:
	{
		uint32_t L_18 = __this->____streamPos_10;
		int32_t L_19 = V_1;
		__this->____streamPos_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, L_19));
		uint32_t L_20 = __this->____streamPos_10;
		uint32_t L_21 = __this->____pos_7;
		uint32_t L_22 = __this->____keepSizeAfter_9;
		if ((!(((uint32_t)L_20) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22))))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_23 = __this->____streamPos_10;
		uint32_t L_24 = __this->____keepSizeAfter_9;
		__this->____posLimit_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24));
		goto IL_0009;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_Free_mE79500DD8294640D8D07B4CCAABEA3478C8D9F59 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	{
		__this->____bufferBase_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bufferBase_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_Create_m348F70D018E12AF96C0C64F13068B78273EF9CC0 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, uint32_t ___0_keepSizeBefore, uint32_t ___1_keepSizeAfter, uint32_t ___2_keepSizeReserv, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_keepSizeBefore;
		__this->____keepSizeBefore_8 = L_0;
		uint32_t L_1 = ___1_keepSizeAfter;
		__this->____keepSizeAfter_9 = L_1;
		uint32_t L_2 = ___0_keepSizeBefore;
		uint32_t L_3 = ___1_keepSizeAfter;
		uint32_t L_4 = ___2_keepSizeReserv;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____bufferBase_0;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_6 = __this->____blockSize_6;
		uint32_t L_7 = V_0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0043;
		}
	}

IL_0025:
	{
		InWindow_Free_mE79500DD8294640D8D07B4CCAABEA3478C8D9F59(__this, NULL);
		uint32_t L_8 = V_0;
		__this->____blockSize_6 = L_8;
		uint32_t L_9 = __this->____blockSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->____bufferBase_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bufferBase_0), (void*)L_10);
	}

IL_0043:
	{
		uint32_t L_11 = __this->____blockSize_6;
		uint32_t L_12 = ___1_keepSizeAfter;
		__this->____pointerToLastSafePosition_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_SetStream_mA2923B81EECFCCD33F3F89930A23D93C0CA864EC (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->____stream_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_ReleaseStream_m482381F5C8AA26E21CAC15075A07F75307771A2C (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	{
		__this->____stream_1 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_1), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_Init_m49BD38C8F87139C3B231F3DE72AD98B49CB42EDD (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	{
		__this->____bufferOffset_5 = 0;
		__this->____pos_7 = 0;
		__this->____streamPos_10 = 0;
		__this->____streamEndWasReached_3 = (bool)0;
		VirtualActionInvoker0::Invoke(4, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_MovePos_m6A92B9519E2A48751C64F1873072461EEC6F4C16 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____pos_7;
		__this->____pos_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		uint32_t L_1 = __this->____pos_7;
		uint32_t L_2 = __this->____posLimit_2;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_003d;
		}
	}
	{
		uint32_t L_3 = __this->____bufferOffset_5;
		uint32_t L_4 = __this->____pos_7;
		uint32_t L_5 = __this->____pointerToLastSafePosition_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0037;
		}
	}
	{
		InWindow_MoveBlock_mA90B7B9C201BE0CCB0976CEFCAF30FB701C21BE1(__this, NULL);
	}

IL_0037:
	{
		VirtualActionInvoker0::Invoke(4, __this);
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t InWindow_GetIndexByte_m03092ADFA2CFC561925A259301AF683F54EA030F (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InWindow_GetIndexByte_m03092ADFA2CFC561925A259301AF683F54EA030F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____bufferBase_0;
		uint32_t L_1 = __this->____bufferOffset_5;
		uint32_t L_2 = __this->____pos_7;
		int32_t L_3 = ___0_index;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))), ((int64_t)L_3)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), InWindow_GetIndexByte_m03092ADFA2CFC561925A259301AF683F54EA030F_RuntimeMethod_var);
		NullCheck(L_0);
		intptr_t L_4 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))), ((int64_t)L_3))));
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InWindow_GetMatchLen_mF1F60AEC6A33A1AC212B704F52E3502FAF3347E9 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, int32_t ___0_index, uint32_t ___1_distance, uint32_t ___2_limit, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		bool L_0 = __this->____streamEndWasReached_3;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_1 = __this->____pos_7;
		int32_t L_2 = ___0_index;
		uint32_t L_3 = ___2_limit;
		uint32_t L_4 = __this->____streamPos_10;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_1), ((int64_t)L_2))), ((int64_t)(uint64_t)L_3)))) <= ((int64_t)((int64_t)(uint64_t)L_4))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_5 = __this->____streamPos_10;
		uint32_t L_6 = __this->____pos_7;
		int32_t L_7 = ___0_index;
		___2_limit = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_6), ((int64_t)L_7))))));
	}

IL_0032:
	{
		uint32_t L_8 = ___1_distance;
		___1_distance = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
		uint32_t L_9 = __this->____bufferOffset_5;
		uint32_t L_10 = __this->____pos_7;
		int32_t L_11 = ___0_index;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11));
		V_1 = 0;
		goto IL_004f;
	}

IL_004b:
	{
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, 1));
	}

IL_004f:
	{
		uint32_t L_13 = V_1;
		uint32_t L_14 = ___2_limit;
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____bufferBase_0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->____bufferBase_0;
		uint32_t L_21 = V_0;
		uint32_t L_22 = V_1;
		uint32_t L_23 = ___1_distance;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), (int32_t)L_23));
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_19) == ((int32_t)L_25)))
		{
			goto IL_004b;
		}
	}

IL_006b:
	{
		uint32_t L_26 = V_1;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InWindow_GetNumAvailableBytes_mF7A6A5A3D1F2F761DEFEFF4EE3595A4FD1453377 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____streamPos_10;
		uint32_t L_1 = __this->____pos_7;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow_ReduceOffsets_mAAD1FE9CC8957D04102808596FE5D61B124225C6 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, int32_t ___0_subValue, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____bufferOffset_5;
		int32_t L_1 = ___0_subValue;
		__this->____bufferOffset_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, L_1));
		uint32_t L_2 = __this->____posLimit_2;
		int32_t L_3 = ___0_subValue;
		__this->____posLimit_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, L_3));
		uint32_t L_4 = __this->____pos_7;
		int32_t L_5 = ___0_subValue;
		__this->____pos_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, L_5));
		uint32_t L_6 = __this->____streamPos_10;
		int32_t L_7 = ___0_subValue;
		__this->____streamPos_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, L_7));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InWindow__ctor_m8478C6AE6954A0FDECF5D151E8EFFD5D86364587 (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_Create_m35F7227D13C0A8B4AECD99B7FDCCBC76F2FD0C2B (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint32_t ___0_windowSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->____windowSize_2;
		uint32_t L_1 = ___0_windowSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_2 = ___0_windowSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buffer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_3);
	}

IL_0015:
	{
		uint32_t L_4 = ___0_windowSize;
		__this->____windowSize_2 = L_4;
		__this->____pos_1 = 0;
		__this->____streamPos_3 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_Init_m5FE8D60B59443D9AB528325424FB102B974FA125 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_solid, const RuntimeMethod* method) 
{
	{
		OutWindow_ReleaseStream_m54B5EEDDC79A30825EBB022DA82BE6670824DF0B(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->____stream_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_4), (void*)L_0);
		bool L_1 = ___1_solid;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		__this->____streamPos_3 = 0;
		__this->____pos_1 = 0;
		__this->___TrainSize_5 = 0;
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OutWindow_Train_m27791D111A3E80E502B1149A991A9110D97761F1 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t G_B3_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_0);
		V_0 = L_1;
		int64_t L_2 = V_0;
		uint32_t L_3 = __this->____windowSize_2;
		if ((((int64_t)L_2) < ((int64_t)((int64_t)(uint64_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		uint32_t L_4 = __this->____windowSize_2;
		G_B3_0 = L_4;
		goto IL_001b;
	}

IL_0019:
	{
		int64_t L_5 = V_0;
		G_B3_0 = ((uint32_t)(((int32_t)(uint32_t)L_5)));
	}

IL_001b:
	{
		V_1 = G_B3_0;
		uint32_t L_6 = V_1;
		__this->___TrainSize_5 = L_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_stream;
		int64_t L_8 = V_0;
		uint32_t L_9 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker1< int64_t >::Invoke(13, L_7, ((int64_t)il2cpp_codegen_subtract(L_8, ((int64_t)(uint64_t)L_9))));
		int32_t L_10 = 0;
		V_2 = L_10;
		__this->____pos_1 = L_10;
		uint32_t L_11 = V_2;
		__this->____streamPos_3 = L_11;
		goto IL_00af;
	}

IL_003f:
	{
		uint32_t L_12 = __this->____windowSize_2;
		uint32_t L_13 = __this->____pos_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_3;
		if ((!(((uint32_t)L_14) < ((uint32_t)L_15))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_16 = V_1;
		V_3 = L_16;
	}

IL_0053:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____buffer_0;
		uint32_t L_19 = __this->____pos_1;
		uint32_t L_20 = V_3;
		NullCheck(L_17);
		int32_t L_21;
		L_21 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_17, L_18, L_19, L_20);
		V_4 = L_21;
		int32_t L_22 = V_4;
		if (L_22)
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_006e:
	{
		uint32_t L_23 = V_1;
		int32_t L_24 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, L_24));
		uint32_t L_25 = __this->____pos_1;
		int32_t L_26 = V_4;
		__this->____pos_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, L_26));
		uint32_t L_27 = __this->____streamPos_3;
		int32_t L_28 = V_4;
		__this->____streamPos_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, L_28));
		uint32_t L_29 = __this->____pos_1;
		uint32_t L_30 = __this->____windowSize_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_31 = 0;
		V_2 = L_31;
		__this->____pos_1 = L_31;
		uint32_t L_32 = V_2;
		__this->____streamPos_3 = L_32;
	}

IL_00af:
	{
		uint32_t L_33 = V_1;
		if ((!(((uint32_t)L_33) <= ((uint32_t)0))))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_ReleaseStream_m54B5EEDDC79A30825EBB022DA82BE6670824DF0B (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, const RuntimeMethod* method) 
{
	{
		OutWindow_Flush_m2635A24331E2CA6A86E8788AFC95285B0EA32B47(__this, NULL);
		__this->____stream_4 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_4), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_Flush_m2635A24331E2CA6A86E8788AFC95285B0EA32B47 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->____pos_1;
		uint32_t L_1 = __this->____streamPos_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_0;
		uint32_t L_5 = __this->____streamPos_3;
		uint32_t L_6 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_3, L_4, L_5, L_6);
		uint32_t L_7 = __this->____pos_1;
		uint32_t L_8 = __this->____windowSize_2;
		if ((!(((uint32_t)L_7) >= ((uint32_t)L_8))))
		{
			goto IL_003f;
		}
	}
	{
		__this->____pos_1 = 0;
	}

IL_003f:
	{
		uint32_t L_9 = __this->____pos_1;
		__this->____streamPos_3 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_CopyBlock_m7D345E851F8878CD0C62F409BA1BE11A256F94A0 (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint32_t ___0_distance, uint32_t ___1_len, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->____pos_1;
		uint32_t L_1 = ___0_distance;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
		uint32_t L_2 = V_0;
		uint32_t L_3 = __this->____windowSize_2;
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = __this->____windowSize_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		goto IL_0067;
	}

IL_001f:
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = __this->____windowSize_2;
		if ((!(((uint32_t)L_6) >= ((uint32_t)L_7))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 0;
	}

IL_002a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____buffer_0;
		uint32_t L_9 = __this->____pos_1;
		V_1 = L_9;
		uint32_t L_10 = V_1;
		__this->____pos_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		uint32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____buffer_0;
		uint32_t L_13 = V_0;
		uint32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
		NullCheck(L_12);
		uint32_t L_15 = L_14;
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)L_16);
		uint32_t L_17 = __this->____pos_1;
		uint32_t L_18 = __this->____windowSize_2;
		if ((!(((uint32_t)L_17) >= ((uint32_t)L_18))))
		{
			goto IL_0062;
		}
	}
	{
		OutWindow_Flush_m2635A24331E2CA6A86E8788AFC95285B0EA32B47(__this, NULL);
	}

IL_0062:
	{
		uint32_t L_19 = ___1_len;
		___1_len = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, 1));
	}

IL_0067:
	{
		uint32_t L_20 = ___1_len;
		if ((!(((uint32_t)L_20) <= ((uint32_t)0))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow_PutByte_m356D1180AFCA7D7896F0F6C6BE423C3C76D92A5C (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_0;
		uint32_t L_1 = __this->____pos_1;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		__this->____pos_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
		uint32_t L_3 = V_0;
		uint8_t L_4 = ___0_b;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		uint32_t L_5 = __this->____pos_1;
		uint32_t L_6 = __this->____windowSize_2;
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		OutWindow_Flush_m2635A24331E2CA6A86E8788AFC95285B0EA32B47(__this, NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t OutWindow_GetByte_mCEE87FE60CB877A2AEDEC25DC0C1447ABBE22AAF (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, uint32_t ___0_distance, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->____pos_1;
		uint32_t L_1 = ___0_distance;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
		uint32_t L_2 = V_0;
		uint32_t L_3 = __this->____windowSize_2;
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = __this->____windowSize_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
	}

IL_001d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____buffer_0;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		uint32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutWindow__ctor_m9BC771BB23A995BD5CCC14B82E2000045ED11D7F (OutWindow_t51BE3CE2EEB084CB6378DBC5829C7856256591D8* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBuffer__ctor_mDECD32045AF5E5894F36250C332E251F997FA7AF (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, uint32_t ___0_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___0_bufferSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_Buffer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_0), (void*)L_1);
		uint32_t L_2 = ___0_bufferSize;
		__this->___m_BufferSize_3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBuffer_Init_m2C007B4C1C5A47C8EB4EE72447511C4B49B24C38 (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___m_Stream_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_4), (void*)L_0);
		__this->___m_ProcessedSize_6 = ((int64_t)0);
		__this->___m_Limit_2 = 0;
		__this->___m_Pos_1 = 0;
		__this->___m_StreamWasExhausted_5 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InBuffer_ReadBlock_m97D406A24160EC8D3D32BEB25B9304DE5852F35B (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___m_StreamWasExhausted_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		uint64_t L_1 = __this->___m_ProcessedSize_6;
		uint32_t L_2 = __this->___m_Pos_1;
		__this->___m_ProcessedSize_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)(uint64_t)L_2)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___m_Stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___m_Buffer_0;
		uint32_t L_5 = __this->___m_BufferSize_3;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_3, L_4, 0, L_5);
		V_0 = L_6;
		__this->___m_Pos_1 = 0;
		int32_t L_7 = V_0;
		__this->___m_Limit_2 = L_7;
		int32_t L_8 = V_0;
		__this->___m_StreamWasExhausted_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = __this->___m_StreamWasExhausted_5;
		return (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBuffer_ReleaseStream_mE1C8B5A6FB3BB1C308D8961359B6794DE1F41647 (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Stream_4 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_4), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InBuffer_ReadByte_m7BC12BCB60507D0DC1A798A21A914BC70E0DFC87 (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_Pos_1;
		uint32_t L_1 = __this->___m_Limit_2;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		bool L_2;
		L_2 = InBuffer_ReadBlock_m97D406A24160EC8D3D32BEB25B9304DE5852F35B(__this, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		uint32_t L_4 = __this->___m_Pos_1;
		V_0 = L_4;
		uint32_t L_5 = V_0;
		__this->___m_Pos_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
		uint32_t L_6 = V_0;
		NullCheck(L_3);
		uint32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		___0_b = L_8;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t InBuffer_ReadByte_m452EA7B7C46D559C29931FB9A19CC612033C2E4D (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_Pos_1;
		uint32_t L_1 = __this->___m_Limit_2;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_001c;
		}
	}
	{
		bool L_2;
		L_2 = InBuffer_ReadBlock_m97D406A24160EC8D3D32BEB25B9304DE5852F35B(__this, NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return (uint8_t)((int32_t)255);
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		uint32_t L_4 = __this->___m_Pos_1;
		V_0 = L_4;
		uint32_t L_5 = V_0;
		__this->___m_Pos_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
		uint32_t L_6 = V_0;
		NullCheck(L_3);
		uint32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InBuffer_GetProcessedSize_m835407648BC247F01264BF22A5E52343592FC103 (InBuffer_t44B08972D92B9D72479A0600BF261BC1029CD6DB* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_ProcessedSize_6;
		uint32_t L_1 = __this->___m_Pos_1;
		return ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)(uint64_t)L_1)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer__ctor_mD6C630B2D84F9287BAE5A186391FEB77644F053B (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, uint32_t ___0_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___0_bufferSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_Buffer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_0), (void*)L_1);
		uint32_t L_2 = ___0_bufferSize;
		__this->___m_BufferSize_2 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_SetStream_m6B89E962895B15C5A47A243712A314539D2641B4 (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___m_Stream_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_FlushStream_mB4556DCB5DE8DD1F81FF9BA2123759846C20B3D7 (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_Stream_3;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_CloseStream_m6EA6ECFAD8B8BD27AD3879BC3C5D508FFDC5C18C (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_Stream_3;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(18, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_ReleaseStream_m7662D5EBE3B59227AC068DD5F5FFC0AE36E79A7C (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Stream_3 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_3), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_Init_m51F3F9D09FE9852EAC071A2A88075FC0CF3EA12C (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_ProcessedSize_4 = ((int64_t)0);
		__this->___m_Pos_1 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_WriteByte_m7DDEC8A7701220B29AC4D52D8B5C0352CB5BE7B8 (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_Buffer_0;
		uint32_t L_1 = __this->___m_Pos_1;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		__this->___m_Pos_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
		uint32_t L_3 = V_0;
		uint8_t L_4 = ___0_b;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		uint32_t L_5 = __this->___m_Pos_1;
		uint32_t L_6 = __this->___m_BufferSize_2;
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		OutBuffer_FlushData_m2A7C1CBF0DBE20768AB2D6682BF79B7D7B1576AA(__this, NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutBuffer_FlushData_m2A7C1CBF0DBE20768AB2D6682BF79B7D7B1576AA (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___m_Pos_1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___m_Stream_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Buffer_0;
		uint32_t L_3 = __this->___m_Pos_1;
		NullCheck(L_1);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_1, L_2, 0, L_3);
		__this->___m_Pos_1 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OutBuffer_GetProcessedSize_mF5AE4B5F45931048F4B603012174B8DAC01DC3FF (OutBuffer_tC4BF2162944039DAF570F1CDEBB570DAA498FC6E* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_ProcessedSize_4;
		uint32_t L_1 = __this->___m_Pos_1;
		return ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)(uint64_t)L_1)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchForm__ctor_mCFE8D5BA831DF31A0A37CC16DA898C2230DF989A (SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* __this, String_t* ___0_idString, int32_t ___1_type, bool ___2_multi, int32_t ___3_minLen, int32_t ___4_maxLen, String_t* ___5_postCharSet, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_idString;
		__this->___IDString_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IDString_0), (void*)L_0);
		int32_t L_1 = ___1_type;
		__this->___Type_1 = L_1;
		bool L_2 = ___2_multi;
		__this->___Multi_2 = L_2;
		int32_t L_3 = ___3_minLen;
		__this->___MinLen_3 = L_3;
		int32_t L_4 = ___4_maxLen;
		__this->___MaxLen_4 = L_4;
		String_t* L_5 = ___5_postCharSet;
		__this->___PostCharSet_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PostCharSet_5), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchForm__ctor_mBDCFE6EC2BBFE6D9F1922C4BB2B27AA58BF07F37 (SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* __this, String_t* ___0_idString, int32_t ___1_type, bool ___2_multi, int32_t ___3_minLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_idString;
		int32_t L_1 = ___1_type;
		bool L_2 = ___2_multi;
		int32_t L_3 = ___3_minLen;
		SwitchForm__ctor_mCFE8D5BA831DF31A0A37CC16DA898C2230DF989A(__this, L_0, L_1, L_2, L_3, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchForm__ctor_m2D335E56E9EBE04D521033C419196273AE8968DA (SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* __this, String_t* ___0_idString, int32_t ___1_type, bool ___2_multi, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_idString;
		int32_t L_1 = ___1_type;
		bool L_2 = ___2_multi;
		SwitchForm__ctor_mBDCFE6EC2BBFE6D9F1922C4BB2B27AA58BF07F37(__this, L_0, L_1, L_2, 0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchResult__ctor_m523FEF730A65162538D253FC15ABF00D10FF4101 (SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->___PostStrings_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PostStrings_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___ThereIs_0 = (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mAB2A2DCF9957C4FAD4EDEBCD8DBBDD55F12025C8 (Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7* __this, int32_t ___0_numSwitches, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->___NonSwitchStrings_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NonSwitchStrings_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___0_numSwitches;
		SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868* L_2 = (SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868*)(SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868*)SZArrayNew(SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->____switches_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____switches_1), (void*)L_2);
		V_0 = 0;
		goto IL_0032;
	}

IL_0021:
	{
		SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868* L_3 = __this->____switches_1;
		int32_t L_4 = V_0;
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_5 = (SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378*)il2cpp_codegen_object_new(SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378_il2cpp_TypeInfo_var);
		SwitchResult__ctor_m523FEF730A65162538D253FC15ABF00D10FF4101(L_5, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378*)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0032:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_numSwitches;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9 (Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7* __this, String_t* ___0_srcString, SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* ___1_switchForms, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* V_4 = NULL;
	SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	String_t* V_13 = NULL;
	int32_t V_14 = 0;
	Il2CppChar V_15 = 0x0;
	{
		String_t* L_0 = ___0_srcString;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_1 = 0;
		String_t* L_3 = ___0_srcString;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		bool L_6;
		L_6 = Parser_IsItSwitchChar_mE80D21599853E7EBCF91ACA2ACCEF40821D17FDA(L_5, NULL);
		if (L_6)
		{
			goto IL_022a;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		String_t* L_7 = ___0_srcString;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		bool L_10;
		L_10 = Parser_IsItSwitchChar_mE80D21599853E7EBCF91ACA2ACCEF40821D17FDA(L_9, NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		V_2 = 0;
		V_3 = (-1);
		V_8 = 0;
		goto IL_007a;
	}

IL_003c:
	{
		SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* L_12 = ___1_switchForms;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = L_15->___IDString_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		V_9 = L_17;
		int32_t L_18 = V_9;
		int32_t L_19 = V_3;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_9;
		int32_t L_22 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))) > ((int32_t)L_22)))
		{
			goto IL_0074;
		}
	}
	{
		SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* L_23 = ___1_switchForms;
		int32_t L_24 = V_8;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		String_t* L_27 = L_26->___IDString_0;
		String_t* L_28 = ___0_srcString;
		int32_t L_29 = V_1;
		int32_t L_30 = V_9;
		int32_t L_31;
		L_31 = String_Compare_mA704D45BCEE79B6C76F2B1ABF95DF0161055867D(L_27, 0, L_28, L_29, L_30, (bool)1, NULL);
		if (L_31)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_32 = V_8;
		V_2 = L_32;
		int32_t L_33 = V_9;
		V_3 = L_33;
	}

IL_0074:
	{
		int32_t L_34 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_007a:
	{
		int32_t L_35 = V_8;
		SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868* L_36 = __this->____switches_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_37 = V_3;
		if ((!(((uint32_t)L_37) == ((uint32_t)(-1)))))
		{
			goto IL_0095;
		}
	}
	{
		Exception_t* L_38 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8E1ACD6C3A8131B80907D4684980B256280D6BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9_RuntimeMethod_var)));
	}

IL_0095:
	{
		SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868* L_39 = __this->____switches_1;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_4 = L_42;
		SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* L_43 = ___1_switchForms;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_47 = V_5;
		NullCheck(L_47);
		bool L_48 = L_47->___Multi_2;
		if (L_48)
		{
			goto IL_00c1;
		}
	}
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_49 = V_4;
		NullCheck(L_49);
		bool L_50 = L_49->___ThereIs_0;
		if (!L_50)
		{
			goto IL_00c1;
		}
	}
	{
		Exception_t* L_51 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C96C5B35EE9A66EA1C437FEA95D4ECCE980D966)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9_RuntimeMethod_var)));
	}

IL_00c1:
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_52 = V_4;
		NullCheck(L_52);
		L_52->___ThereIs_0 = (bool)1;
		int32_t L_53 = V_1;
		int32_t L_54 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		int32_t L_55 = V_0;
		int32_t L_56 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_55, L_56));
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_57 = V_5;
		NullCheck(L_57);
		int32_t L_58 = L_57->___Type_1;
		V_7 = L_58;
		int32_t L_59 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_59, 1)))
		{
			case 0:
			{
				goto IL_00f9;
			}
			case 1:
			{
				goto IL_0195;
			}
			case 2:
			{
				goto IL_0195;
			}
			case 3:
			{
				goto IL_0131;
			}
		}
	}
	{
		goto IL_022a;
	}

IL_00f9:
	{
		int32_t L_60 = V_6;
		if (L_60)
		{
			goto IL_010a;
		}
	}
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_61 = V_4;
		NullCheck(L_61);
		L_61->___WithMinus_1 = (bool)0;
		goto IL_022a;
	}

IL_010a:
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_62 = V_4;
		String_t* L_63 = ___0_srcString;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		Il2CppChar L_65;
		L_65 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_63, L_64, NULL);
		NullCheck(L_62);
		L_62->___WithMinus_1 = (bool)((((int32_t)L_65) == ((int32_t)((int32_t)45)))? 1 : 0);
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_66 = V_4;
		NullCheck(L_66);
		bool L_67 = L_66->___WithMinus_1;
		if (!L_67)
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		goto IL_022a;
	}

IL_0131:
	{
		int32_t L_69 = V_6;
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_70 = V_5;
		NullCheck(L_70);
		int32_t L_71 = L_70->___MinLen_3;
		if ((((int32_t)L_69) >= ((int32_t)L_71)))
		{
			goto IL_0147;
		}
	}
	{
		Exception_t* L_72 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_72, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B00C8B90DBA94C65B226C2640180E9C03A0292D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9_RuntimeMethod_var)));
	}

IL_0147:
	{
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_73 = V_5;
		NullCheck(L_73);
		String_t* L_74 = L_73->___PostCharSet_5;
		V_10 = L_74;
		int32_t L_75 = V_6;
		if (L_75)
		{
			goto IL_0161;
		}
	}
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_76 = V_4;
		NullCheck(L_76);
		L_76->___PostCharIndex_3 = (-1);
		goto IL_022a;
	}

IL_0161:
	{
		String_t* L_77 = V_10;
		String_t* L_78 = ___0_srcString;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		Il2CppChar L_80;
		L_80 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_78, L_79, NULL);
		NullCheck(L_77);
		int32_t L_81;
		L_81 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_77, L_80, NULL);
		V_11 = L_81;
		int32_t L_82 = V_11;
		if ((((int32_t)L_82) >= ((int32_t)0)))
		{
			goto IL_0183;
		}
	}
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_83 = V_4;
		NullCheck(L_83);
		L_83->___PostCharIndex_3 = (-1);
		goto IL_022a;
	}

IL_0183:
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_84 = V_4;
		int32_t L_85 = V_11;
		NullCheck(L_84);
		L_84->___PostCharIndex_3 = L_85;
		int32_t L_86 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		goto IL_022a;
	}

IL_0195:
	{
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_87 = V_5;
		NullCheck(L_87);
		int32_t L_88 = L_87->___MinLen_3;
		V_12 = L_88;
		int32_t L_89 = V_6;
		int32_t L_90 = V_12;
		if ((((int32_t)L_89) >= ((int32_t)L_90)))
		{
			goto IL_01af;
		}
	}
	{
		Exception_t* L_91 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_91, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B00C8B90DBA94C65B226C2640180E9C03A0292D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9_RuntimeMethod_var)));
	}

IL_01af:
	{
		int32_t L_92 = V_7;
		if ((!(((uint32_t)L_92) == ((uint32_t)3))))
		{
			goto IL_01ca;
		}
	}
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_93 = V_4;
		NullCheck(L_93);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_94 = L_93->___PostStrings_2;
		String_t* L_95 = ___0_srcString;
		int32_t L_96 = V_1;
		NullCheck(L_95);
		String_t* L_97;
		L_97 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_95, L_96, NULL);
		NullCheck(L_94);
		int32_t L_98;
		L_98 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29, L_94, L_97);
		return (bool)1;
	}

IL_01ca:
	{
		String_t* L_99 = ___0_srcString;
		int32_t L_100 = V_1;
		int32_t L_101 = V_12;
		NullCheck(L_99);
		String_t* L_102;
		L_102 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_99, L_100, L_101, NULL);
		V_13 = L_102;
		int32_t L_103 = V_1;
		int32_t L_104 = V_12;
		V_1 = ((int32_t)il2cpp_codegen_add(L_103, L_104));
		int32_t L_105 = V_12;
		V_14 = L_105;
		goto IL_020c;
	}

IL_01e0:
	{
		String_t* L_106 = ___0_srcString;
		int32_t L_107 = V_1;
		NullCheck(L_106);
		Il2CppChar L_108;
		L_108 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_106, L_107, NULL);
		V_15 = L_108;
		Il2CppChar L_109 = V_15;
		bool L_110;
		L_110 = Parser_IsItSwitchChar_mE80D21599853E7EBCF91ACA2ACCEF40821D17FDA(L_109, NULL);
		if (L_110)
		{
			goto IL_021b;
		}
	}
	{
		String_t* L_111 = V_13;
		String_t* L_112;
		L_112 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_15), NULL);
		String_t* L_113;
		L_113 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_111, L_112, NULL);
		V_13 = L_113;
		int32_t L_114 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_115 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_020c:
	{
		int32_t L_116 = V_14;
		SwitchForm_tA5F7E9EE202398B15678741B1A6E7BA8462A70F3* L_117 = V_5;
		NullCheck(L_117);
		int32_t L_118 = L_117->___MaxLen_4;
		if ((((int32_t)L_116) >= ((int32_t)L_118)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_119 = V_1;
		int32_t L_120 = V_0;
		if ((((int32_t)L_119) < ((int32_t)L_120)))
		{
			goto IL_01e0;
		}
	}

IL_021b:
	{
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_121 = V_4;
		NullCheck(L_121);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_122 = L_121->___PostStrings_2;
		String_t* L_123 = V_13;
		NullCheck(L_122);
		int32_t L_124;
		L_124 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29, L_122, L_123);
	}

IL_022a:
	{
		int32_t L_125 = V_1;
		int32_t L_126 = V_0;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_ParseStrings_mC602D41B9E7B44D1181C5923578614C326096530 (Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7* __this, SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* ___0_switchForms, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_commandStrings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_commandStrings;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = (bool)0;
		V_2 = 0;
		goto IL_004c;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_commandStrings;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->___NonSwitchStrings_0;
		String_t* L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29, L_6, L_7);
		goto IL_0048;
	}

IL_0020:
	{
		String_t* L_9 = V_3;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		if (!L_10)
		{
			goto IL_0031;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0048;
	}

IL_0031:
	{
		String_t* L_11 = V_3;
		SwitchFormU5BU5D_tD925BC1BCECD57C96B1861C54BEB98364D5857D6* L_12 = ___0_switchForms;
		bool L_13;
		L_13 = Parser_ParseString_m832D4F0782E5D51AC5FEC018983307309D2582E9(__this, L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0048;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_14 = __this->___NonSwitchStrings_0;
		String_t* L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29, L_14, L_15);
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004c:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* Parser_get_Item_mDF33E3BA58ABE9BECF4FE39D9BA8EE2E33FD6A85 (Parser_t353AA0493B3F8F7CFDB1B367FAABB43F2D9B2BC7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		SwitchResultU5BU5D_t60BCC5817E11ACCAC9C9B405A3975BBD0127E868* L_0 = __this->____switches_1;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SwitchResult_t435C6DEC520AB8C935DCB28C9C5975EF498A0378* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_ParseCommand_m9BF84FE2DBB1AAF7A5482E3E4936283CCF0392DB (CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425* ___0_commandForms, String_t* ___1_commandString, String_t** ___2_postString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425* L_0 = ___0_commandForms;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4 = L_3->___IDString_0;
		V_1 = L_4;
		CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425* L_5 = ___0_commandForms;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___PostStringMode_1;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_10 = ___1_commandString;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0042;
		}
	}
	{
		String_t** L_13 = ___2_postString;
		String_t* L_14 = ___1_commandString;
		String_t* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, L_16, NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_17);
		int32_t L_18 = V_0;
		return L_18;
	}

IL_0030:
	{
		String_t* L_19 = ___1_commandString;
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0042;
		}
	}
	{
		String_t** L_22 = ___2_postString;
		*((RuntimeObject**)L_22) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_22, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		int32_t L_23 = V_0;
		return L_23;
	}

IL_0042:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0046:
	{
		int32_t L_25 = V_0;
		CommandFormU5BU5D_t6DD92346DE1998C84FC40F0BC704A48589720425* L_26 = ___0_commandForms;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		String_t** L_27 = ___2_postString;
		*((RuntimeObject**)L_27) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseSubCharsCommand_m0E857577F2CF3F13E1C64B7CEDB3FACA790AE595 (int32_t ___0_numForms, CommandSubCharsSetU5BU5D_tAC1A62B9329678287ADE9BCED68153B4B81F3167* ___1_forms, String_t* ___2_commandString, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___3_indices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___3_indices;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(31, L_0);
		V_0 = 0;
		V_1 = 0;
		goto IL_008b;
	}

IL_000c:
	{
		CommandSubCharsSetU5BU5D_tAC1A62B9329678287ADE9BCED68153B4B81F3167* L_1 = ___1_forms;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		V_3 = (-1);
		CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Chars_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_4 = L_7;
		V_5 = 0;
		goto IL_0066;
	}

IL_0024:
	{
		CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = L_8->___Chars_0;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		V_6 = L_11;
		String_t* L_12 = ___2_commandString;
		Il2CppChar L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_12, L_13, NULL);
		V_7 = L_14;
		int32_t L_15 = V_7;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		String_t* L_17 = ___2_commandString;
		Il2CppChar L_18 = V_6;
		int32_t L_19 = V_7;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_17, L_18, ((int32_t)il2cpp_codegen_add(L_19, 1)), NULL);
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0059:
	{
		int32_t L_21 = V_5;
		V_3 = L_21;
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0060:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0066:
	{
		int32_t L_24 = V_5;
		int32_t L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_26 = V_3;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_007a;
		}
	}
	{
		CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* L_27 = V_2;
		NullCheck(L_27);
		bool L_28 = L_27->___EmptyAllowed_1;
		if (L_28)
		{
			goto IL_007a;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_29 = ___3_indices;
		int32_t L_30 = V_3;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		int32_t L_33;
		L_33 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29, L_29, L_32);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_008b:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = ___0_numForms;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_37 = V_0;
		String_t* L_38 = ___2_commandString;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		return (bool)((((int32_t)L_37) == ((int32_t)L_39))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsItSwitchChar_mE80D21599853E7EBCF91ACA2ACCEF40821D17FDA (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_c;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)45))))
		{
			goto IL_000b;
		}
	}
	{
		Il2CppChar L_1 = ___0_c;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandForm__ctor_mC773CD0E475793F162A0A404B6A6D85FDD9E1638 (CommandForm_t0DE279CD3E79EC0CEEB982BBC0C8EC264E52C901* __this, String_t* ___0_idString, bool ___1_postStringMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___IDString_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IDString_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_idString;
		__this->___IDString_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IDString_0), (void*)L_0);
		bool L_1 = ___1_postStringMode;
		__this->___PostStringMode_1 = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandSubCharsSet__ctor_m883BAB21B1C6330703C417ACEAF0BFEB0E84317C (CommandSubCharsSet_t69521CA56E8871302556D10474DBAFC07000544E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___Chars_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Chars_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Encoder_SetStream_m0BD08DAED3E0144EBC55E6043391E94A30EC46E7_inline (Encoder_t4B5B8355CCA72AF23FCFDFD5F3EAB8CE946583FF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___Stream_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LenPriceTableEncoder_SetTableSize_m4B8DBF8FF347E563EDC756B7BE6DB5BADF943365_inline (LenPriceTableEncoder_t1E5CFE472294425FD72D0C4F409EB40E59EF9EE4* __this, uint32_t ___0_tableSize, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_tableSize;
		__this->____tableSize_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Encoder_SetWriteEndMarkerMode_m1105355FDDE121190FB3E090A948499A7F027405_inline (Encoder_tA1567093F135EF2D8A60D8C95A1BAD7C7A31E1A3* __this, bool ___0_writeEndMarker, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_writeEndMarker;
		__this->____writeEndMark_48 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InWindow_SetStream_mA2923B81EECFCCD33F3F89930A23D93C0CA864EC_inline (InWindow_tCAA8BCB07BC8BCA052C529B45EB36AB84AF892AF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->____stream_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
