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

    int sideLength;

    printf("enter the length of a side of a square: ");
    scanf("%i", &sideLength);

    printf("perimeter of the square is: %i\n", 4 * sideLength);
    printf("area of a square is: %i\n", sideLength * sideLength);
    printf("volume of a cube is: %i\n", sideLength * sideLength * sideLength);

    return 0;
}