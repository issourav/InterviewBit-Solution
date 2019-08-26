vector<int> Solution::solve(vector<int> &A) {
    vector <int> v = A;
    int n = A.size();
    for(int i = 1; i < n-1; i++ )
    {
        v[i] = A[i-1]*A[i+1];
    }
    v[0]=A[1]*A[0];
    v[n-1]=A[n-1]*A[n-2];
    return v;
}
