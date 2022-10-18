/* A town has population 80000. from them 61% are Men and out of them 83% are literate.
   Total 15% women are illiterate. Calculate and show count of total men, women, total
   literate and illiterate men and women in the town */
   
   
#include<stdio.h>

void main()
{
	long popn = 80000L;
	long tmen, lmen, imen, twomen, lwomen, iwomen;
	float pert1, pert2;
	
	printf("\n Total Population = %ld",popn);
	
	tmen = popn*61/100;	
	printf("\n Total Men = %ld",tmen);

	lmen = tmen*83/100;
	printf("\n Literate Men = %ld",lmen);
	
	imen = tmen - lmen;
	printf("\n illiterate Men = %ld",imen);
	
	twomen = popn - tmen;
	printf("\n Total women = %ld",twomen);
	
	iwomen = twomen*15/100;
	lwomen = twomen - iwomen;
	
	printf("\n Literate Women = %ld",lwomen);
	printf("\n Illiterate Women = %ld",iwomen);
	
	
	//print percentage of literacy and illiteracy of town
	
	pert1 = (lmen + lwomen)/(float)popn*100.00f;
	printf("\n Total Literacy of the town = %.2f", pert1);
	
	pert2 = 100.00f - pert1;
	printf("\n Illiteracy of the town = %.2f", pert2);

}