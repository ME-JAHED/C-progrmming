#include<stdio.h>
int main()
{
   int t;
   scanf("%d ",&t);
   for(int test=1;test<=t;test++)
   {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int s;
    scanf("%d",&s);
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            pos=i+1;
            break; 
        }
    }
    if(pos!=-1)
    {
         printf("Case %d: %d\n",test,pos);  
    }
    else
    {
          printf("Case %d: Not Found\n",test);
    }
    
   }
    return 0;
}