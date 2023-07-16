#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41
int main(void)
{
    FILE*fp;
    char words[MAX];
    if((fp=fopen("wordy","a+"))==NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter words to add to the file; press the #");
    printf("key at the beginning of a line to terminate.");
    while((fscanf(stdin, "%40s",words)==1)&&(words[0]!='#'))
    {
        fprintf(fp, "%s\n",words);
    }
    printf("File contents:");
    rewind(fp);
    while(fscanf(fp, "%s", words)==1)
    {
        printf("%s.\n",words);
    }
    printf("Done.\n");
    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Error closing file.\n");
    }
    return 0;
}