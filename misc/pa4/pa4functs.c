/** pa4functs.c
* ===========================================================
* Name: Jim Wang, 12 November 2019
* Section: T3A/T4A
* ===========================================================  */

#include "pa4functs.h"

int nth_even(int N) {
    if (N==0)
        return 0;
    else
        return 2 + (nth_even(N-1));
}

int almost_fibonacci(int N) {
    if (N == 1)
        return 5;
    else if (N == 2)
        return 1;
    else
        return almost_fibonacci(N - 1) + almost_fibonacci(N - 2);
}

int alternating_cubes(int N) { //work damn it
    if (N == 1)
        return -1;
    else if (N % 2 == 1)
        return (-1) * N * N * N + alternating_cubes(N - 1); //IT'S SUM I AM VERY SHA BI
    else if (N % 2 == 0)
        return N * N * N + alternating_cubes(N - 1);
    else
        return 0; //so zybooks shuts up
}

int is_positive(int x) {
    return !(x >> (sizeof(x) * 8 - 1) & 1);
}

int mult_by_two(int x) {
    return x << 1;
}

int set_bit(int val, int N, int bitVal) {
    if (((val >> N) & 1 ) == bitVal) //checks if bit is same | oh my god that took WAY TOO LONG FOR ME TO FIGURE OUT
        return val;

    if (bitVal == 0) { //set 1 to 0
        return val - (1 << N);
    } else { //set 0 to 1
        return val | (1 << N);
    }
}

int quick_hash(char message[]) { //?????
    uint32_t hash = 0x00000000;

    for (int i = 0; i < strlen(message); i++) {
        hash += message[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }

    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);

    return hash;
}