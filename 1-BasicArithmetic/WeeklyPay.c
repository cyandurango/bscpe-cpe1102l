/*===========================================================================
 FILE        : durangoCy_LE3_11
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Calculates the weekly pay of the user given the annual pay
 COPYRIGHT   : created September 12, 2022
 REVISION HISTORY
 Date:               By:             Description:
 September 14, 2022	| CABD			| "define" variables capitalized and fixed indentation
 -					| -				| -	
===========================================================================*/

//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//define statements place under here (VARIABLES ARE ALL CAPS)
#define WIAYEAR 52


/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : runs the main program
 ARGUMENTS   : void
 RETURNS     : int - exit code
===========================================================================*/

int main()
{
	float annualPay;
	float weekPay;
	printf("Type in the annual pay: ");
	scanf("%f", &annualPay);
	
	weekPay = annualPay / WIAYEAR;
	
	
	printf("Weekly Pay = %.2f", weekPay);
	
	return 0;


}



