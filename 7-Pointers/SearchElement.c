/*===================================================================================================================
 FILE        : durangoCy_8_12
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that identifies the index of a stored number from a series of numbers inputted by the user
 COPYRIGHT   : created December 5, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
===================================================================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//user-function prototypes place under this statement:
bool checkNum (int *arr, int entryNum, int numSearch);
int searchIndex (int *arr, int entryNum, int numSearch);

//global variables place under this statement:
int entryNum, *arr, numSearch, l;

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
	int truthVal,numIndex;
	printf("Input a limit for the number of entries: ");
    scanf("%d", &entryNum);
    
    arr = (int*)malloc(sizeof(int));
    
    for ( l = 0 ; l < entryNum ; l++ )
    {
    	printf("Enter a number: ");
    	scanf("%d", arr+l);
	}
    
	printf("\nNumber to search: ");
	scanf("%d", &numSearch);
	
	truthVal = checkNum(arr, entryNum, numSearch);
	numIndex = searchIndex(arr, entryNum, numSearch);
	
	if (truthVal == 1)
		printf("Index Found: %d",numIndex);
	
	else
		printf("Index not found. Invalid Input.");
	
    return 0;
}

/*===========================================================================
 FUNCTION    : checkNum
 DESCRIPTION : checks whether the searched number is located in the entries
 ARGUMENTS   : int *arr			-	array pointer
 			   int entryNum		-	entry limit
 			   int numSearch	-	inputted number
 RETURNS     : bool - 1 if it is one of the entries, 0 if it is not
===========================================================================*/
bool checkNum (int *arr, int entryNum, int numSearch)
{
	bool flag = 0;
	for ( l = 0 ; l < entryNum ; l++ )
    {
    	if ((arr[l])==numSearch)
			flag = 1;
	}	
	return flag;
}


/*===========================================================================
 FUNCTION    : searchIndex
 DESCRIPTION : identifies the index of the searched number
 ARGUMENTS   : int *arr			-	array pointer
 			   int entryNum		-	entry limit
 			   int numSearch	-	inputted number
 RETURNS     : int - the array storage number
===========================================================================*/
int searchIndex (int *arr, int entryNum, int numSearch)
{
	int indexNum;
	for (l = 0 ; l < entryNum ; l++)
	{
		if ((arr[l])==numSearch)
			indexNum = l;
			break;
	}
	return indexNum;
}
