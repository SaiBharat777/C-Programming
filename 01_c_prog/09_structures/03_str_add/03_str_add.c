/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to Add Two Complex Numbers by Passing Structure to a Function.
 * Brief: Adding Two Complex Numbers by Passing Structure to a Function.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 06.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct complex {
    float real;
    float imaginary;
};

struct complex add_complex(struct complex a, struct complex b);

int main()
{
    struct complex num1, num2, result;

    printf("Enter the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imaginary);

    printf("Enter the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imaginary);
     
    result = add_complex(num1, num2);

    printf("Sum = %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}

struct complex add_complex(struct complex a, struct complex b) 
{
    struct complex result;

    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;

    return result;
}

// Program End
