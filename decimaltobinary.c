#include<stdio.h>
//#include<stdlib>
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
       if(a[i]==1)
       {
        printf("%d ",i);
       }
    }
    return 0;
}