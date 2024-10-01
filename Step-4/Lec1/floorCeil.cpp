//Coding Ninjas Question

//For floor --> Lower bound
//For ceil --> smallest of array >=target

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findFloorCeiling(vector<int>& arr, int n, int x) {
    int floor = -1, ceiling = -1;
    int low = 0, high = n - 1;
    
    // Finding the floor
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) 
        {
            floor = arr[mid]; 
            low = mid + 1;    
        } 
        else 
        {
            high = mid - 1;   
        }
    }
    
    // Reset low and high for ceiling search
    low = 0;
    high = n - 1;
    
    // Finding the ceiling
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
    
        if (arr[mid] > x) 
        {
            ceiling = arr[mid]; // Update ceiling
            high = mid - 1;     
        } 
        else 
        {
            low = mid + 1;      
        }
    }
    
    return {floor, ceiling};
}

// Approach->2
// Short and simply combined
pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	// Write your code here.
	int floor = -1, ceiling = -1;
    int low = 0, high = n - 1;
    
    // Finding the floor
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) 
        {
            floor = arr[mid]; 
            low = mid + 1;    
        } 
        if (arr[mid] >= x) 
        {
            ceiling = arr[mid]; // Update ceiling
            high = mid - 1;     
        }
    }
    
    return {floor, ceiling};
}