// print char type

void main()
{
  char ch;

      printf("Enter alphabet :");
      ch = getchar();

      if(ch >= 65 && ch <= 90)
        printf("Uppercase!");
      else
        printf("Lowercase!");
}
