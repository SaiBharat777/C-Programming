#include <stdio.h>
#include "student.h"

void print_student(struct student s) 
{
    printf("Name: %s", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
}

