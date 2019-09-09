/** lab11.c
* ===========================================================
* Name: C3C Jim Wang, 09 September 2019
* Section: T3A
* Project: Lab 11
* Purpose: for loop practice
* ===========================================================
*/

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
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

void floydsTriangle(int rowNum) {
    int i;
    int j;

    for (i = 0; i < rowNum; i++) { //i just want an A
        for (j = 0; j <= i; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    printf("%d", 1);
                } else {
                    printf("%d", 0);
                }
            } else {
                if (j % 2 != 0) {
                    printf("%d", 1);
                } else {
                    printf("%d", 0);
                }
            }
        }
        printf("\n");

    }
}
