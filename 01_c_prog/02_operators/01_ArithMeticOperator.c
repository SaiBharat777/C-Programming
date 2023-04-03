/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: C program to add,subtract,multiply,divide,modulus,increment and decrement the numbers.
 * Brief: Performs all arithmetic operations.
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
     int num1, num2, sum, sub, mult, div, modulus, increment, decrement;
     printf("Enter Num1: ");
     scanf("%d", &num1);
     printf("Enter Num2: ");
     scanf("%d", &num2);

     sum = num1+num2;
     printf("Sum of %d and %d is: %d\n", num1,num2,sum);
     
     sub = num1-num2;
     printf("Subtraction of %d and %d is: %d\n", num1,num2,sub);

     mult = num1*num2;
     printf("Multiplication of %d and %d is: %d\n", num1,num2,mult);

     if(num2 == 0)
     {
          printf("Number can not be divided by 0\n");
     }
     else
     {
          div = num1 / num2;
          printf("Division of %d and %d is: %d\n", num1,num2,div);
     }
     
     if(num2 == 0)
     {
          printf("Modulus Operation can not be performed.\n");
     }
     else
     {
          modulus = num1 % num2;
          printf("Modulus of %d and %d is: %d\n", num1,num2,modulus);
     }

     num1++;
     printf("Increment of num1 is: %d\n", num1);

     num2--;
     printf("Decrement of %d is: %d\n", num2+1, num2);
     
     return 0;
}

// Program End
