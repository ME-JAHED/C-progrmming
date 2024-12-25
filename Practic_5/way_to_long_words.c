#include<stdio.h>
#include<string.h>
int main()
{
    int i;
   char S[1001];
   scanf("%d",&i);
   while(i--)
   {
      scanf("%s",&S);
  int st=strlen(S);
  if(st<10)
  {
   printf("%s\n",S);
  }
  else
{
    printf("%c%d%c\n",S[0],st-2,S[st-1]);
}
   }
 
    return 0;
}