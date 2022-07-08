int count_even(int a[10])
{
  int i, count = 0;

    for(i = 0; i < 10; i ++)
    {
       if (a[i] % 2 == 0)
           count ++;
    }
    return count;
}

void main()
{
   int a[10] = {10,11,23,34,45,55,66,78,98,75};

   printf("%d", count_even(a));

}
