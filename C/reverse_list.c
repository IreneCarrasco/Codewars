/*DESCRIPTION:
In this kata you will create a function that takes in a list and returns a 
list with the reverse order.

Examples (Input -> Output)
* [1, 2, 3, 4]  -> [4, 3, 2, 1]
* [9, 2, 0, 7]  -> [7, 0, 2, 9]*/

#include <stdlib.h>

int *reverse_list(const int *array, size_t length) {
    
    int *new_array;
    size_t  i;
  
    new_array = (int *)malloc(length * sizeof(int));  
    i = 0;
  
    if(array == NULL)
      return  NULL;
    while(i < length)
      {
        new_array[i] = array[length  - 1 - i];
        i++;
    }
    return new_array;
}