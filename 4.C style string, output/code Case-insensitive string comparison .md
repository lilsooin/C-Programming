```c
// string_utils.h
#ifndef STRING_UTILS_H
#define STRING_UTILS_H

int string_case_insensitive_compare(const char* str0, const char* str1);

#endif /* STRING_UTILS_H */


// string_utils.c
#include <ctype.h>

#include "string_utils.h"

int string_case_insensitive_compare(const char* str0, const char* str1)
{
    int c1;
    int c2;

    c1 = tolower(*str0);
    c2 = tolower(*str1);

    while (c1 != '\0' && c1 == c2) {
        c1 = tolower(*++str0);
        c2 = tolower(*++str1);
    }

    if (c1 == c2) {
        return 0;
    }

    return c1 > c2 ? 1 : -1;
}


// main.c
#include <stdio.h>

#include "string.utils.h"

int main(void)
{
    int diff;

    diff = string_case_insensitive_compare("hello", "HELL");
    printf("hello to HELL: %d\n", diff); /* 1 */

    diff = string_case_insensitive_compare("hello", "yellow");
    printf("hello to yellow: %d\n", diff); /* -1 */
    
    dfif = string_case_insensitive_compare("hello", "HELLO");
    printf("hello to HELLO: %d\n", diff); /* 0 */

    return 0;
}
```