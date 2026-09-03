#include "Includes/Cache.h"
#include "Includes/Core.h"
#include "Includes/SystemImpl.h"

namespace MemUtils{
    
SystemImpl::SystemImpl(){
    init();
}

SystemImpl::~SystemImpl() {}

void SystemImpl::init(){
    m_caches.reserve(4);
    m_cores.reserve(4);

    for(int i{0}; i < 4; ++i){
        m_caches.emplace_back(i, i+1, Cache::Instruction, 64);
    }
    
    for(int i{0}; i < 2; ++i){
        m_cores.emplace_back(i);
    }


}

const std::vector<Core>& SystemImpl::get_cores() const {
    return this->m_cores;
}

const std::vector<Cache>& SystemImpl::get_caches() const {
    return m_caches;
}

}
