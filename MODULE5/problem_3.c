#include<stdio.h>
int main()
{
   char x;
   scanf("%c",&x);
   if(x>='A' && x<='Z')
   {
    int a=x+32;
    printf("%c",a);
   }
   else if(x>='a' && x<='z')
   {
    int a=x-32;
    printf("%c",a);
   }

    return 0;
}