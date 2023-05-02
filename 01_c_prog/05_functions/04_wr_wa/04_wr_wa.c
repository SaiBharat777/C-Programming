/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to add two numbers using user defined function sum of int return type and arguments are passing to this function from main().Call this user defined sum function from main().
 * Brief: c program to add two numbers using user defined function sum of int return type and arguments are passing to this function.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"math.h"

// Main Function
int main()
{
    int num1, num2, result;
    
    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);
    
    result = sum(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}

// Program End
