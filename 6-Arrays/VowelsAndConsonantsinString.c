/*======================================================================================
 FILE        : durangoCy_7_12
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that identifies the vowels and consonants of a string
 COPYRIGHT   : created November 20, 2022
 - - -
 REVISION HISTORY
 Date:				By:             			Description:
  11 - 22 - 2022	 Cyril Andre B. Durango	 	 Reedited the documentation comments	 
======================================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>

//user-function prototypes place under this statement:
void letterCount (char strInput[]);

//global variables place under this statement:
int vowelCount;
int consoCount;

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
	char strInput[1000];
	
	printf("Enter a string: ");
	gets(strInput);
	
	letterCount(strInput);
	
	printf("\nNumber of Vowels present:\t\%d", vowelCount);
	printf("\nNumber of Consonants present:\t%d", consoCount);
	
	return 0;
}

/*================================================================================
 FUNCTION    : letterCount
 DESCRIPTION : identifies the vowels and consonants of a string and tallies them
 ARGUMENTS   : char strInput - inputted string
 RETURNS     : none
================================================================================*/
void letterCount (char strInput[])
{
	int l; //loop counter
	vowelCount = 0;
	consoCount = 0;
	for ( l = 0 ; strInput[l] ; l++ )
	{
		if (strInput[l] >= 'A' && strInput[l] <= 'Z'|| strInput[l] >= 'a' && strInput[l] <= 'z')
		{
			if (strInput[l]=='A'||strInput[l]=='E'||strInput[l]=='I'||strInput[l]=='O'||strInput[l]=='U'||
				strInput[l]=='a'||strInput[l]=='e'||strInput[l]=='i'||strInput[l]=='o'||strInput[l]=='u')
				vowelCount++;	
			else
				consoCount++;
		}
	}
	
	return;
}
