/** pex2main.c
* ===========================================================
* Name: C3C Jim Wang 23 October 2019
* Section: T3A
* Project: PEX2
* Purpose: compare DNA sequences
* Documentation: C3C Lindsay Brummett walked me through her intuition for countMatches function
* ===========================================================
*/


#include "pex2functs.h"

int main() {
    char filename[] = "C:\\Users\\C22Jim.Wang\\Documents\\compsci210\\PEX\\PEX2\\pex2Data.txt"; //filepath for genomes

    DNA *sequence = (DNA *) malloc(sizeof(DNA)); //space allocated for genomes in our program

    /*debugging garbage
    readFile(filename, sequence);

    printf("score: %lf\n", similarityScore("A","A"));
    printf("matches: %d\n", countMatches("AA","A", 1));
    */

    return 0;
}