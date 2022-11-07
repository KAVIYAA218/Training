#include<stdio.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fees;
} Student;

Student getInformation();

void main()
{
    Student student1;
    student1 = getInformation();

    printf("%s\n%d\n%s\n%d",student1.name , student1.rollNo , student1.department , student1.fees);
}

Student getInformation()
{
    Student student1;
    scanf("%s%d%s%d", student1.name ,&student1.rollNo ,student1.department , &student1.fees);
    return student1;
}
