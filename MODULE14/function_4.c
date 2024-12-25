#include<stdio.h>
//no_return_type_+_no_parameter
void sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    printf("%d\n",s);
}
int main()
{
   sum();
    return 0;
}