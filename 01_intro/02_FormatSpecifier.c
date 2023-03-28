/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program using format specifier in printf statement for int ,char,float,double and string.
 * Brief: Used all data types and executed the program.
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
     int a=5;
     printf("Integer is: %d\n", a);
     char s='A';
     printf("Character is: %c\n", s);
     float b=3.2;
     printf("Float is: %0.2f\n", b);
     double c=78.123456;
     printf("Double is: %lf\n", c);
     char z[20]="Phytech";
     printf("String is: %s\n", z);
     return 0;
}

// Program End
