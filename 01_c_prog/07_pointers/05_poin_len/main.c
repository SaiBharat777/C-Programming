#include <stdio.h>
#include "len.h"

int main() 
{
    char str[100];
    int length;

    printf("Enter the Input String: ");
    scanf("%s", str);

    length = strlength(str);

    printf("The length of the given string '%s' is : %d\n", str, length);

    return 0;
}

