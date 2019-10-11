/** lab22.h
 * ===========================================================
 * Name: Jim Wang, 09 OCT 2019
 * Section: T3A/T4A
 * Project: Lab 22
 * ===========================================================
 */
#ifndef USAFA_CS210_F18_STUDENT_LAB21_H
#define USAFA_CS210_F18_STUDENT_LAB21_H

#define MAXSTUDENTS 100

// define our cadet info type for later use
typedef struct {
    char name[50];
    int squad;
    int classYear;
} MyCadetInfo;

/** ----------------------------------------------------------
 * getDataText() is used to read MyCadetInfo typed records
 * from a textual file
 * @param cadetRecords is the array of cadet records
 * @return number of records read
 * ----------------------------------------------------------
 */
int getDataText(MyCadetInfo cadetRecords[]);


/** ----------------------------------------------------------
 * writeDataBlk() is used to the entire cadet record array
 * to a binary file
 * @param cadetRecords is the array of cadet records
 * @param numCadets is the total number of cadets to write
 * @return number of records wrote
 * ----------------------------------------------------------
 */
int writeDataBlk(MyCadetInfo cadetRecords[], int numCadets);


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
int writeCadetBlk(MyCadetInfo* cadet, int location);


/** ----------------------------------------------------------
 * printCadetInfo() is used to print a MyCadetInfo typed variable
 * to the console
 * @param cadetRecord is the cadet info struct to be printed
 * @return n/a
 */
void printCadetInfo(MyCadetInfo cadetRecord);


/** ----------------------------------------------------------
 * printData() is used to print MyCadetInfo typed records
 * from a file
 * @param datums is the array of cadet records
 * @param numCadets is the number of cadets in datums
 * @return n/a
 */
void printData(MyCadetInfo* datums, int numCadets);

MyCadetInfo readCadetBlk(int location);
int updateSqdBlk(char array[], int squad, MyCadetInfo cadetRecs[], int numCadets);
int updateClassYearNameBlk(MyCadetInfo array[], int numCadets);


#endif //USAFA_CS120_F18_STUDENT_LAB21_H
