//问题解决 https://www.cnblogs.com/linxiaoxu/p/14480779.html 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
void print_f(int n,int *a);	
void qian(int start,int end,int *a); 
void hou(int start,int end,int what,int *a);
// 随机生成20个数据
int a[50],i;
printf("编号   数据\n");
srand((int)time(0));
for (i=0;i<20;i++)
{
	a[i] = 1 + (int)(200.0*rand()/(RAND_MAX+1.0));
	//rand()产生一个0到0x7ffff即0到32767之间的随机数 
}
//int x1=-32768,x2=32767,x3=-32768;

// 在第一个小于55的元素之前插一个数值999 
int pos = 0;
for(i=0;i<20;i++)
{
	if(a[i]<55)
	{
	pos = i; 
	break;
	}
}
hou(pos,19,999,a); 

// 删除第一个小于55的元素 
qian(pos+1,20,a);

// 在最后一个小于55的元素之前插一个数值999 
pos = 0;
for(i=0;i<20;i++)
{
	if(a[i]<55)
	{
	pos = i; 
	}
}
hou(pos,19,999,a); 

// 删除所有小于55的元素
pos = 0;int count=20;
for(i=0;i<count;i++)
{
	if(a[i]<55)
	{
	qian(i,count,a); 
	count--;
	}
}

// 给定一个正整数数组，求没有出现过的最小整数 
int min = a[0];
for(i=0;i<count+1;i++)
{
	if(a[i]<min)min=a[i];
}

// 显示所有数据 

print_f(30,a);
printf("没有出现过的最小整数为 %d\n",min+1);

return 0;
}

void print_f(int n,int *a)
{
	int i;
	for (i=0;i<n;i++)
 	printf("%2d. %6d\n",i,a[i]);
}

//start+1位到end位均向前移动一位，替换了start位 
void qian(int start,int end,int *a)
{
	int i;
	for (i=start;i<end;i++)
	{
		a[i] = a[i+1];	
	}
	a[end]=0;
}

//start到end位均后移一格，给start位赋值what 
void hou(int start,int end,int what,int *a)
{
	int i;
	for (i=end;i>=start;i--)
	{
		a[i+1]=a[i];
	}
	a[start]=what;
	
}