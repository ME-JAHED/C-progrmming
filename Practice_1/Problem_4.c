#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y>0)
    {
        printf("positive");
    }
    else if(y<0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    return 0;
}
