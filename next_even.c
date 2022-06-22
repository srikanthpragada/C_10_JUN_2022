// Display next even number
#include <stdio.h>

void main()
{
 int num, even_num;

     printf("Enter number :");
     scanf("%d",&num);

     if(num % 2 == 0)
        even_num = num + 2;
     else
        even_num = num + 1;

     printf("Next even number for %d is %d", num, even_num);
}

