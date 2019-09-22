/** lab15fbFuncts.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 15
* Purpose: An implementation file for Lab 15
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include "lab15fbFuncts.h"

char playerName[MAXPLAYERS][40];
int numPlayers;

/*** readData(int fbData[][DATACOLS]) reads data from a file into a 2D array
 *   @param fbData a 2D array that stores attempts in column 0, rush yards in column 1, and TDs in column 2
 *   @returns the number of players read or -1 on error
 */
int readData(int fbData[][DATACOLS]) {

    FILE *inFile = NULL; // File pointer
    char firstName[30];
    char lastName[45];
    int numRead = 0;
    int gamesPlayed[MAXPLAYERS]; // reserved for future use.

    // Open file
    printf("Opening file \"fbData.txt\".\n");
    inFile = fopen("../Labs/Lab14/fbData.txt", "r"); // use this for working in CLion (comment when you submit)
//    inFile = fopen("fbData.txt", "r"); // use this for submission (UN-comment when you submit)


    if (inFile == NULL) {
        printf("Could not open file \"fbData.txt\".\n");
        return -1;
    }

    printf("Reading football data.\n");
    while (!feof(inFile) && numRead < MAXPLAYERS) {
        fscanf(inFile, "%s %s %d %d %d %d", firstName, lastName, &gamesPlayed[numRead],
                &(fbData[numRead][0]),&(fbData[numRead][1]),&(fbData[numRead][2]));
        strcat(firstName, " ");
        strcpy(playerName[numRead], strcat(firstName, lastName));
        numRead++;
    }
    printf("Closing file \"fbData.txt\".\n");
    fclose(inFile);
    numPlayers = numRead;
    return numRead;
}


/*** getPlayerName(int playerID) accepts a player ID returns that players name as a string
 *   @param playerID - the ID of the player whose name is desired
 *   @returns a string representing the player whose player ID was provided, NULL on error
 */
char *getPlayerName(int playerID) {
    if ((playerID <= 0) || (playerID <= numPlayers)) {
        return playerName[playerID];
    }
    return NULL;
}