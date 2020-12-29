#include<stdio.h>

void swap(float *p1,float *p2);

int main(void)
{
    float op1,op2,op3,op4,op5;
    while(scanf("%f %f %f %f %f",&op1,&op2,&op3,&op4,&op5)!=EOF){
          swap(&op1,&op2);
          swap(&op1,&op3);
          swap(&op1,&op4);
          swap(&op1,&op5);
          swap(&op2,&op3);
          swap(&op2,&op4);
          swap(&op2,&op5);
          swap(&op3,&op4);
          swap(&op3,&op5);
          swap(&op4,&op5);
          printf("%.1f %.1f %.1f %.1f %.1f\n",op1,op2,op3,op4,op5);
    }
    return 0;
}

void swap(float *p1,float *p2)
{
    float t;
    if (*p1 > *p2)
    {
      t = *p2;
      *p2 = *p1;
      *p1 = t;
    }
}
