#include "pex2functs.h"

void readFile(char filename[], DNA* sequence) {
    FILE *in = fopen(filename, "r");
    if (in == NULL) {
        perror("Error opening file.\n");
    }

    fscanf(in, "%s", sequence->humanDNA);
    fscanf(in, "%s", sequence->mouseDNA);
    fscanf(in, "%s", sequence->catDNA);

    fclose(in);
}

int hammingDistance(char* str1, char* str2) {
    int ham = 0;

    if (strlen(str1) != strlen(str2)) {
        return -1;
    } else {
        for (int i = 0; i < strlen(str1); i++) {
            if (str1[i] != str2[i]) {
                ham++;
            }
        }

        return ham;
        }
}

float similarityScore(char* seq1, char* seq2) {
    if (strlen(seq1) != strlen(seq2)) {
        return -1;
    }

    return (float)(strlen(seq1) - hammingDistance(seq1, seq2)) / (float)strlen(seq1);
}

int countMatches(char* genome, char* seq, float minScore) {
    int numMatches = 0, seqL = (int)strlen(seq);
    char testSeq[20];
    char *tempG = genome;

    while (strlen(tempG) >= seqL) {
        strncpy(testSeq, tempG, seqL);
        testSeq[seqL] = '\0'; //I HATE YOU

        if (similarityScore(testSeq, seq) >= minScore) {
            numMatches++;
        }
        tempG++;
    }

    return numMatches;
}
float findBestMatch(char* genome, char* seq) {
    int seqL = (int)strlen(seq);
    char testSeq[20];
    float maxScore = 0;
    char *tempG = genome;

    while (strlen(tempG) >= seqL) {
        strncpy(testSeq, tempG, seqL);
        testSeq[seqL] = '\0'; //I HATE YOU

        if (similarityScore(testSeq, seq) > maxScore) {
            maxScore = similarityScore(testSeq, seq);
        }
        tempG++;
    }

    return maxScore;
}


/* function TODO
int findBestGenome(char* genome1, char* genome2, char* genome3, char* unknownSeq);
 */