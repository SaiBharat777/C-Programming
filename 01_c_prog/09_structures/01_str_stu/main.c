#include <stdio.h>
#include "student.h"

int main() 
{
    struct student s;

    printf("Enter name: ");
    fgets(s.name, 50, stdin);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter GPA: ");
    scanf("%f", &s.gpa);

    print_student(s);

    return 0;
}

