
void main()
{
   char st[30];
   int i, count = 0;

     printf("Enter a string :");
     gets(st);

     for(i = 0; st[i] != 0 ; i ++)
     {
         if (st[i] == 32)
              count ++;
     }

     printf("No. of words  = %d",count + 1);
}
