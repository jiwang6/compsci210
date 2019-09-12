/** lab09functs.c
* ===========================================================
* Name: C3C Jim Wang, 04 September 2019
* Section: T3A
* Project: Lab09.c
* Purpose: Practice Clion
* ===========================================================
*/

#include <math.h>

double volumeCylinder(double cylRadius, double cylHeight) {
    double cylVolume = M_PI * pow(cylRadius, 2) * cylHeight;
    return cylVolume;
}

double volumeBox(double boxWidth, double boxHeight, double boxDepth) {
    double boxVolume = boxWidth* boxHeight * boxDepth;
    return boxVolume;
}

double degToRad(double degreeVal) {
    double radianVal = degreeVal * (M_PI / 180);
    return radianVal;
}