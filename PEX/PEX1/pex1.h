//
// Created by C22Jim.Wang on 13-Sep-19.
//

#ifndef PEX01_PEX1_H
#define PEX01_PEX1_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> // for testing purposes

void drawDie(int pips);
int rollDie();
void turnStatus(int die, int player, int currentTotal, int score0, int score1);
void gameStatus(int player, int score0, int score1);
int totalScore(int score, int turnTotal);

#endif //PEX01_PEX1_H
