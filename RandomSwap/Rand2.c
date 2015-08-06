#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void RandArray(int * A,int * B,int N);

int main(){
    int n;
    double time;
    clock_t begin,end;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    begin = clock();
    int A[100000];
    int B[100000];
    for(int i=0;i<n;i++){
        A[i]=0;
        B[i]=0;
    }
    RandArray(A,B,n);
    end = clock();
    time = (double)(end - begin);
    printf("The Random Array is:");
    for(int i=0;i<n;i++){
        printf(" %d ",A[i]);
    }
    printf("\nTime spent is %lf ms. ",time);
    return 1;
}

void RandArray(int * A,int * B,int N){
    int randNum;
    bool Exist;
    for(int i=0;i<N;i++){
        randNum = rand()%N+1;
        if(B[randNum] == 0){
            A[i] = randNum;
            B[randNum] = 1;
        }
        else
            i--;
    }
}
