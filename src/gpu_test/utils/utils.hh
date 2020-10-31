#pragma once

#include <cmath>
#include <string>
#include <tuple>

#include "gpu_test/icp/icp.hh"

namespace utils
{
    using value_t = Matrix::value_t;
    using vector_t = Matrix::vector_t;
    using matrix_t = Matrix::matrix_t;

    double compute_distance(const vector_t& p, const vector_t& q);
    __device__ void get_nearest_neighbors(const matrix_t& P, const matrix_t& Q, matrix_t& res);
    unsigned int get_line_count(const std::string& path);

    void string_split(std::string str, const std::string& delimiter, std::vector<std::string>& words);
} // namespace utils