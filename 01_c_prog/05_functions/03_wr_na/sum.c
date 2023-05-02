#include<stdio.h>
#include"math.h"
int sum(void)
{
    int a, b, sum;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    return sum;
}
