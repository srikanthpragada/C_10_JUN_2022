#include <stdio.h>

void main()
{
  int week, hours, price;

     printf("Enter week[1-7] and hours :");
     scanf("%d%d",&week, &hours);

     switch(week)
     {
        case 1 :
        case 2 : price = 150; break;
        case 3 :
        case 4 : price = 125; break;
        case 5 : price = 175; break;
        default: price = 250;
     }

     printf("Wage = %d", hours * price);
}
