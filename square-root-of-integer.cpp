int Solution::sqrt(int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(a == 0)
        return 0;
    if( a < 4)
        return 1;
    long long int low = 0, high = a,ans,mid;
    while(low <= high)
    {
        mid = ((low+high)/2);
        if(mid*mid == a)
            return mid;
        else if(mid*mid < a)
        {
            low = mid+1;
            ans = mid;
        }
        else
            high = mid-1;
            
    }
    return ans;
    
}
