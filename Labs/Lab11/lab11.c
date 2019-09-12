/** lab11.c
* ===========================================================
* Name: C3C Jim Wang, 09 September 2019
* Section: T3A
* Project: Lab 11
* Purpose: for loop practice
* ===========================================================
*/

#include "lab11.h"

int main() {
    int userInput1;
    int userInput2;
    int userInput3;

    printf("Gimme your number child\n");
    scanf("%d", &userInput1);

    printf("The factorial of %d is %d.\n", userInput1,  numFactorial(userInput1));

    printf("Gimme another number child\n");
    scanf("%d", &userInput2);

    if( !isPrime(userInput2) ) {
        printf("%d is not a prime number.\n", userInput2);
    } else {
        printf("%d is a prime number.\n", userInput2);
    }

    printf("Gimme yet another number child\n");
    scanf("%d", &userInput3);

    floydsTriangle(userInput3);

    return 0;
}

int numFactorial(int fracNum) {
    int i;
    int prod = 1;

    for (i = fracNum; i > 0; i--) {
        prod = prod*i;
    }

    return prod;
}

int isPrime(int primeNum) {
    int i;
    int ind = 1;

    for (i = primeNum - 1; i > 1; i--) {
        if(primeNum % i == 0) {
            ind = 0; //condition for non-prime
        }
    }

    return ind;
}

void floydsTriangle (int floyd) {
    int i;
    int count = 1;
    int j;

    for (i = 1; i <= floyd; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", count % 2);
            count++;
        }
        if (i % 2 == 0) {
            count++;
        }
        printf("\n");
    }
}
