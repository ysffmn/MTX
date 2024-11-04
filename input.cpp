#include "mtx.hpp"
void input(std::istream & in, int** mtx, size_t m, size_t n)
{
  size_t iter1 = 0;
  for (; iter1 < m; ++iter1)
  {
    for (size_t iter2 = 0; iter2 < n; ++iter2)
    {
      in >> mtx[iter1][iter2];
    }
  }
  if (!in)
  {
    destroy(mtx, iter1);
    throw std::exception();
  }
}
