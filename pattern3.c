/* WAP To print following number pattern 
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5   */
   
#include<stdio.h>

void main()
{
	int no;
	int r, c;
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf(" %d",c);
			c++;
		}
		printf("\n");
		r++;		
	}
}