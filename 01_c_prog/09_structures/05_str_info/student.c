#include <stdio.h>
#include "student.h"

void getStudentInfo(struct Student *students, int size) 
{
    int i;
    printf("Enter information for students:");
    for(i = 0; i < size; i++) 
    {
        printf("\nfor Roll Number:");
        scanf("%d",&students[i].rollno);
        printf("Enter FirstName: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayStudentInfo(struct Student *students, int size)
{
    int i;
    printf("\nInformation for all %d students:\n", size);
    for(i = 0; i < size; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

