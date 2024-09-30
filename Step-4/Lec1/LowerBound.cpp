//This is important as well as it will help  in different problem

int lowerBound(vector<int> num, int n, int target) 
{
	// Using Binary Search
        int start = 0;
        int end = num.size() - 1;
        int mid;

        while (start <= end) 
        {
            mid = start + (end - start) / 2;  

            if (num[mid] < target) 
            {
                start = mid + 1;  
            } 
            else 
            {
                end = mid - 1;  
            }
        }

        //This is a lower bound
        return start;
}
