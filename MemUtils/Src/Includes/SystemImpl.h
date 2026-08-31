#include <vector>

namespace MemUtils{
    
class SystemImpl {
    private:
        std::vector<int> m_cores;
        std::vector<int> m_caches;
            
        void init();
    
    public:
        SystemImpl();
        ~SystemImpl();

        const std::vector<int>& get_cores() const;
        const std::vector<int>& get_caches() const;
};
}
