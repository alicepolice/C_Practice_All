#include<stdio.h>
#include<string.h>

int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
	getchar();
	
	int i,j;
	char a[n][31];
	char t[31];
	
	for(i=0;i<n;i++)
	{
	gets(a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=i;j<n;j++)
	{
	if(strcmp(a[i],a[j])>0)
	{
	strcpy(t,a[i]);
	strcpy(a[i],a[j]);
	strcpy(a[j],t);
	}
	}
	}
	for(i=0;i<n;i++)
	{
	printf("%s",a[i]);
	printf("\n");
	}
	printf("\n");
}
return 0;
}