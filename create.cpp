#include "mtx.hpp"
int** create(size_t m, size_t n)
{
  int** mtx = new int*[m];
  size_t created = 0;
  try {
    for (; created < m; ++created) {
      mtx[created] = new int[n];
    }
  } catch (const std::bad_alloc & e){
    destroy(mtx, created);
    throw;
  }
  return mtx;
}
