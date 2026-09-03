#include "Includes/Core.h"

namespace MemUtils {
    
Core::Core(int id) : m_id{id} {}
    
int Core::get_id() const {
    return m_id;
}

std::ostream& operator << (std::ostream& out, const Core& core){
    out << "Core, id: " << core.get_id(); 
    return out;
}

}
