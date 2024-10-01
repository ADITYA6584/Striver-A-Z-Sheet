//This is a most asked question in intervied
//Required to solve in Binary Search

/*
//Best Approach
Approach -> 1 Time Complexity is O(logN)
1. find the pivot vlaue in a array i.e arr[mid]>=arr[0];
2. Then apply the binary search in two half.
3. Return the ans if found and if not return -1

*/
int pivot(vector <int> v)
{
    int s =0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(v[mid]>v[0])
        {
            s = mid+1;
        }
        else if(v[mid]<v[0])
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int BinarySearch(vector <int>v ,int start,int end,int target)
{
    int ans = -1;
    int s =start;
    int e = end;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(v[mid]==target)
        {
            ans = mid;
            return ans;
        }
        else if(v[mid]>target)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    // Write C++ code here
    vector <int> v = {7,8,9,1,2,3,4,5,6};
    int target,ans =-1;
    cout<<"entre your target ";
    cin>>target;
    int end = v.size()-1;
    int dif = pivot(v);
    int left =BinarySearch(v,0,dif-1,target);         //Left
    int right = BinarySearch(v,dif,end,target);
    if(left==-1 && right ==-1) 
    {
        cout<<-1<<endl;
        return -1;
    }
    else if(left==-1) 
    {
        cout<<right<<endl;
        return right;
    }
    else if(right==-1) 
    {
        cout<<left<<endl;
        return left;
    }
    return 0;
}

cout<<"***************************************************"<<endl;

class Solution {
    int pivot(vector <int> num)
{
   int start =0;
   int end = num.size()-1;
   int mid = start +(end-start)/2;
   while(start<end)
   {
    if(num[mid]>=num[0])
    {
        start=mid+1;
    }
    else
    {
        end = mid;
    }
    mid = start +(end-start)/2;
   } 
   return end;
}
int binarySearch(int s,int e,int target,vector <int> nums)
{
   int mid = s +(e-s)/2;
   int ans =-1;
   while (s<=e)
   {
    if(nums[mid] ==target)
    {
        int ans = mid;
        return ans;
    }
    else if(nums[mid]<target)
    {
        s = mid+1;
    }
    else if(nums[mid]>target)
    {
        e = mid-1;
    }
    mid = s +(e-s)/2;
   }
   return ans;
}
public:
    int search(vector<int>& nums, int target) {
    int check = pivot(nums);
    int p = nums.size()-1;
    if(target>=nums[check] && target <=nums[p])
    {
        int ans = binarySearch(check,p,target,nums);
        return ans;
    }
    else
    {
        int ans2 = binarySearch(0,check-1,target,nums);
        return ans2;
    }
    return 0;
    }
};