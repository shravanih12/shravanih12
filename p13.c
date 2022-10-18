/*WAP to find  out the quotient and remainder without using modulus operator*/
#include<stdio.h>
void main()
{
  int a,b;
  printf("\n Enter first number :");
  scanf("%d",&a);
  printf("\n Enter second number :");
  scanf("%d",&b);
  
  /*dividend = quotient ×divisor + remainder*/
  
  printf("\n Quotient and remainder are %d and %d",a/b,a-(a/b)*b);
  
  	
}