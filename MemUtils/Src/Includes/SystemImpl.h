#include <vector>

namespace MemUtils{
    
class Cache;

class SystemImpl {
    private:
        std::vector<int> m_cores;
        std::vector<Cache> m_caches;
            
        void init();
    
    public:
        SystemImpl();
        ~SystemImpl();

        const std::vector<int>& get_cores() const;
        const std::vector<Cache>& get_caches() const;
};
}
