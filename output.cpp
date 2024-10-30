#include "mtx.hpp"
void output(std::ostream & out, const int* const* mt, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    out << mt[i][0];
    for (size_t j = 1; j < n; ++j)
    {
      out << " " << mt[i][j];
    }
    out << "\n";
  }
}
