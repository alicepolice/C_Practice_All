#include<stdio.h>
int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF){
          if(n>2100)
          printf("Yes\n");
          else if (n>=1800)
          printf("Maybe\n");
          else
          printf("No\n");
    }
    return 0;
}

