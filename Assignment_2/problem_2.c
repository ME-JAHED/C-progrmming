#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int even=0;
   int odd=0;
   for(int i=0;i<n;i++)
   {
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        even+=a;
    }
    else
    {
        odd+=a;
    }
   }
   printf("%d %d",even,odd);
    return 0;
}