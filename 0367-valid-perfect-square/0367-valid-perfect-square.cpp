class Solution {
public:
    bool isPerfectSquare(int num) {
        int start =0;
        int end = num;
        while(start<=end){
            int mid =start + (end - start)/2;
            if((long long )mid*mid>num){
                end = mid- 1;

            }
            else if( num > mid*mid){
                start = mid +1;
            }
            else{
                return true;
            }
            
        }
        return false;
    }
};