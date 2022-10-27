#include<stdio.h>
int sum1(int a,int b)
{
    return a+b;
}
int sum2(int c,int d)
{
    return c+d;
}
void main()
{
    int n1,n2,n3,n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    printf("%d",sum1(n1,n2)+sum2(n3,n4));
}