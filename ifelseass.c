/*WAP to print person is eleigible for policy or not in following cases
case 1: gender=male and age is between 25 to 45 and place is city and health status is "excellent" and
policy amount is greater than 200000 then person should pay rs.6 per thousand as premium amount
for the policy

case 2: gender=female and age is between 25 to 45 and place is city and health status is "excellent" and
policy amount is greater than 100000 then person should pay rs.3 per thousand as premium amount
for the policy

case 3: gender=male and age is between 25 to 45 and place is village and health status is "poor" and
policy amount is greater than 10000 then person should pay 6 percent as premium amount
for the policy
*/
#include<stdio.h>
#include<string.h>
void main()
{
	char gender[10],place[10],health_status[15];
	int age;
	float policy_amt,premium_amt;
	
	printf("\n Enter gender (male/female)= ");
	scanf("%s",&gender);
	printf("\n Enter age= ");
	scanf("%d",&age);
	printf("\n Enter Place (city/village)= ");
	scanf("%s",&place);
	printf("\n Enter health status (excellent/poor)= ");
	scanf("%s",&health_status);
	printf("\n Enter policy amount= ");
	scanf("%f",&policy_amt);
	
	if(strcmp(gender,"male")==0 && 25<age && age < 45 && strcmp(place,"city")==0 && strcmp(health_status,"excellent")==0 && policy_amt > 200000)
	{
		printf("\n premium amount = %f",policy_amt*6/1000);
	}
	else if(strcmp(gender,"female")==0 && 25<age && age < 45 && strcmp(place,"city")==0 && strcmp(health_status,"excellent")==0 && 100000 < policy_amt <200000 )
	{
		printf("\n premium amount = %f",policy_amt*3/1000);
	}
	else if(strcmp(gender,"male")==0 && 25<age && age < 45 && strcmp(place,"village")==0 && strcmp(health_status,"poor")==0 && policy_amt > 10000)
	{
		printf("\n premium amount = %f",policy_amt*6/1000);
	}
	else
	{
		printf("\n Person is not applicable for the policy");
	}
	
	
}