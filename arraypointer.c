#include <stdio.h>
int main () {
   int arr[3]={10,20,30};
   int *p=&arr,i,**p1=&p;
   printf("%d\n", arr);
   printf( "%d\n", &p);
   printf("%d\n",p);
   printf("%d\n",**p1);
  // printf("%d",*arr);
   for(i=0;i<3;i++)
   {
     printf("%d \n",*(p+i));
     printf("%d\n",(p+i));
   }
   return 0;
}