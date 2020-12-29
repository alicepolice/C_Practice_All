#include <stdio.h>
#include <string.h>
int main()
{
 int a,b,c[26],n,i,k,max;
 char str[101];
 while(gets(str)!=NULL)
 {
 	for(i=0;i<26;i++)c[i]=0;	
 n = strlen(str);
 max = 0;
 for(i = 0;i<n;i++)
 {
 	//printf("A");
 	c[str[i]-'a']++;
 	if(c[max]<c[str[i]-'a']) max = str[i]-'a';
 }
 
 printf("%c\n",'a'+max);
 }
 return 0;
}