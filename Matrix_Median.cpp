int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int total_ele = n*m;
    int desired = (total_ele+1)/2;
    //find min and max
    int min = INT_MAX, max = 0;
    for(int i = 0;i<n;i++)
    {
        if(A[i][0] < min) 
            min = A[i][0];     
    }
    for(int i = 0;i<n;i++)
    {
        if(A[i][m-1] > max) 
            max = A[i][m-1];     
    }

    //range is from min to max
    int low = min, high = max;
    int ans = -1;
    int number_less_equal;
    while(low <= high)
    {
        int mid = (low+high)/2;
        //search no of elements in matrix <=mid
        number_less_equal=0;
        for(int i =0;i<n;i++)
        {
            number_less_equal = number_less_equal + (upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin());
        }
        if(number_less_equal <  desired)
        {
            //move right
            low = mid+1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
