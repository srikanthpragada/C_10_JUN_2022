
#include <stdio.h>

void main()
{
   FILE * fp;

     fp = fopen("names.txt", "wt");  // create a file in text mode

     fprintf(fp, "First Line\n");
     fprintf(fp, "Second Line\n");

     fclose(fp);
}

