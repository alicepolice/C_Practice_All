
#include<stdio.h>
#include<string.h>
int length(char *s)
{
    int count;
    count=strlen(s);
    return count;
}
int main()
{
    int t;
    char s[81];
    while(gets(s)!=NULL)
    {
        t=length(s);
        printf("%d\n",t);   
    }
    return 0;
}