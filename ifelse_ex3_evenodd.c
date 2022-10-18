/* Ass:WAP to input any number. check whether it is Even or Odd  */
#include <stdio.h>
void main()
{
    int num;

    printf("\n Enter any number to check even or odd: ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
    {
        printf(" \n Number is Even");
    }
    else
    {
        printf(" \n Number is Odd");
    }

   
}