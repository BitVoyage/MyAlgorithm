#include <stdlib.h>
#include <stdio.h>
#include "_List.h"

/* define Node  */
struct Node{
    int element;
    Position next;
};

/* create header */
List CreateList(){
    List L;
    L = malloc(sizeof(struct Node));
    if(L == NULL) return NULL;
    L->next = NULL;
    L->element = 0;
    return L;
}

List InitList(List L){
    Position P = L;
    int N,X;
    L = MakeEmpty(L);
    printf("Enter the number of elements\n");
    scanf("%d",&N);
    printf("Enter elements\n");
    for(int i = 0; i < N; i++){
        scanf("%d",&X);
        P =  Insert(X,L,P);
    }
    return L;
}

List
MakeEmpty(List L){
    if(!IsEmpty(L))
        free(L->next);
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
Position
Insert(int X, List L, Position P){
    Position tmpCell;
    tmpCell = malloc(sizeof(struct Node));
    if(tmpCell == NULL){
        printf("out of space");
    }
    else if(P != NULL){
        tmpCell->element = X;
        tmpCell->next = P->next;
        P->next = tmpCell;
    }
    return tmpCell;
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

/**** Hide implementation details *****/
Position Header(List L){
    return L;
}

Position First(List L){
    return L->next;
}

Position Advance(Position P){
    return P->next;
}

int Retrieve(Position P){
    return P->element;
}
/*****  End Hide                 ******/

void
PrintList(List L){
    Position P = L->next;
    printf("List elements:");
    while(P != NULL){
        printf(" %d",P->element);
        P = P->next;
    }
    printf("\n");
}

