#define ElemType int

typedef struct Node
{
    ElemType data;
    struct Node* next;
}Node;

typedef struct Node* LinkList;

#define Status int

Status GetElem(LinkList L,int i, ElemType* e)
{
    int j;
    LinkList p;
    p = L->next;
    j = 1;
    
    while (p && j < i) {
        p = p->next;
        ++j;
    }

    if (!p || j > i) {
        return 0;
    }

    *e = p->data;
    return 1;
}