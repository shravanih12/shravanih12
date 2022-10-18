/* WAP to print fibonancii series 
   0 1 1 2 3 5 8 13 21 ... so on upto n */
       
#include<stdio.h>

void main()
{
	int n;
	int first, second,next;
	printf("\n Enter nth value :");
	scanf("%d",&n); //100
	
	first = 0;
	second = 1;
	next = 1;
	
	while(next<=n)
	{
		next = first + second; 
		printf("\t %d", next);
		
		first = second; 
		second = next;  
		
	}
}