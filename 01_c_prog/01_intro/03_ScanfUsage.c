/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: C program using scanf get Name,Rollnumber,CGPA from user input and print it.
 * Brief: Getting inputs using scanf.
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
     char name[20];
     int a;
     float b;

     printf("Enter name: ");
     scanf("%s", name);
     
     printf("Enter Rollno: ");
     scanf("%d", &a);
     
     printf("Enter GPA: ");
     scanf("%f", &b);

     printf("Your name is: %s\n", name);
     printf("Your Rollno: %d\n", a);
     printf("Your GPA: %.2f\n", b);
     return 0;
}

// Program End
