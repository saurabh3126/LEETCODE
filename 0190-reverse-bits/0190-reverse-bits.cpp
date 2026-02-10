class Solution {
public:
    int reverseBits(int n) {
        int current =0;
        int result = 0;
        while(n>0){
            if(n&1){
                result|=(1<<(31-current));

            }
            current++;
            n>>=1;
        }
        return result;
    }
};