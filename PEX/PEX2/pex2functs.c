/** pex2functs.h
* ===========================================================
* Name: C3C Jim Wang 23 October 2019
* Section: T3A
* Project: PEX2
* Purpose: compare DNA sequences
* Documentation: C3C Lindsay Brummett walked me through her intuition for countMatches function
* ===========================================================
*/

#include "pex2functs.h"

/** ----------------------------------------------------------
* readFile reads file and scans DNA into allocated datastructures in dynamic memory
* @filename[] contains the file path for the DNA sequences
* @sequence is the datastructure in which we need to scan our sequences into
*/
void readFile(char filename[], DNA *sequence) {
    FILE *in = fopen(filename, "r"); //file pointer to be used in fscanf
    if (in == NULL) {
        perror("Error opening file.\n");
    }

    fscanf(in, "%s", sequence->humanDNA);
    fscanf(in, "%s", sequence->mouseDNA);
    fscanf(in, "%s", sequence->catDNA);

    fclose(in);
}

/** ----------------------------------------------------------
* hammingDistance calculates and returns the "hamming distance" of two input strings
* @str1 a string to be compared with the other to find the hamming distance
* @str2 a string to be compared with the other to find the hamming distance
* @return is the hamming distance returned
*/
int hammingDistance(char *str1, char *str2) {
    int ham = 0; //hamming distance

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

/** ----------------------------------------------------------
* similarityScore calculates and returns the "similarity score" of two input strings
* @seq1 a string to be compared with the other to find the similarity score
* @seq2 a string to be compared with the other to find the similarity score
* @return returns the similarity score
*/
float similarityScore(char *seq1, char *seq2) {
    if (strlen(seq1) != strlen(seq2)) {
        return -1;
    }

    return (float) (strlen(seq1) - hammingDistance(seq1, seq2)) / (float) strlen(seq1);
}

/** ----------------------------------------------------------
* countMatches counts the number of occurances or near occurances of a sequence within a specified genome
* @genome a genome to be searched
* @seq a sequence of characters that is searched for within genome
* @minScore the minimum siliarity score the sequence and genome segment must have to be considered a match
* @return returns the number of matches and real matches of seq within genome
*/
int countMatches(char *genome, char *seq, float minScore) {
    int numMatches = 0; //number of matches to be returned
    int seqL = (int) strlen(seq); //length of sequence
    char testSeq[20]; //character array to be tested
    char *tempG = genome; //char pointer for what string is fed into testSeq

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

/** ----------------------------------------------------------
* findBestMatch finds and returns the best similarity score between a specified sequence and all the equal segments
 * within a specified genome
* @genome a genome to be searched
* @seq a sequence of characters that is searched for within genome
* @return returns the best similarity score found for the seq genome comparison
*/
float findBestMatch(char *genome, char *seq) {
    int seqL = (int) strlen(seq); //length of sequence
    char testSeq[20]; //character array to be tested
    float maxScore = 0; //max score to be returned
    char *tempG = genome; //char pointer to what string is fed to testSeq

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

/** ----------------------------------------------------------
* findBestGenome compares the best similarity score between a specified unknown sequence and the three genomes in our
 * memory
* @genome1 a genome to be searched
* @genome2 a genome to be searched
* @genome3 a genome to be searched
* @unknownSeq a sequence of characters that is searched for within each genome
* @return returns the genome with the highest similarity score found for the seq genome comparison
*/
int findBestGenome(char *genome1, char *genome2, char *genome3, char *unknownSeq) {
    float g1 = findBestMatch(genome1, unknownSeq),
            g2 = findBestMatch(genome2, unknownSeq), g3 = findBestMatch(genome3, unknownSeq);
    if (g1 > g2 && g1 > g3) {
        return 1;
    } else if (g2 > g1 && g2 > g3) {
        return 2;
    } else if (g3 > g1 && g3 > g2) {
        return 3;
    } else {
        return 0;
    }
}
