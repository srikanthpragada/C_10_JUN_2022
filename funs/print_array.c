void print_array(int * a, int len)
{
 int i;

    for(i = 0; i < len; i ++)
    {
        printf("%5d", a[i]);
    }

}

void main()
{
   int a[10] = {10,11,23,34,45,55,66,78,98,75};
   int b[10] = {10,11,23,34,45};

   print_array(a, 10);
   printf("\n");
   print_array(b, 5);

}
