#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *filePointer;
    char charinput;
    filePointer = fopen("fileop.txt","r");
   do{
     charinput = fgetc(filePointer);
     printf("%c",charinput);
   }
   while(charinput !=EOF);
   fclose(filePointer);
   return 0;
}