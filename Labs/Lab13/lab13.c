/** lab13.c
* ===========================================================
* Name: C3C Jim Wang, 11 September 2019
* Section: T3A
* Project: Lab13
* Purpose: Pointer Practice
* ===========================================================
*/

#include "lab13.h"

int main() {
    int userFav, userClass; //Exercise 1 + 2
    int userVal1, userVal2; //Exercise 3
    int userNum; //Exercise 4
    long userFrac;

    printf("Please enter your class year:\n");
    scanf("%d", &userClass);
    printf("Please enter your favorite integer:\n");
    scanf("%d", &userFav);

    swapPassByValue(&userClass, &userFav); //ex 1; numbers are not swapped since the variables declared are lost after
    printf("aNum = %d, bNum = %d\n", userClass, userFav); //   the function is run.

    swapPassByReference(&userClass, &userFav); //ex 2; the numbers are swapped since we change the original variable
    printf("aNum = %d, bNum = %d\n", userClass, userFav); //   values themselves are changed in the function.

    printf("input two numbers separated by a space\n"); //sum using pointers... for some reason???
    scanf("%d %d", &userVal1, &userVal2);
    printf("%d\n", pointerSum(&userVal1, &userVal2));

    printf("enter number you want to find the factorial of\n"); //REVIEW THIS!
    scanf("%d", &userNum);
    findFactorial(userNum, &userFrac);
    printf("The factorial of %d is %li.\n", userNum, userFrac);

    return 0;
}

void swapPassByReference(int* classYear, int* favNumber) {
    int temp = *classYear;

    *classYear = *favNumber;
    *favNumber = temp;
}

void swapPassByValue(int classYear, int favNumber) {
    int temp = classYear;

    classYear = favNumber;
    favNumber = temp;
}

int pointerSum(int* num1, int* num2) {

    return *num1 + *cd .num2;

}

void findFactorial(int num, long* frac) {
    int i;
    *frac = 1;

    for (i = 1 ; i <= num ; i++) {
        *frac = *frac * i;
    }
}