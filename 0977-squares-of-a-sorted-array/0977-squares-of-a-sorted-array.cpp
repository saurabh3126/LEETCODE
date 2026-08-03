class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n= nums.size();
        int left=0;
        int right=n-1;
      vector<int>ans(n);
      int k=n-1;
        while(left<=right){
        int rights=nums[right]*nums[right];
        int lefts=nums[left]*nums[left];
            if(lefts < rights){
                ans[k]=rights;
                k--;
                right--;
            }
            else if(lefts > rights){
                ans[k]=lefts;
                k--;
                left++;
            }
            else{
                if (lefts > rights) {
                 ans[k] = lefts;
                left++;
                } 
                else {
                ans[k] = rights;
                right--;
                    }
                k--;
            }
        }
    return ans;
    }
};