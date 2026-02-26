/*===================================================================================================
 FILE        : durangoCy_7_13
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that identifies the longest string/s from the five strings the user inputs
 COPYRIGHT   : created November 21, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
===================================================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//user-function prototypes place under this statement:
int compareStrLength (int strLen1, int strLen2);

//global variables place under this statement:
int i, longestStrLength;

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    char str[5][1000];
    
    for(i = 0; i < 5; i++)
	{
		printf("Enter string %d: ", i+1);
		gets(str[i]);
	}
	
	longestStrLength == strlen(str[0]);

	for(i = 1; i < 5; i++)
        longestStrLength = compareStrLength(longestStrLength,strlen(str[i]));
    
    printf("\nThe longest string/s is/are:");
	for(i = 0; i < 5; i++)
	{
		if(strlen(str[i])==longestStrLength) 
			printf("\n%s",str[i]);
		
	}

    return 0;
}

/*======================================================================================
 FUNCTION   : compareStrLength
 DESCRIPTION: checks the value of 
 ARGUMENTS  : int strLen1 - initialized string length (longestStrLength)
              int strLen2 - string length to be compared with strLen1 (strlen(str[i]))
 RETURN     : int - the longest length between the two compared string lengths
======================================================================================*/
int compareStrLength (int strLen1, int strLen2)
{
    int lngrStrLength;
    if (strLen1 < strLen2)
    	lngrStrLength = strLen2;
    else
    	lngrStrLength = strLen1;

    return lngrStrLength;
}
