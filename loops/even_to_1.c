// Print even numbers from the given number to 1

#include <stdio.h>

void main()
{
   int num,i;

       printf("Enter number :");
       scanf("%d",&num);

       if(num % 2 != 0)
          num --;

       for(i = num; i > 1; i -= 2)
          printf("%d ", i);
}
