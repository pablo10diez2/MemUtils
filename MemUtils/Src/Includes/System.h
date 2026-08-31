#include <vector>

namespace MemUtils{

class System_impl;

class System {
    private:
        System_impl* system_impl;

        System();

    public:

        System(const System&) = delete;                 // copy constructor deleted
        System& operator=(const System&) = delete;      // copy assignment deleted
                                                        
        System(System&&);                               // move constructor added
        System& operator=(System&&);                    // move assignment added

        static const System& get_instance();
        
        ~System();

        const std::vector<int>& get_cores() const;
        const std::vector<int>& get_caches() const;
            
        //void update_cores();
        //void update_caches();
};

}
