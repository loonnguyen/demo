#include <iostream>

using namespace std;

struct Node
{
    int Data;
    Node *Next, *Prev;
};

typedef Node *List;

void InsertF(List &F, List &L, int x)
{
    List p = new (Node);
    p->Data = x;
    p->Next = p->Prev = NULL;
    if (F == NULL)
    {
        F = L = p;
    }
    else
    {
        F->Prev = p;
        p->Next = F;
        F = p;
    }
}

void InsertL(List &F, List &L, int x)
{
    List p = new (Node);
    p->Data = x;
    p->Next = p->Prev = NULL;
    if (F == NULL)
    {
        F = L = p;
    }
    else
    {
        L->Next = p;
        p->Prev = L;
        L = p;
    }
}

void delF(List &F, List &L)
{
    List p = F;
    if (F == L)
    {
        F = L = NULL;
    }
    else
    {
        F = F->Next;
        F->Prev = NULL;
    }
}

void delFL(List &F, List &L)
{
    List p = F;
    if (F == L)
    {
        F = L = NULL;
    }
    else
    {
        L = L->Prev;
        L->Next = NULL;
    }
}

void printF(List F)
{
    List p = F;
    while (p)
    {
        cout << p->Data << " ";
        p = p->Next;
    }
}

void printL(List L)
{
    List p = L;
    while (p)
    {
        cout << p->Data << " ";
        p = p->Prev;
    }
}

int main()
{

    List F = NULL, L = NULL;
    while (1)
    {
        cout << "Nhap x: ";
        int x;
        cin >> x;

        if (x == 0)
        {
            printF(F);
            cout << endl;
            printL(L);
            break;
        }
        else if (x % 2 == 0)
        {
            InsertF(F, L, x);
        }
        else
        {
            InsertL(F, L, x);
        }
    }

    return 0;
}