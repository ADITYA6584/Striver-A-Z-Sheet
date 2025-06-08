//Leetcode question
// Leetcode 31 Next Permutation

/*
This is a very tricky problem
and it need to be practiced a lot
to understand the logic behind it.
Or 
u can learn the logic from the video
*/

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find first decrease
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find next greater and swap
        int j = n - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the right side
    reverse(nums.begin() + i + 1, nums.end());
}


//Same approach 

void nextPermutation(vector<int>& nums){
        int n = nums.size();
        
        // Traverse from the last
        for(int i = n-1; i>0; i--) {
            if(nums[i] > nums[i-1]) {
                break;
            }
        }
        //Main logic
        if(i != 0) {
            int index = i;
            for(int j = n-1; j>=i; j--) {
                if(nums[j] > nums[i-1]) {
                    index = j;
                    break;
                }
            }
            //swap it 
            swap(nums[i-1], nums[index]);
        }
        // then swap the right side 
        reverse(nums.begin()+i, nums.end());
    }