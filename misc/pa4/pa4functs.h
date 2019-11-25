/** pa4functs.h
* ===========================================================
* Name: Jim Wang, 12 November 2019
* Section: T3A/T4A
* ===========================================================  */

#ifndef MYEXE_PA4FUNCTS_H
#define MYEXE_PA4FUNCTS_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>

//recursion (fun)
int nth_even(int N);
int almost_fibonacci(int N);
int alternating_cubes(int N);

//bitwise (less fun but still better than pointer algebra)
int is_positive(int x);
int mult_by_two(int x);
int set_bit(int val, int N, int bitVal);
int quick_hash(char message[]);

#endif //MYEXE_PA4FUNCTS_H

