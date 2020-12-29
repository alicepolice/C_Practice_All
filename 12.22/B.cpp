#include<stdio.h>

void swap(int *p1,int *p2);

int main(void)
{
    int op1,op2,op3;
    while(scanf("%d%d%d",&op1,&op2,&op3)!=EOF){
          swap(&op1,&op2);
          swap(&op1,&op3);
          swap(&op2,&op3);
          printf("%d %d %d\n",op1,op2,op3);
    }
    return 0;
}

void swap(int *p1,int *p2)
{
    int t;
    if (*p1 > *p2)
    {
      t = *p2;
      *p2 = *p1;
      *p1 = t;
    }
}
