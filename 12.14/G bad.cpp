#include <stdio.h>

void WoTaiNanLe(int a[][],int n);
int main()
{
	//��ʦ��ôû������C++�Ķ��У�
	int a[3][10],m,n,i,t,k,c;
	char b[3] = {'a','b','c'};
	while(scanf("%d",&n)!=EOF)
	{	
		for(i=0;i<10;i++)a[2][i]=0; //��c��ȫ������ 
		for(i=0;i<10;i++)a[0][i]=10-i; //��a����ʼ����CTMD,10��1 
		if(!WoTaiNanLe(a,n))
		{
		printf("?");	
		}
		printf("����������!!!");
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

// �������ˣ������ˣ� 