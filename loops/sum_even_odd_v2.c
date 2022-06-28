// Sum of even numbers and odd numbers
#include <stdio.h>

void main()
{
   int i, even_sum = 0, odd_sum = 0;

       for(i = 1; i <=  100; i += 2)
       {
           odd_sum += i;
       }

       for(i = 2; i <=  100; i += 2)
       {
           even_sum += i;
       }

       printf("Even sum = %d, Odd sum = %d", even_sum, odd_sum);
}

