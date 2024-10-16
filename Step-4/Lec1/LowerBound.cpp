//This is important as well as it will help  in different problem

int lowerBound(vector<int> num, int n, int target) 
{
	// Using Binary Search
        int start = 0;
        int end = num.size() - 1;
        int mid;
        int ans= n;
        while (start <= end) 
        {
            mid = start + (end - start) / 2;  

            if (num[mid] >= target)     //This is the difference
            {
                ans = mid;
                end = mid - 1; 
                 
            } 
            else 
            {
                start = mid + 1; 
            }
        }

        //This is a lower bound
        return ans;
}
