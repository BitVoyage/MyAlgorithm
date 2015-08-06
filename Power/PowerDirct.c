#include <stdio.h>

int main(){
    long int X=10;
    int N = 100;
    for(int i=0;i<N;i++){
        X=X*X;
    }
    printf("The Power is %ld",X);
    return 1;
}
