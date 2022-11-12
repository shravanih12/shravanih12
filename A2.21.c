/* WAP to print the sum and average of first n even numbers*/
#include<stdio.h>
void main()
{
      int i=1,n,sum=0;
      printf("\n Enter number to set range : ");
      scanf("%d",&n);
      printf("\n Even numbers in range 1 to %d :",n);
      for(i=1;i<=n;i++)
      {
            if(i%2==0)
            {
                  printf("%d  ",i);
                  sum=sum+i;
            }
      }
      printf("\n Sum of even numbers in range 1 to %d : %d",n,sum);
}