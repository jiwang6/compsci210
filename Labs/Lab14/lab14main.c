//
// Created by C22Jim.Wang on 18-Sep-19.
//

#include "lab14fbFuncts.h"
#include "lab14functs.h"

int main() {
    int attempts[MAXPLAYERS], yards[MAXPLAYERS], touchdowns[MAXPLAYERS];
    int readNum = readData(attempts, yards, touchdowns);

    printf("%d players data read.\n", readNum);

    printf("The player ID %d is %s and he scored %d touchdowns in 2017.\n", 0, getPlayerName(0), touchdowns[0] );
    printf("The player ID %d is %s and he rushed for %d yards in 2017.\n", 122, getPlayerName(122), yards[122] );

    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(findMaxIndex(yards, readNum)), yards[findMaxIndex(yards,readNum)] );
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(findMaxIndex(touchdowns, readNum)), touchdowns[findMaxIndex(touchdowns,readNum)] );

    printf("The number of players with more than %d TDs in 2017 is %d.\n", 10, numPlayerOverX(touchdowns, readNum, 10));
    printf("The number of players with more than %d yards in 2017 is %d.\n", 1000, numPlayerOverX(yards, readNum, 1000));
    printf("The number of players with more than %d attempts in 2017 is %d.\n", 100, numPlayerOverX(attempts, readNum, 100));

    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", 100, getPlayerName(getMaxYardsPerCarryIndex(yards,attempts,readNum,100)), getMaxYardsPerCarry(yards,attempts,readNum,100) );
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", 50, getPlayerName(getMaxYardsPerCarryIndex(yards,attempts,readNum,50)), getMaxYardsPerCarry(yards,attempts,readNum,50) );
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", 10, getPlayerName(getMaxYardsPerCarryIndex(yards,attempts,readNum,10)), getMaxYardsPerCarry(yards,attempts,readNum,10) );


    return 0;
}
