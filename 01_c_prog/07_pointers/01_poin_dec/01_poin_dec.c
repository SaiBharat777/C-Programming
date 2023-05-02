/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to show the basic decleration of pointer.
 * Brief: Decleration of pointer.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 04.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main() 
{
    int m = 10, n, o;
    int *z = &m;

    printf("z stores the address of m = %p\n", z);
    printf("\n");

    printf("*z stores the value of m = %d\n", *z);
    printf("\n");

    printf("&m is the address of m = %p\n", &m);
    printf("\n");

    printf("&n stores the address of n = %p\n", &n);
    printf("\n");

    printf("&o stores the address of o = %p\n", &o);
    printf("\n");

    printf("&z stores the address of z = %p\n", &z);
    printf("\n");

    return 0;
}


// Program End
