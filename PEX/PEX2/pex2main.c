#include "pex2functs.h"

int main() {
    char filename[] = "C:\\Users\\C22Jim.Wang\\Documents\\compsci210\\PEX\\PEX2\\pex2Data.txt";

    DNA *sequence = (DNA*) malloc(sizeof(DNA));

    readFile(filename, sequence);

    printf("Hello, World!\n");
    printf("human: %s\n", sequence->humanDNA);
    printf("mouse: %s\n", sequence->mouseDNA);
    printf("cat: %s\n", sequence->catDNA);

    return 0;
}