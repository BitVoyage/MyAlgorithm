#include <stdio.h>
#include "_List.h"

int main(){
    List L;
    Position P;
    L = CreateList();
    L = InitList(L);
    PrintList(L);
}
