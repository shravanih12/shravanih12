/* WAP to input three digit number and print its reverse */

#include<stdio.h>

void main()
{
	int no;
	int reverse,rem;
	
	printf("\n Enter 3 digit number :");
	scanf("%d",&no); //819 -> 81 -> 8
	
	rem = no%10; //9
	reverse = rem;                    //9
	no = no/10;
	
	rem = no%10; //1
	reverse = reverse*10 + rem;       //91
	no = no/10;
	
	rem = no%10; //8
	reverse = reverse*10 + rem;       //918
	
	
	printf("\n Reverse = %d",reverse);
}
