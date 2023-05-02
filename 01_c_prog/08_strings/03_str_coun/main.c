#include <stdio.h>
#include "count.h"

int main() 
{
    char str[100] = "How are you";
    int vowels, consonants, alphabets;
    
    count_vowels_consonants(str, &vowels, &consonants, &alphabets);
    
    printf("Entered string is: %s\n", str);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Total number of alphabets: %d\n", alphabets);
    
    return 0;
}

