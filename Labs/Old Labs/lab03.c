/** lab03.c
* ===========================================================
* Name: C3C Jim Wang / 14Aug2019
* Section: T3A
* Project: Lab 3 - Variables, Data Types, and Strings
* Purpose: Learn C basics
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
   // TODO 1.1 - Exercise 1 - Distance Formula
   double x1;
   double y1;
   double x2;
   double y2;
   double totalDistance;

   printf("enter the x and y values of two points\n");
   scanf("%lf", &x1);
   scanf("%lf", &y1);
   scanf("%lf", &x2);
   scanf("%lf", &y2);

   totalDistance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   printf("%lf\n",totalDistance);

   // TODO 2.1 - Exercise 2 - Data Types
   float value1;
   float value2;
   float percent1;
   float percent2;

   printf("enter two floating point values\n");
   scanf("%f", &value1);
   scanf("%f", &value2);

   percent1 = value1 / value2 * 100;
   percent2 = value2 / value1 * 100;

   printf("%.2f\n", percent1);
   printf("%.4f\n", percent2);

   // TODO 3.1 - Exercise 3 - sizeof()
   int x;

   printf("enter an integer\n");
   scanf("%d", &x);

   printf("%d\n%d\n", x, (int)sizeof(x));
   printf("%lf\n%lu\n", (double)x, sizeof((double)x));

   // TODO 3.2 - Exercise 3 - sizeof()

   char userChar;

   printf("enter a character\n");
   scanf(" %c", &userChar);

   printf("%c\n%lu\n", userChar, sizeof(userChar));

   // TODO 4.1 - Exercise 4 - Strings
   char userString[50];
   char copyString[11];

   printf("enter a string no longer than 50 characters\n");
   scanf("%s", userString);

   strncpy(copyString, userString, 10);
   printf("%s\n", copyString);

   printf("%i\n", strcmp(userString, copyString));
   printf("%i\n", strncmp(userString, copyString, 10));
   printf("%lu\n", strlen(userString));

   return 0;
}
