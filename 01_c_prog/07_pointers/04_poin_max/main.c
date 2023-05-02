#include <stdio.h>
#include "max.h"

int main() 
{
    int num1, num2, max;
    int *ptr1, *ptr2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    max = maximum(ptr1, ptr2);
    
    printf("The maximum number is: %d", max);
    
    printf("\n");
    
    return 0;
}

