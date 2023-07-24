#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char* s_gets(char*st,int n);
struct books{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct books library[MAXBKS];
    int count=0;
    int index,fliecount;
    FILE*pbooks;
    int size=sizeof(struct books);
    if((pbooks=fopen("book.dat","a+b"))==NULL)
    {
        fputs("Can't open the book.dat",stderr);
        exit(1);
    }
    rewind(pbooks);
    while(count<MAXBKS&&fread(&library[count],size,1,pbooks))
    {
        if(count==0)
        {
            printf("Current contents of book.dat:");
        }
        printf("%s by %s: $%.2f\n",library[count].title,library[count].author,library[count].value);
        count++;
    }
    fliecount=count;
    if(count==MAXBKS)
    {
        fputs("The book.dat file is full",stderr);
        exit(2);
    }
    pritnf("Please add add new book titles");
    printf("Press [enter] at the start of a line to stop.");
    while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL&&library[count].title[0]!='\0')
    {
        printf("Now enter the author");
        s_gets(library[count].author,MAXAUTL);
        printf("Now enter the value.");
        scanf("%f",&library[count++].value);
        while(getchar()!='\n'){continue;}
        if(count<MAXBKS)
        {
            printf("Enter the next title.\n");
        }
    }
    if(count>0)
    {
        printf("Here is the list of the book:");
        for(index=0;index<count;index++)
        {
             printf("%s by %s: $%.2f\n",library[count].title,library[count].author,library[count].value);
        }
        fwrite(&library[fliecount],size,count-fliecount,pbooks);
    }
    else
    {
        printf("No books? Too bad.\n");
    }
    printf("Bye.\n");
    fclose(pbooks);
    return 0;
}
char* s_gets(char*st,int n)
{
    char* ret_val;
    char* find;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
        {
            *find='\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}