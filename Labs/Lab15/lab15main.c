/** lab15main.c
* ===========================================================
* Name: C3C Jim Wang, 23 September 2019
* Section: T3A
* Project: Lab15
* Purpose: Practice 2-Dimensional Arrays
* ===========================================================
*/

#include "lab15fbFuncts.h"
#include "lab15functs.h"

int main() {
    int playerData[MAXPLAYERS][DATACOLS];
    int readNum = readData(playerData);

    printf("%d players data read.\n", readNum);

    printf("The player ID %d is %s and he scored %d touchdowns in 2017.\n", 0, getPlayerName(0), playerData[0][2] );
    printf("The player ID %d is %s and he rushed for %d yards in 2017.\n", 122, getPlayerName(122), playerData[122][1] );

    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(findMaxIndex(playerData, readNum, 1)), playerData[findMaxIndex(playerData,readNum,1)][1] );
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(findMaxIndex(playerData, readNum, 2)), playerData[findMaxIndex(playerData,readNum, 2)][2] );

    printf("The number of players with more than %d TDs in 2017 is %d.\n", 10, numPlayerOverX(playerData, readNum, 10, 2));
    printf("The number of players with more than %d yards in 2017 is %d.\n", 1000, numPlayerOverX(playerData, readNum, 1000, 1));
    printf("The number of players with more than %d attempts in 2017 is %d.\n", 100, numPlayerOverX(playerData, readNum, 100, 0));

    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", 100, getPlayerName(getMaxYardsPerCarryIndex(playerData,readNum,100)), getMaxYardsPerCarry(playerData,readNum,100) );
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", 50, getPlayerName(getMaxYardsPerCarryIndex(playerData,readNum,50)), getMaxYardsPerCarry(playerData,readNum,50) );
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", 10, getPlayerName(getMaxYardsPerCarryIndex(playerData,readNum,10)), getMaxYardsPerCarry(playerData,readNum,10) );

    return 0;
}
