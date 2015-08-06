#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void RandArray(int * A,int N);

int main(){
    int n;
    double time;
    clock_t begin,end;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    begin = clock();
    int A[10000];
    for(int i=0;i<n;i++){
        A[i]=0;
    }
    RandArray(A,n);
    end = clock();

    time =(double)(end - begin);
    printf("The Random Array is:");
    for(int i=0;i<n;i++){
        printf(" %d ",A[i]);
    }
    printf("\nTime spent is %lf ms. ",time);
    return 1;
}

void RandArray(int * A,int N){
    int randNum;
    bool Exist;
    for(int i=0;i<N;i++){
        randNum = rand()%N+1;
        Exist = false;
        for(int j=0;j<=i;j++){
            if(A[j] == randNum){
                Exist = true;
                i--;
                break;
            }
        }
        if(!Exist)
            A[i] = randNum;
    }
}
