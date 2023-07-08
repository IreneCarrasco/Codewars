/*Sentence Smash
Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

Example
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'*/

#include <stdlib.h>
#include <string.h>

char *smash(const char *const words[], size_t nb_words)
{
    size_t total_length = 0;
    size_t i;


    for (i = 0; i < nb_words; i++) {
        total_length += strlen(words[i]);
    }
    size_t spaces_length = nb_words - 1;
    size_t result_length = total_length + spaces_length;
    char *result = (char *)malloc((result_length + 1) * sizeof(char));
    if (result != NULL) {
        result[0] = '\0'; 
        for (i = 0; i < nb_words; i++) {
            strcat(result, words[i]);
            if (i < nb_words - 1) {
                strcat(result, " ");
            }
        }
    }

    return result;
}
