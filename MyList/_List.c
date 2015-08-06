#include <stdlib.h>
#include <stdio.h>
#include "_List.h"

/* define Node  */
struct Node{
    int element;
    Position next;
};

List
MakeEmpty(List L){
    L->next = NULL;
    return L;
}

int
IsEmpty(List L){
    return L->next == NULL;
}

int
IsLast(Position P, List L){
    return P->next == NULL;
}

/* Return Position of X in L; NULL if not found
 * */
Position
Find(int X, List L){
    Position P;
    P = L;
    while(P != NULL && P->element != X){
        P = P->next;
    }
    return P;
}

/* Delete first occurance of X
 * */
void
Delete(int X, List L){
    Position P,tmp;
    P = FindPrevious(X, L);
    if(!IsLast(P, L)){
        tmp = P->next;
        P->next = tmp->next;
        free(tmp);
    }
}

Position
FindPrevious(int X, List L){
    Position P;
    P = L;
    while(!IsLast(P, L) && P->next->element != X)
        P = P->next;
    return P;
}

/* Insert after Position P
 * Parameter L is unused in this implementation
 * */
void
Insert(int X, List L, Position P){
    Position tmpCell;
    tmpCell = malloc(sizeof(struct Node));
    if(tmpCell == NULL){
        printf("out of space");
        return;
    }
    if(P != NULL){
        tmpCell->element = X;
        tmpCell->next = P->next;
        P->next = tmpCell;
    }
}

void
DeleteList(List L){
    Position P,tmp;
    P = L->next;
    while(P != NULL){
        tmp = P;
        free(P);
        P = tmp->next;
    }
}
