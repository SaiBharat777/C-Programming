/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to add two distances in the inch-feet system using structure.
 * Brief: adding two distances in the inch-feet system using structure.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 05.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct distance {
    int feet;
    int inches;
};

int main()
{
    struct distance d1, d2, result;

    printf("Enter first distance\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    printf("Enter second distance\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12) 
    {
        result.feet++;
        result.inches -= 12;
    }

    printf("Result: %d feet, %d inches\n", result.feet, result.inches);

    return 0;
}

// Program End
