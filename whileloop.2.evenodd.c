/* WAP to print even and odd numbers saperately from the range */
#include<stdio.h>
void main()
{
	int m, n;
	int t;
	printf("\n Enter m :");
	scanf("%d",&m); //11
	t=m;
	printf("\n Enter n :");
	scanf("%d",&n); //50

	printf("\n Even numbers are:");
	while(m<=n)
	{
		if(m%2==0)
		{
			printf("\t %d",m);
		}
		m++;
	}	
	
	printf("\n Odd numbers are:");
	
	while(t<=n)
	{
		if(t%2==1)
		{
			printf("\t %d",t);
		}
		t++;
	}
	
}