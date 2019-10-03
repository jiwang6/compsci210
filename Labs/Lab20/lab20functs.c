#include "lab20functs.h"

double fToC(double degF){
    return (degF-32) * (5.0/9);
}

double cToK(double degC){
    return degC + 273.15;
}


void printTable(double degFlow, double degFhigh, double degFstep) {
    printf("\n|-----------------------------|\n"
           "|                             |\n"
           "|   Temperature Conversions   |\n"
           "|                             |\n"
           "|-----------------------------|\n"
           "|Farenheit| Celsius | Kelvin  |\n"
           "|-----------------------------|\n");
    while (degFlow <= degFhigh) {
        printf("|%9.2lf", degFlow);
        printf("|%9.2lf", fToC(degFlow));
        printf("|%9.2lf|\n", cToK(fToC(degFlow)));


        degFlow += degFstep;
    }

    printf("|-----------------------------|\n");
}


double getInput(char title[], double min, double max){
    double rVal;

    printf("%s", title);
    scanf("%lf", &rVal);

    while (!(rVal > min && rVal < max)) {
        printf("Your input is outside of the range %.2lf to %.2lf.\n"
               "Please re-enter.\n", min, max);

        printf("%s", title);
        scanf("%lf", &rVal);
    }

    return rVal;
}


bool again() {
    printf("Would you like to do this again?\n");
    char againR;

    scanf(" %c", &againR);

    if (tolower(againR) == 'y') {
        return true;
    } else {
        return false;
    }
}
