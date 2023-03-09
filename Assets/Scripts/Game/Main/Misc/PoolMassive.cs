using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Main.Misc
{
    public class PoolMassive
    {
        private readonly List<PoolObjectLocal> _all = new();
        private readonly bool _hasParent;
        private readonly Transform _parentPool;
        private readonly GameObject _prefab;

        public PoolMassive(int count, Transform parentPool, GameObject prefab)
        {
            _hasParent = true;
            _parentPool = parentPool;
            _prefab = prefab;
            for (var i = 0; i < count; i++)
                AddNewPoolObject();
        }

        public PoolMassive(int count, GameObject prefab)
        {
            _hasParent = false;
            _prefab = prefab;
            for (var i = 0; i < count; i++)
                AddNewPoolObject();
        }

        public PoolMassive(int count, GameObject prefab, string nameParent)
        {
            _parentPool = new GameObject(nameParent).transform;
            _hasParent = true;
            _prefab = prefab;
            for (var i = 0; i < count; i++)
                AddNewPoolObject();
        }

        private PoolObjectLocal AddNewPoolObject()
        {
            var instance = Object.Instantiate(_prefab);
            if (_hasParent)
            {
                instance.transform.SetParent(_parentPool);
                instance.transform.position = _parentPool.position;
            }
            else
            {
                instance.transform.position = Vector3.zero;
            }

            instance.SetActive(false);
            var free = instance.GetComponent<PoolObjectLocal>();
            _all.Add(free);

            return free;
        }

        public PoolObjectLocal Get(Vector3 pos)
        {
            var free = _all.FirstOrDefault(poolObj =>
                !poolObj.gameObject.activeInHierarchy); //Получаем пул объект который отключен

            if (free == null)
                free = AddNewPoolObject();
            free.gameObject.SetActive(true);
            free.transform.position = pos;
            return free;
        }

        public void DisableAll()
        {
            foreach (var poolObjectLocal in _all.Where(s => s.gameObject.activeInHierarchy))
                poolObjectLocal.gameObject.SetActive(false); //Выключаем их
        }

        public void Dispose()
        {
            foreach (var poolObjectLocal in _all)
                if (poolObjectLocal.gameObject != null)
                    Object.Destroy(poolObjectLocal.gameObject);
        }
    }
}