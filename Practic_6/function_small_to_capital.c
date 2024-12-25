#include<stdio.h>
char capital(char small)
{
    char capital=small-32;
    return capital;
}
int main()
{
   char ch;
   scanf("%c",&ch);
   char ans=capital(ch);
   printf("%c",ans);
    return 0;
}