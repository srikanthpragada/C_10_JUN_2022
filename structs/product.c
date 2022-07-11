
struct product
{
   char name[30];
   int qoh, price;
};


void main()
{
  struct product p1,p2;

     strcpy(p1.name,"iPhone 13");
     p1.qoh = 10;
     p1.price = 80000;

     printf("%s %d %d", p1.name, p1.qoh, p1.price);
}
