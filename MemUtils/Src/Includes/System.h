#ifndef SYSTEM
#define SYSTEM

#include <vector>
#include <memory>

namespace MemUtils{

class SystemImpl;

class System {
    private:
        std::unique_ptr<SystemImpl> m_system_impl;

        System();

    public:

        System(const System&) = delete;                 // copy constructor deleted
        System& operator=(const System&) = delete;      // copy assignment deleted
                                                        
        System(System&&) = delete;                      // move constructor deleted
        System& operator=(System&&) = delete;           // move assignment deleted

        static const System& get_instance();
        
        ~System();

        const std::vector<Core>& get_cores() const;
        const std::vector<Cache>& get_caches() const;
            
        //void update_cores();
        //void update_caches();
};

}

#endif
