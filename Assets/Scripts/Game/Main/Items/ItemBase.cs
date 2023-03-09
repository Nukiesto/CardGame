using UnityEngine;

namespace Main.Items
{
    public abstract class ItemBase : ScriptableObject
    {
        public Sprite icon;
        public string itemName;
        [TextArea] public string description;
        
        public abstract ItemType ItemType { get; }
    }
}