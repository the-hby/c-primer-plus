#include<stdio.h>
#include<stdlib.h>
struct flex{
    size_t count;
    double average;
    double scores[];
};
void showFlex(const struct flex*p);
int main(void)
{
    struct flex*pf1,*pf2;
    int n=5;
    int i;
    int tot=0;
    pf1=malloc(sizeof(struct flex)+n*sizeof(double));
    pf1->count=n;
    for(i=0;i<n;i++)
    {
        pf1->scores[i]=20.0-i;
        tot+=pf1->scores[i];
    }
    pf1->average=tot/n;
    showFlex(pf1);
    free(pf1);
    return 0;
}
void showFlex(const struct flex*p)
{
    int i;
    printf("Scores:");
    for(i=0;i<p->count;i++)
    {
        printf("%g",p->scores[i]);
    }
    printf("\nAverage: %g\n",p->average);
}
