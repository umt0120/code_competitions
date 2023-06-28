#include <iostream>
#include <string>

int main() {
  std::string N;
  std::cin >> N;

  int sum = 0;
  for (int i = 0; i < N.length(); i++) {
    int kurai = (1 << (N.length() - 1) - i);
    int num = int(N[i]-'0');
    sum += num * kurai;
  }
  std::cout << sum << std::endl;
  return 0;
}
