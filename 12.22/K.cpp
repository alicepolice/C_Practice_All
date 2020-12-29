#include<stdio.h>
#include<string.h>
int main()
{
  int n,m,k,a,e,i,o,u,aa;
  char str[51];
  
  while(scanf("%d",&n)!=EOF)
  {
  gets(str); //³Ôµô»Ø³µ 
  while(n--)
    {
     a=e=i=o=u=0;
     gets(str);
     m = strlen(str);
     for(k=0;k<m;k++)
     {
      if(str[k]=='h'||str[k]=='H'||str[k]=='a'||str[k]=='A') a++;
      else if(str[k]=='e'||str[k]=='E') e++;
      else if(str[k]=='y'||str[k]=='Y'||str[k]=='i'||str[k]=='I') i++;
      else if(str[k]=='o'||str[k]=='O') o++;
      else if(str[k]=='u'||str[k]=='U') u++;
     }
     printf("a:%d\n",a);
     printf("e:%d\n",e);
     printf("i:%d\n",i);
     printf("o:%d\n",o);
     printf("u:%d\n",u);
    }
  }
  return 0;
}
