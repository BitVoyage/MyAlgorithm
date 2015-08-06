#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[101];
    int X,N;//N >= 2
    long F,Pwr;
    printf("Enter the series of Power\n");
    scanf("%d",&N);
    printf("Enter the potent of Power\n");
    scanf("%d",&X);
    for(int i=0;i<=N;i++){
        A[i]=i+1;
    }

    int randNum,tmp;
    for(int i= 0;i<=N;i++){
        randNum = rand()%N;
        tmp = A[i];
        A[i] = A[randNum];
        A[randNum] = tmp;
    }
    for(int i =0;i<=N;i++){
        printf(" %d",A[i]);
    }

    F=0;
    for(int i=N;i>=0;i--){
        F = X*F + A[i];
    }

    printf("\nthe Sum of AiXi is %ld\n",F);
}

