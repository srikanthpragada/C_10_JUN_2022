//
#include <stdio.h>

void main()
{
   int num,count = 0;

       printf("Enter number :");
       scanf("%d",&num);

       while(num > 0)
       {
           count ++;
           num = num / 10;   //remove rightmost digit
       }

       printf("Count  = %d", count);
}
