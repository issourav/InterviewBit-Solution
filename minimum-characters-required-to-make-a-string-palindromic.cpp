int Solution::solve(string A) {

    int n = A.length(),i,j;
    int k = n;
    for(i = 0; i < A.length()-1; i++)
    {
        k = n-i;
        for(j = 0 ; j < k/2; j++)
            if(A[j] != A[k-j-1])
                break;
        if(j == k/2 )
            break;
            
    }
    return i;
}


