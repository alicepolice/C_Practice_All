#include<stdio.h>
#include<string.h>

void sumDiff(int op1, int op2, int *pSum, int *pDiff)
{
	*pSum = op1+op2;
	*pDiff = op1-op2;
}

int main()
{
int a,b,c,d;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
sumDiff(a,b, &c, &d);
printf("sum=%d diff=%d\n",c,d);
    }
    return 0;
}
