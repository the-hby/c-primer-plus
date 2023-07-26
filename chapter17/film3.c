#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"./list.h"
void showmovie(Item item);
char* s_gets(char*st,int n);
int main(void)
{
    List movies;
    Item temp;
    IntializeList(&movies);
    if(ListIsFull(&movies))
    {
        fprintf(stderr,"No memory available! Bye!\n");
        exit(1);
    }
    printf("Enter first movie title:");
    while(s_gets(temp.title,TSIZE)!=NULL&&temp.title[0]!='\0')
    {
        printf("Enter your rating<0-10>:");
        scanf("%d",&temp.rating);
        while(getchar()!='\n'){continue;}
        if(AddItem(temp,&movies))
        {
            fprintf(stderr,"Problem allocating memory");
            break;
        }
        if(ListIsFull(&movies))
        {
            printf("The list is full");
            break;
        }
        printf("Enter next movies title (empty line to stop):");
    }
    if(ListIsEmpty(&movies))
    {
        printf("No data entered:");
    }
    else 
    {
        printf("Here is the movie list:\n");
        Traverse(&movies,showmovie);
    }
    EmptyTheList(&movies);
    printf("Bye!\n.");
}
void showmovie(Item item)
{
    printf("Movie: %s Rating: %d",item.title,item.rating);
}
char* s_gets(char*st,int n)
{
    char*ret_val;
    char*find;
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
