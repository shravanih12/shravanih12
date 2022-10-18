/* Challenge : WAP to input any string of a digit and show which digit it is only by using
   switch case.     Sample Input : Enter any String Digit : five   Sample Output : 5  */
#include<stdio.h>
#include<string.h>
void main()
{
	char num;
	printf("\n Enter any string digit (0-9) : ");
	scanf("%s",&num);
	switch(num)
	{
		case one :
	    printf("\n 1");
	    break;
	    case two : 
	    printf("\n 2");
	    break;
	    case three : 
	    printf("\n 3");
	    break;
	    case four : 
	    printf("\n 4");
	    break;
	    case five : 
	    printf("\n 5");
	    break;
	    case six : 
	    printf("\n 6");
	    break;
	    case seven: 
	    printf("\n 7");
	    break;
	    case eight : 
	    printf("\n 8");
	    break;
	    case nine : 
	    printf("\n 9");
	    break;
	    default :
	    printf("\n Invalid Choice");
	}
}