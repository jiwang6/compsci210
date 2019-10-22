/** lab04.c
* ===========================================================
* Name: C3C Jim Wang, 19AUG2019
* Section: T3A
* Project: Lab 4 - User-defined Functions
* Purpose: Learn function prototypes, user-defined functions,
*          return values, and parameters.
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

// TODO 1.0 - Exercise 1 - Find Largest
#include <stdio.h>

// TODO 3.0 - Exercise 3 - Degress to Radians
#include <math.h>

// TODO 4.0 - Exercise 4 - Boolean
#include <stdbool.h>

// TODO 1.1 - Exercise 1 - Find Largest
int findLargest(int num1, int num2, int num3);

// TODO 2.1 - Exercise 2 - Temperature Conversion
double convertTemperature(double degreesF);

// TODO 3.1 - Exercise 3 - Degress to Radians
double degreesToRadians(int numDeg);

// TODO 4.1 - Exercise 4 - Boolean
int magicNumber(int testNum);

int main() {
   // TODO 1.3 - Exercise 1 - Find Largest
   int num1;
   int num2;
   int num3;

   printf("Input three integers\n");
   scanf("%d", &num1);
   scanf("%d", &num2);
   scanf("%d", &num3);

   int largestInt = findLargest(num1, num2, num3);

   printf("%d\n", largestInt);
   // TODO 2.3 - Exercise 2 - Temperature Conversion
   double tempH;

   printf("Enter a temperature in fahrenheit\n");
   scanf("%lf", &tempH);

   double tempC = convertTemperature(tempH);

   printf("%lf\n", tempC);

   // TODO 3.3 - Exercise 3 - Degress to Radians
   int degreesNum;

   printf("input number of degrees\n");
   scanf("%d", &degreesNum);

   double radiansNum = degreesToRadians(degreesNum);

   printf("%lf\n", radiansNum);

   // TODO 4.3 - Exercise 4 - Boolean
   int userGuess;

   printf("pick a number\n");
   scanf("%d", &userGuess);

   printf("%d\n", magicNumber(userGuess));

   return 0;
}

// TODO 1.2 - Exercise 1 - Find Largest
int findLargest(int num1, int num2, int num3) {
   int largestInteger;

   if (num1 >= num2) {
      if (num1 >= num3) {
         largestInteger = num1;
      } else {
         largestInteger = num3;
      }
   } else if (num2 >= num3) {
      largestInteger = num2;
   } else {
      largestInteger = num3;
   }

   return largestInteger;
}
// TODO 2.2 - Exercise 2 - Temperature Conversion
double convertTemperature(double degreesF) {
   double degreesC = (degreesF - 32) * (5 / 9.0);

   return degreesC;
}
// TODO 3.2 - Exercise 3 - Degress to Radians
double degreesToRadians(int numDeg){
   double numRad = numDeg * (M_PI / 180);

   return numRad;
}

// TODO 4.2 - Exercise 4 - Boolean
int magicNumber(int testNum){
   return testNum == 12;
}
