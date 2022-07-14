// Shows names from names.txt with length

#include <stdio.h>

void main()
{
   FILE * fp;
   char name[30];
   char * p;
   int total = 0, count = 0;


     fp = fopen("names.txt", "rt");  // create a file in text mode
     if(fp == NULL)
     {
         printf("Sorry! Could not open names.txt file");
         return;
     }

     while(1)
     {
          p = fgets(name,30,fp); // read a line
          if(p == NULL) // EOF
              break;
          // remove new line

          total += (strlen(name) - 1);
          count ++;
     }

     fclose(fp);
     printf("Avg Length  = %.2f", total / (float) count);
}

