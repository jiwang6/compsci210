/** lab34.c
* ===========================================================
* Name: Jim Wang, 18 November 2019
* Section: T3/T4A
* Project: Lab 34
* Documentation: None
* ===========================================================  */

#include "lab34.h"

int main() {

    // Exercise 1
    printf("\nExercise 1: reverse_bits()\n\n");
    // Bit operations are commonly used in cryptographic or
    // data integrity checks to manipulate bits in the data in
    // interesting ways.
    // Write a function reverse_bits(), that accepts an integer
    // parameter and returns the input value with its bits in reverse
    // order. Note that to avoid the special case of right shifting
    // signed values your prototype should accept an unsigned int,
    // initialize an unsigned int to hold the reversed bits, but
    // return an int. You should use the left shift, right shift, &,
    // and | operators to accomplish this.
    //
    // Extra: It is possible to write this function using only bit operations.



    // Exercise 2
    printf("\nExercise 2: bit_rotate_left()\n\n");
    // Write a function bit_rotate_left(), which shifts bits to the left,
    // any bits that would be discarded when using a standard left
    // shift are added back to the right bits. Your function will
    // accept an unsigned int (the value to be rotated), and an int
    // which is the number of bits to rotate the value. This is known
    // as bit rotate or a circular bit shift. You should use the left
    // shift, right shift, and | operators to accomplish this. Be sure
    // to use an unsigned type for values you will right shift to ensure
    // a logical bit shift. Return the rotated bit values as an int.



    // Exercise 3
    printf("\nExercise 3: bit_rotate_right()\n\n");
    // Write a function bit_rotate_right(), which shifts bits to the right,
    // any bits that would be discarded when using a standard right
    // shift are added back to the left bits. Your function will
    // accept an unsigned int (the value to be rotated), and an int
    // which is the number of bits to rotate the value. You should use the left
    // shift, right shift, and | operators to accomplish this. Be sure
    // to use an unsigned type for values you will right shift to ensure
    // a logical bit shift. Return the rotated bit values as an int.



    // Exercise 4
    printf("\nExercise 4: make_crc()\n\n");
    // A cyclic redundancy check (CRC) is an error-detecting code commonly used
    // in digital networks and storage devices to detect accidental changes to
    // raw data. You can read more about CRCs on the internet.
    // Write a function make_crc() that accepts a character array and returns the
    // 32 bit CRC value calculated using the CRC-32 algorithm and the pre-computed
    // table of polynomial values defined in the CRCTAB global.
    //
    // Pseudocode for the CRC-32 algorithm is below.
    //
    // 1) initialize crc32 as an unsigned 32 bit value of all ones
    // 2) for each byte in the input array do 3 and 4
    // 3) calculate the table index by performing the following:
    //    xor the current message byte and the crc32 value, then save only
    //    the right most byte (this will be some value between 0 and 255)
    // 4) update the crc32 value by performing the following:
    //    settin crc32 equal to the crc32 value right shifted 8 bits and
    //    xor'd with the CRCTAB value at the previously calculated index
    // 5) return the inverse of the crc32 value (negate all bits)



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

int reverse_bits(unsigned int num) {
    unsigned int  bitNum = sizeof(num) * 8;
    unsigned int revNum = 0, temp;

    for (int i = 0; i < bitNum; i++) {
        temp = (num & (1 << i));
        if(temp)
            revNum |= (1 << ((bitNum - 1) - i));
    }

    return revNum;
}

int bit_rotate_left(unsigned int num, int numBits) {
    unsigned int temp = num >> (sizeof(num) * 8 - numBits);
    num = num << numBits;
    return num | temp;
}

int bit_rotate_right(unsigned int num, int numBits) {
    unsigned int temp = num << (sizeof(num) * 8 - numBits);
    num = num >> numBits;
    return num | temp;
}

int make_crc(char *str) {
    unsigned int crc32 = 0xFFFFFFFF;

    for (int i = 0; i < strlen(str); i++) {
        crc32 = (crc32 >> 8) ^ CRCTAB[(crc32 ^ str[i]) & 0xFF];
    }
    return ~crc32;
}