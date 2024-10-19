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
  try
  {
    mt = create(M, N);
  }
  catch (const std::exception& e)
  {
    std::cerr << "ERROR: " << e.what() << "\n";
    return 1;
  }
  try
  {
    input(mt, M, N);
  }
  catch (const std::exception& e)
  {
    std::cerr << "ERROR: " << e.what() << ": not a value\n";
    return 1;
  }
  output(mt, M, N);
  destroy(mt, M);
}