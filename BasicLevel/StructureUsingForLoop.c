#include <stdio.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fee;
} Student;

void main()
{
 Student details[5] = {0};

 for(int index = 0;index < 5;index ++)
 scanf("%s%d%s%d", details[index].name, &details[index].rollNo, details[index].department, &details[index].fee);

 for(int index = 0;index < 5;index ++)
 printf("%s\n%d\n%s\n%d", details[index].name, details[index].rollNo, details[index].department, details[index].fee);
}
