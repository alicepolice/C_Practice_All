#include <stdio.h>

struct time
{
  int year,month,day;
};
int main()
{
	int i,k,mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int total;
	time t;
	
	while(scanf("%d-%d-%d",&t.year,&t.month,&t.day)!=EOF)
	{
	mon[1] = 28; total = 0;
	if(t.year%4==0||t.year%400==0)mon[1]=29;
	total = t.day;
	for(i=0;i<t.month-1;i++) total+=mon[i];
	printf("%d\n",total);	
	}
	return 0;
}