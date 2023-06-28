#include <iostream>

int main() {
  int N;
  std::cin >> N;

  for (int i = 9; i >= 0; i--) {
    // 1を左シフトすることで、2のi乗を計算できる
    int wari = (1 << i);
    std::cout << (N / wari) % 2;
  }
  std::cout << std::endl;
  return 0;
}
