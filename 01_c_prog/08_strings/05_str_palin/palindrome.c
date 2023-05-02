#include <string.h>
#include "palindrome.h"

int palindrome(char *str) 
{
    int i, j, len, flag = 0;

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--) 
    {
        if (str[i] != str[j]) 
	{
            flag = 1;
            break;
        }
    }

    if (flag == 1) 
    {
        return 0;
    } 
    
    else 
    {
        return 1;
    }
}

