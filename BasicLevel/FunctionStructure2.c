#include<stdio.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[10];
    int fees;
} Student;

struct Student Student1()
{
    Student student1;
    Student student2;
    scanf("%s%d%s%d", student1.name ,&student1.rollNo ,student1.department , &student1.fees);
    scanf("%s%d%s%d", student2.name ,&student2.rollNo ,student2.department , &student2.fees);
    return student1;
    return student2;
}

// struct Student Student2()
// {
//     Student student2;
//     scanf("%s%d%s%d", student2.name ,&student2.rollNo ,student2.department , &student2.fees);
//     return student2;
// }

void main()
{
  Student student1;
  Student student2;

  student1 = Student1();
  //student2 = Student2();
  student2 = Student1();
  printf("%s\n%d\n%s\n%d",student1.name , student1.rollNo , student1.department , student1.fees);
  printf("%s\n%d\n%s\n%d",student2.name , student2.rollNo , student2.department , student2.fees);
}