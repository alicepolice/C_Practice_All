/*
Problem G: 含数字5的个数
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 3133  Solved: 1697
Description
计算某个整数含数字5的个数。输入一个正整数(int)，计算其含有数字5的个数。如153输出1，5525 输出3, 1111输出0。
Input
多组测试，每组输入一个正整数(int)。
Output
该整数含数字5的个数。
Sample Input
153
5525
1111
Sample Output
1
3
0
HINT
*/

#include <stdio.h>

int main()
{
	int input,count;
	while(scanf("%d",&input)!=EOF)
	{
		count =0;
      while(input!=0)
      {
      	if(input%10==5) count++;
     	input /= 10;
      }
      printf("%d\n",count);
	}
	return 0;
}
