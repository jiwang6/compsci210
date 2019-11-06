/** pa3functs.c
* ================================================================
* Name: Jim Wang
* Section: T3A/T4A
* Project: Programming Assessment #3 - function file
* =================================================================
*/

#include "pa3functs.h"

void getFileName(char *pointer) {
    char filename[31];

    printf("give filename\n");
    scanf("%s", filename);
    FILE *in = fopen(filename, "rb");

    while (in == NULL) {
        printf("Error\n");

        printf("give filename\n");
        scanf("%s", filename);
        in = fopen(filename, "rb");
    }

    strcpy(pointer, filename);
    fclose(in);
}

MP3_HEADER readHeader(char* filename) {
    FILE *in = fopen(filename, "rb");

    fseek(in, -128, SEEK_END); //move to start of old header to overwrite with new header

    MP3_HEADER *pointer = (MP3_HEADER*) malloc(sizeof(MP3_HEADER));

    fscanf(in, "%[^\n]", pointer->header);
    fscanf(in, "%[^\n]", pointer->title);
    fscanf(in, "%[^\n]", pointer->artist);
    fscanf(in, "%[^\n]", pointer->album);
    fscanf(in, "%[^\n]", pointer->year);
    fscanf(in, "%[^\n]", pointer->comment);
    fscanf(in, "%c", &pointer->genre);

    fclose(in);
    return *pointer;
}


void displayMP3Header(MP3_HEADER struc) {
    printf("Title: %s\n"
           "Artist: %s\n"
           "Album: %s\n"
           "Year: %s\n"
           "Comment: %s\n",
           struc.title, struc.artist, struc.album, struc.year, struc.comment);
}


int updateCommentField(char filePath[], char newComment[], MP3_HEADER struc) {
    char ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);

    readHeader(filePath);
    strcpy(struc.comment,newComment);

    FILE *in = fopen(filePath, "rb");

    fseek(in, -128, SEEK_END);
    fprintf(in,"%s%s%s%s%s%s%c", struc.header, struc.title, struc.artist, struc.album, struc.year,
            struc.comment, struc.genre);
    fclose (in);
    return 7;
}


int countLetter(char* struc, char search) {
    int match = 0;

    char curLet = *struc;

    while(curLet != '\0') {
        if (curLet == search) {
            match++;
        }
        struc++;
        curLet = *struc;
    }

    return match;
}


MP3_HEADER mp3Library(const int numSongs) {

    MP3_HEADER *pointer = (MP3_HEADER *) malloc(sizeof(MP3_HEADER) * numSongs);
    char file[20];

    getFileName(file);

    for (int i = 0 ; i < numSongs; i++) {
        MP3_HEADER struc = readHeader(file);

        strcpy(pointer[i].header, struc.header);
        strcpy(pointer[i].title, struc.title);
        strcpy(pointer[i].artist, struc.artist);
        strcpy(pointer[i].album, struc.album);
        strcpy(pointer[i].year, struc.year);
        strcpy(pointer[i].comment, struc.comment);
        pointer[i].genre = struc.genre;
    }

    return *pointer; //coding doesn't feel like it should be tested under a time restraint but I'll try my hardest
}


int writeNewFile(MP3_HEADER *lib, int numSongs) {

    FILE* outFile = fopen("outputFile.txt", "w");

    int retval = 0;
    for (int i = 0; i < numSongs; i++) {
        fprintf(outFile, "%s\n", lib[i].header);
        fprintf(outFile, "%s\n", lib[i].title);
        fprintf(outFile, "%s\n", lib[i].artist);
        fprintf(outFile, "%s\n", lib[i].album);
        fprintf(outFile, "%s\n", lib[i].year);
        fprintf(outFile, "%s\n", lib[i].comment);
        fprintf(outFile, "%c\n", lib[i].genre);

        retval ++;
    }

    fclose(outFile);
    return retval;
}