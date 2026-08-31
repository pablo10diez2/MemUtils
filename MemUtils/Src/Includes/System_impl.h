#include <vector>

namespace MemUtils{
    
class System_impl {
    private:
        std::vector<int> cores;
        std::vector<int> caches;
            
        void init();
    
    public:
        System_impl();
        ~System_impl();

        const std::vector<int>& get_cores() const;
        const std::vector<int>& get_caches() const;
};

}
