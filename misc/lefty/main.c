#include <stdio.h>
#include <string.h>

int main() {
    char teamNames[] = "c21andrewlemkec21joshuablockc21lukeruanc21thomasgalliganic22jimwang";
    //printf("%s", teamNames); //test if name is scanned correctly
    int stringlength = strlen(teamNames);

    int test[stringlength];
    //printf("%d", stringlength);

    /*
    printf("E");

    for(int i = 0; i < stringlength + 1; i++){
        for (int i = 0; i < 256; i++ ){
            printf("QSE");
        }
    }

    for(int i = 0; i < stringlength; i++) {
        printf("A");
    }*/

    int k = 0;

    while(teamNames[k]!='\0') {
        test[k]=teamNames[k]; k++;
    }

    for (int i = 0; i < k ; i++) {
        for (int j = 0; j < test[i]; j++) {
            printf("W");
        }
        printf("D");
    }

    printf("AED");

    for (int i = 0; i < stringlength; i++) {
        printf("ZD");
    }

    return 0;
}