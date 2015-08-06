#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int n,tmp,randNum;
    double time;
    clock_t begin,end;

    printf("Enter the number of elements\n");
    scanf("%d",&n);
    begin = clock();
    int A[1000000];
    for(int i=0;i<n;i++){
        A[i]=i+1;
    }
    for(int i=0;i<n;i++){
        randNum = rand()%n;
        tmp = A[i];
        A[i] = A[randNum];
        A[randNum] = tmp;
    }
    end = clock();
    time = (double)(end - begin);
    printf("The Random Array is:");
    for(int i=0;i<n;i++){
        printf(" %d ",A[i]);
    }
    printf("\nTime spent is %lf ms. ",time);
    return 1;
}
