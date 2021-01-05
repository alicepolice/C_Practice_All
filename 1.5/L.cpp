/*
Problem L: 判断周未或工作日
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 2068  Solved: 1152
Description
多组测试，输入一个整数(1-7), 若是6或7，则输出”weekend”否则输出”workday”。
Input
多组测试，每组输入一个整数(1-7)。
Output
若是6或7，输出“weekend”，否则输出“workday”。
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