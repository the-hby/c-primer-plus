#include<stdio.h>
#define NAME "GIGATHINK, INC."
#define ADRESS "101 Megabuck PLaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void starbar(void);
int main()
{
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADRESS);
    printf("%s\n",PLACE);
    starbar();
    return 0;
}
void starbar(void)
{
    int count;
    for(count=1;count<=WIDTH;count++)
    {
        putchar('*');
    }
    putchar('\n');
}