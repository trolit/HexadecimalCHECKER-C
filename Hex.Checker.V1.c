/* This is Hexadecimal Checker */
/* version: 1.0 */
/* To use it, simply overwrite variables with numbers you wish to use */

/*
#Note:
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

The variables are different for each operation
due to perform a lot of counting during one
program running. This is quite usefull for me.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

/* Variables for addition "+" */
int x = 0xA121;
int y = 0xA121;

/* Variables for multiplication "*" */
int a = 0x51A;
int b = 0x51A;

/* Variables for division "/" */
int c = 0x52A;
int d = 0x52A;

/* Variables for subtraction "-" */
int e = 0x53A;
int f = 0x54A;

/* Variables for modulus "%" */
int g = 0x53A;
int h = 0x54A;

/* Program effects */

printf("Hex.Checker.V1 RESULTS\n");
printf("===========================\nAddition (+) of \nx=%x\ny=%x\nis %x\n===========================\n", x,y,x+y);
printf("Multiplication (*) of \na=%x \nb=%x\nis %x\n===========================\n", a,b,a*b);
printf("Division (/) of \nc=%x \nd=%x\nis %x\n===========================\n", c,d,c/d);
printf("Subtraction (-) of \ne=%x \nf=%x\nis %x\n===========================\n", e,f,e-f);
printf("Modulus of \ng=%x \nh=%x\nis %x\n===========================\n", g,h,g%h);
return 0;
}

