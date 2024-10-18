#include "mtx.h"
void output(const int* const* mt, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    std::cout << mt[i][0];
    for (size_t j = 1; j < n; ++j)
    {
      std::cout << " " << mt[i][j];
    }
  }
  std::cout << '\n';
}
