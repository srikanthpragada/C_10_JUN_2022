
void print_numbers(int num)
{
 int i;
     for(i = 1; i <= num ; i ++)
        printf("%d ", i);
}

void main()
{
 int n;

   printf("Enter number :");
   scanf("%d",&n);
   print_numbers(n);
}
