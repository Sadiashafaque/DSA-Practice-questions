int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0,j=0,k=0;int ans = INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size())
    {
        int minm = min(min(A[i],B[j]),C[k]);
        int maxm = max(max(A[i],B[j]),C[k]);
        ans = min(ans, abs(minm - maxm));
        if(ans == 0) break;
        if(A[i] == minm) i++;
        else if(B[j] == minm) j++;
        else k++;
    }
    return ans;
}
