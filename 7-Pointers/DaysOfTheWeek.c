/*===================================================================================================
 FILE        : durangoCy_8_11
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that identifies the day of the week from the user's inputted number
 COPYRIGHT   : created December 4, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
  -					  -				  -
===================================================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//user-function prototypes place under this statement:
bool findDayOfWeek(int dayNum);

//global variables place under this statement:

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    char *weekDays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int dayNum, truthVal;

    printf("Enter day: ");
    scanf("%d", &dayNum);
	
	truthVal = findDayOfWeek(dayNum);
	
    if(truthVal == 1)
        printf("Day of the week: %s", weekDays[dayNum-1]);
    
    else
        printf("Invalid Input");
    
    return 0;
}

/*====================================================================================
 FUNCTION    : findDayOfWeek
 DESCRIPTION : checks whether the number is within the range of the days of the week
 ARGUMENTS   : int dayNum - the inputted number
 RETURNS     : bool - 1 if the input is within 1-7 range, 0 if it is not
====================================================================================*/
bool findDayOfWeek(int dayNum)
{
    bool flag;
	if (dayNum >= 1 && dayNum <= 7)
    	flag = 1;
    
    else
    	flag = 0;
	
	return flag;
}

