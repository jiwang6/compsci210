#include "lab14functs.h"
#include "lab14fbFuncts.h"


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

 int numPlayerOverX(int userArray[MAXPLAYERS], int numPlayers, int amount) {
    int numCount = 0;
     for (int i = 0; i < numPlayers; i++){
         if (userArray[i] > amount) {
             numCount++;
         }
     }

    return numCount;
}

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