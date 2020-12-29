#include <stdio.h>

int YinZiHe(int item);
int main()
{
	int n,b[10][10],i,t,m,s1,s2,k,c[1000];
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		k=0;
		for(i=m;i<=n;i++)
	   	 {
	    	if(i==YinZiHe(i)) 
			{c[k] = i;k++;}
	   	 }
	   	 
	   	for(i=0;i<k-1;i++)
        {
   			printf("%d ",c[i]);
   		} 
   	     printf("%d\n",c[i]);
	}
	return 0;
}
int YinZiHe(int item)
{
	int sum = 0;
	for(int i = 1;i<item;i++) //这里之前写成i=0，我可真是小天才呢 
	{
	if(item%i==0) sum+=i;	
	}	
	return sum;
}