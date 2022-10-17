#include <stdio.h>  
void main()  
{  
    int num, binary_num, decimal_num = 0, base = 1, rem;  
    scanf (" %d", &num); 
    binary_num = num;
    while ( num > 0)  
    {  
        rem = num % 10;
        decimal_num = decimal_num + rem * base;  
        num = num / 10;  
        base = base * 2;  
    }  
    printf ("%d", decimal_num);   
} 