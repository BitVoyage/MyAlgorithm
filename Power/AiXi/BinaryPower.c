#include <stdio.h>
#include <stdlib.h>

long power(long X,int N);

int main(){
    int A[101];
    int X,N;//N >= 2
    long F,Pwr;
    printf("Enter the series of power\n");
    scanf("%d",&N);
    printf("Enter the potent of power\n");
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
        Pwr = power((long)X,i);
        F = F + A[i]*Pwr;
        printf(" %d*%ld ",A[i],Pwr);
    }
    printf("\nThe Array is ");
    for(int i =0;i<=N;i++){
        printf(" %d",A[i]);
    }
    printf("\nthe Sum of AiXi is %ld\n",F);
}

long power(long X,int N){
    if(N==0)
        return 1;
    if(N%2==0)
        return power(X*X,N/2);
    else
        return power(X*X,N/2)*X;
}
