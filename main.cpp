#include <iostream>
#include "mtx.hpp"
int main() {
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  int ** mt = create(M, N);
  input(mt, M, N);
  output(mt, M, N);
  destroy(mt, M);
}
