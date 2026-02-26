/*=================================================================================================================
 FILE        : durangoCy_7_11
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that identifies the largest and smallest number from the 10 inputted numbers by the user
 COPYRIGHT   : created November 18, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
=================================================================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>

//user-function prototypes place under this statement:
int largestNum(int intNum[]);
int smallestNum(int intNum[]);

//global variables place under this statement:
int forLoop;

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
	int intNum[10];
	
	printf("Type in 10 numbers: \n");
	for ( forLoop = 0 ; forLoop < 10 ; forLoop++ )
	{
		printf(" number %2d: ", forLoop+1);
		scanf("%d", &intNum[forLoop]);
	}
	
	printf("\n================================\n\n");
	
	printf("The numbers inputted are:\n");
	for ( forLoop = 0 ; forLoop < 10 ; forLoop++ )
		printf(" %d\n", intNum[forLoop]);
	
	largestNum(intNum);
	smallestNum(intNum);
	
	printf("\nThe largest number is %d", largestNum(intNum));
	printf("\nThe smallest number is %d\n\n", smallestNum(intNum));
	
	return 0;
}

/*===========================================================================
 FUNCTION    : largestNum
 DESCRIPTION : extracts the largest number from the 10 inputted numbers
 ARGUMENTS   : int intNum[] - an array of integers
 RETURNS     : int - the extracted largest number
===========================================================================*/
int largestNum(int intNum[])
{
	int largeNum;
	
	largeNum = intNum[0];
	for ( forLoop = 0 ; forLoop < 10 ; forLoop++ )
	{
		if (largeNum < intNum[forLoop])
			largeNum = intNum[forLoop];
	}
		
	return largeNum;
}

/*===========================================================================
 FUNCTION    : smallestNum
 DESCRIPTION : extracts the smallest number from the 10 inputted numbers
 ARGUMENTS   : int intNum[] - an array of integers
 RETURNS     : int - the extracted smallest number
===========================================================================*/
int smallestNum(int intNum[])
{
	int smallNum;
	
	smallNum = intNum[0];
	for ( forLoop = 0 ; forLoop < 10 ; forLoop++ )
	{
		if (smallNum > intNum[forLoop])
			smallNum = intNum[forLoop];
	}
		
	return smallNum;
}
