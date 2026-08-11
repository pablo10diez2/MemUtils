#include <vector>

namespace MemUtils{

class System_impl;

class System {
    private:
        System();
            
        System(const System&) = delete;
        System& operator=(const System&) = delete;

        System_impl* system_impl;

    public:
        static const System& get_instance();
        ~System();

        const std::vector<int>& get_cores() const;
        const std::vector<int>& get_caches() const;
            
        //void update_cores();
        //void update_caches();
};

}
