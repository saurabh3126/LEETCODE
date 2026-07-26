class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int head=-1;
        int tail=0;

        int ans= 0;

        int n= nums.size();
        int zeroCount=0;

        while(tail<n){
            while(head+1<n && ( zeroCount + (1-nums[head+1])) <= k ){
                head=head+1;
                zeroCount += 1-nums[head];
            }
            ans=max(ans, head-tail+1);

            if(head<tail){
                tail++;
                head=tail-1;
            }
            else if(tail<=head){
                if(nums[tail]==0)zeroCount--;
                tail++;
            }
        }
        return ans;
    }
};