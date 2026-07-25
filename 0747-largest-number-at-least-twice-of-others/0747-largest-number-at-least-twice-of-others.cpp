class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();

        int maxi = max_element(nums.begin(), nums.end()) - nums.begin();
        int second = -1;

        for (int i = 0; i < n; i++) {

            if (i == maxi)
                continue;

            if (second == -1 || nums[i] > nums[second]) {
                second = i;
            }
        }

        if (nums[maxi] >= 2 * nums[second])
            return maxi;

        return -1;
    }
};