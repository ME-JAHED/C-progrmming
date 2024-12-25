#include<stdio.h>
#include<string.h>
int main()
{
   char s[100001];
   fgets(s,100001,stdin);
   int lenth=strlen(s);
    for(int i=0;i<lenth;i++)
    {
        if(s[i]==',')
        {
            s[i]=' ';
        }
        if('A'<=s[i]&&'Z'>=s[i])
        {
            s[i]+=32;
        }
       else if('a'<=s[i]&&'z'>=s[i])
        {
            s[i]-=32;
        }
        
    }
    printf("%s",s);
    return 0;
}