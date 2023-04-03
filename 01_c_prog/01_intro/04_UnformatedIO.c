/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: C program using getchar() and putchar() it reads until it encounters a \n character at which it stops and displays the characters.
 * Brief: First entered a string and readed with getchar and printed with putchar.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 20.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a;
     printf("Entered String: ");
     while ((a = getchar()) != '\n') 
     {
        putchar(a);
     }
     return 0;
}

// Program End
