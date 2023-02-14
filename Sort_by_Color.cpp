vector<int> Solution::sortColors(vector<int> &A) {
int i=0,j=0,k=A.size()-1;
        while(i<A.size())
        {
            if(A[i] == 0)
            {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
                j++;
                i++;
            }
            else if(A[i] == 2 && i<=k)
            {
                int t = A[i];
                A[i] = A[k];
                A[k] = t;
                k--;
            }
            else i++;
        }

    return A;
}
