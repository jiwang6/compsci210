/** lab24.c
* ================================================================
* Name: Jim Wang
* Section: T3A
* Project: Lab24 - Dynamic Memory Allocation II
* =================================================================
*
* Instructions:  In this lab you will practice allocating memory
* dynamically, using the c library functions malloc() and
* realloc().  Specifically you will allocate an array using malloc()
* and then dynamically grow this array using realloc() as it is filled
* with random integers.
*
* Complete the tasks below.
*/


#define INIT_SIZE 100

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//local function prototypes
void seedGenerator();
int fillArray(int *array, int arraySize, int dataSetSize);

int main() {

    /** TASK 0 - read/understand the seedGenerator() function.
     * This function seeds the random number
     * generator (see lab 5's guess game function).  This function
     * will only allow srand() to be called once (it is bad
     * to seed the random number generator more than once). Call the
     * function below.  Try calling it second time. Why is the
     * random number generator not seeded a second time?
     */
     seedGenerator();


    /** TASK 1 - Allocate an array of INIT_SIZE integers
     * using the malloc() function call.
     */
    int *intArray = (int*) malloc(INIT_SIZE * sizeof(int));

    /** TASK 2 - declare and initialize an int variable to
     * hold the size of a data set of random integers.
     * The size should vary between 1 and 1000.
     */
    seedGenerator();
    srand(0);

    int randNum = (rand() % 999) + 1;

    int doubled = fillArray(intArray, INIT_SIZE, randNum);

    printf("Initial size: %d\n", INIT_SIZE);
    printf("Data set size: %d\n", randNum);
    printf("Number of times doubled: %d", doubled);


    /** TASK 3 - complete the fillArray() function implementation
     * and call it.
     * part 1 - implement fillArray() using realloc() (header below)
     *    Note: double the array in size when it is reallocated
     * part 2 - call the function below and print out a message
     * that includes the initial size of the array, the
     * randomly generated data set size (from task 2), and the number
     * of times doubled (returned by the function).
     */

    /** TASK 4 -  IMPORTANT - When you submit this lab to zyBooks be
     *     sure that you comment out the line in main() that calls
     *     the seedGenerator() function.  Also double check your the range
     *     on your random number generation in task 2.  It should be between
     *     1 and 1000 inclusive.
     */

    return 0;
}

/** ----------------------------------------------------------
 * fillArray() - fills array with random ints its size is
 * specfied by dataSetSize
 * @param array is a ptr to an array of integers
 * @param arraySize is the size of the array of integers
 * @param dataSetSize is the final size of the array of integers
 * which can be smaller, equal to, or larger than the array's initial
 * size
 * @return the number of times the initial array was doubled in size
 * to support the larger data set
 * ----------------------------------------------------------
 */
int fillArray(int *array, int arraySize, int dataSetSize) {
    int doubleAmount = 0;

    while (arraySize < dataSetSize) {
        arraySize *= 2;
        doubleAmount++;
    }

    array = (int*) realloc(array, sizeof(int) * arraySize);

    for (int i = 0; i < dataSetSize; i++) {
        array[i] = rand();
    }

    return doubleAmount;
}

/** ----------------------------------------------------------
 * seedGenerator() - seeds the random number generator only once.
 * ----------------------------------------------------------
 */
void seedGenerator() {
    //set up and then seed random number generator
    static int seedDone = 0; // static variables retain their value between calls
                             // and are only initialized once

    // modified so the seed is only done once
    if (!seedDone) {

        struct timespec time;
        clock_gettime(CLOCK_REALTIME, &time);
        srandom((unsigned) (time.tv_nsec ^ time.tv_sec));
        seedDone = 1;
        printf("Random number generator seeded...\n");
    }
}