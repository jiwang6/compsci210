/** lab10.c
* ===========================================================
* Name: C3C Jim Wang, 08 September 2019
* Section: T3A
* Project: Lab10.c
* Purpose: Practice Clion
* ===========================================================
*/

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/

#define MAGIC_CHAR '@'

#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isFirstHalfAlpha(char alphaChar) {
    if (tolower(alphaChar) >= 'a' && tolower(alphaChar) <= 'm' ) {
        return true;
    } else {
        return false;
    }
}

int typeOfChar(char typeChar) {
    if( tolower(typeChar) <'a' || tolower(typeChar) > 'z') {
        return 2;
    } else {
        switch (tolower(typeChar)) {
            case 'a':
                return 1;
                break;
            case 'e':
                return 1;
                break;
            case 'i':
                return 1;
                break;
            case 'o':
                return 1;
                break;
            case 'u':
                return 1;
                break;
            default:
                return 0;
                break;
        }
    }
}

bool isMagicChar(char magicChar) {

    if( magicChar == MAGIC_CHAR ) {
        return true;
    } else {
        return false;
    }
}