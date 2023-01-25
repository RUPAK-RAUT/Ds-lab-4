//*  Write a program to calculate a^n.*//


#include <iostream>

int power(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        return a * power(a, n - 1);
    }
}


int main() {
    int a, n;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "a^n = " << power(a, n) << std::endl;
    return 0;
}

