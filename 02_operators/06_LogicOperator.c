/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print value using logical operator. 
 * Brief: The program demonstrates the usage of logical OR operator in C. 
 *        It compares three integer values using the operator and prints the result of each comparison. 
 *        And if true it returns 1 and if false it returns 0.
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
     int i=5, j=5, k=10;

     int result1 = (i == j) || (k > j);
     printf("i is equal to j or k greater than j is: %d\n", result1);

     int result2 = (i == j) || (k < j);
     printf("i is equal to j or k less than j is: %d\n", result2);

     int result3 = (i != j) || (k < j);
     printf("i not equal to j or k less than j is: %d\n\n", result3); 

     return 0;
}

// Program End
