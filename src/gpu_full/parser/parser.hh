#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

namespace parser
{
    using value_t = double;
    using vector_host_t = std::vector<value_t>;
    using matrix_host_t = std::vector<vector_host_t>;

    bool parse_file(const std::string& path, matrix_host_t& point_list);
} // namespace parser