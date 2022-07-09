
void zero(int *p)
{
    *p = 0;
}

void main()
{
  int n = 100;

    scanf("%d", &n);

    zero(&n);

    printf("%d", n);
}
