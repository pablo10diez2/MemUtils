#include "Includes/System_impl.h"
#include "Includes/System.h"

namespace MemUtils { 
    
System::System() : system_impl( new MemUtils::System_impl ) {

}
    
const System& System::get_instance(){
    static System instance;

    return instance;
}

System::~System(){
    delete system_impl;
}

const std::vector<int>& System::get_cores() const {
    return system_impl->get_cores();
}

const std::vector<int>& System::get_caches() const {
    return system_impl->get_caches();
}

}
