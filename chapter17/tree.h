#ifndef TREE_H_
#define TREE_H_
#define SLEN 20
#include<stdbool.h>
typedef struct item
{
    char petname[SLEN];
    char petkind[SLEN];
}Item;
#define MAXITEMS 10
typedef struct trnode
{
    Item item;
    struct trnode*left;
    struct trnode*right;
}Trnode;
typedef struct tree
{   
    Trnode*root;
    int size;
}Tree;
void initializeTree(Tree*ptree);
bool TreeIsEmpty(const Tree*ptree);
bool TreeIsFull(const Tree*ptree);
int TreeItemCount(const Tree*ptree);
bool AddItem(const Item*pi,Tree*ptree);
bool Intree(const Item*pi,const Tree*ptree);
bool DeleteItem(const Item*pi,Tree*ptree);
void Traverse(const Tree*ptree,void(*pfun)(Item item));
void DeleteAll(Tree*ptree);
#endif