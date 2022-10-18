/* WAP to input product price in decimal and qtys in integer. print total bill amount */
#include<stdio.h>
void main()
{
	float pri;
	int qt;
	float total_amt;
	printf("\n Enter price of product : ");
	scanf("%f",&pri);
	printf("\n Enter quantity of product : ");
	scanf("%d",&qt);
	
	total_amt=pri*qt;
	
	printf("\n Total bill amount =%f",total_amt);
	
}