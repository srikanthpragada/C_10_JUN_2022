// Take 5 numbers and display total
#include <stdio.h>

void main()
{
   int num,rem, total = 0;

       printf("Enter number :");
       scanf("%d",&num);

       while(num > 0)
       {
           rem = num % 10;   // take rightmost digit
           total += rem;
           num = num / 10;   //remove rightmost digit
       }
       printf("Total = %d", total);
}
