//middle number is irrelevant for minimum distance

#include <iostream>
#include <cmath>

int x1, x2, x3;

int main() {
    std::cin >> x1 >> x2 >> x3;
    std::cout << std::max(std::max(x1,x2),x3) - std::min(std::min(x1,x2),x3) << std::endl;
    return 0;
}