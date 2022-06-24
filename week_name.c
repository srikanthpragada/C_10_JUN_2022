#include <stdio.h>

void main()
{
  int week;

     printf("Enter week :");
     scanf("%d",&week);

     switch(week)
     {
        case 1 : printf("Mon");
                 break;
        case 2 : printf("Tue");
                 break;
        case 3 : printf("Wed");
                 break;
     }
}
