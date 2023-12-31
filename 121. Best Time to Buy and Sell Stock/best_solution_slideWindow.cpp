class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int l = 0;
        int r = 1;
        int maxP = 0;
        int profit;

        while(r < prices.size())
        {
            if(prices[l] < prices[r])
            {
                profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            }
            else
                l = r;
            r+=1;
        }
        return maxP;
    }
};