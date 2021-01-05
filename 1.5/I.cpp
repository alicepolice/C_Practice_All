/*
Problem I: �жϻ��ķ�
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1175  Solved: 632
Description
�жϻ��ķ�����һ�ַ�����С��80�ַ��������ǻ��ģ������yes�������������no���������ġ�ָ˳���͵�����һ�����硰abcdcba����
Input
������ԣ�ÿ������һ�ַ��������������ַ���s�Ĵ�����ʽ while (gets(s) != NULL) {......}
Output
���ǻ��ģ������yes�������������no����
Sample Input
abcdcba
hello
Sample Output
yes
no
HINT
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int n,i;
	char str[81];
	bool isHui;
	while(gets(str)!=NULL)
	{
		isHui = true;
		n = strlen(str);
		for(i=0;i<n/2;i++)
		{
			if(str[i]!=str[n-1-i])
			isHui = false;
		}
		if(isHui) printf("yes\n");
		else printf("no\n");
	}	
	return 0;
}