#include <stdio.h>
#include <string.h>

int main()
{
	char a[81],b[81],c[81],buffer[81];
	while(gets(a)!=NULL)
	{
	gets(b);
	gets(c);
	if(strcmp(a,b)>0)
	{
		strcpy(buffer,a);
		strcpy(a,b);
		strcpy(b,buffer);
	}
		if(strcmp(a,c)>0)
	{
		strcpy(buffer,a);
		strcpy(a,c);
		strcpy(c,buffer);
	}
		if(strcmp(b,c)>0)
	{
		strcpy(buffer,b);
		strcpy(b,c);
		strcpy(c,buffer);
	}
	printf("%s\n",a);
		printf("%s\n",b);
			printf("%s\n",c);
	}
	return 0;
}