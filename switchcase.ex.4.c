/* Write Switch case program to develop ticket booking application with following menus
   1. Ac Vehicle (Rs.12 per Km)
   2. Private Vehicle (Rs.8 per Km)
   3. Reservation (Rs.5 per Km)
   4. Local Vehicle (Rs.2 per Km)
   
   Input Name of departure and Arrival city, distance. calculate and print total fare amount */
   
#include<stdio.h>

void main()
{
	char city1[20], city2[20];
	int distance, choice, fareamt;
	
	printf("\n Enter Departure City Name :");
	scanf("%s",&city1);
	
	printf("\n Enter Arrival City Name :");
	scanf("%s",&city2);
	
	printf("\n Enter Distance :");
	scanf("%d",&distance);
	
	printf("\n 1. AC Vehicle");
	printf("\n 2. Private Vehicle");
	printf("\n 3. Reservation");
	printf("\n 4. Local Vehicle");
	
	printf("\n Enter choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n You selected AC Vehicle. Rs.12 per Km");
			fareamt = distance*12;
			break;
		case 2:
			printf("\n You selected Private Vehicle. Rs.8 per Km");
			fareamt = distance*8;
			break;
		case 3:
			printf("\n You selected Reservation. Rs.5 per km");
			fareamt = distance*5;
			break;
		case 4:
			printf("\n You selected Local vehicle. Rs.2 per km");
			fareamt = distance*2;
			break;
		default:
			printf("\n Invalid Choice!");
	}
	
	
	system("cls");
	
	printf("\n generating ticket...");
	Sleep(4000);
	
	printf("\n ~~~~~~~~~~~~~~~ Ticket ~~~~~~~~~~~~~~~");
	printf("\n Departure : %s", city1);
	printf("\n Arrival : %s", city2);
	printf("\n Distance : %d km", distance);
	printf("\n Fare amount : Rs.%d", fareamt);
	printf("\n ************ Happy Journey ***********");
	
		
	
	getch();
	
}