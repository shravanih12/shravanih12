/* WAP to input two numbers and find max using switch case */

#include<stdio.h>

void main()
{
	int a, b;
	
	printf("\n Enter value of a :");
	scanf("%d",&a); //1
	
	printf("\n Enter value of b :");
	scanf("%d",&b); //1
	
	switch(a>b)
	{
		case 0:
			switch(a==b)
			{
				case 0:
					printf("\n b is Max");
					break;
				case 1:
					printf("\n a and b are same");
					break;
			}
			break;
		case 1:
			printf("\n a is Max");
			break;
	}
}