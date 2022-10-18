/* WAP to input any character and check whether it is vowel or consonent */
#include<stdio.h>
void main()
{
	char ch;
	
	printf("\n Enter any Character:");
	scanf("%c",&ch); //w
	
	if(ch=='a')
		printf("\n a is Vowel");	
	else if(ch=='e')   //only first condition is false
		printf("\n e is Vowel");
	else if(ch=='i')   //only second condition is false
		printf("\n i is Vowel");
	else if(ch=='o')  
		printf("\n o is Vowel");
	else if(ch=='u')
		printf("\n u is Vowel");
    else if(ch=='A')
		printf("\n A is Vowel");	
	else if(ch=='E')   //only first condition is false
		printf("\n E is Vowel");
	else if(ch=='I')   //only second condition is false
		printf("\n I is Vowel");
	else if(ch=='O')  
		printf("\n O is Vowel");
	else if(ch=='U')
		printf("\n U is Vowel");
	else
		printf("\n %c is Consonent", ch);

}