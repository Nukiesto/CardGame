using ExitGames.Client.Photon;
using Main;
using Main.BattleCardSpace;
using SurvDI.Application.Interfaces;
using UnityEngine;
using UsefulScripts.NetScripts.Data;

namespace Network
{
    [Bind]
    public class RegisterTypeNetwork : MonoBehaviour, IPreInit
    {
        public void PreInit()
        {
            byte code = 255;
            //Register<object>(ref code);
            Register<PlayerData>(ref code);
            //Register<NetPlayerEventData>(ref code);
        }

        private static void Register<T>(ref byte code) where T : class
        {
            Protocol.TryRegisterType(typeof(T), code, ByteConvert.SerializeObject<T>, ByteConvert.DeserializeObject<T>);
            code--;
        }
        private static void RegisterS<T>(ref byte code) where T : struct
        {
            Protocol.TryRegisterType(typeof(T), code, ByteConvert.SerializeObjectStruct<T>, s=> ByteConvert.DeserializeObjectStruct<T>(s));
            code--;
        }
    }
}