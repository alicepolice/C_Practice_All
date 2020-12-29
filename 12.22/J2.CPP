#include<stdio.h>
#include<string.h>
char a[100][100];
int main(void)
{
    int n,m,i,j;
    while(scanf("%d%d", &n, &m)!=EOF)
    {
        memset(a,'\0',sizeof(a));
        for(i=(n-m)/2;i<n-(n-m)/2;i++)
        {
           for(j=(n-m)/2;j<n-(n-m)/2;j++)
           {
               a[i][j]=' ';    
              }    
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=' ')
                a[i][j]='*';
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
    }
return 0;    
}