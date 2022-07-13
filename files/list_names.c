// Shows names from names.txt with length

#include <stdio.h>

void main()
{
   FILE * fp;
   char name[30];
   char * p;
   int len;


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
          len = strlen(name);
          name[len-1] = '\0';  // remove \n from string
          printf("%-20s  %3d\n", name, len - 1);
     }

     fclose(fp);
}

