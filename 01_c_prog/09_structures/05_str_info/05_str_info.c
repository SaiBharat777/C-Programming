/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to Store Information of 5 Students Using Structure.
 * Brief: Storing Information of 5 Students Using Structure.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 06.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct Student 
{
    char name[50];
    int rollno;
    float marks;
};

int main() 
{
    struct Student students[5];
    int i;
    printf("Enter information for students:");
    for(i = 0; i < 5; i++) 
    {
        printf("\nfor Roll Number:");
        scanf("%d",&students[i].rollno);
        printf("Enter FirstName: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nInformation for all 5 students:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

     return 0;
}


// Program End
