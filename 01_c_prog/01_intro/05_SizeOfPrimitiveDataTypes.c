/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print the size of all primitive datatypes
 * Brief: assigned variable to data type and found out length of it.
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
     unsigned int b;
     long c;
     long long d;
     float e;
     double f;
     long double g;
     char h;

     printf("Size of int: %ld bytes\n", sizeof(a));
     printf("Size of unsigned int: %ld bytes\n", sizeof(b));
     printf("Size of long: %ld bytes\n", sizeof(c));
     printf("Size of long long: %ld bytes\n", sizeof(d));
     printf("Size of float: %ld bytes\n", sizeof(e));
     printf("Size of double: %ld bytes\n", sizeof(f));
     printf("Size of long double: %ld bytes\n", sizeof(g));
     printf("Size of char: %ld bytes\n", sizeof(h));
     return 0;
}

// Program End
