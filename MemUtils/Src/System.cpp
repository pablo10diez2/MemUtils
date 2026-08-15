#include "Includes/System_impl.h"
#include "Includes/System.h"

namespace MemUtils { 
    
System::System() : system_impl( new MemUtils::System_impl ) {

}

System::System(System&& other) : system_impl( other.system_impl ) {         // move constructor
    other.system_impl = nullptr;
}

System& System::operator=(System&& other){                                  // move assignment
    if( &other == this ){
        return *this;
    }
    
    delete system_impl;

    this->system_impl = other.system_impl;
    other.system_impl = nullptr;

    return *this;
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
