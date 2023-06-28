#include <iostream>

int main() {
  int A, B;
  std::cin >> A >> B;
  for(int i = A; i < B + 1; i++) {
    if (100 % i == 0) {
      std::cout << "Yes" << std::endl;
      return 0;
    }
  }
  std::cout << "No" << std::endl;
  return 0;
}
