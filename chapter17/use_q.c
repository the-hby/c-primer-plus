#include<stdio.h>
#include"./queue.h"
void IntegerAdd(Item*tmp,Queue*pq);
void IntegerDelete(Item*tmp,Queue*pq);
int main(void)
{
    Queue line;
    Item temp;
    char ch;
    InitailizeQueue(&line);
    printf("Testing the queue interface. type a to add a value\n");
    printf("type d to delete a value, and type d to quit: ");
    while((ch=getchar())!='q')
    {
        switch (ch) 
        {
            case 'a':IntegerAdd(&temp,&line);break;
            case 'd':IntegerDelete(&temp, &line);break;
            default:break;
        }
    }
    QueueIsEmpty(&line);
    printf("Bye!\n");
    return 0;
}
void IntegerAdd(Item*tmp,Queue*pq)
{
    printf("Interger to add: ");
    scanf("%d",tmp);
    if(!QueueIsFull(pq))
    {
        printf("putting %d into queue\n",*tmp);
        EnQueue(*tmp,pq);
    }
    else 
    {
        printf("The queue is full\n");
    }
}
void IntegerDelete(Item*tmp,Queue*pq)
{
    if(QueueIsEmpty(pq))
    {
        printf("Nothing to delete\n");

    }
    else
    {
        DeQueue(tmp, pq);
        printf("Removing %d from the queue\n",*tmp);
    }
    printf("%d items in queue.\n",QueueItemCount(pq));
    printf("Type a to add,d to delete,q to quit");
}