#ifndef LAB20_LAB20FUNCTS_H
#define LAB20_LAB20FUNCTS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

bool again();

double fToC(double degF);
double cToK(double degC);
void printTable(double degFlow, double degFhigh, double degFstep);
double getInput(char title[], double min, double max);
void printLine(char what, int howMany);

#endif //LAB20_LAB20FUNCTS_H
