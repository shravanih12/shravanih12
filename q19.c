/*WAP to find wheather the given number is even or odd using conditional operator*/
#include<stdio.h>
void main()
{
	int num ; 
	char result;
	printf("\n Enter a number :");
	scanf("%d",&num);
	result=(num%2==0)?"even":"odd";
	printf("\n Number is %c",result);
}