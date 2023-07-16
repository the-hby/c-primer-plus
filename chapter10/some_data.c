#include<stdio.h>
#define SIZE 4
int main(void)
{
    int some_data[SIZE]={1492,1066};
    int i;
    printf("%2s%14s","i","some_data[i]");
    for(i=0;i<SIZE;i++)
    {
        printf("%2d%14d",i,some_data[i]);
    }
    return 0;
}