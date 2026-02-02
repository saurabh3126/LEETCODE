class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sums =0 ;
       
          for( int i =0 ; i<n;i++){
              sums += nums[i];
          }
          return sums%k;
    }
};