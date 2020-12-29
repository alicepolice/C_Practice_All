#include<stdio.h>
int main()
{
    int t;
    int n,i;
    int a[200]={0,1,2,4};
    for(i=4;i<=50;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
        
    }
}