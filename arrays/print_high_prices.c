// print prices > 1000
#include <stdio.h>

void main()
{
  int prices[5], i;

     for(i= 0; i < 5; i ++)
     {
       printf("Enter price :");
       scanf("%d",&prices[i]);
     }

     for(i = 0; i < 5; i ++)
     {
       if(prices[i] > 1000)
           printf("%d ", prices[i]);
     }

}
