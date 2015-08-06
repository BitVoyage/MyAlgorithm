#include <stdio.h>

int main(){
    int array[100],n,c,d,swap;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(c=0;c<n-1;c++){
        for(d=c;d<n-1;d++){
            if(array[d]>array[d+1]){
                swap = array[d+1];
                array[d+1]=array[d];
                array[d]=swap;
            }
        }
    }
    printf("This is the ascending sorted list\n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
}
