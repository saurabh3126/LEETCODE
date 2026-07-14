class Solution {
public:
    int findIndex(vector<int>& nums, int target, bool isFirst) {
        int l = 0;
        int h = nums.size() - 1;
        int res = -1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target) {
                res = mid;

                if (isFirst)
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }

        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        ans.push_back(findIndex(nums, target, true));
        ans.push_back(findIndex(nums, target, false));

        return ans;
    }
};