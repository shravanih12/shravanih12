/*WAP to input 2 numbers and find out the sum of all the even numbers which are not divisible by 5 but 
divisible by 3 and lies between the given two numbers*/
#include<stdio.h>
void main()
{
	int a,b,sum=0;
	printf("\n Enter range of a number ");
	scanf("%d %d",&a,&b);
	for ( int i=a;i<=b;i++)
	{
		if(i%2==0 && i%5!=0 && i%3==0)
		sum=sum+i;
	}
	printf("\n Sum of all even numbers which are not divisible by 5 but divisible by 3 is %d",sum);
}