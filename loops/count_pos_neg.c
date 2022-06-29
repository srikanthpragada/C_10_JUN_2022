// Take 5 numbers and display no. of positive and negative numbers
#include <stdio.h>

void main()
{
   int num,i, pos, neg;


       pos = neg = 0;
       for(i = 1; i <=  5; i ++)
       {
           printf("Enter number :");
           scanf("%d",&num);

           if(num < 0)
              neg ++;
           else
              pos ++;
       }

       printf("Positive = %d, Negative = %d",pos,neg);
}
