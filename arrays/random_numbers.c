//
#include <stdio.h>

void main()
{
  int a[10], i;

     srand(time(0));  // init random seed

     for(i = 0; i < 10; i ++)
     {
         a[i] = rand() % 100; // 0- 99
         printf("%d ", a[i]);
     }

}
