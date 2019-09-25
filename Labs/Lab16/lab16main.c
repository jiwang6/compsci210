#include "lab16functs.h"

int main() {
    double resVals[NUM_RES];
    double circVolt = 12;
    double vDrop[NUM_RES];
    double currentVal;

    int switchResponse;

    char userChar;
    int userInt1;
    int userInt2;

    int testArray[] = {4, 2, 6, 8, 5};
    int max;
    int min;

    captureOhms(resVals);
    calculateCurrent( circVolt, resVals, &currentVal);
    voltageDrop(vDrop, resVals, currentVal);
    printDrop(vDrop);

    printf("Survey response scale: 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average, \n"
           "3-4 - Below Average, 1-2 - Awful, 0 - Horrible.\n"
           "Enter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream:");
    scanf("%d", &switchResponse);

    switch (switchResponse) {
        case 0:
            printf("Horrible\n");
        case 1:
        case 2:
            printf("Awful\n");
            break;
        case 3:
        case 4:
            printf("Below Average");
            break;
        case 5:
            printf("Average");
            break;
        case 6:
        case 7:
            printf("Good\n");
        case 8:
        case 9:
            printf("Excellent\n");
            break;
        case 10:
            printf("Outstanding\n");
            break;
        default:
            printf("You did not enter a value between 0 and 10.\n");
            break;
    }

    printf("Math operation, int1, int2\n");
    scanf(" %c %d %d", &userChar, &userInt1, &userInt2);

    printf ("%d\n", performOperation(userChar, userInt1, userInt2));

    getMinMax(testArray, 5, &min, &max);

    printf("Min: %d\nMax: %d\n", min, max);

    return 0;
}