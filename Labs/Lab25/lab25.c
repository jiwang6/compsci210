#include "lab25.h"

int main() {
    int numLines = getNumLines(FILENAME);

    USAFBaseData** pointer = (USAFBaseData**)malloc(sizeof(USAFBaseData*) * numLines);

    for (int i = 0; i < numLines; i++) {
        pointer[i] = malloc(sizeof(USAFBaseData));
    }

    readFile(FILENAME, pointer, numLines);

    printData(pointer, numLines);

    return 0;
}

void getPoints(Point* par1, Point* par2) {
    scanf("%d %d", &par1->x, &par1->y);
    scanf("%d %d", &par2->x, &par2->y);
}

double getDistance(Point par1, Point par2) {
    return (double)sqrt(pow(par2.y - par1.y, 2) + pow(par2.x - par1.x, 2));
}

int getNumLines(char filename[]) {
    char c;
    int count = 0;
    // Open the file
    FILE* fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }

    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;

    // Close the file
    fclose(fp);

    return count;
}

void readFile(char filename[], USAFBaseData** baseStruct, int lines) {
    char temp[100];

    FILE* fp = fopen(filename, "r");

    fgets(temp, 100, fp);

    for(int i = 0; i < lines; i++) {
        fscanf(fp, "%[^\n,],", baseStruct[i]->baseName);
        fscanf(fp, "%d,", &baseStruct[i]->bldgsOwned);
        fscanf(fp, "%d,", &baseStruct[i]->structsOwned);
        fscanf(fp, "%[^\n,],", baseStruct[i]->city);
        fscanf(fp, "%[^\n,],", baseStruct[i]->state);
        fgets(temp, 100, fp);
    }
}

void printData(USAFBaseData** bases, int numBases) {
    for (int i = 0; i < numBases; i++) {
        printf("%s, ", bases[i]->baseName);
        printf("%d, ", bases[i]->bldgsOwned);
        printf("%d, ", bases[i]->structsOwned);
        printf("%s, ", bases[i]->city);
        printf("%s\n", bases[i]->state);
    }
}