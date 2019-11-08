/** lab31.h
* ===========================================================
* Name: Jim Wang, 07 Nov 2019
* Section: T3/T4
* Project: Lab 31
* Documentation: No help received
* ===========================================================  */

#ifndef MYEXE_LAB31_H
#define MYEXE_LAB31_H

#include <stdio.h>
#include <string.h>

/** ----------------------------------------------------------
 * @fn int powerN(int base, int exp)
 * @brief Calculates the value of the base number raised to the exponent
 * @param base is the base number
 * @param exp is the exponent
 * @return the value of base^exponent
 * ----------------------------------------------------------
 */
int powerN(int base, int exp);

/** ----------------------------------------------------------
 * @fn int count_char(char str[], char c)
 * @brief Counts the number of characters in str[] that match c
 * @param str is the character array to search
 * @param c is the search character
 * @return the number of characters matching c in str[]
 * ----------------------------------------------------------
 */
int count_char(char str[], char c);

/** ----------------------------------------------------------
 * @fn int count_num(int array[], int x, int len)
 * @brief Counts the number of ints in array[] that match x
 * @param array is an array of integers to be searched
 * @param x is the int value to be searched for
 * @param len is the number of values in the array
 * @return the number of integers in array[] matching x
 * ----------------------------------------------------------
 */
int count_num(int array[], int x, int len);

/** ----------------------------------------------------------
 * @fn void reverse_print(char str[])
 * @brief Prints the character array str[] in reverse
 * @param str is the character array
 * @return none, only prints the input parameter in reverse
 * ----------------------------------------------------------
 */
void reverse_print(char str[]);

#endif //MYEXE_LAB31_H
