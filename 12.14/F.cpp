#include <stdio.h>

void HowOldAreYou(int a,int b,int c);
int main()
{
	int a,b,c,i,k,m,n;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
    HowOldAreYou(a,b,c);
	}
	return 0;
}
void HowOldAreYou(int a,int b,int c)
{
   printf("%d\n",c+(a-1)*b);
}