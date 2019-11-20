/** lab33.c
* ===========================================================
* Name: Jim Wang, 13 November 2019
* Section: T3A/T4A
* Project: Lab 33
* Documentation: None
* ===========================================================  */

#include "lab33.h"

int main() {

    // Example usage of the print_bits() function, use this function
    // to help you debug your solution to the questions below
    uint8_t x = 65;
    char y = 'A';
    double z = 8.53677197180176092605993700916E304;

    printf("x = ");
    print_bits(&x, sizeof(x));

    printf("y = ");
    print_bits(&y, sizeof(y));

    printf("z = ");
    print_bits(&z, sizeof(z));


    // Exercise 1
    printf("\nExercise 1: check_bit()\n\n");
    // Write a function check_bit(), which checks whether a specific bit
    // in the input is a 1. The function accepts 2 integer parameters, the
    // first is the integer variable being checked, and the second is the
    // bit number to check. Bits are numbered from 0 to 31, where bit 0 is
    // the least significant bit. The function should return an int value
    // of 1 if the chosen bit is a 1, and 0 if it is a 0.
    //
    // Create some integer variables and use the print_bits() function to
    // test your check_bit() function.
    int t1 = 1;

    print_bits(&t1, sizeof(t1));
    printf("%d\n", check_bit(t1, 2));



    // Exercise 2
    printf("\nExercise 2: count_bits()\n\n");
    // Write a function count_bits(), which counts the number of bits 
    // with value 1 (the true bits) in the input variable. The function 
    // accepts 1 integer parameter, the variable whose 1 bits will be 
    // counted. The function should return an int value with the total 
    // number of bits with value of 1 in the variable.
    //
    // Create some integer variables and use the print_bits() function to
    // test your count_bits() function.
    int t2 = 2;

    print_bits(&t2, sizeof(t2));
    printf("%d\n", count_bits(t2));


    // Exercise 3
    printf("\nExercise 3: bit_parity()\n\n");
    // Write a function bit_parity(), which determines if the number of true
    // bits in a variable is even or odd. The function accepts 1 integer parameter,
    // the variable whose parity is being checked. The function should return
    // an int value. If the number of true bits is even, return 0, if the number
    // of true bits is odd, return 1.
    //
    // Create some integer variables and use the print_bits() function to test
    // your bit_parity() function.
    //
    // Extra: can you think of a way to tell if an integer is even or odd, using
    // a bit operation rather than using the mod operator?
    int t31 = 3, t32 = 4;

    print_bits(&t31, sizeof(t31));
    printf("%d\n", bit_parity(t31));

    print_bits(&t32, sizeof(t32));
    printf("%d\n", bit_parity(t32));



    // Exercise 4
    printf("\nExercise 4: flip_bit()\n\n");
    // Write a function flip_bit(), which negates a specific bit in a variable.
    // The function accepts 2 integer parameters, the first is the variable who
    // bit will be changed, the second is the number of the bit to be flipped.
    // Bits are numbered from 0 to 31, where bit 0 is the least significant bit.
    // The function should return the modified variable.
    //
    // Create some integer variables and use the print_bits() function to test
    // your flip_bit() function.
    int t4 = 5;

    print_bits(&t4, sizeof(t4));
    printf("%d\n", flip_bit(t4, 4));



    // Exercise 5
    printf("\nExercise 5: simple_checksum()\n\n");
    // Write a function simple_checksum(), which calculates a very simple data
    // integrity check. The function accepts a character array as input and returns
    // the exclusive or combination of each character in the array. As in starting
    // at 0, keep a running combination of each character in the array using the
    // bitwise exclusive or operator. Return the final checksum as a uint8_t type.
    //
    // Call your function a few times with different character array inputs to test
    // that it works. Note that for many reasons, including the commutative property of
    // the exclusive or operator, this is not a valid data integrity check.
    char t5[] = "help";

    printf("%d\n", simple_checksum(t5));

    
    return 0;
}

/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */
void print_bits(void* ptr, int num_bytes) {
    // Cast the pointer as an unsigned byte
    uint8_t* byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i) {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j) {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');
        }
        
        // Separate bytes
        printf(" ");
    }

    // End with a new line
    printf("\n");
}

int check_bit(int num, int ind) {
    if(num & (1 << (ind)))
        return 1;
    else
        return 0;
}

int count_bits(int val) {
    int count = 0;

    for(int i = 0; i < sizeof(val) * 8; i++) {
        if (check_bit(val, i)) {
            count++;
        }
    }

    return count;
}

int bit_parity(int val) {
    int ct = count_bits(val);

    if(ct % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int flip_bit(int val, int i) {
    return val ^ (1 << i);
}

uint8_t simple_checksum(char* stg) {
    int comb = 0;

    for(int i = 0; i < strlen(stg); i++) {
        comb ^= stg[i];
    }

    return (uint8_t)comb;
}