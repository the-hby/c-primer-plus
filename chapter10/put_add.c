#include<stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short*pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti=dates;
    ptf=bills;
    printf("%23s %15s","short","double");
    for(index=0;index<SIZE;index++)
    {
        printf("pointness + %d:%10p %10p",index,pti+index,ptf+index);
    }
}