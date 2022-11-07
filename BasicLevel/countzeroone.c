#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   int zero=0,one=0;
   int mask=1,i=0;
   while(i!=8)
   {
    if((a&mask)==0)
    zero++;
    else
    one++;
    a=a>>1;
    i++;
   }
   printf("%d\n%d",zero,one);
}