#include "/home/muhammadk/cpp-dump/cpp-dump.hpp"
#define print(...) cpp_dump(__VA_ARGS__)
template <>
inline void cpp_dump::write_log(std::string_view output) {
    std::cout << output << '\n';
}
CPP_DUMP_SET_OPTION_GLOBAL(es_style, cpp_dump::types::es_style_t::no_es);
