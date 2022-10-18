/*WAP to roll numbere , name ,marks of a student in 5 subjescts and calculate total and average marks.dasplay all the values*/
	
#include<stdio.h>
void main()
{
	int roll_no,maths,phy,chem,bio,cs,total;
	char name[30];
	float avg;
		
	printf("\n enter roll number of a student : ");
	scanf("%d",&roll_no);

	printf("\n enter name of a student : ");
	scanf("%s",&name);
	
	printf("\n enter marks : ");
	printf("\n in maths :");
	scanf("%d",&maths);
	
	printf("\n in physics  :");
	scanf("%d",&phy);
	
	printf("\n in chemistry :");
	scanf("%d",&chem);
	
	printf("\n in biology :");
	scanf("%d",&bio);
	
	printf("\n in computer science :");
	scanf("%d",&cs);
	
	total=maths+phy+chem+bio+cs;
	avg=(float)total/5;
	
	printf("\n Result : \n roll number : %d \n Name : %s ", roll_no,name);
	printf("\n Marks Obtained :");
	printf("\n 1.Maths : %d \n 2.Physics : %d \n 3.Chemistry : %d \n 4.Biology : %d \n 5.computer Science : %d ",maths,phy,chem,bio,cs);
	printf("\n Total marks obtained : %d ", total);
	printf("\n Average Marks : %f",avg);
	
	
	
}