#include <stdio.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fees;
} Student;

void PrintStudent(Student student)
{
    printf("%s\n%d\n%s\n%d", student.name , student.rollNo , student.department , student.fees);
}

void main()
{
    Student student = {0};

    scanf("%s%d%s%d", student.name , &student.rollNo , student.department , &student.fees);

    PrintStudent(student);
}
