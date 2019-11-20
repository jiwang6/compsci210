/** lab32.h
* ===========================================================
* Name: Jim Wang, 12 November 2019
* Section: T3A/4A
* Project: Lab 32
* Documentation: C3C Gills helped me differentiate between tail and head recursion.
* ===========================================================  */

#ifndef MYEXE_LAB32_H
#define MYEXE_LAB32_H

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIRNAME "../Labs/Lab32/password/"

/** ----------------------------------------------------------
 * @fn int factorial(int N)
 * @brief Recursively calculates the factorial of N
 * @param N, the input parameter
 * @return N!, the value of the factorial of N
 * ----------------------------------------------------------
 */
int factorial(int N);

/** ----------------------------------------------------------
 * @fn int tail_factorial(int N, int retVal)
 * @brief Recursively calculates the factorial of N through tail recursion
 * @param N, the input parameter
 * @param retVal, updated every function call
 * @return N!, the value of the factorial of N
 * ----------------------------------------------------------
 */
int tail_factorial(int N, int retVal);

/** ----------------------------------------------------------
 * @fn int collatz(int N, int count)
 * @brief recursively finds the number of steps to reach 1 through the Collatz conjecture
 * @param N, input param
 * @param count, step count updated with each recursion
 * @return stepCount, the number steps needed to reach 1
 * ----------------------------------------------------------
 */
int collatz(int N, int count);

/** ----------------------------------------------------------
 * @fn void decode_password(char* filename)
 * @brief recursively searches files for password
 * @param filename, the file path
 * ----------------------------------------------------------
 */
void decode_password(char* filename);

#endif //MYEXE_LAB32_H
