/** PEX0.c
* ==============================================================
* Name: C3C Jim Wang, 23AUG2019
* Section:
* Project: PEX 0 - ASCII Art
* Purpose: Understand how to use C standard library functions,
*          and user-defined functions.
* Documentation Statement: no help recieved
* ==============================================================
* Instructions:
 * Complete and submit PEX0 as outlined in the writeup.
*/

#include <stdio.h>
#include <math.h>

void drawFlower(void);
void drawDog(void);
void drawArrow(void);
double triangleArea(double, double, double);

int main() {
   int userChoice;

   printf("1 for flower, 2 for dog, 3 for arrow.\n");
   scanf("%d", &userChoice);

   if (userChoice == 1) {
      drawFlower();
   } else if (userChoice ==2) {
      drawDog();
   } else {
      drawArrow();
   }

   double leg1;
   double leg2;
   double leg3;

   printf("Input three sides of a right triangle.\n");
   scanf("%lf %lf %lf", &leg1, &leg2, &leg3);

   double userArea = triangleArea(leg1, leg2, leg3);

   if (userArea == -1.0) {
      printf("Your inputs do not describe a right triangle!\n");
   } else {
      printf("The area of a right triangle with a base side of %.0lf inches, a "
      "height of %.0lf inches, "
      "and a hypotenuse of %.0lf inches is %.2lf square inches.\n", leg1, leg2,
      leg3, userArea);
   }

   return 0;
}

void drawFlower() {
   printf("    _ _\n   (_\\_)\n  (__<_{}\n   (_/_)\n  |\\ |\n   \\\\| /|\n "
   "   \\|//\n     |/\n,.,.,|.,.,.\n^`^`^`^`^`^\n");
}

void drawDog() {
   printf("^..^      /\n/_/\\_____/\n   /\\   /\\\n  /  \\ /  \\\n");
}

void drawArrow() {
   printf("**\n**\n**\n**\n**\n****\n***\n**\n*\n");
}

double triangleArea(double leg1, double leg2, double leg3) {
   double returnVal = -1;
   if (pow(leg1, 2) + pow(leg2, 2) == pow(leg3, 2)) {
      returnVal = (leg1 * leg2 * 0.5);
   }

   return returnVal;
}
