class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if (prices.size() == 1) return 0;        

        int solution = 0, lowest = prices[0], highest = prices[0];
        for (uint i = 0; i < prices.size(); ++i) {
            if (prices[i] < lowest) {
                lowest = prices[i];
                highest = 0;
                continue;
            }
            if (prices[i] > highest)
                highest = prices[i];
            if (solution < highest - lowest) solution = highest - lowest;
        }

        return solution;
    }
};
