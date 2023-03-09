using System;
using UnityEngine;

namespace InspectorUtils.Runtime
{
    [AttributeUsage(AttributeTargets.Method|AttributeTargets.Field|AttributeTargets.Property)]
    public class ShowIfAttribute : PropertyAttribute
    {
        public string Name { get; private set; }

        public ShowIfAttribute(string name)
        {
            Name = name;
        }
    }
}