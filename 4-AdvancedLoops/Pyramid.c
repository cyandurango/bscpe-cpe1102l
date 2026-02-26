/*===========================================================================================================================
 FILE        : durangoCy_LE5_22
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Creates a pyramid using the user's inputted value for the height of the pyramid
 COPYRIGHT   : created October 09, 2022
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
	int valN;
	int xRow, yCol; //loop counters
	
	printf("Enter a value for N: ");
	scanf("%d", &valN);
	
	//main loop code
	for (yCol = 1 ; yCol <=valN ; yCol++)
	{	
		for ( xRow = 0 ; xRow < (valN-yCol) ; xRow++)
			printf(" ");
		
		for ( xRow = 1 ; xRow <= (yCol-1) ; xRow++)
			printf("%d", xRow);
			
		for ( xRow = yCol ; xRow > 0 ; xRow--)
			printf("%d", xRow);
					
		printf("\n");	
	}
	
	return 0;
}
