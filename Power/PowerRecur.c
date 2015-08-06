#include <stdio.h>

long int Recur(long int X, int N);

int main(){
    long int X = 10;
    int N=100;
    X=Recur(X,N);
    printf("The Power is %ld",X);
    return 1;
}

long int Recur(long int X,int N){
    if(N == 0)
        return 1;
    else if(N%2 == 0)
        return Recur(X*X, N/2);
    else
        return Recur(X*X, N/2)*X;
}
