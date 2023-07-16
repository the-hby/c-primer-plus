#include<stdio.h>
#define SIZE 10
int sum(int arr[],int n);
int main(void)
{
    int marbless[SIZE]={20,10,5,39,4,16,19,26,31,20};
    long answer;
    answer=sum(marbless,SIZE);
    printf("the size of marbless is %zd bytes.\n",sizeof(marbless));
    return 0;
}
int sum(int arr[],int n)
{
    int i;
    int total =0;
    for(i=0;i<n;i++)
    {
        total+=arr[i];
    }
    printf("the size of ar is %zd bytes.\n",sizeof arr);
    return total;
}