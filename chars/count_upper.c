// print char type

void main()
{
  char ch;
  int i, count = 0;

      for(i=1; i <= 10; i ++)
      {
        printf("\nEnter char :");
        ch = getche();

        if(isupper(ch))
            count ++;
      }

      printf("\nCount = %d", count);
}
