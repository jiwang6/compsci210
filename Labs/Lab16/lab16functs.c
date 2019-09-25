#include "lab16functs.h"

void captureOhms(double resVals[NUM_RES]) {
    for (int i = 0; i < NUM_RES; i++) {
        printf("gimme yer resistance\n");
        scanf("%lf", &resVals[i]);
    }
}

void  calculateCurrent(double circVolt, double resVals[NUM_RES], double* currentVal) { //call with &currentVal also broke af
    double totalRes = 0;

    for (int i = 0; i < NUM_RES; i++) {
        totalRes = totalRes + resVals[i];
    }

    *currentVal = circVolt / totalRes;
}

void voltageDrop(double vDrop[NUM_RES], double resVals[NUM_RES], double currentVal) {
    for (int i = 0; i < NUM_RES; i++) {
        vDrop[i] = currentVal * resVals[i];
    }

}

void printDrop(double vDrop[NUM_RES]) {
    for (int i = 0; i < NUM_RES; i++) {
        printf("%d) %.1lf V\n", i + 1, vDrop[i]);
    }
}

int performOperation(char userChar, int uP1, int uP2){
    switch (userChar) {
        case '+':
            return(uP1 + uP2);
            break;
        case '-':
            return(uP1 - uP2);
            break;
        case '*':
            return(uP1 * uP2);
            break;
        case '/':
            return(uP1 / uP2);
            break;
    }
}

void getMinMax(int userArray[], int arrayMax, int* uPo2, int* uPo1) {
    *uPo1 = userArray[0];
    *uPo2 = userArray[0];

    for (int i = 0; i < arrayMax; i++) {
        if (*uPo1 < userArray[i]) {
            *uPo1 = userArray[i];
        }

        if (*uPo2 > userArray[i]) {
            *uPo2 = userArray[i];
        }
    }
}