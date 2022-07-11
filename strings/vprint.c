void vprint(char * s)
{
 int i;

    for(i = 0; s[i] != '\0'; i ++)
        printf("%c\n", s[i]);

}

void main()
{
   vprint("Hello");
   vprint("Hi");
}
