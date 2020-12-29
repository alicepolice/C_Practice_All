#include <stdio.h>

int main()
{
 int a,b,c,n,i,k,buffer[7],player;
 bool global,hello;
 while(scanf("%d",&n)!=EOF)
 {
 while(n--)
 	{
	global = true;
    for(i=0;i<7;i++) scanf("%d",&buffer[i]);
    for(i=0;i<5;i++)
    	{
    	hello = false;
    	scanf("%d",&player);
    	for(k=0;k<5;k++)
    		{
	    	if(buffer[k] == player) hello = true;
	        }
	    if(hello == false) global = false;
    	}
    	
       for(i=0;i<2;i++)
    	{
    	scanf("%d",&player);
    	hello = false;
    	for(k=5;k<7;k++)
    		{
	    	if(buffer[k] == player) hello = true;
	        }
	    if(hello == false) global = false;
    	} 	
    	
   	if(global) printf("yes\n");
   	else printf("no\n");
    	
 	}
 
 }
 return 0;
}