/** lab32.c
* ===========================================================
* Name: Jim Wang, 12 November 2019
* Section: T3A/4A
* Project: Lab 32
* Documentation: C3C Gills helped me differentiate between tail and head recursion.
* ===========================================================  */

#include "lab32.h"

int main() {

    // Exercise 1
    printf("\nExercise 1:\n\n");
    // The recursive function factorial() has been defined for you below. Review
    // the code and determine if it is tail recursive.
    //
    // For this exercise you will write a tail recursive version of factorial(),
    // called tail_factorial(), your function should take 2 integer parameters, the
    // first is the input value, the second is an accumulator.

    // Write your own code to test the base and recursive cases of tail_factorial()
    // to determine that it is working correctly.
    assert(tail_factorial(1, 1) == 1);

    // Exercise 2
    printf("\nExercise 2:\n\n");
    // The Collatz conjecture states that following a set of rules, you can reach 1
    // starting from any other number. While this conjecture has not been proven, you
    // will write a tail recursive function called collatz() that accepts two integer
    // input parameters (the first is the starting value, the second is the accumulator)
    // and returns the number of steps needed to reach 1 from the starting value.
    //
    // The rules of the Collatz conjecture are:
    //   if the current N is even, the next N = N/2
    //   if the current N is odd, the next N = 3*N + 1
    //
    // The first 10 values in the number of steps required to reach 1 are below (for testing)
    // this is the correct output for inputs of 1, 2, 3, ... 10
    //
    // 0, 1, 7, 2, 5, 8, 16, 3, 19, 6

    // Write your own code to test the base and recursive cases of collatz() to determine
    // that it is working correctly
    assert(collatz(1, 0) == 0);

    // Exercise 3
    printf("\nExercise 3:\n\n");
    // Download the password.zip file from zyBooks. Extract this file to a new password 
    // directory under your Lab 32 folder. There is a password hidden inside these files, 
    // write a function decode_password() which searches these files recursively to find 
    // the password, starting with "_.txt".
    //
    // Your decode_password() function should accept a character array input and return void.
    // The input is the name of a text file, without the directory, so the first call would be
    // decode_password("_.txt"); Use the DIRNAME constant to add the directory to the file name
    // inside the decode_password() fuction. You might create a character array to hold the full
    // name then use sprintf() to put the directory and filename together, fullName is a character 
    // array you create, DIRNAME is a directory constant, and fname is the name you pass into the 
    // decode_password() function.
    // sprintf(fullName, "%s%s", DIRNAME, fname);
    //
    // Until you reach the end of the text file, read one line of the file, if the string on that
    // line is of length 1, print that character (it is part of the message), otherwise the
    // string you read is the name of another text file which you should now search.
    //
    // NOTE: a bunch of random underscore '_' characters got thrown in with the actual message
    // so don't print those out when you find them. If you use fscanf(), to read the text files
    // remember that each line ends with a new line character.


    // When you submit to the ZyBook comment out any calls to decode_password(), and change the
    // printf() call below to the password you read from the text files.
    printf("https://xkcd.com/710//0//\n");

    return 0;
}

/** ----------------------------------------------------------
 * @fn int factorial(int N)
 * @brief Recursively calculates the factorial of N
 * @param N, the input parameter
 * @return N!, the value of the factorial of N
 * ----------------------------------------------------------
 */
int factorial(int N) {
    if (N < 2) {
        return 1;
    }

    return N * factorial(N - 1);
}

/** ----------------------------------------------------------
 * @fn int tail_factorial(int N, int retVal)
 * @brief Recursively calculates the factorial of N through tail recursion
 * @param N, the input parameter
 * @param retVal, updated every function call
 * @return N!, the value of the factorial of N
 * ----------------------------------------------------------
 */
int tail_factorial(int N, int retVal) {
    if (N < 2) {
        return retVal;
    }

    return tail_factorial(N - 1, retVal * N);
}

/** ----------------------------------------------------------
 * @fn int collatz(int N, int count)
 * @brief recursively finds the number of steps to reach 1 through the Collatz conjecture
 * @param N, input param
 * @param count, step count updated with each recursion
 * @return stepCount, the number steps needed to reach 1
 * ----------------------------------------------------------
 */
int collatz(int N, int count) {
    if (N == 1) {
        return count;
    } else if (N % 2 == 0) {
        return collatz(N / 2, ++count);
    } else {
        return collatz(3 * N + 1, ++count);
    }
}

/** ----------------------------------------------------------
 * @fn void decode_password(char* filename)
 * @brief recursively searches files for password
 * @param filename, the file path
 * ----------------------------------------------------------
 */
void decode_password(char* filename) {
    char fileCont[100];
    char fullname[200];

    sprintf(fullname, "%s%s", DIRNAME, filename);

    FILE* fp = fopen(fullname, "r");

    while(!feof(fp)) {
        fscanf(fp, "%s", fileCont);

        if(strlen(fileCont) == 1) {
            if (strncmp(fileCont, "_", sizeof(char)) != 0){
                printf("%s", fileCont);
            }
        } else {
            decode_password(fileCont);
        }
    }

    fclose(fp);
}