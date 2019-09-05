#include <stdio.h>
#include <assert.h>
#include <math.h>

#include "lab09functs.h"

int main() {
    printf("Testing started\n");

    assert(volumeCylinder(1, 0) == 0 );
    assert(volumeBox(1, 1, 1) == 1);
    assert(degToRad(180) == M_PI);

    printf("Testing completed\n");

    return 0;
}