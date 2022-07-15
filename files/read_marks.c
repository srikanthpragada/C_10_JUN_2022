
#include <stdio.h>
#define FILENAME "marks.dat"

void main()
{
 FILE * fp;
 int marks,count;

    fp = fopen(FILENAME, "rb");

    while(1)
    {
       count = fread(&marks, sizeof(marks),1,fp);
       if (count == 0) // EOF
          break;
       printf("%5d", marks);
    }




    fclose(fp);

}
