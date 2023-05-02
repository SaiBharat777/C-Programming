/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to check whether given string is palindrome or not.
 * Brief: checking whether given string is palindrome or not.
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
char str[100];
    int i, j, len, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);

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
        printf("%s is not a palindrome\n", str);
    } 
    
    else 
    {
        printf("%s is a palindrome\n", str);
    }
     return 0;
}

// Program End
