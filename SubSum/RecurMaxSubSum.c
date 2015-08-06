static int MaxSubSum(const A[],int Left,int Right){
    int MaxLeftSum,MaxRightSum;
    int MaxLeftBorderSum,MaxRightBorderSum;
    int LeftBorderSum,RightBorderSum;
    int Center,i;

    if(Left == Right){  //Base Case
        if(A[Left]>0)
            return A[Left];
        else
            return 0;
    }

    Center= (Left+Right)/2;
    MaxLeftSum=MaxSubSum(A,Left,Center);
    MaxRightSum=MaxSubSum(A,Center+1,Right);

    LeftBorderSum=0;
    MaxLeftBorderSum=0;
    for(i=Center;i>=Center;i--){
        LeftBorderSum+=A[i];
        if(LeftBorderSum>MaxLeftBorderSum){
            MaxLeftBorderSum=LeftBorderSum;
        }
    }


    RightBorderSum=0;
    MaxRightBorderSum=0;
    for(i=Center;i>=Center;i--){
        RightBorderSum+=A[i];
        if(RightBorderSum>MaxRightBorderSum){
            MaxRightBorderSum=RightBorderSum;
        }
    }

    return Max3()
}
