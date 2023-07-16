#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    double *ptd;
    int max;
    int number;
    int i=0;
    printf("What is the maximum number of type entries");
    if(scanf("%d",&max)!=1)
    {
        printf("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }
    ptd=(double*)malloc(max*sizeof(double));
    if(ptd==NULL)
    {
        printf("Memory allocation failed.Goodbye.");
        exit(EXIT_FAILURE);
    }
    printf("Enter the values (q to quit):");
    while(i<max&&scanf("%lf",&ptd[i])==1)
    {
        ++i;
    }
    for(i=0;i<number;i++)
    {
        printf("%7.2f",ptd[i]);
        if(i%7==6)
        {
            putchar('\n');
        }
    }
    if(i%7!=0)
    {
        putchar('\n');
    }
    printf("Done.");
    free(ptd);
    return 0;
}