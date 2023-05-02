#include <stdio.h>
#include "distance.h"

int main() 
{
    struct distance d1, d2, result;

    printf("Enter first distance\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    printf("Enter second distance\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    result = add_distances(d1, d2);

    printf("Result: %d feet, %d inches\n", result.feet, result.inches);

    return 0;
}

