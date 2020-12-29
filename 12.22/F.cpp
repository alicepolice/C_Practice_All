#include<stdio.h>
int main(void)
{
    int n,m,a,b,c,d,i,k,max;
    while(scanf("%d",&n)!=EOF){
        while(n--)
        {
          scanf("%d",&m);
          for(k=0;k<m;k++)
          {
             scanf("%d",&b);
             if(k==0) max = b;
             if(b>max) max = b;
          }
          printf("%d\n",max);
        }
    }
    return 0;
}

