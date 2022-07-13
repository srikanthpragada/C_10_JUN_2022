
#include <stdio.h>

void main()
{
   FILE * fp;
   char name[30];

     fp = fopen("names.txt", "at");  // create a file in text mode

     while(1)
     {
         printf("Enter name [over to stop] :");
         gets(name);

         if (strcmp(name,"over") == 0)
             break;

         // write to file
         fprintf(fp, "%s\n",name);
     }

     fclose(fp);
}

