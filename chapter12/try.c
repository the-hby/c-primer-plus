#include<stdio.h>
#include <stdlib.h>
void changelength(int*,int,int);
int min(int,int);
int main(void)
{
    int array_length;
    printf("Please input the array length");
    while(scanf("%d",&array_length)!=1||array_length<=0)
    {
       if(array_length<=0)
       {
            printf("The array length should be >0");
            continue;
       }
       printf("The array length should be the one");
    }
    int*tmp=(int*)malloc(sizeof(int)*array_length);
    printf("Please input the newlength");
    int new_length;
    scanf("%d",&new_length);
    changelength(tmp,array_length,new_length);
    for(int i=0;i<new_length+1;i++)
    {
        printf("%d.\n",tmp[i]);
    }
    free(tmp);
}
int min(int i,int j)
{
    if(i<j){return i;}
    else{return j;}
}
void changelength(int*old_array,int oldlength,int newlength)
{
    if(oldlength==newlength)
    {
        printf("Newlength and oldlength are the same");
        return;
    }
    if(newlength<=0)
    {
        printf("The array's length should be > 0");
        return;
    }
    int*tmp;
    tmp=(int*)malloc(sizeof(int)*newlength);
    int number=min(oldlength,newlength);
    for(int i=0;i<number;i++)
    {
        tmp[i]=old_array[i];
    }
    free(old_array);
    old_array=tmp;
}