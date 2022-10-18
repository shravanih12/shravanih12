/* WAP to print following start pattern using while loop 
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   
   Print this pattern for n number of rows and columns */
#include<stdio.h>
void main()
{
	int n, c, r;
	
	printf("\n Enter n :");
	scanf("%d",&n); //5

	r=1;
	while(r<=n)
	{
	
		c=1;
		while(c<=n)
		{
			printf(" *");
			c++;
		}
		printf("\n");
		r++;
	}
}