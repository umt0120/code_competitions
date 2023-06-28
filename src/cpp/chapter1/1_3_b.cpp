#include <iostream>

int main() {
  int N, A[1000];
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        if (i == j || j == k || k == i) continue;
        if (A[i] + A[j] + A[k] == 1000) {
          std::cout << "Yes" << std::endl;
          return 0;
        }
      }
    }
  }
  std::cout << "No" << std::endl;
  return 0;
}
