#include<stdio.h>
char small(char capital)
{
    char small=capital+32;
    return small;
}
int main()
{
   char ch;
   scanf("%c",&ch);
   char ans=small(ch);
   printf("%c",ans);
    return 0;
}