#ifndef PEX2_PEX2FUNCTS_H
#define PEX2_PEX2FUNCTS_H

#define MAX_LENGTH 341
#define NUM_GEN 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


typedef struct DNA {
    char humanDNA[MAX_LENGTH];
    char mouseDNA[MAX_LENGTH];
    char catDNA[MAX_LENGTH];
} DNA;

void readFile(char filename[], DNA* sequence);
int hammingDistance(char* str1, char* str2);
float similarityScore(char* seq1, char* seq2);
int countMatches(char* genome, char* seq, float minScore);
float findBestMatch(char* genome, char* seq);
int findBestGenome(char* genome1, char* genome2, char* genome3, char* unknownSeq);

#endif //PEX2_PEX2FUNCTS_H