/*
Problem J: 统计成绩
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1096  Solved: 460
Description
统计成绩。某初中班级（小于30人）进行三好生评选工作,,按学生的综合分进行排序，评分方法为:文化成绩占80%, 体育成绩占20%。请你编程完成计算综合分并排出名次。
Input
多组输入，每组先输入整数n，再输入n个学生的学号、姓名、文化成绩、体育成绩，数据都以空格间隔。
Output
输出按综合分排序后的名次，形式为：学号、姓名、总评分（一位小数）、名次，空格隔开；输出格式可为printf("%s %s %.1f %d\n",........);或printf("%d %s %.1f d%\n",.......);。
Sample Input
4
1001 zhang 90 80
1002 wang 95 75
1003 he 100 95
1004 li 92 90
Sample Output
1003 he 99.0 1
1004 li 91.6 2
1002 wang 91.0 3
1001 zhang 88.0 4
HINT

*/

#include <stdio.h>

struct student
{
  int id;
  char name[20];
  int cj1; // grade 
  int cj2;
  float result;
};
int main()
{
	int i,k,n,max,min;
	student s[50];
	student buffer;
	
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<n;i++)
	{
	scanf("%d%s%d%d",&s[i].id,&s[i].name,&s[i].cj1,&s[i].cj2);
	s[i].result = 0.8*s[i].cj1 + 0.2 * s[i].cj2;
	}
	
	for(i=0;i<n-1;i++)
	{
		for(k=i+1;k<n;k++)
		{
		if(s[i].result<s[k].result) 
			{
			buffer = s[i];
			s[i] = s[k];
			s[k] = buffer;
			}
		}
	}

	for(i=0;i<n;i++)
    printf("%d %s %.1f %d\n",s[i].id,s[i].name,s[i].result,i+1);
    
	}
	return 0;
}
