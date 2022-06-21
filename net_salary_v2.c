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

     printf("Basic Salary     %6d\n", basic);
     printf("+ HRA            %6d\n", hra);
     printf("+ DA             %6d\n", da);
     printf("                 ------\n");
     printf("Net salary       %6d\n", net);
}


