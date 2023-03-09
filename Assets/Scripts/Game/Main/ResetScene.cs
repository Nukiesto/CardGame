using System;
using System.Reflection;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Main
{
    public class ResetScene : MonoBehaviour
    {
        public void ResetSceneSet()
        {
            SceneManager.LoadScene("Game");
            ClearLog();
            Debug.Log("<color=#FF0000>Scene reloaded</color>");
        }
#if UNITY_EDITOR
        private void Update()
        {
            if (!Input.GetKey(KeyCode.F12)) return;
            
            ResetSceneSet();
            Destroy(gameObject);
        }
#endif
        public void ClearLog()
        {
#if UNITY_EDITOR
            var assembly = Assembly.GetAssembly(typeof(UnityEditor.Editor));
            var type = assembly.GetType("UnityEditor.LogEntries");
            var method = type.GetMethod("Clear");
            method.Invoke(new object(), null);
#endif
        }
    }
}