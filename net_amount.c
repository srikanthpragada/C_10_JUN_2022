// Calculate net amount with 12% tax

#include <stdio.h>

void main()
{
  int qty,price, amount, tax, net_amount;

     printf("Enter price    :");
     scanf("%d",&price);
     printf("Enter quantity :");
     scanf("%d",&qty);

     amount = qty * price;
     tax = amount * 12 / 100;
     net_amount = amount + tax;

     printf("Net amount = %d", net_amount);
}

