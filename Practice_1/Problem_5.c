#include<stdio.h>
int main()
{
    int TK;
    scanf("%d",&TK);
    if(TK>=10000)
    {
        printf("Gucci Bag\n");
        if(TK>20000)
        {
            printf("Gucci Belt");
        }
        
    }
    else if(TK>=5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }
    return 0;
}