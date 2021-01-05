#include <stdio.h>

struct student
{
  int id;
  char name[20];
  int cj1; // grade 
};
int main()
{
	int i,k,n,max,min;
	student s[21];
	scanf("%d",&n);
	max = min = n-1;
	while(n--) 
	{
	scanf("%d%s%d",&s[n].id,&s[n].name,&s[n].cj1);
	if(s[n].cj1>s[max].cj1) max = n;
	if(s[n].cj1<s[min].cj1) min = n;	
	}
	printf("%d %s %d\n",s[max].id,s[max].name,s[max].cj1);
	printf("%d %s %d\n",s[min].id,s[min].name,s[min].cj1);
	return 0;
}
