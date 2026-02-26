/*===========================================================================================================================
 FILE        : durangoCy_LE5_21
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Displays the multiplication table using user's inputs for number of rows and columns
 COPYRIGHT   : created October 08, 2022
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
	int rowVar, colVar; //variables for row and column respectively
	int xRow, yCol; //variables for the numbers
	
	printf("Enter your number of rows here: ");
	scanf("%d", &rowVar);
	printf("Enter your number of columns here: ");
	scanf("%d", &colVar);

	printf("\n---\n\n\n");
	
	//main loop code
	for ( xRow = 1 ; xRow <= rowVar ; xRow++)
	{
		for ( yCol = 1 ; yCol <= colVar ; yCol++)
			printf("%d\t", xRow*yCol);
		
		printf("\n\n");		
	}
	
	return 0;
	
}


