#include "Includes/FileReader.h"
#include <regex>

#include <iostream>

namespace MemUtils{
    int set_cpu_entries() {
        if( !std::filesystem::exists( base_path_name ) ){
            return -1;
        }
        
        int sum = 0;

        for( auto const& dir_entry : std::filesystem::directory_iterator{base_path_name} ){
            std::string entry_name = dir_entry.path().stem();
            
            if( check_cpu_entry_path(entry_name) ){
                cpu_entries.push_back( dir_entry.path().stem() );
                sum++;
            }
        }
        return sum;
    }

    int set_caches(){
        for( const auto& cpu_entry : cpu_entries ){
            std::filesystem::path cache_path{ base_path_name };
            cache_path /= cpu_entry;  // "/=" is the overload operator for append
            cache_path /= "cache/";
            
            if( std::filesystem::exists(cache_path) ){
                cache_index_iterator( cache_path );
            }
        }
        return 0;
    }

    void cache_index_iterator(std::filesystem::path path){
        for( const auto& dir_entry : std::filesystem::directory_iterator(path) ){
            std::string entry_name = dir_entry.path().stem();

            if( check_cache_index_path(entry_name) ){
                std::filesystem::path id_path{ dir_entry.path() };
                id_path /= "id";

                if( std::filesystem::exists(id_path) ){
                    std::cout << 1 << std::endl;
                }
            }
        }
    }

    bool check_cpu_entry_path(std::string_view sv){
        const std::regex reg_exp("^(cpu)([0-9]+)$");

        return std::regex_match( sv.begin(), sv.end(), reg_exp );
    }

    bool check_cache_index_path(std::string_view sv){
        const std::regex reg_exp("^(index)([0-9]+)$");

        return std::regex_match( sv.begin(), sv.end(), reg_exp );
    }
}
