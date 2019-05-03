#ifndef LINK_H_INCLUDED
#define LINK_H_INCLUDED
struct Node
{
    int *n;
    struct Node *next;
};
struct Head
{
    int count;
    struct Node *next;
};

extern struct Head *NewList();
extern void InsertNode(struct Head *h, int *p);
extern void Release(struct Head *h);
extern void AddANumber(struct Head *h);
extern int Move(struct Head *h);
#endif // LINK_H_INCLUDED
