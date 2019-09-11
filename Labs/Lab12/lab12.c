/** lab12.c
* ===========================================================
* Name: C3C Jim Wang, 11 September 2019
* Section: T3A
* Project: Lab 12
* Purpose: more loop practice
* ===========================================================
*/


#include "lab12.h"

int main() {
    int userNum1, userNum2, userNum3, userNum4, userNum5;

    printf("Give me rent:\n");
    scanf("%d", &userNum1);

    if (isArmstrong(userNum1) == 1) {
        printf("%d is an Armstrong number\n", userNum1);
    } else {
        printf("%d is not an Armstrong number\n", userNum1);
    }

    printf("Give me rent:\n");
    scanf("%d %d", &userNum2, &userNum3);

    printf("GCD = %d\n", findGCD(userNum2, userNum3));

    printf("Give me rent:\n");
    scanf("%d %d", &userNum4, &userNum5);

    printRange(userNum4,userNum5);

    return 0;
}

int isArmstrong(int a) {
    int b,sum = 0,test = a;
    while (a > 0) {
        b = a % 10;
        sum = sum + (b * b * b);
        a = a / 10;
    }

    if(test == sum)
        return 1;
    else
        return 0;
}

int findGCD(int a, int b) {
    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }

    return a;
}

void printRange(int a, int b) {
    while (a <= b) {
        printf("%d\n", a);
        a++;
    }
}