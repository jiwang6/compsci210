/** lab33.h
* ===========================================================
* Name: Jim Wang, 13 November 2019
* Section: T3A/T4A
* Project: Lab 33
* Documentation: None
* ===========================================================  */
#ifndef MYEXE_LAB33_H
#define MYEXE_LAB33_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */

void print_bits(void* ptr, int num_bytes);

int check_bit(int num, int ind);

int count_bits(int val);

int bit_parity(int val);

int flip_bit(int val, int i);

uint8_t simple_checksum(char* stg);

#endif //MYEXE_LAB33_H
