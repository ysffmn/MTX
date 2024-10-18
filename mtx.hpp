#ifndef MTX_HPP
#define MTX_HPP
#include <cstddef>
#include <exception>
int ** create(size_t m, size_t n);
void destroy(int** mt, size_t m);
void input(int ** mtx, size_t m, size_t n);
void output(const int* const* mt, size_t m, size_t n);
#endif
