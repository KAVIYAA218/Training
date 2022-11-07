#include <stdio.h>
#include <string.h>


typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fee;
} Student;

void main()

{
     Student student1 = {0};
     Student student2 = {0};
     Student student3 = {0};

    scanf("%s" , student1.name);
    scanf("%d" , &student1.rollNo);
    scanf("%s" , student1.department);
    scanf("%d" , &student1.fee);

    scanf("%s" , student2.name);
    scanf("%d" , &student2.rollNo);
    scanf("%s" , student2.department);
    scanf("%d" , &student2.fee);

    scanf("%s" , student3.name);
    scanf("%d" , &student3.rollNo);
    scanf("%s" , student3.department);
    scanf("%d" , &student3.fee);

    printf("Name is %s\n" , student1.name);
    printf("Roll Number is %d\n" , student1.rollNo);
    printf("Department is %s\n" , student1.department);
    printf("Fee is %d\n" , student1.fee);

    printf("Name is %s\n" , student2.name);
    printf("Roll Number is %d\n" , student2.rollNo);
    printf("Department is %s\n" , student2.department);
    printf("Fee is %d\n" , student2.fee);

    printf("Name is %s\n" , student3.name);
    printf("Roll Number is %d\n" , student3.rollNo);
    printf("Department is %s\n" , student3.department);
    printf("Fee is %d\n" , student3.fee);
}

