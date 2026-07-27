class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            for(int j= i+1;j <nums.size();j++){
                if(nums.size()>=2){
                    int m;
                   m= (nums[i]-1)*(nums[j]-1); 
                maxi=max(maxi,m);
                }
            }
        }
        return maxi;
    }
};