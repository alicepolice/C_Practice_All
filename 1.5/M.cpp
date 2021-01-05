/*
Problem M: 数字中偶数的和
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1216  Solved: 769
Description
多组测试，输入一个任意正整数(int)，计算其各位数字中偶数的和。如12345768，2+4+6+8=20。
Input
多组测试，每组输入一个正整数。
Output
输出其各位数字中偶数的和。
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