char opposite_case(char ch)
{
    if(isupper(ch))
        return tolower(ch);
    else
        return toupper(ch);
}


void main()
{
   printf("%c %c", opposite_case('A'), opposite_case('i'));

}
