struct time
{
  int h,m,s;
};

void print_time(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

struct time next_second(struct time t)
{
    t.s ++;
    if (t.s > 59)
    {
        t.s = 0;
        t.m ++;
        if (t.m > 59)
        {
            t.m = 0;
            t.h ++;
            if (t.h > 23)
                t.h = 0;
        }
    }

    return t;
}

void main()
{
  struct time t1 = {10, 15, 59}, t2;

     t2 = next_second(t1);
     print_time(t2);
}
