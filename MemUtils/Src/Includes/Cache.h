#include <cstring>

namespace MemUtils {

class Cache {
    public:
        enum Type{
            Instruction,
            Data,
            Unified
        };
    
    private:
        int m_id;
        int m_level;
        Type m_type;
        std::size_t m_size;

    public:
        Cache(int id, int level, Type type, std::size_t size);

        Cache(const Cache& other) = default;
        Cache& operator=(const Cache& other) = default;

        Cache(Cache&& other) = default;
        Cache& operator=(Cache&& other) = default;
        
        int get_id() const;
        int get_level() const;
        Type get_type() const;
        std::size_t get_size() const; 
};
}
