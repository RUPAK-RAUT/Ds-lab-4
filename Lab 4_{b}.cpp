//* Write a program to calculate b^n mod  m.

#include <iostream>
using namespace std;

int powerMod(int b, int n, int m) {
    int result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * b) % m;
        }
        b = (b * b) % m;
        n = n / 2;
    }
    return result;
}

int main() {
    int b, n, m;
    cout << "Enter the base: ";
    cin >> b;
    cout << "Enter the exponent: ";
    cin >> n;
    cout << "Enter the modulus: ";
    cin >> m;
    cout << "Result: " << powerMod(b, n, m) << endl;
    return 0;
}

