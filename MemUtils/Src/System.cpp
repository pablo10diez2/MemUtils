#include "Includes/SystemImpl.h"
#include "Includes/System.h"

namespace MemUtils { 
    
System::System() : system_impl( std::make_unique<MemUtils::SystemImpl>() ) {}

const System& System::get_instance(){
    static System instance;

    return instance;
}

System::~System() {}

const std::vector<int>& System::get_cores() const {
    return system_impl->get_cores();
}

const std::vector<int>& System::get_caches() const {
    return system_impl->get_caches();
}

}
