#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=900)
    {
        printf("Will go to Dhaka");

        if(tk>1500)
        {
            printf("Will go to village");
        }
        else
        {
            printf("Will comeback");
        }
    }
    else
    {
        printf("Will stay home");
    }
    return 0;
}