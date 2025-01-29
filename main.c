#include <stdio.h>

// Function to compute GCD using Stein's algorithm
int binary_gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    // Find common factors of 2
    int shift;
    for (shift = 0; ((a | b) & 1) == 0; ++shift) {
        a >>= 1;
        b >>= 1;
    }

    // Remove factors of 2 from 'a'
    while ((a & 1) == 0) {
        a >>= 1;
    }

    do {
        // Remove factors of 2 from 'b'
        while ((b & 1) == 0) {
            b >>= 1;
        }

        // Ensure a <= b
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        b = b - a; // Reduce b

    } while (b != 0);

    return a << shift; // Restore common factors of 2
}

int main() {
    int a = 48, b = 18;
    printf("GCD of %d and %d is %d\n", a, b, binary_gcd(a, b));
    return 0;
}
