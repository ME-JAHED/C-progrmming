#include<stdio.h>
int main()
{
    char x;
    scanf("%c ",&x);
    if(x=='z')
    {
        printf("a");
    }
    else if(x>='a'&&x<='z')
    {
       int a=x+1;
        printf("%c ",a);
    }
    
    return 0;
}