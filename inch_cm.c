// Take inches and display centimeters

#include <stdio.h>

void main()
{
  int inches, cm;

     // Input
     printf("Enter inches :");
     scanf("%d",&inches);

     // Process
     cm = inches * 2.5;

     // Output
     printf("%d inches = %d Centimeters", inches, cm);

}
