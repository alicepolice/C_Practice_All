#include <stdio.h>

int main()
{
	int input;
	while(scanf("%d",&input)!=EOF)
	{
		if(input>=60)printf("pass\n");
		else printf("fail\n");
	}
	return 0;
}