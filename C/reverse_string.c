/*DESCRIPTION:
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'*/

#include <string.h>

char *strrev(char *string)
{
  int length = strlen(string);
  int i, j;
  
  for (i = 0, j = length - 1; i < j; i++, j--) {
    char temp = string[i];
    string[i] = string[j];
    string[j] = temp;
  }

  return string;
}