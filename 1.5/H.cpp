/*
Problem H: �����׼��
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1371  Solved: 682
Description
����һ��������ݵı�׼�����n���������ݣ��ֱ��ʾΪA1, A2, ��, An,������������ݵı�׼��Ϊ��s=sqrt(X/n) ,���У� X = (A1-m)*(A1-m)+ (A2-m)*(A2-m)+��+(An-m)*(An-m)��mΪ����������ݵ�ƽ��ֵm = (A1+A2+��+An)/n
Input
������ԣ�ÿ���һ������1������n��n<20�� �ڶ�������n���������ݣ������������ݼ��ÿո������
Output
n���������ݵı�׼���ʽ��%.2f����
Sample Input
3
1.2 3.4 5.8
5
1 2 3 4 5
Sample Output
1.88
1.41
HINT
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,k;
	float avg,x,sum,input[21];
	while(scanf("%d",&n)!=EOF)
	{
		sum = 0;
		for(i=0;i<n;i++)
		{
		scanf("%f",&input[i]);
		sum+=input[i];
		}
	avg = sum / n;
    sum = 0;
    
	for(i=0;i<n;i++)
    sum += (input[i]-avg)*(input[i]-avg);
    x = sqrt(sum/n);
	   
	printf("%.2f\n",x);
	}
	return 0;
}