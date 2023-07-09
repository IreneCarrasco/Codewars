/*You are given two interior angles (in degrees) of a triangle.
Write a function to return the 3rd.
Note: only positive integers will be tested.*/

int other_angle(int a, int b) {
  int c;
  c = 180 - a - b;
  return c;