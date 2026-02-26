/*===========================================================================
 FILE        : durangoCy_plasabasJa_6_13
 AUTHORS     : Cyril Andre B. Durango
 			   Jahleel Sedrik Plasabas	
 DESCRIPTION : Create a program that lets the user choose an operation:
 			      (1) Power Solver;
 			      (2) Factorial Solver; and
 			      (3) Quadratic Solver
 COPYRIGHT   : created November 13, 2022
 - - -
 REVISION HISTORY
 Date:               By:             Description:
 December 7, 2022	 CABDurango		 included a dummy variable "condition" 
  										 under the else statement found in
  										 the quadraticSolver function 
===========================================================================*/

//"#include" statements place under this statement:
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//user-function prototypes place under this statement:
void displayMenu();
int powerSolver(int base, int p);
int factorialSolver(int num);
int quadraticSolver(int a, int b, int c);

//global variables place under here
float fRoot, sRoot;
int condition;

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : Executes the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
	int forLoop;
	int base, p; //power solver variables
	int num; // factorial solver variables
	int a, b, c; //quadratic solver variables
	int psAnswer, fsAnswer;
	
	do
	{
		displayMenu();
		scanf("%d", &forLoop);
		
		if (forLoop == 1)
		{
			printf("\n=====================================================\n");
			printf("\nYou have chosen the Power Problem Solver.\n");
			printf("\nEnter the base: ");
			scanf("%d", &base);
			printf("Enter the exponent: ");
			scanf("%d", &p);
			
			psAnswer = powerSolver(base, p);
			
			printf("\nAnswer: %d\n", psAnswer);
			printf("\n=====================================================\n\n");
		}
		
		else if (forLoop == 2)
		{
			printf("\n=====================================================\n");
			printf("\nYou have chosen the Factorial Problem Solver.\n");
			printf("\nEnter a number to find its factorial: ");
			scanf("%d", &num);
			
			fsAnswer=factorialSolver(num);
			
			printf("\nAnswer: %d\n", fsAnswer);
			printf("\n=====================================================\n\n");
		}
		
		else if (forLoop == 3)
		{
			printf("\n=====================================================\n");
			printf("\nYou have chosen the Quadratic Problem Solver.\n");
			printf("\nCalculate the roots of a quadratic equation with\nthe following constants: \na = ");
			scanf("%d", &a);
			printf("b = ");
			scanf("%d", &b);
			printf("c = ");
			scanf("%d", &c);
			
			condition = quadraticSolver(a,b,c);
			
			if (condition == 1)
				printf("\nThere is no solution.\n");
		
			else if (condition == 2)
				printf("\nThere is only one root: \n%.2f\n",fRoot);
			
			else if (condition == 3)
				printf("\nThere are no real roots.\n");
			
			else
				printf("\nThere are two real roots: \n%.2f \n%.2f\n", fRoot, sRoot);	
			
			printf("\n=====================================================\n\n");
		}
	
		else
		{
			printf("\n=====================================================\n");
			printf("\nThank you. You have exited the program.\n\n");
		}
	}
	while (forLoop<=3 && forLoop>=1);
	return 0;
}


/*===========================================================================
 FUNCTION    : displayMenu
 DESCRIPTION : displays a menu of operations
 ARGUMENTS   : void
 RETURNS     : void
===========================================================================*/
void displayMenu()
{
	printf("Problem Solver Menu\n\nChoose the kind of problem you want to solve: \n");
	printf("\n[1] Power Problem Solver");
	printf("\n[2] Factorial Problem Solver");
	printf("\n[3] Quadratic Problem Solver");
	printf("\n-----------------------------------------");
	printf("\n[x] Press any other number to exit the program");
	printf("\n\nWhat kind of problem do you want to solve?\nEnter your choice here: ");
	
	return;
}


/*===============================================================================
 FUNCTION    : powerSolver
 DESCRIPTION : An operation that solves for an exponential problem
 ARGUMENTS   : int base, int p - the integers entered for the base and exponent
 RETURNS     : int - the result to the operation
===============================================================================*/
int powerSolver (int base, int p)
{
	int answer;
	answer = pow(base,p);
	
	return answer;		
}


/*===========================================================================
 FUNCTION    : factorialSolver
 DESCRIPTION : An operation that solves for the factorial of a number
 ARGUMENTS   : int num - the integer entered
 RETURNS     : int - the result to the operation 
===========================================================================*/
int factorialSolver (int num)
{
	int answer = 1;
	
	for( num ; num > 0 ; num--)
		answer *= num;
		
	return answer;
	
}


/*============================================================================
 FUNCTION    : quadraticSolver
 DESCRIPTION : An operation that solves for the factorial of a number
 ARGUMENTS   : int a, int b, int c - three constants of a quadratic equation
 RETURNS     : int - a set of conditions
============================================================================*/
int quadraticSolver (int a, int b, int c)
{
	if (a==0 && b==0)
		condition = 1;
	
	else if (a == 0)
	{
		condition = 2;
		fRoot = (-c*1.00)/b;	
	}
	
	else if (((b * b)- (4 * a * c)) < 0)
		condition = 3;
		
	else
	{
		condition = 4;
		fRoot = (- b + sqrt(((b*b) - (4.00 * a * c))))/(2.00 * a);
		sRoot = (- b - sqrt(((b*b) - (4.00 * a * c))))/(2.00 * a);
		
	}	
		
	return condition;
}
