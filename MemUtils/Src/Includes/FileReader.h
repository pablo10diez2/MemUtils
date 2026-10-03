#include <filesystem>

namespace MemUtils {

constexpr std::string_view base_path_name{"/sys/devices/system/cpu"};

int get_cpu_entries();
bool check_cpu_entry_path(std::string_view sv);

}
