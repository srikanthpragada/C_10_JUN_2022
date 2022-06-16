// Take marks in two subjects and display total and average
#include <stdio.h>

void main()
{
  int m1,m2, total, avg;

     printf("Enter first marks :");
     scanf("%d",&m1);
     printf("Enter second marks:");
     scanf("%d",&m2);

     total = m1 + m2;
     avg = total / 2;

     // Output
     printf("Total = %d, Average = %d", total, avg);

}

