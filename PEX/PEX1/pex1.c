/** PEX1.c
* ===========================================================
* Name: C3C Jim Wang, 15 September 2019
* Section: T3A
* Project: PEX1
* Purpose: Play 2 player Pig!
* ===========================================================
*/

#include "pex1.h"

int main() {
    printf("Pig!\n\n");

    /* function testing
    int drawTest;
    printf("How many pips?\n");
    scanf("%d", &drawTest);
    drawDie(drawTest);

    int tStatDie, tStatPlay, tStatTot, tStatScore0, tStatScore1;
    scanf("%d %d %d %d %d", &tStatDie, &tStatPlay, &tStatTot, &tStatScore0, &tStatScore1);

    turnStatus(tStatDie, tStatPlay, tStatTot, tStatScore0, tStatScore1);

    gameStatus(tStatPlay,tStatScore0,tStatScore1);
    */

    int playerNum = 0; // identifier for current player
    int score0 = 0; // total score of player 0
    int score1 = 0; // total score of player 1
    int turnCount = 0; // number of turns

    while(score0 < 100 && score1 < 100 && turnCount <40 ) {
        int playerChoose = 0; // player choose to roll again?
        int playerRoll; // what did the player roll?
        int turnTotal = 0; // how many points are accumulating

        do {
            playerRoll = rollDie();
            printf("You rolled: %d\n", playerRoll);
            drawDie(playerRoll);
            turnTotal = turnTotal + playerRoll;

            turnStatus(playerRoll, playerNum, turnTotal, score0, score1);

            if (playerNum == 0) {
                if (score0 + turnTotal >= 100) {
                    break;
                }
            } else {
                if (score1 + turnTotal >= 100) {
                    break;
                }
            }

            if (playerRoll != 1) {
                while (1) {
                    printf("Roll Again? (1 for yes, 0 for no):\n");
                    scanf("%d", &playerChoose);
                    if (playerChoose == 1 || playerChoose == 0) {
                        break;
                    }
                }
            } else {
                turnTotal = 0;
            }


        } while (playerChoose == 1 && playerRoll != 1);

        if (playerNum == 0) {
            score0 = totalScore(score0, turnTotal);
            playerNum = 1;
        } else {
            score1 = totalScore(score1, turnTotal);
            playerNum = 0;
        }

        turnCount++;

        if (turnCount < 40){
            gameStatus(playerNum, score0, score1);
        } else if (score0 > score1) {
            printf("Player 0 won!\n");
        } else if (score1 > score0) {
            printf("Player 1 won!\n");
        } else {
            printf("Tie!\n");
        }

    }
    return 0;
}

/** ----------------------------------------------------------
* <Draws die based on rollDie() function output>
* @pips <indicates how many pips to draw on die>
*/
void drawDie(int pips) {
    char eRow[] = " ------- "; //edges
    char tRow[] = "| *   * |"; //top
    char mRow[] = "|   *   |"; //middle
    char bRow[] = "| *   * |"; //bottom

    if (pips == 2 || pips == 3) { //first and last row
        strcpy(tRow, "| *     |");
        strcpy(bRow, "|     * |");
    } else if (pips == 1) {
        strcpy(tRow, "|       |");
        strcpy(bRow, "|       |");
    }

    if (pips == 2 || pips == 4) { //middle row
        strcpy(mRow, "|       |");
    } else if (pips == 6) {
        strcpy(mRow, "| *   * |");
    }

    printf("%s\n%s\n%s\n%s\n%s\n", eRow, tRow, mRow, bRow, eRow);

}

/** ----------------------------------------------------------
* <Generates a random number to be a player's rolled die>
* @return <returns die value for turn>
*/
int rollDie() {
    return (rand() % 6) + 1;
}

/** ----------------------------------------------------------
* <displays the total points generated in each round by each player>
* @die <the die roll for current turn>
* @player <which player is active when the function is called>
* @currentTotal <total points generated by player in current turn>
* @score0 <score of player 0>
* @score1 <score of player 1>
*/
void turnStatus(int die, int player, int currentTotal, int score0, int score1) {
    if (die == 1) {
        printf("Player %d pigged out.\n", player);
    } else {
        printf("Current score for player %d = %d.\n", player, currentTotal);

        printf("Total score = ");
        if (player == 0) {
            printf("%d.\n", score0);
        } else {
            printf("%d.\n", score1);
        }
    }
}

/** ----------------------------------------------------------
* <displays which player's turn it is as well as what their total score is>
* @player <which player's stats are being displayed>
* @score0 <player 0's score>
* @score1 <player 1's score>
*/
void gameStatus(int player, int score0, int score1){
    printf("Player 0 score: %d\nPlayer 1 score: %d\n", score0, score1);
    if (score0 < 100 && score1 < 100) {
        printf("It is Player %d turn.\n", player);
    }

    if (score0 >= 100) {
        printf("Player 0 won!\n");
    } else if (score1 >= 100) {
        printf("Player 1 won!\n");
    }
}

/** ----------------------------------------------------------
* <adds round score to a player's total score>
* @score <current score for player 0 or 1>
* @turnTotal <point value to be added to score>
* @return <new total score>
*/
int totalScore(int score, int turnTotal) {
    return score + turnTotal;
}