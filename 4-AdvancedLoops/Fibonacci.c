/*============================================================================================================================
 FILE        : durangoCy_LE5_23
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Displays the 1st to nth values of the Fibonacci Sequence
 COPYRIGHT   : created October 10, 2022
 ---
 REVISION HISTORY
 Date:               By:             Description:
 -					 -				 -
============================================================================================================================*/

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
	int numLimit;
	int x; //loop variable
	int fNum1, fNum2, fNum3;
	
	printf("Enter number limit: ");
	scanf("%d", &numLimit);
	
	printf("Fibnonacci Sequence: ");
	
	//main loop code
	fNum1 = 0, fNum2 = 1, x = 1 ;
	while (x <= numLimit )
	{		
		fNum3 = fNum1 + fNum2;
		printf("%d ", fNum3);
		fNum1 = fNum2;
		fNum2 = fNum3;
		
		x++;
	}
	
	return 0;
}
