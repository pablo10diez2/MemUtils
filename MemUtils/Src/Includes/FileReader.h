#include <filesystem>
#include <vector>

namespace MemUtils {

constexpr std::string_view base_path_name{"/sys/devices/system/cpu"};
static std::vector<std::filesystem::path> cpu_entries; 

int set_cpu_entries();
int set_caches();

void cache_index_iterator(std::filesystem::path);

bool check_cpu_entry_path(std::string_view);
bool check_cache_index_path(std::string_view);
}
