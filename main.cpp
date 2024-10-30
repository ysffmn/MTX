#include "mtx.hpp"
int main() {
  size_t M = 0, N = 0;
  std::cout << "Enter the size of the matrix(two numbers)\n";
  std::cin >> M >> N;
  if (!std::cin)
  {
    std::cerr << "ERROR: not a value!\n";
    return 1;
  }
  Matrix matrix(M, N);
  matrix.outputMtx(std::cout);
  try
  {
    matrix.inputMtx(std::cin);
  }
  catch (const std::exception& e)
  {
    std::cerr << "ERROR: " << e.what() << ": not a value!\n";
    return 1;
  }
  matrix.outputMtx(std::cout);
  Matrix copy = matrix;
  copy.outputMtx(std::cout);
  std::cout << "Let's resize a copy! Enter new size (MxN)\n";
  std::cin >> M >> N;
  copy.resize(M, N);
  matrix.outputMtx(std::cout);
}