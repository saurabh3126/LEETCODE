class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxx=nums[0], mini=nums[0];
        vector<int>ans;
            for(int x: nums){
                mp[x]++;
               maxx=max(maxx,x);
               mini=min(mini,x);
            }
            for(int i=mini+1;i<maxx;i++){
                if(mp.find(i)==mp.end()){
                    ans.push_back(i);
                }
            }
            return ans;
        }
};