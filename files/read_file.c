
#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[50];
   int ch;

     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename, "rt");  // create a file in text mode
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file", filename);
         return;
     }

     while(1)
     {
        ch = fgetc(fp);
        if(ch == EOF)
          break;

        putch(ch);
     }

     fclose(fp);
}

