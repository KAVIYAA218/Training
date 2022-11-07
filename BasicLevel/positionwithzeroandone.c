#include<stdio.h>
int main()
{
    int a,m=1,z=0,o=0;
    int zp=0,op=0;
    scanf("%d",&a);
    int b=0;
    int arr[8];
    for(int i=0;i<8;i++)
    {
        b=(b*10)+(a%2);
        arr[i]=b;
        b=0;
        a=a/2;
    }
    for(int j=7;j>=0;j--)
    {
        if((arr[j] & m)==0)
        {
            zp=(zp*10)+j;
            z++;
        }
        else
        {
            op=(op*10)+j;
            o++;
        }
    }
    printf("%d %d %d %d",zp,op,z,o);
}