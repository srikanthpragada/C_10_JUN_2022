#include <stdio.h>

void main()
{
  int a = 1, b = 20, c = 1;

     if(a < b)
        if (a < c)
          printf("%d", a);
        else
          printf("%d", c);
     else
      if(b < c)
         printf("%d", b);
      else
         printf("%d", c);



}


