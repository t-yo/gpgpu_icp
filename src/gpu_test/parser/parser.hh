#pragma once

#include <thrust/host_vector.h>

#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

namespace parser
{
    using value_t = utils::Matrix::value_t;
    using vector_t = utils::Matrix::vector_t;
    using matrix_t = utils::Matrix::matrix_t;

    bool parse_file(const std::string& path, matrix_t& point_list);
} // namespace parser
