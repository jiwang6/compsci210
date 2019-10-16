#ifndef LAB23_LAB23FUNCTS_H
#define LAB23_LAB23FUNCTS_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//#include <jesus.h>

typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
int getNumRecs(char* dataFile);

/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * ----------------------------------------------------------
 */
void getDataText(CadetInfoStructType *cadetRecords, int numRecs, char* dataFile);

/** ----------------------------------------------------------
 * Prints cadet info from cadet info array of datastructs
 * @param array of cadet records
 * ----------------------------------------------------------
 */
void printCadetInfo(CadetInfoStructType cadetRecords);

#endif //LAB23_LAB23FUNCTS_H
