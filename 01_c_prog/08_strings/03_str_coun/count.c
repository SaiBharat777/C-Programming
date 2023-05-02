#include <string.h>
#include"count.h"

void count_vowels_consonants(char str[], int *vowels, int *consonants, int *alphabets) 
{
    *vowels = 0;
    *consonants = 0;
    *alphabets = 0;
    
    for (int i = 0; i < strlen(str); i++) 
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
	{
            (*alphabets)++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
	    {
                (*vowels)++;
            } 
	    
	    else 
	    {
                (*consonants)++;
            }
        }
    }
}

