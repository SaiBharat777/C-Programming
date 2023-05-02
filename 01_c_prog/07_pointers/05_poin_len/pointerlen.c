#include<stdio.h>
#include "len.h"

int strlength(char *str) 
{
    char *p = str;
    int length = 0;

    while (*p != '\0') 
    {
        length++;
        p++;
    }

    return length;
}

