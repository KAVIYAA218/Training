#include<stdio.h>
#include<string.h>
struct Employeerec {
  char name[20];
  int age;
  int year;
};
int main() {
  struct Employeerec Emp1 = {"KAVIYAA",21, 1999};
  struct Employeerec Emp2 = {"MASILA", 22, 1969};
  struct Employeerec Emp3 = {"PRADEEPA", 20, 2011};
  printf("%s %d %d\n", Emp1.name, Emp1.age, Emp1.year);
  printf("%s %d %d\n", Emp2.name, Emp2.age, Emp2.year);
  printf("%s %d %d\n", Emp3.name, Emp3.age, Emp3.year);
  return 0;
}