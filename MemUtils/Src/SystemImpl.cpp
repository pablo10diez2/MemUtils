#include "Includes/SystemImpl.h"

namespace MemUtils{
    
SystemImpl::SystemImpl(){
    init();
}

SystemImpl::~SystemImpl() {}

void SystemImpl::init(){
    this->m_cores = { 1,2,3,4 };
    this->m_caches = { 5,6,7,8 };
}

const std::vector<int>& SystemImpl::get_cores() const {
    return this->m_cores;
}

const std::vector<int>& SystemImpl::get_caches() const {
    return this->m_caches;
}

}
