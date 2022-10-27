#include<stdio.h>
int main()
{
    int initialvalue=10;
    int *ptr=&initialvalue;
    printf("%d\n",initialvalue);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d",&initialvalue);
}