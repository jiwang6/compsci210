/** lab22.c
* ===========================================================
 * Name: Jim Wang, 09 OCT 2019
 * Section: T3A/T4A
 * Project: Lab 22
* ===========================================================
*
* Instructions:
*    1) Complete TASKS Below
*/
#include "lab22.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    MyCadetInfo cadetRecs[MAXSTUDENTS];

    // read cadet records from a text file
    int numCadets = getDataText(cadetRecs);

    // write the array of structures to a binary file
    writeDataBlk(cadetRecs,numCadets);

    // modify the 4th record and rewrite only
    // that record to the binary file
//    strncpy(cadetRecs[3].name, "Da Cadet",20);
//    writeCadetBlk(&cadetRecs[3],3);

    /* Exercise 1 - Write a function, called, readCadetBlk() that
     * uses fseek() and fread() to read a single cadet
     * record from the binary file
     * Note:  This lab requires lsn22Data.txt to be in your
     * Lab22 folder
     * Warning: Be sure to properly open and close the file
     * 0) Figure out the required parameters and write the function
     * prototype in the *.h file
     * 1) The function returns the MyCadetInfo structure read from disk
     *      dataType varName = functionCall
     *      MyCadetInfo yourChosenVarName = readCadetBlk(someRecord);
     * 2) Call your function below with parameters of your choice
     * 3) Verify that it works by printing the returned struct
     *      The struct is yourChosenVarName from above.
     */

    /* Exercise 2 - Write a function, called, updateSqdBlk() that
     * uses a cadet's full name to find the cadet in the array of
     * records, updates their squadron to the given value,
     * and then writes the new record in the correct location
     * in the binary file
     * 0) Figure out the required parameters and write the function
     * prototype in the *.h file
     * 1) The function returns the number of records written and on
     * error it returns a -1
     * 2) Call your function below with parameters of your choice
     * 3) Verify that it works by reading the record from the file
     * and printing it.
     */

    /* Exercise 3 - Write a function, called, updateClassYearNameBlk()
     * that overwrites the file, lab22Data.dat, with the class
     * year prepended to the cadet name.  For example, Troy Weingart
     * would become C1C Troy Weingart if I were in class of 2020.
     * 0) Figure out the required parameters and write the function
     * prototype in the *.h file
     * 1) The function returns the number of records written and on
     * error it returns a -1
     * 2) Call your function below
     * 3) Verify that your function works by using readCadetBlk()
     * and printing the results.
    */

    return 0;
}

/** ----------------------------------------------------------
 * writeDataBlk() is used to the entire cadet record array
 * to a binary file
 * @param cadetRecords is the array of cadet records
 * @param numCadets is the total number of cadets to write
 * @return number of records wrote
 * ----------------------------------------------------------
 */
int writeDataBlk(MyCadetInfo cadetRecords[], int numCadets) {

    // Open an output file for writing
    FILE *out = fopen("../Labs/Lab22/lab22Data.dat", "w");
    if (out == NULL) {
        printf("Error creating data file: %s.\n", strerror(errno));
        exit(1);
    }

    size_t retVal = fwrite(cadetRecords,sizeof(MyCadetInfo), numCadets, out);
    fclose(out);
    return retVal;

}

/** ----------------------------------------------------------
 * writeCadetBlk() is used to write a single cadet records
 * to a binary file the previous contents of the file are
 * not changed
 * @param cadet is the address of the cadet structure to write
 * @param location is the offset from the from of the file to
 *                 write the record to
 * @return number of records wrote
 * ----------------------------------------------------------
 */
int writeCadetBlk(MyCadetInfo* cadet, int location) {

    // Open an output file for writing
    FILE *out = fopen("../Labs/Lab22/lab22Data.dat", "r+");
    if (out == NULL) {
        printf("Error creating data file: %s.\n", strerror(errno));
        exit(1);
    }
    fseek(out, sizeof(MyCadetInfo) * (long) location, SEEK_SET);
    int retVal = fwrite(cadet,sizeof(MyCadetInfo), 1, out);
    fclose(out);
    return retVal;
}

/** ----------------------------------------------------------
 * getDataText() is used to read MyCadetInfo typed records
 * from a file
 * @param cadetRecords is the array of cadet records
 * @return number of records read
 * ----------------------------------------------------------
 */
int getDataText(MyCadetInfo cadetRecords[]) {

    // Open an input file for reading
    FILE *in = fopen("../Labs/Lab22/lsn22Data.txt", "r");
    if (in == NULL) {
        printf("Error opening data file: %s.\n", strerror(errno));
        exit(1);
    }

    char firstName[30];
    char lastName[45];
    int numRead = 0;

    while (numRead < MAXSTUDENTS && !feof(in)) {
        fscanf(in, "%s %s %d %d", firstName, lastName, &cadetRecords[numRead].squad,
               &cadetRecords[numRead].classYear);
        strcat(firstName, " ");
        strcpy(cadetRecords[numRead].name, strcat(firstName, lastName));
        numRead++;
    }
    fclose(in);
    return numRead;
}

/** ----------------------------------------------------------
 * printCadetInfo() is used to print a MyCadetInfo typed variable
 * to the console
 * @param cadetRecord is the cadet info struct to be printed
 * @return n/a
 */
void printCadetInfo(MyCadetInfo cadetRecord) {
    printf("Cadet name = \t%s\n", cadetRecord.name);
    printf("Cadet squad = \t%d\n", cadetRecord.squad);
    printf("Cadet year = \t%d\n\n", cadetRecord.classYear);
}

/** ----------------------------------------------------------
 * printData() is used to print MyCadetInfo typed records
 * from a file
 * @param datums is the array of cadet records
 * @param numCadets is the number of cadets in datums
 * @return n/a
 */
void printData(MyCadetInfo* datums, int numCadets) {
    for (int i = 0; i < numCadets; i++) {
        printCadetInfo(datums[i]);
    }
}

MyCadetInfo readCadetBlk(int location) {
    FILE *ptrFile = fopen("../lab22Data.dat", "r+");

    if (ptrFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    int sizeVar = sizeof(MyCadetInfo);

    fseek(ptrFile, sizeVar * location, SEEK_SET);
    MyCadetInfo CadetVar;
    fread(&CadetVar, sizeVar, 1, ptrFile);
    fclose(ptrFile);

    return CadetVar;
}

int updateSqdBlk(char array[], int squad, MyCadetInfo cadetRecs[], int numCadets) {
//        FILE *ptrFile = fopen("../Labs/Lab_22/lsn22Data.txt", "r");
    FILE *ptrFile = fopen("../lab22Data.dat", "w");

    if (ptrFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    int found = 0;
    int location;
    for (int i = 0; i < numCadets; i++) {
        if (strcmp(cadetRecs[i].name, array) == 0) {
            found = 1;
            location = i;
            break;
        }
    }
    if (found != 1) {
        exit(-1);
    }

    int sizeVar = sizeof(MyCadetInfo);

    fseek(ptrFile, sizeVar * location, SEEK_SET);
    cadetRecs[location].squad = squad;

    int sum = fwrite(cadetRecs, sizeVar, 1, ptrFile);

    fclose(ptrFile);

    return sum;
}

int updateClassYearNameBlk(MyCadetInfo recs[], int numCadets) {
    char temp2[5] = "C3C ";

    for (int i = 0; i < numCadets; i++) {
        if (recs[i].classYear == 2022)   {
            strcpy(temp2, "C3C ");
            strcat(temp2, recs[i].name);
            strcpy(recs[i].name, temp2);
        }
        else if (recs[i].classYear == 2021) {
            strcpy(temp2, "C2C ");
            strcat(temp2, recs[i].name);
            strcpy(recs[i].name, temp2);
        }
        else if (recs[i].classYear == 2020) {
            strcpy(temp2, "C1C ");
            strcat(temp2, recs[i].name);
            strcpy(recs[i].name, temp2);
        }
        else {
            strcpy(temp2, "C4C ");
            strcat(temp2, recs[i].name);
            strcpy(recs[i].name, temp2);
        }
    }

    printf("%s\n", temp2);
    FILE *ptrFile = fopen("../lab22Data.dat", "w");

    if (ptrFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    fwrite(recs, sizeof(MyCadetInfo), numCadets, ptrFile);
    fclose(ptrFile);

    return 0;
}