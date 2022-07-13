
#include <stdio.h>

void main()
{
   FILE * fp;
   int ch;

     fp = fopen("names.txt", "rt");  // create a file in text mode
     if(fp == NULL)
     {
         printf("Sorry! Could not open file!");
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

