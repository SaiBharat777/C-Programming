/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to store information of student using structure.
 * Brief: storing information of student using structure.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 05.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct student 
{
    char name[50];
    int age;
    float gpa;
};

int main()
{
     struct student s;
     printf("Enter Info:\n");
     printf("Enter name: ");
     fgets(s.name, 50, stdin);

     printf("Enter age: ");
     scanf("%d", &s.age);

     printf("Enter GPA: ");
     scanf("%f", &s.gpa);

     printf("\n");
     printf("Display Info:\n");
     printf("Name: %s", s.name);
     printf("Age: %d\n", s.age);
     printf("GPA: %.2f\n", s.gpa);
     return 0;
}

// Program End
