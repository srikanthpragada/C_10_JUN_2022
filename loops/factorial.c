// Factorial of a number

#include <stdio.h>

void main()
{
   int num,i,fact = 1;

       printf("Enter number :");
       scanf("%d",&num);

       for(i = 2; i <= num; i ++)
       {
          fact *= i;
       }

       printf("Factorial = %d", fact);
}
