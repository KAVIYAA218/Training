#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fee;
} Student;

int main()
{
    Student *studentptr1 = {0};
    Student *studentptr2 = {0};

    Student student1 = {0};
    Student student2 = {0};

    studentptr1 = &student1;
    studentptr2 = &student2;

    scanf("%s" , studentptr1->name);
    scanf("%d" , &studentptr1->rollNo);
    scanf("%s" , studentptr1->department);
    scanf("%d" , &studentptr1->fee);

    scanf("%s" , studentptr2->name);
    scanf("%d" , &studentptr2->rollNo);
    scanf("%s" , studentptr2->department);
    scanf("%d" , &studentptr2->fee);
    
    printf("Name is %s\n" , studentptr1->name);
    printf("Roll Number is %d\n" , studentptr1->rollNo);
    printf("Department is %s\n" , studentptr1->department);
    printf("Fee is %d\n" , studentptr1->fee);
    
    printf("Name is %s\n" , studentptr2->name);
    printf("Roll Number is %d\n" , studentptr2->rollNo);
    printf("Department is %s\n" , studentptr2->department);
    printf("Fee is %d\n" , studentptr2->fee);
}
