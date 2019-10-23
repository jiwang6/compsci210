/** pex2functs.h
* ===========================================================
* Name: C3C Jim Wang 23 October 2019
* Section: T3A
* Project: PEX2
* Purpose: compare DNA sequences
* Documentation: C3C Lindsay Brummett walked me through her intuition for countMatches function
* ===========================================================
*/

#ifndef PEX2_PEX2FUNCTS_H
#define PEX2_PEX2FUNCTS_H

#define MAX_LENGTH 341

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DNA_struct {
    char humanDNA[MAX_LENGTH];
    char mouseDNA[MAX_LENGTH];
    char catDNA[MAX_LENGTH];
} DNA;

void readFile(char filename[], DNA *sequence);

int hammingDistance(char *str1, char *str2);

float similarityScore(char *seq1, char *seq2);

int countMatches(char *genome, char *seq, float minScore);

float findBestMatch(char *genome, char *seq);

int findBestGenome(char *genome1, char *genome2, char *genome3, char *unknownSeq);

#endif //PEX2_PEX2FUNCTS_H