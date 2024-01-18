#include <cmath>
#include <iostream>

int main() {
  double a, b, c;

  std::cout << "Enter sides of a right triangle" << '\n';

  std::cout << "Side A: " << '\n';
  std::cin >> a;
  std::cout << "Side B: " << '\n';
  std::cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));
  std::cout << "The hypotinuse is equal to: " << c << '\n';

  return 0;
}
