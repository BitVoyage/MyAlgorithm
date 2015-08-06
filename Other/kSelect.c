/*
 * 作者：张路生
 * 时间：2015-7-8
 * 主题：选定数列钟第k个最大的数。
 * 思想： 先读入k个数，并递增排序。
 * 剩下的元素逐个读入，新元素被读入时大于k则忽略；
 * 否则放入数组中正确的位置，同时挤出数组中最末（最大）的数。
 * 算法结束时，第k个数即为答案。
 * 本例中，k=n/2;
 */

#include <stdio.h>

void bubbleAscendSort(int array[],int n);

int main(){
    int k,n,c;
    int array[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);

    for(int i=0;i<n;i++){
        array[i]=0;
    }
    k=n/2;
    for(int i=0;i<k;i++){
        scanf("%d",&array[i]);
    }

    bubbleAscendSort(array,k);


    printf("This is the ascending sorted list\n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    for(int i=k;i<n;i++){
        scanf("%d",&c);
        if(c < array[k-1]){
            for(int x=0;x<k-1;x++){
                if(c < array[x]){
                    for(int y=k-1;y>=x;y--){
                        array[y+1]=array[y];//下标依次提前一个
                    }
                    array[x]=c;
                    break;
                }
            }
        }
    }
    printf("This is the ascending sorted list\n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    printf("The %dth number is %d\n",k,array[k-1]);
    return 1;
}

void bubbleAscendSort(int array[],int n){
    int swap;
    for(int i=0;i<n;i++){
        for(int x=i;x<n-1;x++){
            if(array[x]>array[x+1]){
                swap = array[x];
                array[x]=array[x+1];
                array[x+1]=swap;
            }
        }
    }
}

