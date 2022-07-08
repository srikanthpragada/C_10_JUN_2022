int sign(int v)
{
    if(v > 0)
        return 1;
    else
        if (v < 0)
          return -1;
        else
            return 0;
}


void main()
{
   printf("%d  %d", sign(10), sign(-20));

}
