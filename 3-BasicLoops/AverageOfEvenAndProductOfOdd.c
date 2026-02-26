/*===========================================================================================================================
 FILE        : durangoCy_LE5_11
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Determines the average of even numbers and the product of odd numbers of the 10 integers inputted by the user
 COPYRIGHT   : created September 27, 2022
 ---
 REVISION HISTORY
 Date:               By:             Description:
 -					 -				 -
===========================================================================================================================*/

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
	int oddPrdct=1, eCounter=0; //loop equation purposes
	int i=1; //loop variable
	int intgrNmbr;
	int evnSm, evnAvrg;

	printf("Type in ten(10) integers:\n");
	for ( i=1 ; i<=10 ; i++)
	{
		scanf("%d", &intgrNmbr);
		if (intgrNmbr%2==0)
		{
			evnSm += intgrNmbr;
			eCounter++;
			evnAvrg = evnSm/eCounter;
		}
		else
		{
			oddPrdct *=intgrNmbr;
		}
	}
	printf("\nThe Average of Even Numbers: %d\nThe Product of Odd Numbers: %d", evnAvrg, oddPrdct);
	
	return 0;
	
	
}


