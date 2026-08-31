#include "Includes/Cache.h"

Cache::Cache(int id, int level, Cache::Type type, std::size_t size) : m_id{id}, m_level{level}, 
    m_type(type), m_size(size) {}

int Cache::get_id() const {
    return m_id;
}

int Cache::get_level() const {
    return m_level;
}

Cache::Type Cache::get_type() const {
    return m_type;
}

std::size_t Cache::get_size() const {
    return m_size;
}
