#include <stdio.h>

int CountDigit(int a,int b);
int main()
{
	int n,b[10][10],i,t,m,s1,s2,k,c[100];
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",CountDigit(n,2));
	}
	return 0;
}
int CountDigit(int a,int b)
{
	int count = 0;
	while(a!=0)
	{
	if(a%10==b)count++;
	a /= 10;	
	}
	return count;
}