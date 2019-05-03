#include <stdlib.h>
#include "link.h"
struct Head *NewList()
{
    struct Head *h = malloc(sizeof(struct Head));
    h->count = 0;
    h->next = NULL;
    return h;
}
void InsertNode(struct Head *h, int *n)
{
    struct Node *p,*q = malloc(sizeof(struct Node));
    q->n = n;
    q->next = NULL;
    if(h->next==NULL)
        h->next = q;
    else
    {
        p = h->next;
        while(p->next!=NULL)
            p = p->next;
        p->next = q;
    }
    h->count++;
}
void Release(struct Head *h)
{
    struct Node *q,*p;
    p = h->next;
    while(p!=NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }
    free(h);
}
int Move(struct Head *h)
{
    return 1;
}
