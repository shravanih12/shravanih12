/* Ass: WAP to print numbers between the range which are in the multiple of 5 */
#include<stdio.h>
void main()
{
	int m, n;
	int t;
	printf("\n Enter m :");
	scanf("%d",&m); 
	t=m;
	printf("\n Enter n :");
	scanf("%d",&n); //50

	printf("\n Numbers which are multiple of 5 are:");
	while(m<=n)
	{
		if(m%5==0)
		{
			printf("\t %d",m);
		}
		m++;
	}	
}