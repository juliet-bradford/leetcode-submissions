class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int solution = 0;
        uint i = 0, j = height.size() - 1;
        while (i < j) {
            if ((j - i) * min(height[i],height[j]) > solution)
                solution = (j - i) * min(height[i],height[j]);
            
            if (height[i] < height[j]) ++i;
            else --j;
        }

        return solution;
    }
};
