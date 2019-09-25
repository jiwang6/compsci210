#ifndef LAB16_LAB16FUNCTS_H
#define LAB16_LAB16FUNCTS_H

#include <stdio.h>

#define NUM_RES 5

void captureOhms(double resVals[NUM_RES]);
void calculateCurrent(double circVolt, double resVals[NUM_RES], double* currentVal);
void voltageDrop(double vDrop[NUM_RES], double resVals[NUM_RES], double currentVal);
void printDrop(double vDrop[NUM_RES]);

int performOperation(char userChar, int uP1, int uP2);

void getMinMax(int userArray[], int arrayMax, int* uPo1, int* uPo2);

#endif //LAB16_LAB16FUNCTS_H
