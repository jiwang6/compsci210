/** lab14functs.c
* ===========================================================
* Name: C3C Jim Wang, 18 September 2019
* Section: T3A
* Project: Lab14
* Purpose: Practice 1-Dimensional Arrays; define functions to
 * be used in main
* ===========================================================
*/

#include "lab14functs.h"
int MAXPLAYERS = 400;

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array>
* @userArray <the array to be searched>
* @numPlayers <number of items in array>
*/
int findMaxIndex(int userArray[MAXPLAYERS], int numPlayers) {
    int maxIndex = 0;
    int max = 0;
    for (int i = 0; i < numPlayers; i++){
        if (max < userArray[i]) {
            max = userArray[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array over threshold value>
* @userArray <the array to be searched>
* @numPlayers <number of items in array>
* @amount <the threshold value that a value has to exceed>
*/
 int numPlayerOverX(int userArray[MAXPLAYERS], int numPlayers, int amount) {
    int numCount = 0;
     for (int i = 0; i < numPlayers; i++){
         if (userArray[i] > amount) {
             numCount++;
         }
     }

    return numCount;
}

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array over threshold value>
* @userArray1 <an array to be searched>
* @userArray2 <another array to be searched>
* @numPlayers <number of items in array>
* @amount <the threshold value that a value has to exceed>
*/
int getMaxYardsPerCarryIndex(int userArray1[MAXPLAYERS], int userArray2[MAXPLAYERS], int numPlayers, int amount) {
    int maxIndex = 0;
    double max = 0.1;
    for (int i = 0; i < numPlayers; i++){
        if (max < (double)userArray1[i]/userArray2[i]) {
            if (userArray2[i] > amount) {
                max = (double)userArray1[i]/userArray2[i];
                maxIndex = i;
            }
        }
    }

    return maxIndex;
}

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array over threshold value>
* @userArray1 <an array to be searched>
* @userArray2 <another array to be searched>
* @numPlayers <number of items in array>
* @amount <the threshold value that a value has to exceed>
*/
double getMaxYardsPerCarry(int userArray1[MAXPLAYERS], int userArray2[MAXPLAYERS], int numPlayers, int amount) {
    double max = 0.1;
    for (int i = 0; i < numPlayers; i++){
        if (max < (double)userArray1[i]/userArray2[i]) {
            if (userArray2[i] > amount) {
                max = (double)userArray1[i]/userArray2[i];
            }
        }
    }

    return max;
}