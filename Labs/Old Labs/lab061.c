/** lab06p1.c
* ===========================================================
* Name: Wang, 23AUG2019
* Section: T3A
* Project: Lab 6 - Logical Operators and Precedence
* Purpose: practice strings and logical operators
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
#include <string.h>
#include <stdio.h>
#include <ctype.h> //allows use of tolower() function


int strcicmp(char const *a, char const *b) //from stack overflow, creates function for case insensitive string comparison
{
    for (;; a++, b++) {
        int d = tolower((unsigned char)*a) - tolower((unsigned char)*b);
        if (d != 0 || !*a)
            return d;
    }
}

int main() {
   char userString[20];
   char testString1[20] = "oil change";
   char testString2[20] = "tire rotation";
   char testString3[20] = "car wash";

   printf("Enter desired auto service:\n");
   scanf("%[^\n]", userString);
   printf("You entered: %s\n", userString);

   int res1 = strcicmp(userString, testString1);
   int res2 = strcicmp(userString, testString2);
   int res3 = strcicmp(userString, testString3);

   if (!(res1 == 0 || res2 == 0 || res3 == 0)) {
      printf("Error: Requested service is not recognized\n");
   } else if (res1 == 0) {
      printf("Cost of %s: $35\n", testString1);
   } else if (res2 == 0) {
      printf("Cost of %s: $19\n", testString2);
   } else if (res3 == 0) {
      printf("Cost of %s: $7\n", testString3);
   }

   //printf("%d, %d, %d", res1, res2, res3);

   return 0;
}
