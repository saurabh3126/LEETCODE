class Solution {
public:
    
    int findPeakElement(vector<int>& nums) {
        int n =nums.size();
        int a;
        // int res;
        for(int i =0; i<n ; i++){
            a =max_element(nums.begin(),nums.end())- nums.begin();
            //  res = nums[a];
        }
    return a;
    }
};