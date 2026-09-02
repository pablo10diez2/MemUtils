#include "Includes/Cache.h"
#include "Includes/SystemImpl.h"

namespace MemUtils{
    
SystemImpl::SystemImpl(){
    init();
}

SystemImpl::~SystemImpl() {}

void SystemImpl::init(){
    m_cores = { 1,2,3,4 };
    
    m_caches.reserve(4);

    for(int i{0}; i < 4; ++i){
        m_caches.emplace_back(i, i+1, Cache::Instruction, 64);
    }
}

const std::vector<int>& SystemImpl::get_cores() const {
    return this->m_cores;
}

const std::vector<Cache>& SystemImpl::get_caches() const {
    return m_caches;
}

}
