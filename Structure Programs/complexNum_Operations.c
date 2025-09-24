#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum, diff, prod;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Addition
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Subtraction
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    // Multiplication
    prod.real = c1.real * c2.real - c1.imag * c2.imag;
    prod.imag = c1.real * c2.imag + c1.imag * c2.real;

    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    printf("\nDifference = %.2f + %.2fi", diff.real, diff.imag);
    printf("\nProduct = %.2f + %.2fi\n", prod.real, prod.imag);

    return 0;
}
