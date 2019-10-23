#ifndef LAB25_LAB25_H
#define LAB25_LAB25_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define FILENAME "lab25Data.csv"

typedef struct Point_struct {
    int x;
    int y;
} Point;

typedef struct USAFBaseData_struct {
    char baseName[50];
    int bldgsOwned;
    int structsOwned;
    char city[50];
    char state[30];
} USAFBaseData;

void getPoints(Point* par1, Point* par2);
double getDistance(Point par1, Point par2);

int getNumLines(char filename[]);
void readFile(char filename[], USAFBaseData** baseStruct, int lines);
void printData(USAFBaseData** bases, int numBases);

#endif //LAB25_LAB25_H