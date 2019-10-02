#include "lab19functs.h"

void replStr(char str[], char aChar, char bChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == aChar) {
            str[i] = bChar;
        }
    }
}

void replMultiChar(char str[], char searchChars[], char rChar ) {
    for (int i = 0; i < strlen(searchChars); i++) {
        replStr(str, searchChars[i], rChar);
    }
}

int findLocations(char str[], int locations[], char searchChar) {
    int total = 0;
    int j = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            locations[j] = i;
            total++;
            j++;
        }
    }

    return total;
}

int countSeqStr(char str[], char searchStr[]) {
    int count = 0;
    char *tmp = str;
    while(tmp != strstr(tmp, searchStr)) {
        count++;
        tmp++;
        }
    return count-1;
}