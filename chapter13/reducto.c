#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
int main(int argc,char*argv[])
{
    FILE*in,*out;
    int ch;
    char name[LEN];
    int count=0;
    if(argc<2)
    {
        fprintf(stderr,"Usage:%s filename",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((in=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr,"I couldn't open the file %s",argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name, argv[1], LEN-5);
    name[LEN-5]='\0';
    strcat(name,".red");
    if((out=fopen(argv[2],"w"))==NULL)
    {
        fprintf(stderr, "can't create output file %s", argv[2]);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(in))!=EOF)
    {
        if(count++%3==0)
        {
            putc(ch,out);
        }
    }
    return 0;
}