#include <stdio.h>

int main()
{
	int n,b[10][10],i,t,m,s1,s2,k;
	while(scanf("%d",&n)!=EOF)
	{
		s1=s2=0;
		for(i=0;i<n;i++)
		for(k=0;k<n;k++)
		scanf("%d",&b[i][k]);
		
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(k==i) s1 += b[i][k];
				if(n-i-1==k) s2 += b[i][k];
			}
		}
		printf("%d %d\n",s1,s2);
	}
	return 0;
}