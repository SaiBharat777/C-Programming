/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to read the file and store the lines into an array.
 * Brief: c program to read the file and store the lines into an array.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 07.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<stdlib.h>

#define MAX_LINES 1000
#define MAX_LENGTH 100

int main() 
{
    char filename[MAX_LENGTH];
    char lines[MAX_LINES][MAX_LENGTH];
    FILE *fp;
    int i = 0;

    printf("Input the filename to be opened: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("\nThe content of the file %s are:\n\n", filename);

    while (fgets(lines[i], MAX_LENGTH, fp) != NULL && i < MAX_LINES) 
    {
        printf("%s", lines[i]);
        i++;
    }

    fclose(fp);

    return 0;
}

// Program End
