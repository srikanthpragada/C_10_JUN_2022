// Calculate net salary using HRA and DA, which are based on basic
#include <stdio.h>

void main()
{
  float basic, hra, da, net;

     printf("Enter Basic Salary :");
     scanf("%f",&basic);

     if(basic > 50000)
     {
         hra = basic * 0.30;
         da = basic * 0.25;
     }
     else
     {
         hra = basic * 0.20;
         da = basic * 0.15;
     }


     net = basic + hra + da;

     printf("Net salary = %.2f", net);
}

