/*wap to input principal ,rate and time of from the user and calculate simple interest and total amount, display all the values*/
#include<stdio.h>
void main()
{
	float p,r,n,si,total;

	
	printf("\n enter principal amount: ");
	scanf("%f",&p);
	printf("\n enter rate: ");
	scanf("%f",&r);
	printf("\n enter time in months: ");
	scanf("%f",&n);
	
	si=p*(1+r*n);
	total=p+r+n;
	
	printf("\n\n Principal=%.4f \n Rate =%.4f \n Time=%f \n Simple Interest = %.4f \n Total=%f",p,r,n,si,total);
	
	
}
