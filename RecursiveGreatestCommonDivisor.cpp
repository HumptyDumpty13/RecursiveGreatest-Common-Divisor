#include <cstdint>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {
    if (a == 0) return b;
    else if (b == 0) return a;
    else if (a >= b) { return gcd(a % b, b); }
    else return gcd(a, b % a);
}

int main(void) {
    std::int32_t a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}