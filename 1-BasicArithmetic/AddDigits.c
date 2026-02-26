/*
===========================================================================
 FILE        : durangoCy_LE3_12
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Calculates the sum of the two least significant figures of an integer
 COPYRIGHT   : created September 12, 2022
 REVISION HISTORY
 Date:               By:             Description:
 September 14, 2022	| CABD			| fixed indentation
 -					| -				| -	
===========================================================================
*/


//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//define statements place under here (VARIABLES ARE ALL CAPS)


/*
===========================================================================
 FUNCTION    : main
 DESCRIPTION : runs the main program
 ARGUMENTS   : void
 RETURNS     : int - exit code
===========================================================================
*/

int main()
{
	int intNum;
	int unitsDig;
	int tensDig;
	int sum2LSDig;
	
	printf("Enter a number : ");
	scanf("%d", &intNum);
	
	unitsDig = intNum%10;
	tensDig = (intNum/10)%10;
	sum2LSDig = unitsDig + tensDig;
	
	printf("Sum            : %d + %d = %d", tensDig, unitsDig, sum2LSDig);
	
	return 0;


}



