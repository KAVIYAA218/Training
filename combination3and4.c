#include<stdio.h>
int main()
{
    int a,s=0,m=1;
    scanf("%d",&a);
    a=a>>3;
    s=s+((a&m)*1);
    a=a>>1;
    s=s+((a&m)*2);
    printf("%d",s);
}