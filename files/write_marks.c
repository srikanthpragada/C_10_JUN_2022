
#include <stdio.h>
#define FILENAME "marks.dat"

void main()
{
 FILE * fp;
 int marks,i;

    fp = fopen(FILENAME, "wb");

    srand(time(0));

    for(i = 1; i <= 10; i ++)
    {
       marks = rand() % 100;
       fwrite(&marks, sizeof(marks),1,fp);
    }

    fclose(fp);

}
