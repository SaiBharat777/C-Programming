/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to add two numbers using user defined function sum of no return type and no arguments are passing to this function.Call this user defined sum function from main().
 * Brief: 
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
void sum(void);

int main()
{
     sum();
     return 0;
}

void sum() 
{
    int num1, num2, result;
    
    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);
    
    result = num1 + num2;
    
    printf("The sum of %d and %d is: %d\n\n", num1, num2, result);
}

// Program End