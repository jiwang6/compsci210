#include "pa2functs.h"

int main() {
    int uNum; //p1
    printf("guessnum number:\n");
    scanf("%d", &uNum);
    int gNum = guessNum(uNum);
    printf("Well guessed! The number was %d.\n", gNum);

    int arrayMax;//p2
    char uFun;
    printf("How many numbers will the user enter (max of 10)?\n");
    scanf("%d", &arrayMax);
    double uArray[arrayMax];
    for (int i = 0; i < arrayMax; i++) {
        printf("Please enter a double value:\n");
        scanf("%lf", &uArray[i]);
    }
    printf("What operation would you like to perform on the user-entered numbers (enter the first letter)?\n"
           "Sum, Average, or Range.\n");
    scanf(" %c", &uFun);
    printf("The calculation returned %.2lf\n", generateCalculate(arrayMax, uArray, uFun));

    char pChoice[6]; //p3
    printf("rock paper scissor?\n");
    scanf(" %s", pChoice);
    if (perfectAI(pChoice) == 0) {
        printf("rock!\n");
    } else if (perfectAI(pChoice) == 1) {
        printf("paper!\n");
    }else if (perfectAI(pChoice) == 2) {
        printf("scissor!\n");
    }
    printf("AI WINS\n");

    int rBot;
    int rTop;

    printf("two pos number for range pls\n");
    scanf("%d %d", &rTop, &rBot);

    int aMax = rTop - rBot + 1;

    if (rTop < rBot) {
        aMax = rBot - rTop + 1;
    }

    int usArray[aMax]; //breaks here

    perfectNumbers(rTop, rBot, usArray);

    int pSize = perfectNumbers(rTop, rBot, usArray);

    printf("p size %d\n", pSize);

    for(int i = 0; i < pSize; i++) {
        printf("%d\n", usArray[i]);
    }

    int tArray[SIZE][SIZE];
    fill2D(tArray);
    int count = count2D(tArray);
    printf("The number of values in the array divisible by both 3 and 5 is %d.\n", count);


    return 0;
}

