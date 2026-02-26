/*=========================================================================================
 FILE        : durangoCy_LE4_13
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Identifies the status of a student by determining their final grade
 COPYRIGHT   : created September 21, 2022
 ---
 REVISION HISTORY
 Date:               By:             Description:
 -					 -				 -
=========================================================================================*/


//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>


//define statements place under here (VARIABLES ARE ALL CAPS)



/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : runs the main program
 ARGUMENTS   : void
 RETURNS     : int - exit code
===========================================================================*/

int main()
{
	int grD1;
	int grD2;
	int grD3;
	int grD4;
	float avrgGrd;
	
	printf("Input student's first to fourth quarter marks: \n1st Mark: ");
	scanf("%d",&grD1);
	
	printf("2nd Mark: ");
	scanf("%d",&grD2);
	
	printf("3rd Mark: ");
	scanf("%d",&grD3);
	
	printf("4th Mark: ");
	scanf("%d",&grD4);
	
	
	if ( grD1<0 || grD1>100 ||
		 grD2<0 || grD2>100 ||
		 grD3<0 || grD3>100 ||
		 grD4<0 || grD4>100 )
	{
		printf("\nINVALID INPUT!");
	}
	
	else 
	{
		avrgGrd = ((grD1+grD2+grD3+grD4)/4.00);
		printf("\nFINAL GRADE: %.2f", avrgGrd);
		if (avrgGrd < 50)
		{
			printf("\tREMARKS: FAILED");
		}
		
		else
		{		
			printf("\tREMARKS: PASSED");
		}
	}
	
	

	return 0;
	
}



