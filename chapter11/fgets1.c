#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    printf("Enter strings (empty line to quit):");
    while(fgets(words,STLEN,stdin)!=NULL&&words[0]!='\n')
    {
        printf("%s\n",words);
    }
    printf("Done");
    return 0;
}