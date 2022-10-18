/* Ass2: WAP to input any number and check whether it is Even or Odd using Switch Case */
#include <stdio.h>

void main()
{
    int num;
    printf("\n Enter the number: ");
   scanf("%d", &num);

    switch(num % 2)
    {
        /* If n%2 == 0 */
        case 0: 
            printf("\n Number is Even");
            break;

        /* Else if n%2 == 1 */
        case 1: 
            printf("\n Number is Odd");
            break;
        
        default :
        	printf("\n Number is ZERO which is neither odd nor even");
    }

    
}