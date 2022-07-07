int square(int v)
{
   return v * v;
}

int add(int a, int b)
{
    return a + b;
}

int next_even(int n)
{
  if(n % 2 == 0)
    return n + 2;
  else
    return n + 1;
}

int max(int n1, int n2)
{
    if(n1 > n2)
        return n1;
    else
        return n2;
}

int next_odd(int n)
{
  return  n % 2 == 1 ? n + 2 : n + 1;
}


void main()
{
   int v;

      v = add(10,20);
      printf("%d ", v);
      v = square(10);
      printf("%d ", v);

      v = next_even(10);
      printf("%d ", v);
      v = next_odd(10);
      printf("%d ", v);

      v = max(10, 5);
      printf("%d ", v);



}
