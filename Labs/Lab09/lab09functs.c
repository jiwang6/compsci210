/** lab09.c
* ===========================================================
* Name: C3C Jim Wang, 04 September 2019
* Section: T3A
* Project: Lab09.c
* Purpose: Practice Clion
* ===========================================================
*/

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
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