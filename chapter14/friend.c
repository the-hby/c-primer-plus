#include<stdio.h>
#define LEN 20
const char* msg[5]={
    "Thank you for the wonderful evening",
    "you certainly prove that a",
    "is a special kind of guy. We must get together",
    "and have a few laughs"
};
struct names
{
    char first[LEN];
    char last[LEN];
};
struct guy
{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};
int main(void)
{
    struct guy fellow={
        {"Ewn","Villard"},
        "grilled salmon",
        "personality coach",
        68112.00
    };
    printf("Dear %s,\n",fellow.handle.first);
    printf("%s%s",msg[0],fellow.handle.first);
    printf("%s%s",msg[1],fellow.job);
    printf("%s\n",msg[3]);
    if(fellow.income>150000.0)
    {
        printf("!!");
    }
    else if(fellow.income>75000.0)
    {
        printf("!");
    }
    else
    {
        printf(".");
    }
    printf("\n%s%s\n","","See you soon,");
    printf("%s%s\n"," ","Shalala");
}