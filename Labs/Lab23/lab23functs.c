#include "lab23functs.h"

int getNumRecs(char* dataFile) {
    int numRecs;
    char temp[20];

    FILE *in = fopen(dataFile, "rb");
    if (in == NULL) {
        perror("Error opening file.\n");
        return(-1);
    }

    fgets(temp, 20, in);
    temp[strlen(temp) - 1] = '\0'; //removes blank space from fgets input
    sscanf(temp, "%d", &numRecs); //scans temp for numRecs number, necessary?

    fclose(in);
    return numRecs;
}

void getDataText(CadetInfoStructType *cadetRecords, int numRecs, char* dataFile) {
    int i = 0;
    char lastName[20];

    FILE *in = fopen(dataFile, "rb");
    if (in == NULL) {
        perror("Error opening file.\n");
    }

    fseek(in, sizeof(int), SEEK_SET);

    while (!feof(in) && i < numRecs) { //feof necessary?
        fscanf(in, "%s %s %d %d %d", lastName, cadetRecords[i].name, &cadetRecords[i].age, &cadetRecords[i].squad,
               &cadetRecords[i].year);
        strcat(cadetRecords[i].name, " ");
        strcat(cadetRecords[i].name, lastName); //reorders name
        i++;
    }

    fclose(in);
}

void printCadetInfo(CadetInfoStructType cadetRecords) {
    printf("Cadet name = %s\n", cadetRecords.name);
    printf("Cadet age = %d\n", cadetRecords.age);
    printf("Cadet squad = %d\n", cadetRecords.squad);
    printf("Cadet year = %d\n", cadetRecords.year);
}
