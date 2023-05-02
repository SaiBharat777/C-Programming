#include <stdio.h>
#include "complex.h"

int main() 
{
    struct complex num1, num2, result;

    printf("Enter the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imaginary);

    printf("Enter the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imaginary);

    result = add_complex(num1, num2);

    printf("Sum = %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}

