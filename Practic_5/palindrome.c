#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   fgets(s,1001,stdin);
   int st=strlen(s);
   int f=1;
   int i=0;
   int j=st-1;
   while(i<j)
   {
    int tem=s[i];
    s[i]=s[j];
    s[j]=tem;
    if(s[i]!=s[j]) 
   {
    f=0;
    break;
   }
    i++;
    j--;
   }
   if(f=1)
   {
    printf("YES");
   }
   else if(f=0)
   {
    printf("NO");
   }
    return 0;
}