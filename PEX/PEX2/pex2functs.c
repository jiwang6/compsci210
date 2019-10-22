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
    }

    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != str2[i]) {
            ham++;
        }
    }

    return ham;
}

float similarityScore(char* seq1, char* seq2) {
    if (strlen(seq1) != strlen(seq2)) {
        return -1;
    }

    return (float)(strlen(seq1)-hammingDistance(seq1, seq2))/strlen(seq1);
}

int countMatches(char* genome, char* seq, float minScore) {
    int tempScore;
    int numMatches = 0;
    
    if (tempScore >= minScore) {
        numMatches++;
    }

    return numMatches
}

/* function TODO
float findBestMatch(char* genome, char* seq);
int findBestGenome(char* genome1, char* genome2, char* genome3, char* unknownSeq);
 */