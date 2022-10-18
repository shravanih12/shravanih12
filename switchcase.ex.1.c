/* Switch Case */

#include<stdio.h>

void main()
{
	int digit;
	
	printf("\n Enter any Digit :");
	scanf("%d",&digit);
	
	switch(digit)
	{		
		case 0:
			printf("\n It is Zero");
			break;
		case 1:
			printf("\n It is One");
			break;
		case 2:
			printf("\n It is Two");
			break;
		case 3:
			printf("\n It is Three");
			break;
		case 4:
			printf("\n It is Four");
			break;
		case 5:
			printf("\n It is Five");
			break;
		case 6:
			printf("\n It is Six");
			break;
		case 7:
			printf("\n It is Seven");
			break;
		case 8:
			printf("\n It is Eight");
			break;
		case 9:
			printf("\n It is Nine");
			break;
					
		default:
			printf("\n Invalid Digit");
	}
}