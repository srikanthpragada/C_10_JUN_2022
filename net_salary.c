// Calculate net salary
#include <stdio.h>

void main()
{
  int basic, hra, da, net;

     printf("Enter Basic Salary :");
     scanf("%d",&basic);

     hra = basic * 30 / 100;
     da = basic * 20 / 100;
     net = basic + hra + da;

     printf("Net salary = %d", net);
}

