#include "lab19functs.h"

int main() {
    char userString[MAX_STR_LEN];

    char searchChar;
    char rChar;

    char searchStr[MAX_STR_LEN];
    int locations[MAX_STR_LEN];

    printf("Function - 1\nEnter a string (<= 80 chars): ");
    fgets(userString, MAX_STR_LEN, stdin);
    strtok(userString, "\n");
    printf("Enter a search character followed by replace character: ");
    scanf("%c %c", &searchChar, &rChar);
    replStr(userString, searchChar, rChar);
    printf("New string (between arrows): -->%s<--\n", userString);

    char ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    printf("\nFunction - 2\nEnter a string (<= 80 chars): ");
    fgets(userString, MAX_STR_LEN, stdin);
    strtok(userString, "\n");
    printf("Enter a search string (<= 80 chars): ");
    fgets(searchStr, MAX_STR_LEN, stdin);
    strtok(searchStr, "\n");
    printf("Enter a replace character: ");
    scanf("%c", &rChar);
    replMultiChar(userString, searchStr, rChar);
    printf("New string (between arrows): -->%s<--\n", userString);


    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    printf("\nFunction - 3\nEnter a string (<= 80 chars): ");
    fgets(userString, MAX_STR_LEN, stdin);
    strtok(userString, "\n");
    printf("Enter a character whose locations you wish to find: ");
    scanf("%c", &searchChar);
    printf("There are %d occurances of %c\n", findLocations(userString, locations, searchChar), searchChar);
    for (int i = 0; i < sizeof(locations); i++) {
        printf("%c found at location %d\n", searchChar, locations[i]);
    }

    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    printf("\nFunction - Challenge\n");
    printf("Enter a string (<= 80 chars): ");
    fgets(userString, MAX_STR_LEN, stdin);
    strtok(userString, "\n");
    printf("Enter a search string(<= 80 chars): ");
    fgets(searchStr, MAX_STR_LEN, stdin);
    strtok(searchStr, "\n");
}
