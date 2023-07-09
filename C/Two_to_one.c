/*Take 2 strings s1 and s2 including only letters from a to z. Return a new 
sorted string, the longest possible, containing distinct letters - each taken 
only once - coming from s1 or s2.

a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"*/

#include <stdlib.h>
#include <string.h>

char *longest(const char *s1, const char *s2) {
    int counts[26] = {0}; // Array to keep track of letter counts
    int len = strlen(s1) + strlen(s2); // Length of combined string
    char *result = calloc(len + 1, sizeof(char)); // Allocate memory for result string
    
    // Iterate over s1 and increment counts for each letter
    for (int i = 0; s1[i] != '\0'; i++) {
        counts[s1[i] - 'a'] = 1;
    }
    
    // Iterate over s2 and increment counts for each letter
    for (int i = 0; s2[i] != '\0'; i++) {
        counts[s2[i] - 'a'] = 1;
    }
    
    // Build the result string from distinct letters
    int index = 0;
    for (int i = 0; i < 26; i++) {
        if (counts[i] == 1) {
            result[index++] = i + 'a';
        }
    }
    
    return result;
}