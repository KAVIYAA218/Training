#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fees;
} Student;

void PrintStudent(Student student, char requiredDepartment[])
{
    if(!(strcmp(student.department,requiredDepartment)))
    printf("NAME OF THE STUDENTS FROM REQUIRED DEPARTMENT :\n");
    printf("%s\n", student.name);
}

void main()
{
    int total = 0;
    printf("NUMBER OF STUDENTS = ");
    scanf("%d" , &total);

    Student student[total];
    
    int count = 1;

    for(int index = 0; index < total;index++)
    {
        printf("ENTER THE STUDENT %d : \n",count);
        scanf("%s%d%s%d",student[index].name , &student[index].rollNo , student[index].department , &student[index].fees);
        count++;
    }

    char requiredDepartment[10] = {0};
    printf("ENTER THE REQUIRED DEPARTMENT : ");
    scanf("%s", requiredDepartment);

    for(int index = 0; index < total;index++)
    {
        PrintStudent(student[index], requiredDepartment);
    }
}
