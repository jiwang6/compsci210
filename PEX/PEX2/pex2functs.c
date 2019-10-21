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