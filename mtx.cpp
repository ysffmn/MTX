#include "mtx.hpp"
Matrix::Matrix(): mtx(nullptr), m(0), n(0)
{}
Matrix::Matrix(int m, int n): m(m), n(n), mtx(create(m, n))
{
  fillMtx();
}
Matrix::~Matrix()
{
  destroy(mtx, m);
}
Matrix::Matrix(const Matrix& copy)
{
  std::cout << "//copy construct executed\n";
  mtx = create(copy.getColumnNum(), copy.getRowNum());
  m = copy.getColumnNum();
  n = copy.getRowNum();
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      mtx[i][j] = copy.mtx[i][j];
    }
  }
}
int Matrix::getColumnNum() const
{
  return m;
}
int Matrix::getRowNum() const
{
  return n;
}
void Matrix::fillMtx()
{
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      mtx[i][j] = 1;
    }
  }
}
void Matrix::outputMtx(std::ostream & out) const
{
  output(out, mtx, m, n);
}
void Matrix::inputMtx(std::istream & in)
{
  input(in, mtx, m, n);
}
void Matrix::resize(int newm, int newn)
{
  int** newMtx = create(newm, newn);
  destroy(mtx, m);
  m = newm;
  n = newn;
  mtx = newMtx;
  fillMtx();
}
