/*==================================================================================================================================================================
 FILE        : durangoCy_LE5_13
 AUTHOR      : Cyril Andre B. Durango
 DESCRIPTION : A program that contains a menu of operations the user can choose from (power problem solver, factorial problem solver and quadratic problem solver).
 COPYRIGHT   : created September 29, 2022
 ---
 REVISION HISTORY
 Date:               By:             Description:
 -					 -				 -
==================================================================================================================================================================*/

//"include" statements place under here
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//define statements place under here (VARIABLES ARE ALL CAPS)

/*===========================================================================
 FUNCTION    : main
 DESCRIPTION : runs the main program
 ARGUMENTS   : void
 RETURNS     : int - exit code
===========================================================================*/


int main()
{
	int i=0; 							//loop counter variable
	int a, b, pwrPSAnswer; 				//variables for power problem solver
	int f, fctPSAnswer; 				//variables for factorial problem solver
	float A, B, C, answer2, answer3; 	//variables for quadratic equation solver
	
	do
	{
		printf("Problem Solver Menu\n\nChoose the kind of problem you want to solve: \n");
		printf("\n[1] Power Problem Solver");
		printf("\n[2] Factorial Problem Solver");
		printf("\n[3] Quadratic Problem Solver");
		printf("\n-----------------------------------------");
		printf("\n[x] Press any other number to exit the program");
		printf("\n\nWhat kind of problem do you want to solve?\nEnter your choice here: ");
		scanf("%d", &i);
		if (i==1) //Power Problem Solver
		{
			printf("\n=====================================================\n");
			printf("\nYou have chosen the Power Problem Solver.\n");
			printf("\nEnter the base: ");
			scanf("%d", &a);
			printf("Enter the exponent: ");
			scanf("%d", &b);
			pwrPSAnswer=1;
			for (b; b>0; b--)
			{
				pwrPSAnswer *= a;
			}
			
			printf("\nAnswer: %d\n", pwrPSAnswer);
			printf("\n=====================================================\n\n");
				
		}
		else if (i==2) //Factorial Problem Solver
		{
			printf("\n=====================================================\n");
			printf("\nYou have chosen the Factorial Problem Solver.\n");
			printf("\nEnter a number to find its factorial: ");
			scanf("%d", &f);
			fctPSAnswer = 1;
			if (f<0)
			{
				printf("\nThe answer is not a real number.\n");
			}
			else
			{
				for( f ; f > 0 ; f--)
				{
					fctPSAnswer *= f;
				}
				
				printf("\nAnswer: %d\n", fctPSAnswer);
			}
			
			printf("\n=====================================================\n\n");
				
		}
		else if (i==3) //Quadratic Problem Solver
		{
			printf("\n=====================================================\n");
			printf("\nYou have chosen the Quadratic Problem Solver.\n");
			printf("\nCalculate the roots of a quadratic equation with\nthe following constants: \na = ");
			scanf("%f", &A);
			printf("b = ");
			scanf("%f", &B);
			printf("c = ");
			scanf("%f", &C);
			
			if (A==0 && B==0)
			{
				printf("\nThere is no solution.\n");
			}
			else if (A==0)
			{
				answer2 = -C/B;
				printf("\nThere is only one root: \n%.2f\n",answer2);
			}
			else if (((B * B)- (4 * A * C)) < 0)
			{
				printf("\nThere are no real roots.\n");
			}
			else
			{
				answer2 = (- B + sqrt(((B*B) - (4.00 * A * C))))/(2.00 * A);
				answer3 = (- B - sqrt(((B*B) - (4.00 * A * C))))/(2.00 * A);
				printf("\nThere are two real roots: \n%.2f \n%.2f\n", answer2, answer3);
			}	
			printf("\n=====================================================\n\n");
		}
		else //Exit Application
		{
			printf("\n=====================================================\n");
			printf("\nThank you. You have exited the program.\n\n");
		}
	}
	while (i<=3 && i>=1);
	
	return 0;
	
}


