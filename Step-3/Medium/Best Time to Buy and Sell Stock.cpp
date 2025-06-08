//Leetcode question
// Leetcode 121 Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    if (prices.empty() ==true)
    { 
    return 0;
    }
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < prices.size(); ++i) 
    {
        
        if (prices[i] < minPrice) 
        {
            minPrice = prices[i];
        }
        int profit = prices[i] - minPrice;
        
        if (profit > maxProfit) 
        {
            maxProfit = profit;
        }
    }
    
    return maxProfit;
}
};


//One more way

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }
        //Setting min at the first element
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for (int i = 1; i < prices.size(); ++i) {
            
            //making sure that mini get updated
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        
        return maxProfit;
    }
};