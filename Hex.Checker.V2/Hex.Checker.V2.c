/* Welcome to Hex.Checker V2.1 */
/* This is version for lazier counting */
/* Program will ask you to enter numbers you want to count by addition etc.. */
/* Made by: Trolit */

/*
Base is 16 (if addition is > 16 , move "1" to the next position)

A - 10
B - 11
C - 12
D - 13
E - 14
F - 15

addition - "+"
multiplication - "*"
division - "/"
subtraction - "-"
modulus - "%"

v2.0 [05.03.17]
 *created project

v2.1 [06.03.17]
 *added third option to mathematical operations. "Perform operation again".
 *Note only shows in menu instead of in every mathematical operation.

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
/* I like this color, please, leave it unchanged. */
system("COLOR 2");

/* Thanks to this I know which one to do */
int checker = 0;

/* Ask for operation */
label:

/* I am introducing myself */
printf("**********************************************************************\n           Hi, I am Hex.Checker v2.1, let me help you. \n           Oh and by the way, check my BIO \n           (check Information folder)\n**********************************************************************\n\n\n");



printf("Please, choose an operation you wish to perform. (Type the number)\n");
printf("1. Addition\n");
printf("2. Multiplication\n");
printf("3. Subtraction\n");
printf("4. Division\n");
printf("5. Modulus\n");
printf("6. Information\n");
printf("7. Exit\n\n\n");

printf("Please note:\n");
printf("Write values in these format: for example 5AD, AAAD!\n");

scanf("%d", &checker);

if (checker == 1)
{
    add:
    printf("\n\n***ADDITION***\n\n");
    int x,y;
    printf ("Enter first value\n");
    scanf("%x", &x);
    printf ("Enter second value\n");
    scanf("%x", &y);
    printf ("The addition between: %2X and %2X =");
    printf (" %2X\n\n\n", x,y,x+y);

    int w;
    printf("Do you want me to move back to the menu of the program? \n1 - YES(Back to the main menu)\n2 - NO(I ended up my work)\n3 - I want to perform this operation again. [ADDITION]\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
            if (w == 3) goto add;
}

if (checker == 2)
{
    mult:
    printf("\n\n***MULTIPLICATION***\n\n");
    int x,y;
    printf ("Enter first value\n");
    scanf("%x", &x);
    printf ("Enter second value\n");
    scanf("%x", &y);
    printf ("The multiplication between: %2X and %2X = %2X\n\n\n", x,y,x*y);

    int w;
    printf("Do you want me to move back to the menu of the program? \n1 - YES(Back to the main menu)\n2 - NO(I ended up my work)\n3 - I want to perform this operation again. [MULTIPLICATION]\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
            if (w == 3) goto mult;
}

if (checker == 3)
{
    subtr:
    printf("\n\n***SUBTRACTION***\n\n");
    int x,y;
    printf ("Enter first value\n");
    scanf("%x", &x);
    printf ("Enter second value\n");
    scanf("%x", &y);
    printf ("The subtraction between: %2X and %2X = %2X\n\n\n", x,y,x-y);

    int w;
    printf("Do you want me to move back to the menu of the program? \n1 - YES(Back to the main menu)\n2 - NO(I ended up my work)\n3 - I want to perform this operation again. [SUBTRACTION]\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
            if (w == 3) goto subtr;
}

if (checker == 4)
{
    divi:
    printf("\n\n***DIVISION***\n\n");
    int x,y;
    printf ("Enter first value\n");
    scanf("%x", &x);
    printf ("Enter second value\n");
    scanf("%x", &y);
    printf ("The division between: %2X and %2X = %2X\n\n\n", x,y,x/y);

    int w;
    printf("Do you want me to move back to the menu of the program? \n1 - YES(Back to the main menu)\n2 - NO(I ended up my work)\n3 - I want to perform this operation again. [DIVISION]\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
            if (w == 3) goto divi;
}

if (checker == 5)
{
    modu:
    printf("\n\n***MODULUS***\n\n");
    int x,y;
    printf ("Enter first value\n");
    scanf("%x", &x);
    printf ("Enter second value\n");
    scanf("%x", &y);
    printf ("The modulus between: %2X and %2X = %2X\n\n\n", x,y,x%y);

    int w;
    printf("Do you want me to move back to the menu of the program? \n1 - YES(Back to the main menu)\n2 - NO(I ended up my work)\n3 - I want to perform this operation again. [MODULUS]\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
            if (w == 3) goto modu;
}

if (checker == 6)
{
    printf("\n\n************************************************************************\n*                                                                      *\n");
    printf("* - Name:               Hex.Checker.V2.1                               *\n");
    printf("* - Born:               5th March 2017                                 *\n");
    printf("* - Started from:       v2.0                                           *\n");
    printf("* - Written by:         Trolit                                         *\n*                                                                      *\n");
    printf("************************************************************************\n\n");
    printf("My description:\n");
    printf("I am here to help you.\nI want to show you the results of mathematical operations on"
           "hexadecimal numbers.You are doing it manually in your note,\nthen you ask me to show\n"
           "the correct answer.\n\n");

    int w;
    printf("Do you want me to move back to the menu of the program? \n1 - YES(Back to the main menu)\n2 - NO(Enough!)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 7)
{
    printf("\n\nPress ENTER to EXIT\n");
    printf("Press ENTER to EXIT.......\n");
    printf("Press ENTER to EXIT.......\n");
    printf("Press ENTER to EXIT.......\n");
    printf("Press ENTER to EXIT.......\n");

    return 0;
    system("pause");
}
}









