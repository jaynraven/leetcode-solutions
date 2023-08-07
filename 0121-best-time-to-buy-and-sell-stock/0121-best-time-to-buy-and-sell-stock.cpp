class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int lowest = prices[0];
        int earn_today = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < lowest)
            {
                lowest = prices[i];
            }
            else
            {
                if (prices[i] - lowest > earn_today)
                {
                    earn_today = prices[i] - lowest;
                }
            }
        }
        return earn_today;
    }
};