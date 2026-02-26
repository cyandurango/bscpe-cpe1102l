/*==========================================================================================
 FILE        : durangoCy_plasabasJa_6_12
 AUTHORS     : Cyril Andre B. Durango
 			   Jahleel Sedrik Plasabas	
 DESCRIPTION : Determines whether the character inputted is a vowel, consonant, or neither
 COPYRIGHT   : created November 12, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
==========================================================================================*/


//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//user-function prototypes place under this statement:
bool isLetter(char ch);
bool isVowel(char ch);

bool truthval;
/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	isLetter(ch);
	if (isLetter(ch)==1)
	{
		isVowel(ch);
		if (isVowel(ch)==1)
			printf("The character entered is a VOWEL");
		
		else
			printf("The character entered is a CONSONANT");
	}
	
	else
		printf("The character entered is not a LETTER");
	
	return 0;
		
}


/*===========================================================================
 FUNCTION    : isLetter
 DESCRIPTION : Checks whether the character entered is a letter or not
 ARGUMENTS   : char ch - the entered character
 RETURNS     : bool - 1 for letter, 0 for otherwise
===========================================================================*/
bool isLetter(char ch)
{
	bool truthVal;
	
	if(ch>='A'&&ch<='Z'|| ch>='a'&&ch<='z')
		truthVal = 1;
	
	else
		truthVal = 0;
	
	return truthVal;
	
}


/*===========================================================================
 FUNCTION    : isVowel
 DESCRIPTION : Checks whether the entered letter is a vowel or a consonant
 ARGUMENTS   : char ch - the entered character
 RETURNS     : bool - 1 for "vowel", 0 for "consonant"
===========================================================================*/
bool isVowel(char ch)
{
	bool truthVal;
	
	if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
		ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		truthVal = 1;
	
	else
		truthVal = 0;
		
	return truthVal;
	
}
