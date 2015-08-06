int MaxSubSum(const int A[],int N){
    int thisSum,maxSum;
    thisSum = maxSum = 0;
    for(int i=0;i<N;i++){
        thisSum +=A[i];
        if(thisSum > maxSum)
            maxSum = thisSum;
        else if(thisSum <0)
            thisSum = 0;
    }
    return maxSum;
}
int MinSubSum(const int A[],int N){
    int thisSum,minSum;
    thisSum = minSum = 0;
    for(int i=0;i<N;i++){
        thisSum +=A[i];
        if(thisSum < minSum)
            minSum = thisSum;
        else if(thisSum >0)
            thisSum = 0;
    }
    return minSum;
}
