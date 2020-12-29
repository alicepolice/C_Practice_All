#include <stdio.h>

void WoTaiNanLe(int a[][],int n);
int main()
{
	//老师怎么没教我用C++的队列？
	int a[3][10],m,n,i,t,k,c;
	char b[3] = {'a','b','c'};
	while(scanf("%d",&n)!=EOF)
	{	
		for(i=0;i<10;i++)a[2][i]=0; //把c柱全部归零 
		for(i=0;i<10;i++)a[0][i]=10-i; //把a柱初始化，CTMD,10到1 
		if(!WoTaiNanLe(a,n))
		{
		printf("?");	
		}
		printf("终于有序了!!!");
	}
	return 0;
}
bool WoTaiNanLe(int a[][],int n)
{
   for(int i = 1;i<n;i++)
   {
   	if(a[2][i-1]<a[2][i]) return false;
   }
   return true;
}

// 我生气了，不做了！ 