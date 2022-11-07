#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fees;
} Student;

bool PrintStudent(Student *student, char department[], int noOfStudents)
{
    for (int index = 0; index < noOfStudents; index++)
    {
        if ((strcmp((student + index)->department, department)) == 0)
        {
            printf("NAME OF THE STUDENTS FROM REQUIRED DEPARTMENT :\n");
            printf("%s\n", (student + index)->name);
        }
    }
    return true;
}

void main()
{
    int noOfStudents1 = 0;

    printf("NUMBER OF STUDENTS = ");
    scanf("%d", &noOfStudents1);

    Student student[noOfStudents1];

    for (int index = 0; index < noOfStudents1; index++)
    {
        printf("ENTER THE STUDENT %d : \n", index + 1);

        scanf("%s%d%s%d", (student + index)->name, &(student + index)->rollNo, (student + index)->department, &(student + index)->fees);
    }

    char department[10] = {0};

    printf("ENTER THE REQUIRED DEPARTMENT : ");

    scanf("%s", department);

    if (PrintStudent(student, department, noOfStudents1) == true)
    {
        printf("Program Executed");
    }
}
