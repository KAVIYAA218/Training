#include <stdio.h>

struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} Student;

void Student1(char nameis[20],int rollNois,char departmentis[20],int feesis)
{
    printf("%s\n%d\n%s\n%d",nameis , rollNois , departmentis , feesis);
}

void main()
{
    int total=0;
    scanf("%d",&total);

    Student student1[total];

    for(int index = 0; index < total;index++)
    {
        scanf("%s%d%s%d",student1[index].name , &student1[index].rollNo , student1[index].department , &student1[index].fees);
    }

    for(int index = 0; index < total;index++)
    {
        Student1(student1[index].name , student1[index].rollNo , student1[index].department , student1[index].fees);
    }
}