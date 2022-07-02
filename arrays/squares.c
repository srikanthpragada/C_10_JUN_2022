//
#include <stdio.h>

void main()
{
  int sqrs[10], i, n;

     for(n = 1, i = 0; i < 10; i ++, n++)
     {
          sqrs[i] = n * n;
     }

     for(i = 0; i < 10; i ++)
     {
       printf("%d ", sqrs[i]);
     }

}
