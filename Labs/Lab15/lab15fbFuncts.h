/** lab15fbFuncts.h
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 15
* Purpose: The provided functionality for Lab15
* ===========================================================
*/
#ifndef MYEXE_LAB15FBFUNCTS_H
#define MYEXE_LAB15FBFUNCTS_H


#define MAXPLAYERS 400 // The maximum number of players than can be read from the data file.
#define DATACOLS 3 // The number of columns of data in the file (not counting the player name).

/*** readData(int fbData[][DATACOLS]) reads data from a file into a 2D array
 *   @param fbData a 2D array that stores attempts in column 0, rush yards in column 1, and TDs in column 2
 *   @returns the number of players read or -1 on error
 */
int readData(int fbData[][DATACOLS]);

/*** getPlayerName(int playerID) accepts a player ID returns that players name as a string
 *   @param playerID - the ID of the player whose name is desired
 *   @returns a string representing the player whose player ID was provided, NULL on error
 */
char* getPlayerName(int playerID);


#endif //MYEXE_LAB15FBFUNCTS_H