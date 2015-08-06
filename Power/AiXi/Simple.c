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
    F = A[0]+A[1]*X;
    printf("%d  %d*%d ",A[0],A[1],X);
    for(int i=2;i<=N;i++){
        Pwr = X;
        for(int j= 1;j<i;j++)
            Pwr=Pwr*X;
        F = F + A[i]*Pwr;
        printf(" %d*%ld ",A[i],Pwr);
    }
    printf("\nThe Array is ");
    for(int i =0;i<=N;i++){
        printf(" %d",A[i]);
    }
    printf("\nthe Sum of AiXi is %ld\n",F);
}

