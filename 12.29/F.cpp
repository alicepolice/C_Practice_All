#include <stdio.h>

int main()
{
 int a,b,c,n,i,k,sum;
 while(scanf("%d",&n)!=EOF)
 {
 	while(n--)
 	{
		sum = 0;
	for(c=0;c<5;c++)
		{
		scanf("%d",&k);
		if(k==1) sum+=3;
		else if(k==2) sum+=1;
		else if(k==3) sum=sum;
		} 	
		printf("%d\n",sum);
 	
    }
 }
 return 0;
}