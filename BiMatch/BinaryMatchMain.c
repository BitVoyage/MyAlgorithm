#include "ReadArray.h"
#include "BinaryMatch.h"
#include <stdio.h>

int main(){
    int A[100];
    int X,i;
    int n = ReadArray(A);
    printf("Enter the number you want to match\n");
    scanf("%d",&X);
    i= BinaryMatch(A,X,n);
    printf("The Index of %d is %d\n",X,i);
    return 1;
}
