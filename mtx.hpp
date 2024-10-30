#ifndef MTX_HPP
#define MTX_HPP
#include <iostream>
#include <cstddef>
#include <exception>
class Matrix{
  int** mtx;
  int m, n;
  public: 
    int getRowNum() const;
    int getColumnNum() const;
    void fillMtx();
    void resize(int m, int n);
    void outputMtx(std::ostream & out) const;
    void inputMtx(std::istream & in);
    Matrix();
    Matrix(int m, int n);
    Matrix(const Matrix& copy);
    ~Matrix();
};
int** create(size_t m, size_t n);
void destroy(int** mt, size_t m);
void input(std::istream & in, int ** mtx, size_t m, size_t n);
void output(std::ostream & out, const int* const* mt, size_t m, size_t n);
#endif
