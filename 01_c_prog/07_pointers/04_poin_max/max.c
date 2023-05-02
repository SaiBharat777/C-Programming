#include<stdio.h>
#include "max.h"

int maximum(int *ptr1, int *ptr2) 
{
    if (*ptr1 > *ptr2) 
    {
        return *ptr1;
    }
    else 
    {
        return *ptr2;
    }
}

