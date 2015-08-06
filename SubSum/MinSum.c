#include <stdio.h>
#include "SubSum.h"
#include "RandArray.h"

int main(){
    int N,Min,A[100];
    printf("enter the number of int\n");
    scanf("%d",&N);
    RandArray(A,N);
    for(int i=0;i<N;i++){
        printf(" %d ",A[i]);
    }
    Min = MinSubSum(A,N);
    printf("\nthe Min Sum is %d\n",Min);
    return 1;
}
