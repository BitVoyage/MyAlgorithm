#include <stdio.h>
#include "_List.h"

int main(){
    List L;
    Position P;
    L = Initial();
    P = First(L);
    while(P != NULL){
        printf(" %d",Retrieve(P));
        P = Advance(P);
    }
}
