/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: C program to show usage of bitwise operators & , | ,  ^ , ~ , << , >>.
 * Brief: Performing bitwise operations.
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
     int a = 50, b = 5;
     
     int c = a & b;
     printf("Binary AND Operator of a and b is: %d\n", c);
     
     int d = a | b;
     printf("Binary OR Operator of a and b is: %d\n", d);

     int e = a^b;
     printf("Binary XOR Operator of a and b is: %d\n", e);

     int f = ~a;
     printf("Binary Ones Complement Operator of a is: %d\n", f);

     int g = a<<2;
     printf("Binary Left Shift Operator of a is: %d\n", g);

     int h = a>>2;
     printf("Binary Right Shift Operator of a is: %d\n\n", h);

     return 0;
}

// Program End
