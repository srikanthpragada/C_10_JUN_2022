
#include <stdio.h>

void main()
{
  int qty, price, amount, discount, net_amount;

     printf("Enter qty and price:");
     scanf("%d%d",&qty,&price);

     amount = qty * price;

     if(qty > 3)
     {
        discount = amount * 0.20;
     }
     else
     {
        discount = amount * 0.10;
     }

     net_amount = amount - discount;
     printf("%d", net_amount);
}


