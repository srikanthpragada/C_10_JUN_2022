#include <stdio.h>

void main()
{
  int price, discount, price2, tax, net_price;

     printf("Enter price :");
     scanf("%d",&price);

     discount = price * 0.10;
     price2 = price - discount;
     tax = price2 * 0.08;
     net_price = price2 + tax;

     printf("Price              %5d\n", price);
     printf("- Discount         %5d\n", discount);
     printf("                   -----\n");
     printf("Discounted Price   %5d\n", price2);
     printf("+ Tax              %5d\n", tax);
     printf("                   -----\n");
     printf("Net Price          %5d\n", net_price);
}
