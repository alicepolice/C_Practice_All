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
	student buffer;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	scanf("%d%s%d",&s[i].id,&s[i].name,&s[i].cj1);
	}
	for(i=0;i<n-1;i++)
	{
		for(k=i+1;k<n;k++)
		{
		if(s[i].cj1>s[k].cj1) 
			{
			buffer = s[i];
			s[i] = s[k];
			s[k] = buffer;
			}
		}
	}

	for(i=0;i<n;i++)
    printf("%d %s %d\n",s[i].id,s[i].name,s[i].cj1);
    
	return 0;
}
