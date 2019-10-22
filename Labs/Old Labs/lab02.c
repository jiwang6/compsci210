/** lab02.c
* ===========================================================
* Name: C3C Jim Wang/11 Aug 2019
* Section: T3A
* Project: Lab 2 - Variables, I/O, and Arithmetic Expressions
* Purpose: Learn C basics
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

// TODO 0.1 - Exercise 0 - Include Statement
#include <stdio.h>

int main() {


   // TODO 1.1 - Exercise 1 - Output Statements
   printf("Name: Jim Wang\n");
   printf("Hometown: San Francisco\n");
   printf("Squad # and Name: CS-06, Bull Six\n");
   printf("Interesting fact: I have a failed start-up company at home.\n");

   // TODO 2.1 - Exercise 2 - Variable Basics
   int x;
   int y;
   int xDivy;
   int yMultx;

   printf("Input integer x:\n");
   scanf("%d", &x);

   printf("Input integer y:\n");
   scanf("%d", &y);

   xDivy = x / y;
   yMultx = y * x;

   printf("x / y = %d\ny * x = %d\n", xDivy, yMultx);

   // TODO 3.1 - Exercise 3 - Arithmetic Expressions
   int a;
   int b;
   int c;
   int d;

   a = 256 * 2;
   b = 1024 / 2;
   c = ((11-1) * 100 + 24) / 2;
   d = 512 % 513;

   printf("a: %d\nb: %d\nc: %d\nd: %d\n", a, b, c, d);

   // TODO 4.1 - Exercise 4 - More Arithmetic Expressions
   int squareLength;
   int squarePerimeter;
   int squareArea;
   int cubeVolume;

   printf("Input length of square:\n");
   scanf("%d", &squareLength);

   squarePerimeter = 4 * squareLength;
   squareArea = squareLength * squareLength;
   cubeVolume = squareArea * squareLength;

   printf("Perimeter is: %d\nArea is: %d\nVolume is: %d\n", squarePerimeter, squareArea, cubeVolume);

   // TODO 4.2 - Exercise 4 - More Arithmetic
   int valueA;
   int valueB;
   int valueDifference;
   int valueQuotient;

   printf("Input integer valueA:\n");
   scanf("%d", &valueA);

   printf("Input integer valueB:\n");
   scanf("%d", &valueB);

   valueDifference = valueA - valueB;
   valueQuotient = valueB / valueA;

   printf("valueA - valueB = %d\nvalueB / valueA = %d", valueDifference, valueQuotient);

    return 0;
}
