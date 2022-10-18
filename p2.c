/*WAP to input 2 int no and show their arithmatic operations*/
#include<stdio.h>
void main()
{
	int a,b;
	int sum,diff,product,idiv,rem;
	float fdiv;
	
	printf("\n enter first no.:");
	scanf("%d",&a);
	
	
	printf("\n enter first no.:");
	scanf("%d",&b);
	
	sum=a+b;
	printf("\n sum =%d",sum);
	
	diff=a-b;
	printf("\n subtraction =%d",diff);

	product=a*b;
	printf("\n multiplication =%d",product);
	
	idiv=a/b;
	printf("\n integer division =%d",idiv);
	
	fdiv=(float)a/b;
	printf("\n float division =%f",fdiv);
	
	rem=a%b;
	printf("\n remainder =%d",rem);
	
}