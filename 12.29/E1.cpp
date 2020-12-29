#include <stdio.h>
#include <string.h>

int main()
{
	int i,k,n;
	char str[10][31],buffer[31];
	
	while(scanf("%d",&n)!=EOF)
	{
	getchar();
	   for(i=0;i<n;i++)
		{
	     gets(str[i]);
		}	
		
		for(i=0;i<n;i++)
		{
       for(k=i+1;k<n;k++)
       {
       	if(strcmp(str[i],str[k])>0)
       	    {
	       	strcpy(buffer,str[i]);
	       	strcpy(str[i],str[k]);
	       	strcpy(str[k],buffer);			   	       	
	        }
       }
		}
		
		for(i=0;i<n;i++)
		{
	     puts(str[i]);
		}	
		printf("\n");
	}
	return 0;
}