/*WAP to input a number and count its even and odd digits and find out their sum separately.*/
#include <stdio.h>
void main()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("\n Enter the value of num");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("\n Sum of all odd numbers  = %d", odd_sum);
    printf("\n Sum of all even numbers = %d", even_sum);
}