/*===========================================================================================================================
 FILE        : durangoCy_LE5_12
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that asks for a numeric passcode before the user can continue their task.
 COPYRIGHT   : created September 28, 2022
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
	int trialCntr = 0;
	int passCde;
	int i; //loop variable
	
	for (i=1; i<=3; i++)
	{
		printf("Enter your four-digit passcode: ");
		scanf("%d", &passCde);
		trialCntr++;
		
		if(passCde == 5224)
		{
			printf("\nACCESS GRANTED!");
			break;
		}
		else if (trialCntr == 1)
		{
			printf("\nPASSCODE INCORRECT.Two Attempts Remaining.\n");
		}
		else if (trialCntr == 2)
		{
			printf("\nPASSCODE INCORRECT.One More Attempt Remaining.\n");
		}
		else
		{
			printf("\nACCESS DENIED.");
		}
		
	}
	
	return 0;
	
	
}


