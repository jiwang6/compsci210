/** lab15functs.c
* ===========================================================
* Name: C3C Jim Wang, 23 September 2019
* Section: T3A
* Project: Lab15
* Purpose: Practice 2-Dimensional Arrays; define functions to
 * be used in main
* ===========================================================
*/

#include "lab15functs.h"
int MAXPLAYERS = 400;
int DATACOLS = 3;

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array>
* @userArray <the array to be searched>
* @numPlayers <number of items in array>
* @j <defines coulumn to be searched>
*/
int findMaxIndex(int userArray[MAXPLAYERS][DATACOLS], int numPlayers, int j) {
    int maxIndex = 0;
    int max = 0;
    for (int i = 0; i < numPlayers; i++){
        if (max < userArray[i][j]) {
            max = userArray[i][j];
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
* @j <defines coulumn to be searched>
*/
int numPlayerOverX(int userArray[MAXPLAYERS][DATACOLS], int numPlayers, int amount, int j) {
    int numCount = 0;
    for (int i = 0; i < numPlayers; i++){
        if (userArray[i][j] > amount) {
            numCount++;
        }
    }

    return numCount;
}

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array over threshold value>
* @userArray1 <an array to be searched>
* @userArray2 <the array to be searched>
* @amount <the threshold value that a value has to exceed>
* @j <defines coulumn to be searched>
*/
int getMaxYardsPerCarryIndex(int userArray1[MAXPLAYERS][DATACOLS], int numPlayers, int amount) {
    int maxIndex = 0;
    double max = 0.1;
    for (int i = 0; i < numPlayers; i++){
        if (max < (double)userArray1[i][1]/userArray1[i][0]) {
            if (userArray1[i][0] > amount) {
                max = (double)userArray1[i][1]/userArray1[i][0];
                maxIndex = i;
            }
        }
    }

    return maxIndex;
}

/** ----------------------------------------------------------
* <finds the index of the maximum value in specified array over threshold value>
* @userArray1 <the array to be searched>
* @numPlayers <number of items in array>
* @amount <the threshold value that a value has to exceed>
* @j <defines coulumn to be searched>
*/
double getMaxYardsPerCarry(int userArray1[MAXPLAYERS][DATACOLS], int numPlayers, int amount) {
    double max = 0.1;
    for (int i = 0; i < numPlayers; i++){
        if (max < (double)userArray1[i][1]/userArray1[i][0]) {
            if (userArray1[i][0] > amount) {
                max = (double)userArray1[i][1]/userArray1[i][0];
            }
        }
    }

    return max;
}