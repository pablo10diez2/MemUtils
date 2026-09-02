#include <vector>

namespace MemUtils{
    
class Cache;
class Core;

class SystemImpl {
    private:
        std::vector<Core> m_cores;
        std::vector<Cache> m_caches;

        void init();
    
    public:
        SystemImpl();
        ~SystemImpl();

        const std::vector<Core>& get_cores() const;
        const std::vector<Cache>& get_caches() const;
};
}
