#include "mtx.hpp"
void input(int ** mtx, size_t m, size_t n)
{
  size_t iter1 = 0;
  size_t iter2 = 0;
  for (; iter1 < m; ++iter1)
  {
    for (; iter2 < n; ++iter2) 
    {
      std::cin >> mtx[iter1][iter2]; 
    }
  }
  if (!std::cin)
  {
    std::cerr << "ERROR: not a value";
    destroy(mtx, iter1);
  }
}
