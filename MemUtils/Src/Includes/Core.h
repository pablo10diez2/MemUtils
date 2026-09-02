#ifndef CORE
#define

namespace MemUtils {

class Core {
    private:
        int m_id;

    public:
        explicit Core(int id);

        int get_id() const;
};

}

#endif
