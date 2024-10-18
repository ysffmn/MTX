#include "mtx.hpp"
void destroy(int ** mtx, size_t m)
{
  for (size_t n = 0; n < m; n++) {
    delete[] mtx[n];
  }
  delete[] mtx;
} 
