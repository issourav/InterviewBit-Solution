int Solution::solve(string s) {
    int n = s.length(),sum=0;;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            int r = n - i ;
            sum+=r;
        }
    }
    return sum%10003;
}
