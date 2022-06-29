// Take 5 numbers or until 0 is given and then display total
#include <stdio.h>

void main()
{
   int num,i,total = 0 ;


       for(i = 1; i <=  5; i ++)
       {
           printf("Enter number [0 to stop]: ");
           scanf("%d",&num);

           if(num == 0)
              break;

           if(num > 0)
              total += num;
       }

       printf("Total = %d", total);
}
