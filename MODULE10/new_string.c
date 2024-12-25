#include<stdio.h>
#include<string.h>
int main()
{
  char S[1001];
  char T[1001];
  scanf("%s",&S);
  scanf("%s",&T);
  int st_1=strlen(S);
  int st_2=strlen(T);
  printf("%d %d\n%s %s",st_1,st_2,S,T);
    return 0;
}