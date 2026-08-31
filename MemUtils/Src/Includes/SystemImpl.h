#include <vector>

namespace MemUtils{
    
class SystemImpl {
    private:
        std::vector<int> cores;
        std::vector<int> caches;
            
        void init();
    
    public:
        SystemImpl();
        ~SystemImpl();

        const std::vector<int>& get_cores() const;
        const std::vector<int>& get_caches() const;
};
}
