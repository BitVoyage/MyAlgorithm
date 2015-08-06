#include <stdio.h>

int ReadArray(int * array){
    int n,c;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);

    for(int i=0;i<n;i++){
        array[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    return n;
}
