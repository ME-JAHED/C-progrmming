#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(i=i;i<=90;i+=1)
    {
        if(i%2==0)
        printf("%d -even\n",i);
        else
        printf("%d -odd\n",i);
    }
    return 0;
}