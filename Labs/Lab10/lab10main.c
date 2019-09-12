/** lab10main.c
* ===========================================================
* Name: C3C Jim Wang, 08 September 2019
* Section: T3A
* Project: Lab10.c
* Purpose: Practice Clion
* ===========================================================
*/

#include "lab10functs.h"
#include <stdio.h>
#include <stdbool.h>

int main() {
    char userChar1;
    char userChar2;
    char userChar3;

    printf("Enter a single character to pass to isFirstHalfAlpha():\n");
    scanf("%c", &userChar1);

    if (isFirstHalfAlpha(userChar1)) {
        printf("A %c is in the first half of the alphabet.\n", userChar1);
    } else {
        printf("A %c is NOT in the first half of the alphabet.\n", userChar1);
    }

    printf("Enter a single character to pass to typeOfChar():\n");
    scanf(" %c", &userChar2);

    if (typeOfChar(userChar2) == 1) {
        printf("A %c is a vowel.\n", userChar2);
    } else if (typeOfChar(userChar2) == 0) {
        printf("A %c is a consonant.\n", userChar2);
    } else {
        printf("A %c is neither a vowel nor a consonant.\n", userChar2);
    }

    printf("Enter a single character to pass to isMagicChar():\n");
    scanf(" %c", &userChar3);

    if(isMagicChar(userChar3)) {
        printf("A %c is the magic character @.\n", userChar3);
    } else {
        printf("A %c is NOT the magic character @.\n", userChar3);
    }

    return 0;
}