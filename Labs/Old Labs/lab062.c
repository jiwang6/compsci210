/** lab06p2.c
* ===========================================================
* Name: Wang, 23AUG2019
* Section: T3A
* Project: Lab 6 - Logical Operators and Precedence
* Purpose: even more practice
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
//copied code from previous lab as base

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
   printf("Davy's auto shop services\nOil change -- $35\nTire rotation -- $19\nCar wash -- $7\nCar wax -- $12\n\n");

   char userString1[20];
   char userString2[20];
   char testString1[20] = "Oil change";
   char testString2[20] = "Tire rotation";
   char testString3[20] = "Car wash";
   char testString4[20] = "-";
   char testString5[20] = "Car wax";

   int price1;
   int price2;

   printf("Select first service:\n");
   scanf("%[^\n]", userString1);

   printf("Select second service:\n\n");
   scanf(" %[^\n]", userString2);

   int res1 = strcicmp(userString1, testString1);
   int res2 = strcicmp(userString1, testString2);
   int res3 = strcicmp(userString1, testString3);
   int res4 = strcicmp(userString1, testString4);
   int res5 = strcicmp(userString1, testString5);

   printf("Davy's auto shop invoice\n\nService 1: ");

   if (!(res1 == 0 || res2 == 0 || res3 == 0 || res4 ==0 || res5 == 0)) {
      printf("Error: Requested service is not recognized\n");
   } else if (res1 == 0) {
      printf("%s, $35\n", testString1);
      price1 = 35;
   } else if (res2 == 0) {
      printf("%s, $19\n", testString2);
      price1 = 19;
   } else if (res3 == 0) {
      printf("%s, $7\n", testString3);
      price1 = 7;
   } else if (res5 == 0) {
      printf("%s, $12\n", testString5);
      price1 = 5;
   } else {
      printf("No service\n");
   }

   res1 = strcicmp(userString2, testString1);
   res2 = strcicmp(userString2, testString2);
   res3 = strcicmp(userString2, testString3);
   res4 = strcicmp(userString2, testString4);
   res5 = strcicmp(userString2, testString5);

   printf("Service 2: ");

   if (!(res1 == 0 || res2 == 0 || res3 == 0 || res4 == 0 || res5 == 0)) {
      printf("Error: Requested service is not recognized\n");
   } else if (res1 == 0) {
      printf("%s, $35\n", testString1);
      price2 = 35;
   } else if (res2 == 0) {
      printf("%s, $19\n", testString2);
      price2 = 19;
   } else if (res3 == 0) {
      printf("%s, $7\n", testString3);
      price2 = 7;
   } else if (res5 == 0) {
      printf("%s, $12\n", testString5);
      price2 = 12;
   } else {
      printf("No service\n");
   }

   printf("\nTotal: $%d\n", (price1 + price2));

   //jeez that was a lot of errors, I need to read the assignment more carefully

   return 0;
}
