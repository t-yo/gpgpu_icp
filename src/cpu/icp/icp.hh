#pragma once

#include "cpu/parser/parser.hh"
#include "cpu/utils/utils.hh"

namespace cpu::icp
{
    using value_t = utils::Matrix::value_t;
    using vector_t = utils::Matrix::vector_t;
    using matrix_t = utils::Matrix::matrix_t;

    std::size_t icp_cpu(const matrix_t& M,
                    const matrix_t& P,
                    matrix_t& newP,
                    float& err,
                    bool verbose = false,
                    bool save_results = false,
                    std::size_t max_iterations = 20,
                    float threshold = 1e-5,
                    std::size_t power_iteration_simulations = 1000);

    bool find_alignment(const matrix_t& P,
                        const matrix_t& Y,
                        float& s,
                        matrix_t& R,
                        matrix_t& t,
                        std::size_t power_iteration_simulations);
    void power_iteration(const matrix_t& A, matrix_t& eigen_vector, std::size_t num_simulations = 100);
    void apply_alignment(const matrix_t& P, float s, const matrix_t& R, const matrix_t& t, matrix_t& newP);
} // namespace icp