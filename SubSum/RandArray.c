#include <stdlib.h>

void RandArray(int * A,int N){
    int tmp,randNum;
    for(int i=0;i<N;i++){
        A[i] = i -N/3;
    }
    for(int i=0;i<N;i++){
        randNum=rand()%N;
        tmp = A[i];
        A[i]=A[randNum];
        A[randNum]=tmp;
    }
}
