/* An electricity board charges according to the following rates : for the first 100 units - 40 paisa per unit. 
 For the next 200 units _ 50 paisa per unit . Beyond 300 units - 60 paisa per unit.
 All users are charged meter charges also, which are Rs.50/- */
 #include<stdio.h>
 void main()
 {
    int units,unit_charges;
    float bill_amt;
	printf("\n Enter total no of units used : ");
	scanf("%d",&units);
	
    if(units<100)
    {
    	unit_charges=units*40;
	}
	else if(units<300)
	{
		unit_charges=4000+(units-100)*50;
	}
	else 
	{
		unit_charges=4000+5000+(units-300)*60;
	}
	bill_amt=(float)unit_charges/100 + unit_charges%100 + 50 ;
	
    system ("cls");
    printf("\n ~~~~~~~~~~~~~~~~~~~ Electricity Bill ~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n No of units consumed - %d",units);
    printf("\n Total Bill Amount = Rs.%.2f",bill_amt);
    printf("************************************************");
	
    getch();
 
 }