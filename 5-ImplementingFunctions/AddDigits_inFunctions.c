/*====================================================================================
 FILE        : durangoCy_plasabasJa_6_12
 AUTHORS     : Cyril Andre B. Durango
 			   Jahleel Sedrik Plasabas	
 DESCRIPTION : Calculates the sum of the two least significant figures of an integer
 COPYRIGHT   : created November 11, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
====================================================================================*/


//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>


//user-function prototypes place under this statement:
int extractFirstLSD(int num);
int extractSecondLSD(int num);
int sumDigits(int x, int y);

int sum, x, y;
/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	x = extractFirstLSD(num);
	y = extractSecondLSD(num);
	sum = sumDigits(x, y);
	
	printf("\nThe sum of the least two significant digits: \n%d + %d = %d", y,x,sum);
	
	return 0;
}


/*===========================================================================
 FUNCTION    : extractFirstLSD
 DESCRIPTION : Executes the main program
 ARGUMENTS   : int num - the entered integer
 RETURNS     : int - the extracted first least significant digit
===========================================================================*/
int extractFirstLSD(int num)
{	
	x = num%10;
	
	return x;
}


/*===========================================================================
 FUNCTION    : extractSecondLSD
 DESCRIPTION : Executes the main program
 ARGUMENTS   : int num
 RETURNS     : int - the extracted second least significant digit
===========================================================================*/
int extractSecondLSD(int num)
{
	y = (num/10)%10;
	
	return y;	
}


/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : int x, int y - the calculated integers
 RETURNS     : int - calculated sum of the two least significant digits
===========================================================================*/
int sumDigits (int x, int y)
{
	sum = x + y;
		
	return sum;
}
