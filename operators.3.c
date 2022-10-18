/* WAP to solve following increment and decrement operator equetions */

#include<stdio.h>

int main()
{
	int a,b;
	int ans;
	
	//Q1.
	a=20;
	b=31;
	
	a++;
	--b;
	
	ans = a + b;
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans); 
	


	//Q2.
	
	a=12;
	b=3;
		
	ans = a++ + --b;
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);  
	


	//Q3.
	a=15; 
	b=3; 
	
	b=a++;
	a=a + --b; 
	
	ans = ++a + 10 / 2 - --b;
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);  
	
	
	
	
	//Q4. 
	
	a=10;
	
	ans = a++ + a++ + a++;
	
	printf("\n a = %d \t ans = %d",a,ans);  
	




	//Q5.
	a=10; //9
	b=a<10; //0 1
	
	ans = a > b++ + --a < 0;
	
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);  
	
	
	
	return 0;
}