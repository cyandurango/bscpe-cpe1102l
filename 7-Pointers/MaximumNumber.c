/*==========================================================================================================
 FILE        : durangoCy_8_13
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that identifies the maximum number given a series of numbers inputted by the user
 COPYRIGHT   : created December 6, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
==========================================================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>

//user-function prototypes place under this statement:
int findMaxNumber (int *arr, int limit);

//global variables place under this statement:
int l;

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int entryNum, *intNum, maxNum;
    
    printf("Input a limit for the number of entries: ");
    scanf("%d", &entryNum);
    
    intNum = (int*)malloc(entryNum*sizeof(int));
    
    for ( l = 0 ; l < entryNum ; l++ )
    {
    	printf("Enter a number: ");
    	scanf("%d", intNum+l);
	}
    
    maxNum = findMaxNumber(intNum, entryNum);
    
    printf("\nThe Maximum Number: %d", maxNum);
    
	return 0;
}

/*===========================================================================
 FUNCTION    : findMaxNumber
 DESCRIPTION : identifies the max number between an array of numbers
 ARGUMENTS   : int *arr		-	array pointer
 			   int limit	-	number of entries
 RETURNS     : int - the maximum number
===========================================================================*/
int findMaxNumber (int *arr, int limit)
{
	int temp = 0;
	for (l = 0 ; l < limit ; l++)
	{
		if ((arr[l])>temp)
			temp = arr[l];
	}
	
	return temp;
}

