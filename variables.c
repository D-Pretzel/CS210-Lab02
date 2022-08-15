/* output.c
 * ===========================================================
 * Name: David Petzold
 * Section: T6/7
 * Project: Lab 2 - Variables, I/O, and Arithmetic Expressions
 * Purpose: Learn C basics
 */

// What do you need to #include to use the printf/scanf functions?
#include <stdio.h>

// Put Your Main Function Here
int main(void) {

    int numOne;
    int numTwo;

    printf("enter two integers: ");
    scanf("%i %i", &numOne, &numTwo);

    printf("valueOne divided by valueTwo is %i\n", numOne / numTwo);
    printf("valueOne multiplied by valueTwo is %i\n", numOne * numTwo);
    printf("valueOne incremented is %i\n", ++numOne);
    printf("valueTwo decremented is %i\n", --numTwo);

    return 0;
}