#include<stdio.h>
int main()
{
    int n,i,j,k,t,x,q,p;
    while(scanf("%d",&n)!=EOF)
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=2*i-1;k++)
        printf("%d",i);
        printf("\n");
    }
    for(x=n+1;x<=2*n-1;x++)
    {
        for(p=1;p<=x-n;p++)
        printf(" ");
        for(q=2*n-2*p+1;q>=1;q--)
        printf("%d",2*n-x);
        printf("\n");
    }
    return 0;
} 