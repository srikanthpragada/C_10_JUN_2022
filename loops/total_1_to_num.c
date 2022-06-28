// Print total for numbers from 1 to given num

#include <stdio.h>

void main()
{
   int num,i , total = 0;

       printf("Enter number :");
       scanf("%d",&num);

       for(i = 1; i <= num; i ++)
       {
           total += i;
       }

       printf("Total = %d", total);
}
