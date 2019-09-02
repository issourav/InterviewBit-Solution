int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> v = A;
    sort(v.begin(),v.end());
    for(int i = 0; i < n-1; i++ )
    {
        if(v[i] != v[i+1] )
        {
            if((n-i-1) == v[i])
            {
               return 1;
            }
        }
    }
        if(v[n-1] == 0)
               return 1;
    return -1;
}

