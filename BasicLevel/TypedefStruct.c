#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[50];
    int fees;
} Student;

void main()
{
    // Review M - Variable name should be in complete and meaningful
    Student student = {0};

    strcpy( student.name ,"SEETHA");
    student.rollNo = 218;
    strcpy( student.department , "ELECTRICAL AND ELECTRONICS ENGINEERING");
    student.fees = 4560;

    printf("Name of the Student : %s\n", student.name);
    printf("Roll Number of the Student : %d\n",  student.rollNo );
    printf("Department : %s\n",  student.department);
    printf("Fees : %d" , student.fees);
}
