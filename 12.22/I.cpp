#include<stdio.h>

int getint(int a,int b);

int main(void)
{
    int m,n,i,a,b,c,d,k,s;

    while(scanf("%d",&n)!=EOF)
    {
      for(int i = 0;i<n;i++)
      {
        s = 0;
      scanf("%d %d",&a,&b);
      s = getint(a,b);
      printf("%d\n",s);
      }
    }
    return 0;
}

int getint(int a,int b)
{
int k;
if(a>b) k = b; else k = a;
while(k>0)
{
if(a%k==0&&b%k==0) return k;
k--;
}
}
