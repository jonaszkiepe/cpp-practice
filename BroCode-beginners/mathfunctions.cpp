#include <iostream>
#include <cmath>

int main() {
    double x = 3.99999;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(-5);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    std::cout << z << '\n';

    return 0;
}
