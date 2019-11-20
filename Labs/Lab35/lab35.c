/** lab35.c
* ===========================================================
* Name: Jim Wang, 19 November 2019
* Section: T3/4A
* Documentation: ahaha
* ===========================================================  */

#include "lab35.h"

int main() {
    // Exercise 1
    printf("\nExercise 1: sum_squares()\n\n");

    
    
    // Exercise 2
    printf("\nExercise 2: is_even()\n\n");
    
    
    
    // Exercise 3
    printf("\nExercise 3: power_two()\n\n");
    
    
    
    // Exercise 4
    printf("\nExercise 4: reverse_bytes()\n\n");
    
    
    
    // Exercise 5
    printf("\nExercise 5: is_palindrome()\n\n");
   
   
   
    return 0;
}

int sum_squares(int N) {
    if (N == 1)
        return 1;
    else
        return N * N + sum_squares(N - 1);
}

int is_even(int x) {
    return !(x & 1);
}

int power_two(int N) {
    return 1 << N;
}

int reverse_bytes(unsigned int val) {
    unsigned int byteNum = sizeof(val);
    unsigned int revNum = 0, temp;

    for (int i = 0; i < byteNum; i++) {
        revNum <<= 8;
        temp = (val >> i * 8) & 0xff; // takes last byte
        revNum += temp;
    }

    return revNum;
}

int is_palindrome(char message[], int len) {
    if(len <= 1)
        return 1;
    return !(message[0] - message[len - 1]) && is_palindrome(&message[1], len - 2);
}