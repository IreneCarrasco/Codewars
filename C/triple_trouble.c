/*DESCRIPTION:
Triple Trouble
Create a function that will return a string that combines all of the letters 
of the three inputed strings in groups. Taking the first letter of all of 
the inputs and grouping them next to each other. Do this for every letter, 
see example below!

E.g. Input: "aa", "bb" , "cc" => Output: "abcabc"

Note: You can expect all of the inputs to be the same length.*/

#include <string.h>
#include <stdlib.h>

char *triple_trouble(const char *one, const char *two, const char *three) {
    int length = strlen(one);
    int i, j;
    char *result = (char *)malloc((length * 3 + 1) * sizeof(char));

    j = 0;
    for (i = 0; i < length; i++) {
        result[j++] = one[i];
        result[j++] = two[i];
        result[j++] = three[i];
    }

    result[j] = '\0';

    return result;
}