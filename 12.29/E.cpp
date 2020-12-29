
#include<stdio.h>
#include<string.h>

int main()
{
char a[81],b[81];
    while( gets(a)!=NULL)
    {
	gets(b);
	printf("%d\n",strcmp(a,b));	
    }
    return 0;
}