/* WAP to input any 5 digit number and replace its last digit with product of first
   and last digit.  eg.   73819  then output = 738163    */
#include<stdio.h>
void main()
{
	int no,ans;
	
	printf("\n Enter 5 Digit Number :");
	scanf("%d",&no); //738163
	
	ans = (no/10)*100 + (no/10000)*(no%10);
	printf("\n Replace last digit with product of first and last digit = %d", ans);
}