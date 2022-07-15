// Random access using fseek()

#include <stdio.h>
#define FILENAME "marks.dat"

void main()
{
 FILE * fp;
 int marks,rollno, pos, count;

    fp = fopen(FILENAME, "rb");

    printf("Enter rollno : ");
    scanf("%d",&rollno);

    pos = (rollno - 1) * sizeof(int);
    fseek(fp, pos, SEEK_SET);
    count = fread(&marks, sizeof(marks),1,fp);
    if (count == 1) // EOF
        printf("%5d", marks);
    else
        printf("Sorry! Invalid roll number!");

    fclose(fp);
 }

