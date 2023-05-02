/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to write multiple lines in a text file.
 * Brief: c program to write multiple lines in a text file.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 07.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main() 
{
    int n;
    char sentence[100];

    printf("Input the number of lines to be written : ");
    scanf("%d", &n);

    // Open file for writing
    FILE *fp = fopen("output.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to open file!");
        return 1;
    }

    // Read input from user and write to file
    for(int i = 0; i < n; i++)
    {
        printf("Enter line %d: ", i+1);
        scanf(" %[^\n]s", sentence);
        fprintf(fp, "%s\n", sentence);
    }

    fclose(fp);
    printf("Successfully written to file!");

    return 0;
}

// Program End
