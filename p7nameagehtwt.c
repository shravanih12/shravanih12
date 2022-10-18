/* WAP to read username, age, height and weight */

#include<stdio.h>

void main()
{
	char username[20];
	int age;
	float height, weight;
	
	
	printf("\n Enter your name :");
	scanf("%s",&username);
	
	printf("\n Enter your age :");
	scanf("%d", &age);
	
	printf("\n Enter your Height :");
	scanf("%f",&height);
	
	printf("\n Enter your weight :");
	scanf("%f",&weight);
	
	printf("\n Username = %s \t age = %d \t Height = %.2f \t Weight = %.2f", username, age, height, weight);
}