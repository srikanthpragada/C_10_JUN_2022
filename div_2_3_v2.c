#include <stdio.h>

void main()
{
  int n;

     printf("Enter number :");
     scanf("%d",&n);

     if(n % 2 == 0)
     {
        if(n % 3 == 0)
           printf("Both");
        else
           printf("2");
     }
     else
     {
       if(n % 3 ==0)
          printf("3");
       else
          printf("None");
    }

}


