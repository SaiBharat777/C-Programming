/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: C program to change case of the given string "PHYTEC" or any other entered by user.
 * Brief: Changing case of the given string "PHYTEC" or any other entered by user.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 05.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    char str[100];
    int i;
    printf("Enter String: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
         
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}

// Program End
