/*
Problem L: �ж���δ������
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 2068  Solved: 1152
Description
������ԣ�����һ������(1-7), ����6��7���������weekend�����������workday����
Input
������ԣ�ÿ������һ������(1-7)��
Output
����6��7�������weekend�������������workday����
Sample Input
1
7
6
Sample Output
workday
weekend
weekend
HINT
*/

#include <stdio.h>

int main()
{
	int i,n,k;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==6||n==7) printf("weekend\n");
		else printf("workday\n");
	}
	return 0;
}