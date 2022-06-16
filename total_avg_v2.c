// Take marks in two subjects and display total and average
#include <stdio.h>

void main()
{
  int m1,m2, total;
  float avg;

     printf("Enter marks in two subjects :");
     scanf("%d%d",&m1,&m2);

     total = m1 + m2;
     avg = total / 2.0;

     // Output
     printf("Total = %d, Average = %.2f", total, avg);

}

