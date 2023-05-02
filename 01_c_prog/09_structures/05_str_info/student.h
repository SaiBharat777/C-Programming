struct Student 
{
    char name[50];
    int rollno;
    float marks;
};

void getStudentInfo(struct Student *students, int size);
void displayStudentInfo(struct Student *students, int size);
