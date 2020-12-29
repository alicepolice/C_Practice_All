/*
i=(n-m)/2;i<n-(n-m)/2;i++
j=(n-m)/2;j<n-(n-m)/2;j++
*/


#include <stdio.h>

int main()
{
int a,b,i,k;
while(scanf("%d %d",&a,&b)!=EOF)
{
	//printf("%d",a/2);
	for(i=0;i<a;i++) //Êä³öÐÐÊý 
	{
		for(k=0;k<a;k++)
		{
		if(k<a-(a-b)/2&&k>=(a-b)/2&&i<a-(a-b)/2&&i>=(a-b)/2)	
		printf(" ");
		else
		printf("*");
		}
		printf("\n");
	} 
} 
return 0;
}