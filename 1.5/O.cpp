/*
Problem O: ��������
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1883  Solved: 741
Description
���㹤����ѡ��ĳ���䣨С��30�ˣ��������Ź���,,��ְ�����ۺϷֽ����������ַ���Ϊ:����ҵ��ռ80%, ���ڼ�¼ռ20%�����̼����ۺϷֲ��ų����Ρ�
Input
�������룬ÿ������������n��������n��ְ���Ĺ��š�����������ҵ�������ڼ�¼�����ݶ��Կո�����
Output
������ۺϷ����������Σ��������š������������֣�һλС���������Σ��ո�����������ʽprintf("%s %s %.1f %d\n",........);��printf("%d %s %.1f d%\n",.......);
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
