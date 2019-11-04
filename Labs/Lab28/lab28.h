/** lab28.h
* ===========================================================
* Name: Jim Wang, 03 November 2019 (I know it's late)
* Section: M4A
* Project: Programming Assessment 3 Practice
* Documentation: None
* ===========================================================  */
#ifndef MYEXE_LAB28_H
#define MYEXE_LAB28_H

#define MAX_LENGTH 20
#define FILENAME "Employee_Recs.txt"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct EmployeeBD_struct {
    char firstName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    char birthMonth[MAX_LENGTH];
    int birthDate;
} EmployeeBD;

int numVowels(char *in);

char *sortString(char *in);

int readFile(char fileName[], EmployeeBD **empStruct, int numLines);

int IDEmpBDMonth(EmployeeBD **empStruct, int numLines, int month);

#endif //MYEXE_LAB28_H