#include<stdio.h>
int main()
{	
	int n,m,a[50],t;
	scanf("%d",&n);
	while(n--) //先n传给while判断后再减 
	{
		scanf("%d",&m);
    		for(int i=0;i<m;i++)
   			scanf("%d",&a[i]);
 		for(int i=0;i<m-1;i++)
  		{
   			for(int j=i+1;j<m;j++)
   			{
    				if(a[i]<a[j])
    				{
     					t=a[i];
     					a[i]=a[j];
     					a[j]=t;
    				}
   			}
  		}
  		printf("%d",a[0]);
  		for(int i=1;i<m;i++)
   			printf(" %d",a[i]);
  		printf("\n");
 	}
} 