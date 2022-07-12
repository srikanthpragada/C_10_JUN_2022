
// UPI, NEFT, CASH

enum paymode { UPI = 10, NEFT = 20, CASH = 25};
enum gender  { MALE, FEMALE};

void main()
{
  enum paymode mode = NEFT;
  enum gender stud_gend = FEMALE;

    if (mode == CASH)
        printf("Cash");
    else
       if(mode == UPI)
          printf("UPI");
       else
          printf("NEFT");
}
