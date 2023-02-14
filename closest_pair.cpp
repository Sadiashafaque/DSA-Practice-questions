/*Given two sorted arrays of distinct integers, A and B, and an integer C, find and return the pair whose sum is closest to C and the pair has one element from each array.

More formally, find A[i] and B[j] such that abs((A[i] + B[j]) - C) has minimum value.

If there are multiple solutions find the one with minimum i and even if there are multiple values of j for the same i then return the one with minimum j.

Return an array with two elements {A[i], B[j]}.
*/

vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int n = B.size(),m=A.size();
    vector<int>ans(2,-1);
    int closestsum = INT_MAX;
    int i = 0, j = n-1;
    while(i<m && j>=0)
    {
        int sum = A[i] + B[j];
        if(abs(sum-C) < abs(closestsum-C) || (abs(sum-C) == abs(closestsum-C) && i == ans[0] && j<ans[1]))
        {
            //cout<<"j";
            closestsum = sum;
            ans[0] = i;
            ans[1] = j;
        }
        if(sum>C)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    ans[0] = A[ans[0]];
    ans[1] = B[ans[1]];

    return ans;

}
