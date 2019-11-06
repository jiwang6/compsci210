/** lab30.c
* ===========================================================  
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 30
* Documentation: DOC STATEMENT
* ===========================================================  */

#include "lab30.h"

int main(void) {

    // Examples of factorial functions
    int N = 6;
    printf("\nFactorial examples:\n\n");
    printf("loop factorial %d! = %ld\n", N, loop_factorial(N));
    printf("recursive factorial %d! = %ld\n", N, recurs_factorial(N));


    // Exercise 1
    printf("\nExercise 1:\n\n");
    // You own a bunny farm, and for insurance purposes you need to
    // report the total number of ears on the farm given the total number
    // of bunnies. Because you are studying Computer Science on the side
    // you decide to implement an ear counting function using recursion,
    // rather than just multiplying the number of bunnies by 2.
    //
    // Fill in your answer to the questions below in each printf() statement

    // 1) You decide to make the base case when num_bunnies == 0, fill in
    // the correct return value for this case in the printf() below.
    printf("When num_bunnies == 0 -> return 0;\n");

    // 2) Now you need to work out the recursive case, fill in the correct
    // return value for this case in the printf() below.
    printf("Otherwise -> return 2 + count_ears(num_bunnies - 1);\n");

    // 3) Now you need to actually code up the function, the prototype is
    // already in the lab31.h file and a skeleton of the definition is below
    // main() in this file.
    int numBunnies = 100;
    printf("%d bunnies have %d ears\n", numBunnies, count_ears(numBunnies));


    // Exercise 2
    printf("\nExercise 2:\n\n");
    // You are thinking about your bunnies, and how cute they would be if
    // they made a bunny pyramid. Then you wonder how many total bunnies it
    // would take to make a pyramid given the number of levels in the pyramid.
    // Assume the top level has just 1 bun, and each level lower has 1 more
    // bun than the last. Because the whole ear counting function went so well
    // you decide to implement a function to calculate this using recursion, rather
    // than just a loop.
    //
    // Fill in your answer to the questions below in each printf() statement

    // 1) You decide to make the base case when num_levels < 2, fill in
    // the correct return value for this case in the printf() below.
    printf("When num_levels < 2 -> return num_levels;\n");

    // 2) Now you need to work out the recursive case, fill in the correct
    // return value for this case in the printf() below.
    printf("Otherwise -> return num_levels + num_buns_in_pyramid(num_levels - 1);\n");

    // 3) Now you need to actually code up the function, the prototype is
    // already in the lab31.h file and a skeleton of the definition is below
    // main() in this file.
    int numLevels = 10;
    printf("An adorable pyramid of %d levels needs %d buns\n", numLevels,num_buns_in_pyramid(numLevels));


    // Exercise 3
    printf("\nExercise 3:\n\n");
    // The insurance adjuster is back at your farm, he says your policy has changed
    // and now (for very complicated insurance reasons) you have to recalculate the
    // total number of ears on your farm, but this time you have to assume that each
    // odd numbered bun has 2 ears, but each even numbered bun has 3 ears. You make a
    // note to shop around for new bun insurance, but decide to make a new recursive
    // function to do the calculation anyway.
    //
    // Fill in your answer to the questions below in each printf() statement

    // 1) First determine the condition and return value for the base case of your function.
    printf("When numNewBunnies == 0 -> return 0;\n");

    // 2) Now determine the recursive case, note that you might have slightly different cases
    // for an even number of buns and for an odd number
    printf("When numNewBunnies %% 2 == 0 -> return 3 + count_ears2(numNewBunnies - 1);\n");
    printf("Otherwise numNewBunnies %% 2 != 0 -> return 2 + count_ears2(numNewBunnies - 1);\n");

    // 3) Now you need to actually code up the function, the prototype is
    // already in the lab31.h file and a skeleton of the definition is below
    // main() in this file.
    int numNewBunnies = 10;
    printf("%d bunnies, for insurance purposes, have %d ears\n", numNewBunnies, count_ears2(numNewBunnies));

    return 0;
}

/** ----------------------------------------------------------
 * @fn long loop_factorial(int N);
 * @brief for loop implementation of a factorial operation
 * @param N the input value, of which the factorial is calculated
 * @return the value fact where fact = N!, as a long int
 * ----------------------------------------------------------
 */
long loop_factorial(int N) {
    // Initialize the factorial as 1
    long fact = 1;

    // For i from N to 1, keep a running product
    for (int i = N; i > 0; --i) {
        fact *= i;
    }

    return fact;
}

/** ----------------------------------------------------------
 * @fn long recurs_factorial(int N);
 * @brief recursive implementation of a factorial operation
 * @param N the input value, of which the factorial is calculated
 * @return the value fact where fact = N!, as a long int
 * ----------------------------------------------------------
 */
long recurs_factorial(int N) {

    // Base case when N is 0
    if (N == 1) {
        return (long) 1;
    }

    // Recursive case, for all N >= 1
    return (long) N * recurs_factorial(N-1);
}

/** ----------------------------------------------------------
 * @fn int count_ears(int num_bunnies);
 * @brief recursive function to count the number of ears on N bunnies
 * @param num_bunnies the input value, the number of bunnies
 * @return the total number of ears, assuming each has 2 ears
 * ----------------------------------------------------------
 */
int count_ears(int num_bunnies) {
    if (num_bunnies == 0) {
        return 0;
    } else {
        return 2 + count_ears((num_bunnies - 1));
    }
}

/** ----------------------------------------------------------
 * @fn int num_buns_in_pyramid(int num_levels);
 * @brief recursive function to count the totals number of buns in a bunny pyramid
 * @param num_levels the input value, the number of levels in the pyramid
 * @return the total number of buns, assuming the top level has 1 bun, and each lower
 *         has 1 more bun than the last
 * ----------------------------------------------------------
 */
int num_buns_in_pyramid(int num_levels) {
    if (num_levels < 2) {
        return num_levels;
    } else {
        return num_levels + num_buns_in_pyramid(num_levels - 1);
    }
}

/** ----------------------------------------------------------
 * @fn int count_ears2(int num_bunnies);
 * @brief recursive function to count the number of ears on N bunnies
 * @param num_bunnies the input value, the number of bunnies
 * @return the total number of ears, assuming each odd bun has 2 ears
 *         but the even buns have 3 ears
 * ----------------------------------------------------------
 */
int count_ears2(int num_bunnies) {
    if (num_bunnies == 0) {
        return 0;
    } else if (num_bunnies % 2 == 0) {
        return 3 + count_ears2(num_bunnies - 1);
    } else if (num_bunnies % 2 != 0) {
        return 2 + count_ears2(num_bunnies - 1);
    }
}