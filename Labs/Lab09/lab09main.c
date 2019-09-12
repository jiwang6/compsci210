/** lab09main.c
* ===========================================================
* Name: C3C Jim Wang, 04 September 2019
* Section: T3A
* Project: Lab09.c
* Purpose: Practice Clion
* ===========================================================
*/

/**   ----------------------------------------------------------
 * volumeCylinder: computes cylinder volume from user parameters cylRadius (radius) and cylHeight (height)
 * volBox: computes box volume from user parameters boxWidth, boxHeight, and boxDepth
 * degToRad: converts user parameter degreeVal (number of degrees) to number of radians
 */

#include <stdio.h>
#include "lab09functs.h"

int main() {

    printf("%lf\n", volumeCylinder(10.5, 10.5));
    printf("%lf\n", volumeBox(10.5, 10.5, 12.5));
    printf("%lf\n", degToRad(90));
}