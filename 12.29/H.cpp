#include <stdio.h>

int main()
{
    int n,a,b,i,k,buffer;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
		 for(k=0;k<n-i-1;k++) printf(" ");
	     for(k=0;k<i;k++) printf("%d",n-k);
	     printf("%d",n-i);
	     for(k=i-1;k>=0;k--) printf("%d",n-k);
	     printf("\n");
		}
		for(i=n-2;i>=0;i--)
		{
		 for(k=0;k<n-i-1;k++) printf(" ");
	     for(k=0;k<i;k++) printf("%d",n-k);
	     printf("%d",n-i);
	     for(k=i-1;k>=0;k--) printf("%d",n-k);
	     printf("\n");
		}
	}	
	return 0;
}