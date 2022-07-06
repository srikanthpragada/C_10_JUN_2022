// Take names until end and display largest name

#include <stdio.h>
#include <string.h>

void main()
{
  char name[30], largest[30];

     strcpy(largest, "");
     while(1)
     {
        printf("Enter name [end to stop] :");
        gets(name);
        if(stricmp(name, "end") == 0 )
             break;

        if (strcmp(name, largest) > 0)
            strcpy(largest, name);
     }

     printf("Largest = %s",largest);
}


