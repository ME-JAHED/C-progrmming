#include<stdio.h>
#include<string.h>
int main()
{
   char S[1001];
   scanf("%s",S);
   int cunt[26]={0};
   for(int i=0;i<strlen(S);i++)
   {
    int val=S[i]-'a';
    cunt[val]++;
   }
   for(int i=0;i<26;i++)
   {
    printf("%c - %d\n",i+'a',cunt[i]);
   }
    return 0;
}