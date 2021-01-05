/*
Problem I: 判断回文否
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1175  Solved: 632
Description
判断回文否。输入一字符串（小于80字符），若是回文，输出“yes”，否则输出“no”。“回文”指顺读和倒读都一样，如“abcdcba”。
Input
多组测试，每组输入一字符串。多组输入字符串s的代码形式 while (gets(s) != NULL) {......}
Output
若是回文，输出“yes”，否则输出“no”。
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