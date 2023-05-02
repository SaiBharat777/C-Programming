/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to count number of words and characters in a file.
 * Brief: c program to count number of words and characters in a file.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 07.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <ctype.h>

// Main Function
int main()
{
   FILE *fp;
   char filename[100];
   char ch;
   int words = 0, chars = 0, in_word = 0;

   printf("Enter the filename: ");
   scanf("%s", filename);

   fp = fopen(filename, "r");

   if (fp == NULL) {
      printf("Error: Could not open file %s\n", filename);
      return 1;
   }

   while ((ch = fgetc(fp)) != EOF) {
      chars++;

      if (ch == ' ' || ch == '\n' || ch == '\t') {
         in_word = 0;
      }
      else if (!in_word) {
         in_word = 1;
         words++;
      }
   }

   printf("Number of words: %d\n", words);
   printf("Number of characters: %d\n", chars);

   fclose(fp);

   return 0;
}

// Program End
