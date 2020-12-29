//Need Fix

#include<stdio.h>
bool sushu(int i);

int main()
{
    int m,n,b[5024],count,c,total,k;
    
   scanf("%d",&total);
    
    while(total--)
    {
    scanf("%d %d",&m,&n);
    count=0;
     for(k =m; k <= n ; k++)
     {
      if(sushu(k))
      {
 	    b[count]=k;
       count++; 
      }
     }
    if(count>0)
    {
    for(k=0;k<count-1;k++)
    {
    printf("%d ",b[k]);	
    }
    printf("%d\n",b[k]);
    }
    }
    
    return 0;
}

bool sushu(int i)
{
if(i==1) return false;
	
for (int a = 2;a<i;a++)
if(i%a==0) return false;
return true;
}
