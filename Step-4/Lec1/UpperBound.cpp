//This is a tricky question
// Practice it -> Its a simple but tricky

int upperBound(vector<int> &num, int target, int n) {
    // Using Binary Search
        int start = 0;
        int end = num.size() - 1;
        int mid;
        int ans= n;
        while (start <= end) 
        {
            mid = start + (end - start) / 2;  

            if (num[mid] > target) 
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
