
#include <stdio.h>

void main(int argc, char * argv[])
{
   FILE * fp;
   int ch;

     if(argc < 2) {
        printf("Sorry! Filename is missing!");
        exit(1);
     }

     fp = fopen(argv[1], "rt");  // create a file in text mode
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file", argv[1]);
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

