#include "Includes/FileReader.h"
#include <iostream>
#include <regex>

namespace MemUtils{
    int get_cpu_entries() {
        if( !std::filesystem::exists( base_path_name ) ){
            return -1;
        }
        
        int sum = 0;

        for( auto const& dir_entry : std::filesystem::directory_iterator{base_path_name} ){
            std::string entry_name = dir_entry.path().stem();
            
            if( check_cpu_entry_path(entry_name) ){
                sum++;
            }
        }
        return sum;
    }

    bool check_cpu_entry_path(std::string_view sv){
        const std::regex reg_exp("^(cpu)([0-9]+)$");

        return std::regex_match( sv.begin(), sv.end(), reg_exp );
    }
}
