class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
         int mx=0;
        int ans=0;
       
        for(int i =0;i<nums.size();i++){
               mp[nums[i]]++;  
            if(mp[nums[i]] > mx){
                mx = mp[nums[i]];
                ans = mx;        
            }
            else if(mp[nums[i]] == mx){
                ans += mx;       
            }

        }
        return ans;
    }
};