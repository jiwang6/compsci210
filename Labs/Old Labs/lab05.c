/** lab05.c
* ===========================================================
* Name: C3C Jim Wang , 20AUG2019
* Section: T3A
* Project: Lab 5 - Branches I
* Purpose: learn and practice c syntax
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/***
 *  Function prototypes
 */
void guessGame();
int evenOdd(int value);
int passFail(int score);
int residenceHall(int squadron);
int daysInYear(int year);
int exemplar(int year);
int drinkSize(int size);
int quadrant(int x, int y);
bool isLeap(int year);
int daysInMonth(int month, int year);

int main() {

   // Exercise 0 - Guess Game
   guessGame();

   // TODO 1.2 - Exercise 1 - Even or Odd Numbers
   int userGuess;
   
   printf("Enter a value: ");
   scanf("%d", &userGuess);
   printf("%d\n", userGuess);
   
   if (evenOdd(userGuess)){
      printf("%d is odd.\n", userGuess);
   } else {
      printf("%d is even.\n", userGuess);
   }
   
   printf("Enter a value: ");
   scanf("%d", &userGuess);
   printf("%d\n", userGuess);
   
   if (evenOdd(userGuess)){
      printf("%d is odd.\n", userGuess);
   } else {
      printf("%d is even.\n", userGuess);
   }
   // TODO 2.2 - Exercise 2 - Pass or Fail Grades
   int userScore;
   
   printf("Enter a score: ");
   scanf("%d", &userScore);
   printf("%d\n", userScore);
   
   if (passFail(userScore)){
      printf("%d is passing.\n", userScore);
   } else {
      printf("%d is failing.\n", userScore);
   }
   
   printf("Enter a score: ");
   scanf("%d", &userScore);
   printf("%d\n", userScore);
   
   if (passFail(userScore)){
      printf("%d is passing.\n", userScore);
   } else {
      printf("%d is failing.\n", userScore);
   }

   // TODO 3.2 - Exercise 3 - Squadron Residence Halls
   int userSquad;
   
   printf("Enter a squadron: ");
   scanf("%d", &userSquad);
   printf("%d\n", userSquad);
   
   if (residenceHall(userSquad)) {
      printf("Squadron %d is Vandy.\n", userSquad);
   } else {
      printf("Squadron %d is Sijan.\n", userSquad);
   }
   
   printf("Enter a squadron: ");
   scanf("%d", &userSquad);
   printf("%d\n", userSquad);
   
   if (residenceHall(userSquad)) {
      printf("Squadron %d is located in Vandy.\n", userSquad);
   } else {
      printf("Squadron %d is located in Sijan.\n", userSquad);
   }
   // TODO 4.2 - Exercise 4 - Days in Year
   int userYear;
   
   printf("Enter a year: ");
   scanf("%d", &userYear);
   printf("%d\n", userYear);
   
   printf("The year %d has %d days.\n", userYear, daysInYear(userYear));
   
   
   printf("Enter a year: ");
   scanf("%d", &userYear);
   printf("%d\n", userYear);
   
   printf("The year %d has %d days.\n", userYear, daysInYear(userYear));
   
   
   
   // TODO 5.2 - Exercise 5 - Exemplar
   int userClass;
   
   printf("Enter a class year (two digits): ");
   scanf("%d", &userClass);
   printf("%d\n", userClass);
   
   if (exemplar(userClass) == 2) {
      printf("The class of 20%d's exemplar is Armstrong.\n", userClass);
   } else if (exemplar(userClass) == 1) {
      printf("The class of 20%d's exemplar is Hoover.\n", userClass);
   } else if (exemplar(userClass) == 0) {
      printf("The class of 20%d's exemplar is Risner.\n", userClass);
   }
   // TODO 6.2 - Exercise 6 - Drink Size
   int userSize;
   
   printf("Enter a drink size: ");
   scanf("%d", &userSize);
   printf("%d\n", userSize);
   
   if (drinkSize(userSize) == 0) {
      printf("A drink size of %d ounces is a small drink.\n", userSize);
   } else if (drinkSize(userSize) == 1) {
      printf("A drink size of %d ounces is a medium drink.\n", userSize);
   } else if (drinkSize(userSize) == 2) {
      printf("A drink size of %d ounces is a large drink.\n", userSize);
   } else if (drinkSize(userSize) == 3) {
      printf("A drink size of %d ounces is a ridiculous drink.\n", userSize);
   }

   // TODO 7.2 - Exercise 7 - Quadrant
   int userX;
   int userY;
   
   printf("Enter the x and y values of a point: ");
   scanf("%d %d", &userX, &userY);
   printf("%d, %d\n", userX, userY);
   
   if (quadrant(userX, userY) == 0) {
      printf("The point (%d, %d) is on an axis.\n", userX, userY);
   } else {
      printf("The point (%d, %d) is in quadrant %d.\n", userX, userY, quadrant(userX, userY));
   }
   
   printf("Enter the x and y values of a point: ");
   scanf("%d %d", &userX, &userY);
   printf("%d, %d\n", userX, userY);
   
   if (quadrant(userX, userY) == 0) {
      printf("The point (%d, %d) is on an axis.\n", userX, userY);
   } else {
      printf("The point (%d, %d) is in quadrant %d.\n", userX, userY, quadrant(userX, userY));
   }
   

   // TODO 8.3 - Exercise 8 - Days in Month
   int userYear1;
   int userMonth;
   
   printf("Enter the month and year: ");
   scanf("%d %d", &userMonth, &userYear1);
   printf("%d, %d\n", userMonth, userYear1);
   
   printf("Month %d has %d days.\n", userMonth, daysInMonth(userMonth, userYear1));
   return 0;
}

/**--------------------------------------------------------------------------------------------
 * A function that generates a random number between 0 and 100 and asks the user to guess it.
 * @param <explanation of each of the function parameters>
 * @return <explanation of what the function returns>
 */
void guessGame() {
   int answer, guess;

   // Setup and seed the random number generator
   struct timespec time;
   clock_gettime(CLOCK_REALTIME, &time);
   srandom((unsigned) (time.tv_nsec ^ time.tv_sec));

   // Generate a random number between 0 and 100
   answer = random() % 101;

   // Prompt user for a guess and check whether it is correct or not
   printf("I am thinking of a number between 0 and 100.\n");
   printf("Pssst...the secret answer is %d.\n",answer); // for debugging only
   printf("What is your guess: ");
   scanf("%d",&guess);
   if (guess == answer) {
      printf("You guessed right! The answer was %d.\n", answer);
   } else {
      printf("Sorry, you guessed %d, but the answer was %d.\n",guess, answer);
   }
}

// TODO 1.1 - Exercise 1 - Even or Odd Numbers
int evenOdd(int exValue1) {
   if (exValue1 % 2) {
      return 1;
   } else {
      return 0;
   }
}
// TODO 2.1 - Exercise 2 - Pass Fail Grades
int passFail(int userScore) {
   if (userScore >= 70 ) {
      return 1;
   } else {
      return 0;
   }
}

// TODO 3.1 - Exercise 3 - Residence Hall
int residenceHall(int userSquad) {
   if (userSquad <= 23 ) {
      return 1;
   } else {
      return 0;
   }
}

// TODO 4.1 - Exercise 4 - Days in Year
int daysInYear(int userYear) {
   int returnValue = 365;
   
   if (userYear % 4 == 0) {
      returnValue = 366;
   } if (userYear % 100 == 0) {
      if (userYear % 400 == 0) {
         returnValue = 366;
      } else {
      }
   }
   
   return returnValue;
}

// TODO 5.1 - Exercise 5 - Exemplar
int exemplar(int meClass) {
   return 21 - meClass;
}

// TODO 6.1 - Exercise 6 - Drink Size
int drinkSize(int userDrink) {
   int thing;
   if (userDrink <= 12) {
      thing = 0;
   } else if (userDrink > 12 && userDrink <= 20) {
      thing = 1;
   } else if (userDrink > 20 && userDrink <= 32) {
      thing = 2;
   } else if (userDrink > 32) {
      thing = 3;
   }
   
   return thing;
}


// TODO 7.1 - Exercise 7 - Quadrant
int quadrant(int userX, int userY){
   int returnVal;
   if (userX > 0) {
      if (userY > 0) {
         returnVal = 1;
      } else if (userY < 0) {
         returnVal = 4;
      } else {
         returnVal = 0;
      }
   } else if (userX < 0) {
      if (userY > 0) {
         returnVal = 2;
      } else if (userY < 0) {
         returnVal = 3;
      } else {
         returnVal = 0;
      }
   } else {
      returnVal = 0;
   }
   
   return returnVal;
}

 /**------------------------------------------------------------------------------------
 *   <add a description>
 *   @param year - The number of years.
 *   @returns A boolean indicating whether the year is a leap year.
 */
bool isLeap(int userYear) {
   bool returnValue;
   if (userYear % 4 == 0) {
      returnValue = true;
   } if ((userYear % 100 == 0) && (userYear % 400 == 0)) {
         returnValue = true;
   } else if (userYear % 100 == 0) {
      returnValue = false;
   }
   return returnValue;
}
 
/**------------------------------------------------------------------------------------
 *   A function that determines the number of days in a month in a given year.
 *   @param month The numeric value for the month.
 *   @param year The year in which the month occurs.
 *   @returns The number of days in the month.
 */
int daysInMonth(int month, int year){
   int days;
   if ((month == 2) && (isLeap(year))) {
      days = 29;
   } else if (month == 2) {
      days = 28;
   } else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
      days = 31;
   } else {
      days = 30;
   }
   return days;
}