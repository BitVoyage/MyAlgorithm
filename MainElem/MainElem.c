/**
 * Auther: Lusheng Zhang
 * Date : 7.27.2015
 * Theme :Select the Main Element. The Main Element is
 * the element appears more than N/2 times.
 **/
#include <stdio.h>

int Choose(int * A, int N);

int main(){
    int A[100],N;
    printf("enter the size of Array\n");
    scanf("%d",&N);
    printf("enter the elements of Array\n");
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    N = Choose(A,N);
    if(N == 2)
        printf("No main Element\n");
    else
        printf("The main Element is %d\n",A[0]);
}




int Choose(int * A,int N){
    if(N<=2) return N;

    int i,count;
    i = count = 0;
    while(i<N-1){
        if(A[i] == A[i+1]){
            A[count] = A[i];
            count++;
        }
        i+=2;
    }
    if(N%2 == 1){
        A[count] = A[N-1];
        count++;
    }
    Choose(A,count);
    return count;
}
