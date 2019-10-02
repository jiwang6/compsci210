#ifndef LAB19_LAB19FUNCTS_H
#define LAB19_LAB19FUNCTS_H

#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 81

void replStr(char str[], char aChar, char bChar);
void replMultiChar(char str[], char searchChars[], char rChar );
int findLocations(char str[], int locations[], char searchChar);
int countSeqStr(char str[], char searchStr[]);

#endif //LAB19_LAB19FUNCTS_H
