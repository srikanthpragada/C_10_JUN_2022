#include <stdio.h>

float average(int, int);  // function declaration or prototype declaration

void main()
{
  float avg;

      avg = average(10,20);
      printf("");
}

// Function definition
float average(int a, int b)
{
  return  (a + b) / 2.0;
}
