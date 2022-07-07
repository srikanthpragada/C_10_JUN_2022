
int sum(int a[5])
{
  int total = 0, i;

     for(i = 0; i < 5; i ++)
        total += a[i];

     return total;
}

void main()
{
    int a[] = {10,20,30,40, 100};
    int total;


     total = sum(a);
     printf("%d", total);
}
