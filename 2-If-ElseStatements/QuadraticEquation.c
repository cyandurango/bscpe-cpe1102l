/*============================================================================================
 FILE        : durangoCy_LE4_12
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Calculate the roots of a quadratic equation given the constants a, b, and c
 COPYRIGHT   : created September 20, 2022
 ---
 REVISION HISTORY
 Date:               By:             Description:
 -					 -				 -
============================================================================================*/


//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//define statements place under here (VARIABLES ARE ALL CAPS)



/*===========================================================================
 FUNCTION    : Main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/

int main()
{
	float constA;
	float constB;
	float constC;
	float oneRoot;
	float twoRoot;
	
	printf("Calculate the roots of a quadratic equation with the following constants: \na = ");
	scanf("%f", &constA);
	
	printf("b = ");
	scanf("%f", &constB);
	
	printf("c = ");
	scanf("%f", &constC);
	
	
	if (constA==0 && constB==0)
	{
		printf("\nThere is no solution.");
	}
	
	else if (constA==0)
	{
		oneRoot = -constC/constB;
		printf("\nThere is only one root: \n%.2f",oneRoot);
	}
	
	else if (((constB * constB)- (4 * constA * constC)) < 0)
	{
		printf("\nThere are no real roots.");
	}
	
	else
	{
		oneRoot = (- constB - sqrt(((constB*constB) - (4.00 * constA * constC))))/(2.00 * constA);
		twoRoot = (- constB + sqrt(((constB*constB) - (4.00 * constA * constC))))/(2.00 * constA);
		printf("\nThere are two real roots: \n%.2f \n%.2f", oneRoot, twoRoot);
	}
	
	return 0;
	
}



