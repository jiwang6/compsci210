/** lab14fbFuncts.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 14
* Purpose: The provided functionality for lab14.
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include "lab14fbFuncts.h"

char playerName[MAXPLAYERS][40];
int numPlayers;

/*** @fn int readData(int gamesPlayed[], int attempts[], int yards[], int touchdowns[])
 *   @brief A function that reads data from a file into the associated arrays
 *   @param attempts - the number of rushing attempts made during the season
 *   @param yards - the number of rushing yards made during the season
 *   @param touchdowns - the number of TDs a player made during the season
 *   @returns the number of players read or -1 on error
 */
int readData(int attempts[], int yards[], int touchdowns[]) {

    FILE *inFile = NULL; // File pointer
    char firstName[30];
    char lastName[45];
    int numRead = 0;
    int gamesPlayed[MAXPLAYERS]; // reserved for future use.

    // Open file
    printf("Opening file \"fbData.txt\".\n");
    inFile = fopen("C:/Users/C22JIM.WANG/Documents/compsci210/Labs/Lab14/fbData.txt", "r"); // use this for working in CLion (comment when you submit)
    inFile = fopen("fbData.txt", "r"); // use this for submission (UN-comment when you submit)


    if (inFile == NULL) {
        printf("Could not open file \"fbData.txt\".\n");
        return -1;
    }

    printf("Reading football data.\n");
    while (numRead < MAXPLAYERS && !feof(inFile)) {
        fscanf(inFile, "%s %s %d %d %d %d", firstName, lastName, &gamesPlayed[numRead],
               &attempts[numRead], &yards[numRead], &touchdowns[numRead]);
        strcat(firstName, " ");
        strcpy(playerName[numRead], strcat(firstName, lastName));
        numRead++;
    }
    printf("Closing file \"fbData.txt\".\n");
    fclose(inFile);
    numPlayers = numRead;
    return numRead;
}


/*** @fn char* getPlayerName(int playerID);
 *   @brief A function that when give a player ID returns that players name as a string
 *   @param playerID - the ID of the player whose name is desired
 *   @returns a string representing the player whose player ID was provided, NULL on error
 */
char *getPlayerName(int playerID) {
    if ((playerID <= 0) || (playerID <= numPlayers)) {
        return playerName[playerID];
    }
    return NULL;
}