#include "mtx.hpp"
int main() {
  size_t M = 0, N = 0;
  std::cout << "Enter the size of the matrix(two numbers)\n";
  std::cin >> M >> N;
  if (!std::cin)
  {
    std::cerr << "ERROR: not a value\n";
    return 1;
  }
  int ** mt = nullptr;
  mt = create(M, N);
  try
  {
    input(mt, M, N);
  }
  catch (const std::exception& e)
  {
    std::cerr << "ERROR: not a value\n";
    destroy(mt, M);
    return 1;
  }
  output(mt, M, N);
  destroy(mt, M);
}
