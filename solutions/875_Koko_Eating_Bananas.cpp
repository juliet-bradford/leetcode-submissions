class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int lower = 1, upper = 0, mid, solution;
        for (uint i = 0; i < piles.size(); ++i) {
            if (piles[i] > upper) 
                upper = piles[i]; 
        }
        solution = upper;

        while (lower <= upper) {
            mid = lower + (upper - lower) / 2;
            uint mid_h = 0;
            for (uint i = 0; i < piles.size(); ++i) {
                mid_h += piles[i] / mid;
                if (piles[i] % mid != 0) mid_h++;
            }


            if (mid_h <= h && mid < solution) solution = mid;
            
            if (mid_h <= h) upper = mid - 1;
            else lower = mid + 1;
        }

        return solution;
    }
};
