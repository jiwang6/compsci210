/** lab14fbFuncts.h
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 14
* Purpose: The provided functionality for lab14.
* ===========================================================
*/
#ifndef MYEXE_LAB14FBFUNCTS_H
#define MYEXE_LAB14FBFUNCTS_H


#define MAXPLAYERS 400 // The maximum number of players than can be read from the data file.

/*** @fn int readData(int attempts[], int yards[], int touchdowns[])
 *   @brief A function that reads data from a file into the associated arrays
 *   @param attempts - the number of rushing attempts made during the season
 *   @param yards - the number of rushing yards made during the season
 *   @param touchdowns - the number of TDs a player made during the season
 *   @returns the number of players read or -1 on error
 */
int readData(int attempts[], int yards[], int touchdowns[]);

/*** @fn char* getPlayerName(int playerID);
 *   @brief A function that when give a player ID returns that players name as a string
 *   @param playerID - the ID of the player whose name is desired
 *   @returns a string representing the player whose player ID was provided, NULL on error
 */
char* getPlayerName(int playerID);


#endif //MYEXE_LAB14FBFUNCTS_H