/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to count num of vowels,consonents and total alphabets in given string "How are you".
 * Brief: count num of vowels,consonents and total alphabets in given string.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 05.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>

// Main Function
int main()
{
     char str[] = "How are you";
     int vowels = 0, consonants = 0, alphabets = 0;
    
     for (int i = 0; i < strlen(str); i++) 
     {
          char ch = str[i];
          if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
          {
              alphabets++;
              if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
                  {
                    vowels++;
                  } 
               else 
               {
                 consonants++;
               }
          }
     }

     printf("Entered string is: %s\n", str);
     printf("Number of vowels: %d\n", vowels);
     printf("Number of consonants: %d\n", consonants);
     printf("Total number of alphabets: %d\n", alphabets);
     
     return 0;
}

// Program End
