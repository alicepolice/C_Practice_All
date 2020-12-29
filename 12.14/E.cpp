#include <stdio.h>

bool IsMiracle(int a);
int main()
{
	int n,b[10][10],i,t,m,s1,s2,k,c[100];
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		k = 0;
		for(i=m;i<=n;i++)
		{
			if(IsMiracle(i))
			{
			c[k]=i;
		    k++; 
			} 
		}
		for(i=0;i<k-1;i++)
		{
			printf("%d ",c[i]);
		}
		printf("%d\n",c[i]);
	}
	return 0;
}
bool IsMiracle(int a)
{
	int buffer = a;
    int sum= 0 ;
    while(a!=0)
	{
    int i = a%10;
	sum	+= i*i*i;
	a /= 10;
	}    
    return sum==buffer; //这里不能写a的原因是因为a最后变成了0 
}