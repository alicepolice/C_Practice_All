/*
Problem M: ������ż���ĺ�
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1216  Solved: 769
Description
������ԣ�����һ������������(int)���������λ������ż���ĺ͡���12345768��2+4+6+8=20��
Input
������ԣ�ÿ������һ����������
Output
������λ������ż���ĺ͡�
Sample Input
1234
1357
2800
Sample Output
6
0
10
HINT
*/

#include <stdio.h>

int main()
{
	int i,n,k,total;
	while(scanf("%d",&n)!=EOF)
	{
	total=0;
		while(n!=0)
		{
			if(n%10%2==0)
			{
				total+=n%10;
			}
			n/=10;
		}	
		printf("%d\n",total);
	}
	return 0;
}