/*
Problem G: ������5�ĸ���
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 3133  Solved: 1697
Description
����ĳ������������5�ĸ���������һ��������(int)�������京������5�ĸ�������153���1��5525 ���3, 1111���0��
Input
������ԣ�ÿ������һ��������(int)��
Output
������������5�ĸ�����
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
