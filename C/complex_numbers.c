#include <stdio.h>
#include <complex.h>

int main() {

    double complex z1 = 3 + 4 * I;  // 3 + 4i
    double complex z2 = 1 - 2 * I;  // 1 - 2i

   
    double complex sum = z1 + z2;
    double complex difference = z1 - z2;
    double complex product = z1 * z2;
    double complex quotient = z1 / z2;

   
    printf("z1 + z2 = %.2f + %.2fi\n", creal(sum), cimag(sum));
    printf("z1 - z2 = %.2f + %.2fi\n", creal(difference), cimag(difference));
    printf("z1 * z2 = %.2f + %.2fi\n", creal(product), cimag(product));
    printf("z1 / z2 = %.2f + %.2fi\n", creal(quotient), cimag(quotient));

    return 0;
}
