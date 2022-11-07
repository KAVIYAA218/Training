#include <stdio.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fees;
} Student;

void PrintStudent(Student *studentdata)
{
    printf("%s\n%d\n%s\n%d", studentdata->name , studentdata->rollNo , studentdata->department , studentdata->fees);
}

void main()
{
    Student student1 = {0};
    Student *student2 = &student1;

    scanf("%s%d%s%d", student2->name , &student2->rollNo , student2->department , &student2->fees);
   
    PrintStudent(student2);
}
