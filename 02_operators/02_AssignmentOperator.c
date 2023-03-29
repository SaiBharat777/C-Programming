/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: C program to show usage of assignment operators = , += , -= , *= , /=.
 * Brief: 
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
     int a, result;
     printf("Enter a= ");
     scanf("%d", &a);

     printf("\n\n");
     
     result = a;
     printf("Result = %d\n", result);

     result += a;
     printf("Result = %d\n", result);

     result -= a;
     printf("Result = %d\n", result);

     result *= a;
     printf("Result = %d\n", result);

     result /= a;
     printf("Result = %d\n\n", result);

     return 0;
}

// Program End
