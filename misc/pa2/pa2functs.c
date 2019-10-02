//
// Created by C22Jim.Wang on 25-Sep-19.
//
#include "pa2functs.h"

int guessNum(int cNum){
    int gNum;

    do {
        gNum = (rand() % 10 + 1);
    } while(cNum != gNum);

    return gNum;
}

double generateCalculate(int para1, double para2[], char para3){
    double max = para2[0];
    double min = para2[0];
    double sum = 0;

    for (int i = 0; i < para1; i++){
        if (max < para2[i]) {
            max = para2[i];
        }
        if (min > para2[i]) {
            min = para2[i];
        }
        sum = sum + para2[i];
    }

    switch (para3) {
        case 'S':
            return(sum);
            break;
        case 'A':
            return(sum/para1);
            break;
        case 'R':
            return(max-min);
            break;
    }
}

int perfectAI(char para1[6]) {
    if (strcmp(para1, "rock") == 0) {
        return 1;
    } if (strcmp(para1, "paper") == 0) {
        return 2;
    } if (strcmp(para1, "scissor") == 0) {
        return 0;
    }
}

int checkPerfect(int para1) {
    int dSum = 0;

    for (int i = para1 - 1; i > 0; i--) {
        if (para1 % i == 0) {
            dSum = dSum + i;
        }
    }
    if (para1 == dSum){
        return 1;
    } else {
        return 0;
    }

}

int perfectNumbers(int para1, int para2, int para3[]){
    int total = 0;
    int j = 0;

    if (para1 < para2) { //parameter order flipped
        int temp = para2;
        para2 = para1;
        para1 = temp;
    }

    for (int i = para1; i >= para2; i--) {
        if (checkPerfect(i)) {
            total++;
            para3[j] = i;
            j++;
        }
    }

    return total;
}

void fill2D(int para1[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            para1[i][j] = ((rand() % 1000) +1);
        }
    }
}

int count2D(int para1[SIZE][SIZE]){
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (para1[i][j] % 15 == 0){
                count++;
            }
        }
    }
    return count;
}