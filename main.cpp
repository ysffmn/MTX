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
  std::cout << "Matrix created:\n";
  matrix.outputMtx(std::cout);
  std::cout << "Let's fill it, enter " << M * N << " numbers!\n";
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
  std::cout << "Copied matrix:\n";
  copy.outputMtx(std::cout);
  std::cout << "Let's resize a copy! Enter new size (MxN)\n";
  std::cin >> M >> N;
  if (!std::cin)
  {
    std::cerr << "ERROR: not a value!\n";
    return 1;
  }
  copy.resize(M, N);
  std::cout << "New  matrix with size: " << copy.getColumnNum() << "x" << copy.getRowNum() << "\n";
  copy.outputMtx(std::cout);
}