#include <stdio.h>
#include "palindrome.h"

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (palindrome(str)) 
    {
        printf("%s is a palindrome\n", str);
    } 
    
    else 
    {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}

