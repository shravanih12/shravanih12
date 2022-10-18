/* WAP to perform arithmatic calculations using switch case menus */

#include<stdio.h>

void main()
{
	int a, b;
	int choice;
	
	printf("\n Enter value of a :");
	scanf("%d",&a);
	
	printf("\n Enter value of b :");
	scanf("%d",&b);
	
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	
	printf("\n Enter Choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n Addition = %d", (a+b));
			break;
		case 2:
			printf("\n Subtraction = %d",(a-b));
			break;
		case 3:
			printf("\n Multiplcaition = %d",(a*b));
			break;
		case 4:
			printf("\n Division = %.2f",((float)a/b));
			break;
		default:
			printf("\n Invalid Choice");
	}
}