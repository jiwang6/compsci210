//
// Created by C22Jim.Wang on 25-Sep-19.
//

#ifndef PA2_PA2FUNCTS_H
#define PA2_PA2FUNCTS_H

#define SIZE 100

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int guessNum(int cNum);

double generateCalculate(int para1, double para2[], char para3);

int perfectAI(char para1[6]);

int checkPerfect(int para1);

int perfectNumbers(int para1, int para2, int para3[]);

void fill2D(int para1[SIZE][SIZE]);

int count2D(int para1[SIZE][SIZE]);

#endif //PA2_PA2FUNCTS_H
