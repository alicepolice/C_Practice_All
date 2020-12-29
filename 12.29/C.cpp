
#include<stdio.h>
#include<string.h>
void sort(int *p, int n)
{
	int a,b,i,c,d,temp,min,k;
	for(i = 0;i<n;i++) //Ñ­»·´ÎÊý
	{
	  min = i;
	  for(k=i+1;k<n;k++)
	  {
  	  if(p[k]<p[min]) min = k; 	
  	  }	
  	  if(min!=i)
  	  {
  	  	temp = p[i];
  	  	p[i] = p[min];
  	  	p[min] = temp;
  	  }
	} 
}
int main()
{
    int a[101],n,b,c,k,i;
    while(scanf("%d",&n)!=EOF)
    {
    	for(i=0;i<n;i++)scanf("%d",&a[i]);
    	sort(a,n);
    	for(i=0;i<n-1;i++)printf("%d ",a[i]);
    	printf("%d\n",a[i]);
    }
    return 0;
}