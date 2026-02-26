/*=================================================================================
 FILE        : durangoCy_LE4_11
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : Determines whether the character entered is a vowel or a consonant
 COPYRIGHT   : created September 19, 2022
 ---
 REVISION HISTORY
 Date:               By:             Description:
 -					 -				 -
=================================================================================*/


//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>


//define statements place under here (VARIABLES ARE ALL CAPS)



/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit code
===========================================================================*/

int main()
{
	char charInput;
	
	printf("Enter a letter: ");
	scanf("%c", &charInput);
	
	if (charInput>='A'||charInput<='Z'||charInput=='a'||charInput=='z')
	{
		if (charInput=='A'||charInput=='E'||charInput=='I'||charInput=='O'||charInput=='U'||
			charInput=='a'||charInput=='e'||charInput=='i'||charInput=='o'||charInput=='u')
		{
			printf("VOWEL!");
		}
		
		else
			printf("CONSONANT");
	
	}

	else
	{
		printf("INVALID INPUT!");
	}
	
	return 0;
	
}



