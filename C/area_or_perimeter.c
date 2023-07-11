/*DESCRIPTION:
You are given the length and width of a 4-sided polygon. The polygon can either 
be a rectangle or a square.
If it is a square, return its area. If it is a rectangle, return its perimeter.

Example(Input1, Input2 --> Output):

6, 10 --> 32
3, 3 --> 9*/

#include <stdio.h>

int area_or_perimeter(int l , int w) {
  int area;
  int perimeter;
  
  if (l == w)
    {
    area = l * w;
    return area;
  }
  else
    {
    perimeter = 2 * (w + l);
    return perimeter;
  }
}