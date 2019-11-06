/** pa3functs.h
* ================================================================
* Name: Jim Wang
* Section: T3A/T4A
* Project: Programming Assessment #3 - header file
* =================================================================
*/

#ifndef MYEXE_PA3FUNCTS_H
#define MYEXE_PA3FUNCTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 31

typedef struct MP3_HEADER {
    char header[3];
    char title[30];
    char artist[30];
    char album[30];
    char year[4];
    char comment[30];
    char genre;
} MP3_HEADER;

void getFileName(char *pointer);
MP3_HEADER readHeader(char* filename);
void displayMP3Header(MP3_HEADER struc); //either this or readHeader is broken
int updateCommentField(char filePath[], char newComment[], MP3_HEADER struc);

int countLetter(char* struc, char search);

MP3_HEADER mp3Library(const int numSongs);

int writeNewFile(MP3_HEADER *lib, int numSongs);

#endif //MYEXE_PA3FUNCTS_H
