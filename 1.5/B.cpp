#include <stdio.h>

struct student
{
  int id;
  char name[20];
  int cj1; // grade 
  int cj2;
};
int main()
{
	int i,k,n;
	student s;
	n=3;
	while(n--)
	{
	scanf("%d%s%d%d",&s.id,&s.name,&s.cj1,&s.cj2);
	printf("ave[%d]=%.1f\n",2-n,(s.cj1+s.cj2)/2.0);
	}
	return 0;
}
