/*
Problem H: 计算标准差
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 1371  Solved: 682
Description
计算一组测试数据的标准差。设有n个测试数据，分别表示为A1, A2, …, An,则这组测试数据的标准差为：s=sqrt(X/n) ,其中： X = (A1-m)*(A1-m)+ (A2-m)*(A2-m)+…+(An-m)*(An-m)；m为这组测试数据的平均值m = (A1+A2+…+An)/n
Input
多组测试，每组第一行输入1个整数n（n<20） 第二行输入n个测试数据，两个测试数据间用空格隔开。
Output
n个测试数据的标准差（格式“%.2f”）
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