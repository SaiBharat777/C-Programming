#include <stdio.h>
#include "student.h"

int main() 
{
    struct Student students[5];

    getStudentInfo(students, 5);
    displayStudentInfo(students, 5);

    return 0;
}

