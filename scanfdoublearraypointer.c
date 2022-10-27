#include<stdio.h>
int main()
{
    int doublearray[3][4],index,index1,index2;
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<4;index2++)
        {
        scanf("%d",&doublearray[index1][index2]);
        }
    }
    int *pointer = &doublearray[0][0];
    int row=3,column=4,total=row*column;
    for(index=0;index<total;index++)
    {
        printf("%d ",*(pointer+index));
    }
    return 0;
}