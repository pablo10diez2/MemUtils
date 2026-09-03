#ifndef SYSTEM_IMPL
#define SYSTEM_IMPL_

#include <vector>
#include <unordered_map>

namespace MemUtils{
    
class Cache;
class Core;

class SystemImpl {
    private:
        std::vector<Core> m_cores;
        std::vector<Cache> m_caches;
        
        std::unordered_map<int, Core*> m_associated_cores;
        std::unordered_map<int, Cache*> m_accessible_caches;

        void init();
    
    public:
        SystemImpl();
        ~SystemImpl();

        const std::vector<Core>& get_cores() const;
        const std::vector<Cache>& get_caches() const;
};
}

#endif
