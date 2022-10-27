#include<stdio.h>
void main()
{
    FILE *filePointer;
    filePointer = fopen("fileop.txt","w");
    fputs("We Are Sacrans",filePointer);
}