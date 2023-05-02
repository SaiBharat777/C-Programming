#include <stdio.h>
#include "case.h"

int main() 
{
    char str[100];

    printf("Enter a String: ");
    scanf("%s", str);
    
    printf("Original string: %s\n", str);

    toggle_case(str);

    printf("Toggled string: %s\n", str);

    return 0;
}

