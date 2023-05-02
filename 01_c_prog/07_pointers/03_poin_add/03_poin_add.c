/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to add two numbers using pointers.
 * Brief: Adding two numbers using pointers.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 04.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"sum.h"

// Main Function
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    sum = add(ptr1, ptr2);
    
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);
     
    return 0;
}

// Program End
