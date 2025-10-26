#include <iostream>
using namespace std;

// Recursive function to compute m^n
int power(int m, int n) {
    if (n == 0) {
        return 1; // Base case: m^0 is 1
    } else {
        return m * power(m, n - 1); // Recursive case: m^n = m * m^(n-1)
    }
}

int main() {
    int base, exponent;

    // Input base and exponent
    cout << "Enter the base (m): ";
    cin >> base;
    cout << "Enter the exponent (n): ";
    cin >> exponent;

    // Compute power and display result
    int result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
