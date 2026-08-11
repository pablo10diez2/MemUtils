#include "Includes/System_impl.h"

namespace MemUtils{
    
System_impl::System_impl(){
    init();
}

System_impl::~System_impl() { 
    
}

void System_impl::init(){
    this->cores = { 1,2,3,4 };
    this->caches = { 5,6,7,8 };
}

const std::vector<int>& System_impl::get_cores(){
    return this->cores;
}

const std::vector<int>& System_impl::get_caches(){
    return this->caches;
}

}
