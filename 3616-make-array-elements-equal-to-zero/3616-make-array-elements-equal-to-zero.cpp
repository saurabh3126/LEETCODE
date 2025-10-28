class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        int curr = 0;
        int s = 0;
        for (int i = 0; i < nums.size(); i++) {
             s += nums[i]; 
        }

        for(int i = 0 ; i < n ; i++){
            curr += nums[i] ;

            int left = curr ;
            int right = s - left ;

            if(nums[i] != 0){
                continue;
            }


            if ( right == left){
                result += 2;
            }

            if (abs(left - right) == 1){
                result +=1;
            }

        }
        return result;

    }
};