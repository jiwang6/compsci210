/** lab28.c
* ===========================================================
* Name: Jim Wang, 03 November 2019 (I know it's late)
* Section: M4A
* Project: Programming Assessment 3 Practice
* Documentation: None
* ===========================================================  */

#include "lab28.h"

int getNumLines(char *);

int main(void) {
    char testString[] = "They eat";
    printf("%s\n", testString);

    char *ptr = sortString(testString);
    while (*ptr != '\0') {
        printf("%c", *ptr++);
    }
    printf("\n");

    int numLines = getNumLines(FILENAME);
    numLines++;
    printf("%d\n", numLines);


    EmployeeBD *pointer = (EmployeeBD *) malloc(sizeof(EmployeeBD) * numLines); //single pointer

    printf("%d\n", readFile(FILENAME, pointer, numLines));

    // PROBLEM 2 - Manipulate Employee Data
    //      You are tasked to create a program that will pull employee records from a simple
    //      text file that contains name and birthdate.  The ultimate goal is to allow a user
    //      to input a month that will result in output to the screen displaying all of the
    //      employees with birthdays for the specified month.  This will assist the squadron
    //      commander with ensuring that all employee birthdays are recognized at the
    //      monthly staff meeting.

    //      a.) Define a structure type, named EmployeeBD, with appropriate members
    //      to store data from the Employee_Recs.txt file. Use the fields names:
    //      FirstName, lastName, birthMonth, and birthDate.

    //      b.) Use the getNumLines function provided to capture the number of records to be read from
    //      from the Employee_Recs.txt file, then dynamically allocate memory to store the employee data
    //      from the text file.

    //      c.) Create a user-defined function called readFile, which requires the filename,
    //      memory passed by reference, and the number of records to be passed as parameters
    //      (in that order).  This function returns the integer value corresponding to the number
    //      of records successfully read.

    //      d.) Create a user-defined function called IDEmpBDMonth to print the employee records
    //      for all employees born in a specified month.  This function accepts three parameters
    //      being the stored records passed by reference, the number of records, and the specified
    //      month for record printing (in that order).  It returns the number of records with the
    //      specified month.
    //      NOTE:  In main, ask the user to provide an integer from 1 - 12 that corresponds with the
    //          birth month they would like to query.
    //      Format the output to the screen as follows:
    //          Example if the user enters 10:
    //              Requested Birthdays are:
    //              Lastname	Firstname	Birthday
    //              *********************************************
    //              Smith		Brian		October 13


    for (int i = 0; i < numLines; i++) {
        printf("%s", pointer[i].firstName);
        printf("%s", pointer[i].lastName);
        printf("%s", pointer[i].birthMonth);
        printf("%d\n", pointer[i].birthDate);
    }


    //printf("number of matching records: %d\n", IDEmpBDMonth(pointer, numLines, 2)); //chart funct
    return 0;
}

int getNumLines(char filename[]) {
    char c;
    int count = 0;
    // Open the file
    FILE *fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s", filename);
        return 0;
    }

    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;

    // Close the file
    fclose(fp);
    //printf("The file %s has %d lines\n ", filename, count);

    return count;
}

int numVowels(char *in) {
    int numVo = 0;

    while (*in != '\0') {
        if (tolower(*in) == 'a' || tolower(*in) == 'e' || tolower(*in) == 'i'
            || tolower(*in) == 'o' || tolower(*in) == 'u') {
            numVo++;
        }
        in++;
    }
    return numVo;
}

char *sortString(char *in) { //this function hella jank
    int n = strlen(in);

    char *sortedIn = (char *) malloc(sizeof(char) * n); //allocates heap for a string with length in

    char *address = sortedIn;
    int numspace = 0;
    while (*in != '\0') {
        *sortedIn = tolower(*in);

        if (*in == ' ') {
            numspace++;
        }

        sortedIn++;
        in++;
    }

    sortedIn = address;

    char temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sortedIn[i] > sortedIn[j]) {
                temp = sortedIn[i];
                sortedIn[i] = sortedIn[j];
                sortedIn[j] = temp;
            }
        }
    }

    //printf("%d\n", numspace);
    sortedIn += numspace;

    sortedIn[n - numspace] = '\0'; //because initial string copy doesn't copy the '\0'

    //if (sortedIn[n] == '\0') {
    //    printf("I don't understand this lab.\n");
    //}

    return sortedIn;
}

int readFile(char fileName[], EmployeeBD *empStruct, int numLines) {
    int retVal = 0;

    FILE *fp = fopen(fileName, "r");

    for (int i = 0; i < numLines; i++) {
        fscanf(fp, "%s", empStruct[i].firstName);
        fscanf(fp, "%s", empStruct[i].lastName);
        fscanf(fp, "%s", empStruct[i].birthMonth);
        fscanf(fp, "%d", &empStruct[i].birthDate);
        retVal++;
    }

    return retVal;
}

//empStruct[i]->birthMonth
/*
int IDEmpBDMonth(EmployeeBD **empStruct, int numLines, int month) { //even more jank function I hate it
    printf("Requested Birthdays are:\n"
           "Lastname\tFirstname\tBirthday\n"
           "*********************************************\n");
    int retVal = 0;

    for (int i = 0; i < numLines; i++) {
        switch (month) {
            case 1 :
                if (strcmp(empStruct[i]->birthMonth, "January") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 2 :
                if (strcmp(empStruct[i]->birthMonth, "February") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 3 :
                if (strcmp(empStruct[i]->birthMonth, "March") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 4 :
                if (strcmp(empStruct[i]->birthMonth, "April") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 5 :
                if (strcmp(empStruct[i]->birthMonth, "May") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 6 :
                if (strcmp(empStruct[i]->birthMonth, "June") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 7 :
                if (strcmp(empStruct[i]->birthMonth, "July") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 8 :
                if (strcmp(empStruct[i]->birthMonth, "August") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 9 :
                if (strcmp(empStruct[i]->birthMonth, "September") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 10 :
                if (strcmp(empStruct[i]->birthMonth, "October") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 11 :
                if (strcmp(empStruct[i]->birthMonth, "November") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            case 12 :
                if (strcmp(empStruct[i]->birthMonth, "December") == 0) {
                    printf("%-9s\t%-9s\t%s %d\n", empStruct[i]->lastName, empStruct[i]->firstName, empStruct[i]->birthMonth,
                           empStruct[i]->birthDate);
                    retVal++;
                }
                break;
            default :
                printf("not a valid month");
                break;
        }
    }

    return retVal;
}*/