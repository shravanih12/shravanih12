/* WAP to print reverse of any number calling while loop */
#include<stdio.h>
void main()
{
	int no, rem, rev=0;
	printf("\n Enter any number :");
	scanf("%d",&no); 
	
	while(no!=0)
	{
		rem = no%10; 
		rev = rev*10 + rem; 
		no= no/10;
	}
	
	printf("\n Reverse of a number = %d", rev);
}