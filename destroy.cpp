void destroy(int ** mt, size_t m) {
  for (size_t i = 0;c < m; c++) {
    delete[] mt[i];
  }
  delete[] mt;
} 
