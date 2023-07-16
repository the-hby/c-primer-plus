#include<stdio.h>
#include<stdlib.h>//提供exit()的函数
int main()
{
    int ch;
    FILE*fp;
    char fname[100];
    printf("Enter the name of the file:");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("Failed to open file\n");
        exit(1);
    }
    while((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}