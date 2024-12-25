#include<stdio.h>
int main()
{
   char x;
   scanf("%c",&x);
   if(x>='A'&& x<='z')
   {
    printf("ALPHA\n");
    if(x>='A' && x<='Z')
    {
        printf("IS CAPITAL\n");
    }
    else if(x>='a'&& x<='b')
    {
        printf("IS SMALL\n");
    }
   }
   else if(x>='0' && x<='9')
   {
    printf("IS DIGIT\n");
   }
    return 0;
}