/*WAP to find out the sum and average of all the numbers within the given range.*/
#include<stdio.h>
void main()
{
	int a,b,sum=0,i;
	float avg;
	printf("\n Enter range of numbers a to b:");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		sum=sum+i;
	}
	avg=(float)sum/(b-a+1);
    printf("\n Sum of all numbers is %d",sum);
    printf("\n Average of all numbers is %f",avg);
	
}