#ifndef CORE
#define CORE

#include <iostream>

namespace MemUtils {

class Core {
    private:
        int m_id;

    public:
        explicit Core(int id);

        int get_id() const;
};

std::ostream& operator << (std::ostream& ,const Core& core);

}

#endif
