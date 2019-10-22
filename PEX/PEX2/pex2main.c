#include "pex2functs.h"

int main() {
    char filename[] = "C:\\Users\\C22Jim.Wang\\Documents\\compsci210\\PEX\\PEX2\\pex2Data.txt";

    DNA *sequence = (DNA*) malloc(sizeof(DNA));

    readFile(filename, sequence);

    printf("score: %lf\n", similarityScore("A","A"));
    printf("matches: %d\n", countMatches("AA","A", 1));


    return 0;
}