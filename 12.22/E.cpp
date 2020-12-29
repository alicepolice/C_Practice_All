#include<stdio.h>
int main(void)
{
    int n,m,a,b,c,d,i,k,sum[2];
    while(scanf("%d",&n)!=EOF){
        while(n--)
        {
            for(b=0;b<2;b++)
            {
            sum[b]=0;
            scanf("%d",&m);
            for(k = 0;k<m;k++)
              {
            scanf("%d",&a);
            sum[b]+=a;
              }
            }
        if(sum[0]>sum[1]) printf("Lishishi Win\n");
        else printf("AlphaGo Win\n");
        }
    }
    return 0;
}

