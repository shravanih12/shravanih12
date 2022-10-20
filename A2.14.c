/*WAP to input a number and print its reverse number. Also check that the number is palindrome or not. 
[input no=reverse no// Palindrome]*/
#include <stdio.h>
void main()
{
    int num, rev=0, remainder, original;
    printf("\n Enter an integer: ");
    scanf("%d", &num);
    original = num;

    while (num != 0)
	{
        remainder = num % 10;
        rev = rev* 10 + remainder;
        num=num/ 10;
    }
    printf("\n Reverse of a number is %d",rev);

    if (original == rev)
        printf("\n %d is a palindrome.", original);
    else
        printf("\n %d is not a palindrome.", original);
}