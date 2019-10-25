/** lab26.h
* ================================================================
* Name: C3C Jim Wang
* Section: T3A
* Project: Lab26 - Vector ADT
* =================================================================
*/

#ifndef MYEXE_LAB26_H
#define MYEXE_LAB26_H

#include "vector.h"
#include <stdio.h>
#define FILENAME "lab26Data.csv"

int getNumLines(char filename[]);
void readFile(char filename[], vector* vectorPtr, int records);
void printData(vector* theData, int numElem);

#endif //MYEXE_LAB26_H
