/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print value using relational operator. 
 * Brief: Compared two numbers using relation operators and printed the result.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 22.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int j=6, t=4;

     printf("%d == %d is: %d\n", j, t, j == t);
     printf("%d > %d is: %d\n", j, t, j > t);
     printf("%d < %d is: %d\n", j, t, j < t);
     printf("%d != %d is: %d\n", j, t, j != t);
     printf("%d >= %d is: %d\n", j, t, j >= t);
     printf("%d <= %d is: %d\n\n", j, t, j <= t);

     return 0;
}

// Program End
