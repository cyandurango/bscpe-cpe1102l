/*
===========================================================================
 FILE        : durangoCy_LE4_11
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Prints out the tuition for 2 semesters at ABC College
 COPYRIGHT   : created September 12, 2022
 REVISION HISTORY
 Date:               By:             Description:
 September 14, 2022	| CABD			| "define" variables capitalized and fixed indentation
 -					| -				| -	
===========================================================================
*/


//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//define statements place under here (VARIABLES ARE ALL CAPS)
#define SEMREG 450
#define PUNITCOST 450
#define UPENALTYCOST 2260/12.00


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
	int sem1Units;
	int sem2Units;
	float sem1Tuition;
	float sem2Tuition;
	float totalTuition;
	
	printf("1st Semester Number of Units: ");
	scanf("%d", &sem1Units);
	printf("2nd Semester Number of Units: ");
	scanf("%d", &sem2Units);
	
	sem1Tuition = SEMREG + sem1Units * (PUNITCOST + UPENALTYCOST);
	sem2Tuition = SEMREG + sem2Units * (PUNITCOST + UPENALTYCOST);
	totalTuition = sem1Tuition + sem2Tuition;
	
	printf("1st Semester Tuition Fee    : %8.2f",sem1Tuition);
	printf("\n2nd Semester Tuition Fee    : %8.2f",sem2Tuition);
	printf("\nTotal Tuition Fee           : %8.2f", totalTuition);
	
	return 0;



}



