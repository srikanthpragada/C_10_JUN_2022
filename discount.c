// Calculate Discount

#include <stdio.h>

void main()
{
  int price, discount;

     // Input
     printf("Enter price :");
     scanf("%d",&price);

     // Process
     discount = price * 20 / 100;

     // Output
     printf("Discount = %d", discount);

}
