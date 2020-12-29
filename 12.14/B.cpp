#include <stdio.h>

bool sushu(int i);
int main()
{
	int n,b[10][10],i,t,m,s1,s2,k,c[100];
	k=0;
	for(i=100;i<201;i++)
	{
		if (sushu(i)==true)
		{
		c[k]=i;
		k++;
		}
	}
	for(i=0;i<k;i++)
	{
	if(i%5==0&&i!=0)printf("\n");
    if(i==k-1)printf("%5d",c[i]);
	else printf("%5d",c[i]);	
	}
	return 0;
}
bool sushu(int item)
{
int i;
for(i=2;i<item;i++)	
{
if(item%i==0)return false;	
}
return true;
}