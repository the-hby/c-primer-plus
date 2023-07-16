#include<stdio.h>
extern int count;
static int total=0;
void accumlate(int k);
void accumlate(int k)
{
    static int subtotal=0;
    if(k<=0)
    {
        printf("loop cycle:%d\n",count);
        printf("subtotal:%d;total:%d.\n",subtotal,total);
    }
    else 
    {
        subtotal=k;
        total+=k;
    }
}
