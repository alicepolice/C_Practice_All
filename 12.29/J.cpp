#include<stdio.h>
#include<string.h> 
int main()
{
bool isPrime;
	int a,b,c,d,n,k,i;
 while(scanf("%d",&a)!=EOF)
 {
	isPrime= true;
 if(a==1)
 {
 isPrime = false;
 }	
 for(i = 2;i<a;i++)
 {
 	if(a%i==0) isPrime = false;
 }
 if(isPrime) printf("Prime\n");
 else printf("No\n");
 }
return 0;
}