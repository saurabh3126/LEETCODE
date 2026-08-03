class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int head=-1;
        int tail=0;
        int ans=INT_MAX;
        int sum=0;
        while(tail<n){
            while(head+1<n && sum<target){
                head=head+1;
                sum+=nums[head];
            }
            if(sum>=target) {
                ans=min(ans,head-tail+1);
            }
            if(tail>head){
                tail++;
                head=tail-1;
            }
            else if (tail<=head){
                   sum-=nums[tail];
                    tail++;
            }
            
        }
        if (ans == INT_MAX)
    return 0;

        return ans;
    }
};